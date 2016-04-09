#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamicsL27DART_DEFAULT_FRICTION_COEFFE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::scope().attr("DART_DEFAULT_FRICTION_COEFF") = dart::dynamics::DART_DEFAULT_FRICTION_COEFF;
}

/* footer */
