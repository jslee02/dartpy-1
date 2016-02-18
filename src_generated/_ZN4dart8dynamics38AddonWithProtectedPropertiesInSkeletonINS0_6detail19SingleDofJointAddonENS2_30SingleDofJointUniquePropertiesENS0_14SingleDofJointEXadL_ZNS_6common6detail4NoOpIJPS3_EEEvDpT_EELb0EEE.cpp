#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19SingleDofJointAddonENS2_30SingleDofJointUniquePropertiesENS0_14SingleDofJointEXadL_ZNS_6common6detail4NoOpIJPS3_EEEvDpT_EELb0EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>, ::boost::noncopyable, ::boost::python::bases<dart::common::Addon > >("_ZN4dart8dynamics38AddonWithProtectedPropertiesInSkeletonINS0_6detail19SingleDofJointAddonENS2_30SingleDofJointUniquePropertiesENS0_14SingleDofJointEXadL_ZNS_6common6detail4NoOpIJPS3_EEEvDpT_EELb0EEE", boost::python::no_init)
.def(::boost::python::init<dart::common::AddonManager *, const dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::PropertiesData &>((::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("cloneAddon", static_cast<std::unique_ptr<dart::common::Addon> (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::*)(dart::common::AddonManager *) const>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::cloneAddon), (::boost::python::arg("newManager")))
.def("setAddonProperties", static_cast<void (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::*)(const dart::common::Addon::Properties &)>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::setAddonProperties), (::boost::python::arg("someProperties")))
.def("setProperties", static_cast<void (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::*)(const dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::PropertiesData &)>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::setProperties), (::boost::python::arg("properties")))
.def("isOptional", static_cast<bool (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::*)(dart::common::AddonManager *)>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::isOptional), (::boost::python::arg("oldManager")))
.def("getSkeleton", static_cast<dart::dynamics::SkeletonPtr (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::*)()>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::getSkeleton))
.def("incrementSkeletonVersion", static_cast<void (dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::*)()>(&dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::incrementSkeletonVersion))
.add_static_property("Optional", ::boost::python::make_getter(dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::Optional))
;
}

/* footer */
