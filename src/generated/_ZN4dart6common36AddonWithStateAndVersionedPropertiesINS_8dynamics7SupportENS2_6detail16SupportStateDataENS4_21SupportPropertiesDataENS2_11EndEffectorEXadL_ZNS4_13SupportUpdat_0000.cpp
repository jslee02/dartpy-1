#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart6common36AddonWithStateAndVersionedPropertiesINS_8dynamics7SupportENS2_6detail16SupportStateDataENS4_21SupportPropertiesDataENS2_11EndEffectorEXadL_ZNS4_13SupportUpdateEPS3_EEXadL_ZNS4_13SupportUpdateES8_EEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>, ::boost::noncopyable, ::boost::python::bases<dart::common::detail::AddonWithVersionedProperties<dart::common::detail::AddonWithState<dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate>, dart::dynamics::Support, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate> > >("_ZN4dart6common36AddonWithStateAndVersionedPropertiesINS_8dynamics7SupportENS2_6detail16SupportStateDataENS4_21SupportPropertiesDataENS2_11EndEffectorEXadL_ZNS4_13SupportUpdateEPS3_EEXadL_ZNS4_13SupportUpdateES8_EEEE", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr) -> dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate> * { return new dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>(mgr); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::StateData & state) -> dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate> * { return new dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>(mgr, state); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("state"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::StateData & state, const dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::PropertiesData & properties) -> dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate> * { return new dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>(mgr, state, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("state"), ::boost::python::arg("properties"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::PropertiesData & properties) -> dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate> * { return new dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>(mgr, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::PropertiesData & properties, const dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::StateData & state) -> dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate> * { return new dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>(mgr, properties, state); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("properties"), ::boost::python::arg("state"))))
;
}

/* footer */
