#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail18RevoluteJointAddonENS2_29RevoluteJointUniquePropertiesENS0_13RevoluteJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE()
{
::boost::python::class_<dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>, ::boost::noncopyable, ::boost::python::bases<dart::common::Addon > >("_ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail18RevoluteJointAddonENS2_29RevoluteJointUniquePropertiesENS0_13RevoluteJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE", boost::python::no_init)
.def(::boost::python::init<dart::common::AddonManager *, const dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::PropertiesData &>((::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("cloneAddon", static_cast<std::unique_ptr<dart::common::Addon> (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::*)(dart::common::AddonManager *) const>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::cloneAddon), (::boost::python::arg("newManager")))
.def("setAddonProperties", static_cast<void (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::*)(const dart::common::Addon::Properties &)>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::setAddonProperties), (::boost::python::arg("someProperties")))
.def("setProperties", static_cast<void (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::*)(const dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::PropertiesData &)>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::setProperties), (::boost::python::arg("properties")))
.def("isOptional", static_cast<bool (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::*)(dart::common::AddonManager *)>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::isOptional), (::boost::python::arg("oldManager")))
.def("getSkeleton", static_cast<dart::dynamics::SkeletonPtr (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::*)()>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::getSkeleton))
.def("getSkeleton", static_cast<dart::dynamics::ConstSkeletonPtr (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::*)() const>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::getSkeleton))
.def("incrementSkeletonVersion", static_cast<void (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::*)()>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::incrementSkeletonVersion))
.add_static_property("Optional", ::boost::python::make_getter(dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::Optional))
;
}

/* footer */
