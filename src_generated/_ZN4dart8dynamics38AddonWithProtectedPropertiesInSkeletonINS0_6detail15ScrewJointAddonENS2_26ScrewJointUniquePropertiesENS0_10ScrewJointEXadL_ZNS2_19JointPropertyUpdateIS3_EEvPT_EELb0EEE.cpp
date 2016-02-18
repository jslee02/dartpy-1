#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail15ScrewJointAddonENS2_26ScrewJointUniquePropertiesENS0_10ScrewJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>, ::boost::noncopyable, ::boost::python::bases<dart::common::Addon > >("_ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail15ScrewJointAddonENS2_26ScrewJointUniquePropertiesENS0_10ScrewJointEXadL_ZNS2_19JointPropertyUpdateIS3_EEvPT_EELb0EEE", boost::python::no_init)
.def(::boost::python::init<dart::common::AddonManager *, const dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::PropertiesData &>((::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("cloneAddon", static_cast<std::unique_ptr<dart::common::Addon> (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::*)(dart::common::AddonManager *) const>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::cloneAddon), (::boost::python::arg("newManager")))
.def("setAddonProperties", static_cast<void (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::*)(const dart::common::Addon::Properties &)>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::setAddonProperties), (::boost::python::arg("someProperties")))
.def("setProperties", static_cast<void (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::*)(const dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::PropertiesData &)>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::setProperties), (::boost::python::arg("properties")))
.def("isOptional", static_cast<bool (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::*)(dart::common::AddonManager *)>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::isOptional), (::boost::python::arg("oldManager")))
.def("getSkeleton", static_cast<dart::dynamics::SkeletonPtr (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::*)()>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::getSkeleton))
.def("incrementSkeletonVersion", static_cast<void (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::*)()>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::incrementSkeletonVersion))
.add_static_property("Optional", ::boost::python::make_getter(dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::Optional))
;
}

/* footer */
