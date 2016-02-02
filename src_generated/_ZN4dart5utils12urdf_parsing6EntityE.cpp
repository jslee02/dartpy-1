#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils12urdf_parsing6EntityE()
{
::boost::python::class_<dart::utils::urdf_parsing::Entity >("Entity", boost::python::no_init)
.def(::boost::python::init<>())
.def(::boost::python::init<const urdf::Entity &>((::boost::python::arg("urdfEntity"))))
.def_readwrite("model", &dart::utils::urdf_parsing::Entity::model)
.def_readwrite("origin", &dart::utils::urdf_parsing::Entity::origin)
.def_readwrite("twist", &dart::utils::urdf_parsing::Entity::twist)
.def_readwrite("uri", &dart::utils::urdf_parsing::Entity::uri)
;
}

/* footer */
