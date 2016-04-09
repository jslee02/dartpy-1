#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common11make_uniqueINS_8dynamics11VisualAddonEJRPNS0_12AddonManagerERKNS0_15ExtensibleMixerINS0_5Addon10PropertiesENS2_6detail21VisualAddonPropertiesEEEEEESt10unique_ptrIT_St14default_deleteISG_EEDpOT0_()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("make_unique", [](dart::common::AddonManager *& _arg0_, const dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::VisualAddonProperties> & _arg1_) -> std::unique_ptr<dart::dynamics::VisualAddon> { return dart::common::make_unique<dart::dynamics::VisualAddon, dart::common::AddonManager *&, const dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::VisualAddonProperties> &>(_arg0_, _arg1_); }, (::boost::python::arg("_arg0_"), ::boost::python::arg("_arg1_")));

}

/* footer */
