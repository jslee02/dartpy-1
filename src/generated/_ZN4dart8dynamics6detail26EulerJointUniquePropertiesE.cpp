#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail26EulerJointUniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::EulerJointUniqueProperties >("EulerJointUniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::EulerJointUniqueProperties * { return new dart::dynamics::detail::EulerJointUniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::detail::AxisOrder _axisOrder) -> dart::dynamics::detail::EulerJointUniqueProperties * { return new dart::dynamics::detail::EulerJointUniqueProperties(_axisOrder); }, ::boost::python::default_call_policies(), (::boost::python::arg("_axisOrder"))))
.def_readwrite("mAxisOrder", &dart::dynamics::detail::EulerJointUniqueProperties::mAxisOrder)
;
}

/* footer */
