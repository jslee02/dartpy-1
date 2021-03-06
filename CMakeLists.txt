cmake_minimum_required(VERSION 2.8)
project(dartpy)

if(NOT DARTPY_PYTHON_VERSION)
  set(DARTPY_PYTHON_VERSION 3.4 CACHE STRING "Choose the target Python version (e.g., 3.4, 2.7)" FORCE)
endif()

# TODO: This should be set by DART.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wno-deprecated -Wno-deprecated-declarations")

find_package(PythonInterp ${DARTPY_PYTHON_VERSION} REQUIRED)
execute_process(COMMAND ${PYTHON_EXECUTABLE} -c
  "from distutils.sysconfig import get_python_lib;\
  print(get_python_lib(plat_specific=True, prefix=''))"
  OUTPUT_VARIABLE PYTHON_SITE_PACKAGES
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

# Find boost with python components. The name of python component varies
# depending on the platform, boost version, and python version.
if(APPLE)
  find_package(Boost REQUIRED
    COMPONENTS
      python${PYTHON_VERSION_MAJOR}${PYTHON_VERSION_MINOR} thread
  )
else() # LINUX assumed
  if(${PYTHON_VERSION_MAJOR} EQUAL 3)
    find_package(Boost
      COMPONENTS
        python-py${PYTHON_VERSION_MAJOR}${PYTHON_VERSION_MINOR} thread
    )
    if(NOT Boost_FOUND)
      find_package(Boost REQUIRED COMPONENTS python3 thread)
    endif()
  else() # Python 2 assumed
    find_package(Boost REQUIRED COMPONENTS python thread)
  endif()
endif()

find_package(DART 6.3.0 REQUIRED
  COMPONENTS
    collision-bullet
    # collision-ode
    optimizer-nlopt
    planning
    utils-urdf
    gui-osg
  CONFIG
)

find_package(PythonLibs ${DARTPY_PYTHON_VERSION} REQUIRED)
find_package(chimera QUIET)

include_directories(SYSTEM
  ${Boost_INCLUDE_DIRS}
  ${DART_INCLUDE_DIRS}
  ${PYTHON_INCLUDE_DIRS}
)

# Check whether the CXX compiler and boost::python support get_pointer for
# std::shared_ptr<T> references.
include(CheckCXXSourceCompiles)
set(CMAKE_REQUIRED_INCLUDES
  ${Boost_INCLUDE_DIRS}
  ${PYTHON_INCLUDE_DIRS}
)
set(CMAKE_REQUIRED_LIBRARIES
  ${Boost_LIBRARIES}
  ${PYTHON_LIBRARIES}
)
check_cxx_source_compiles(
  "
  #include <memory>
  #include <boost/python.hpp>
  int main() { std::shared_ptr<int> ptr; int *p = boost::get_pointer(ptr); }
  "
  DARTPY_HAS_STD_SHARED_GET_POINTER
)

unset(CMAKE_REQUIRED_INCLUDES)
unset(CMAKE_REQUIRED_LIBRARIES)

# Generate a header file for the DARTPY_HAS_STD_SHARED_GET_POINTER flag.
configure_file("cmake/config.h.in"
  "include/dartpy/config.h"
)

include_directories(
  "include"
  "${CMAKE_CURRENT_BINARY_DIR}/include"
)

# If chimera is available on this system, create a target to build bindings.
if(chimera_FOUND)
  add_chimera_binding(TARGET "${PROJECT_NAME}_CHIMERA"
    MODULE "${PROJECT_NAME}"
    CONFIGURATION "${CMAKE_CURRENT_SOURCE_DIR}/chimera/chimera.yml"
    SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/chimera/chimera.cpp"
    DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/src/generated"
    DEBUG EXCLUDE_FROM_ALL
  )
  target_link_libraries("${PROJECT_NAME}_CHIMERA"
    ${Boost_LIBRARIES}
    ${DART_LIBRARIES}
    ${PYTHON_LIBRARIES}
  )
  add_custom_target(binding DEPENDS "${PROJECT_NAME}_CHIMERA_REBUILD")
else()
  add_custom_target(binding
    COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --red "ERROR: Cannot generate bindings without \\'chimera\\' installed."
    COMMAND false
  )
endif()

# Create a target to build generated bindings.
set(SOURCES_TXT "${CMAKE_CURRENT_SOURCE_DIR}/src/generated/sources.txt")
if(EXISTS "${SOURCES_TXT}")
  file(STRINGS "${SOURCES_TXT}" SOURCES_GENERATED_RELATIVE NO_HEX_CONVERSION)

  set(SOURCES_GENERATED)
  foreach(relative_path ${SOURCES_GENERATED_RELATIVE})
    list(APPEND SOURCES_GENERATED "${CMAKE_CURRENT_SOURCE_DIR}/src/generated/${relative_path}")
  endforeach()

  add_library("${PROJECT_NAME}" MODULE
    ${SOURCES_GENERATED}
    src/BodyNode.cpp
    src/Skeleton.cpp
    src/skel_parser.cpp
    src/template_registry.cpp
  )
  target_link_libraries("${PROJECT_NAME}"
    ${Boost_LIBRARIES}
    ${DART_LIBRARIES}
    ${PYTHON_LIBRARIES}
  )
  set_target_properties("${PROJECT_NAME}" PROPERTIES
    PREFIX ""
    SUFFIX ".so"  # python uses '.so' extension even on macOS
  )
  if(CMAKE_COMPILER_IS_GNUCXX)
    target_compile_options("${PROJECT_NAME}"
      PRIVATE -fabi-version=6
    )
  endif()

  install(TARGETS "${PROJECT_NAME}"
    LIBRARY DESTINATION "${PYTHON_SITE_PACKAGES}"
  )
else()
  add_custom_target(${PROJECT_NAME} ALL
    COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --red "ERROR: Generate bindings using \\'make binding\\' before attempting to build."
    COMMAND false
  )
endif()

add_subdirectory(tests)
