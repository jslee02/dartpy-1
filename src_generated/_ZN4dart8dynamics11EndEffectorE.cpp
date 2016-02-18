#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics11EndEffectorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::EndEffector, ::boost::noncopyable, dart::dynamics::EndEffector *, ::boost::python::bases<dart::common::SpecializedAddonManager<dart::dynamics::Support>, dart::dynamics::FixedFrame, dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>, dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> > >("EndEffector", boost::python::no_init)
.def("setState", static_cast<void (dart::dynamics::EndEffector::*)(const dart::dynamics::EndEffector::StateData &)>(&dart::dynamics::EndEffector::setState), (::boost::python::arg("_state")))
.def("getEndEffectorState", static_cast<dart::dynamics::EndEffector::StateData (dart::dynamics::EndEffector::*)() const>(&dart::dynamics::EndEffector::getEndEffectorState))
.def("setProperties", static_cast<void (dart::dynamics::EndEffector::*)(const dart::dynamics::EndEffector::PropertiesData &, bool)>(&dart::dynamics::EndEffector::setProperties), (::boost::python::arg("_properties"), ::boost::python::arg("_useNow")))
.def("setProperties", static_cast<void (dart::dynamics::EndEffector::*)(const dart::dynamics::EndEffector::UniqueProperties &, bool)>(&dart::dynamics::EndEffector::setProperties), (::boost::python::arg("_properties"), ::boost::python::arg("_useNow")))
.def("getEndEffectorProperties", static_cast<dart::dynamics::EndEffector::PropertiesData (dart::dynamics::EndEffector::*)() const>(&dart::dynamics::EndEffector::getEndEffectorProperties))
.def("copy", static_cast<void (dart::dynamics::EndEffector::*)(const dart::dynamics::EndEffector &)>(&dart::dynamics::EndEffector::copy), (::boost::python::arg("_otherEndEffector")))
.def("copy", static_cast<void (dart::dynamics::EndEffector::*)(const dart::dynamics::EndEffector *)>(&dart::dynamics::EndEffector::copy), (::boost::python::arg("_otherEndEffector")))
.def("setName", static_cast<const std::string &(dart::dynamics::EndEffector::*)(const std::string &)>(&dart::dynamics::EndEffector::setName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_name")))
.def("setNodeState", static_cast<void (dart::dynamics::EndEffector::*)(const dart::dynamics::Node::State &)>(&dart::dynamics::EndEffector::setNodeState), (::boost::python::arg("otherState")))
.def("getNodeState", static_cast<std::unique_ptr<dart::dynamics::Node::State> (dart::dynamics::EndEffector::*)() const>(&dart::dynamics::EndEffector::getNodeState))
.def("setNodeProperties", static_cast<void (dart::dynamics::EndEffector::*)(const dart::dynamics::Node::Properties &)>(&dart::dynamics::EndEffector::setNodeProperties), (::boost::python::arg("otherProperties")))
.def("getNodeProperties", static_cast<std::unique_ptr<dart::dynamics::Node::Properties> (dart::dynamics::EndEffector::*)() const>(&dart::dynamics::EndEffector::getNodeProperties))
.def("setRelativeTransform", static_cast<void (dart::dynamics::EndEffector::*)(const Eigen::Isometry3d &)>(&dart::dynamics::EndEffector::setRelativeTransform), (::boost::python::arg("_newRelativeTf")))
.def("setDefaultRelativeTransform", static_cast<void (dart::dynamics::EndEffector::*)(const Eigen::Isometry3d &, bool)>(&dart::dynamics::EndEffector::setDefaultRelativeTransform), (::boost::python::arg("_newDefaultTf"), ::boost::python::arg("_useNow")))
.def("resetRelativeTransform", static_cast<void (dart::dynamics::EndEffector::*)()>(&dart::dynamics::EndEffector::resetRelativeTransform))
.def("hasSupport", static_cast<bool (dart::dynamics::EndEffector::*)() const>(&dart::dynamics::EndEffector::hasSupport))
.def("getSupport", static_cast<dart::dynamics::Support *(dart::dynamics::EndEffector::*)()>(&dart::dynamics::EndEffector::getSupport), ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("setSupport", static_cast<void (dart::dynamics::EndEffector::*)(const dart::dynamics::Support *)>(&dart::dynamics::EndEffector::setSupport), (::boost::python::arg("addon")))
.def("eraseSupport", static_cast<void (dart::dynamics::EndEffector::*)()>(&dart::dynamics::EndEffector::eraseSupport))
.def("releaseSupport", static_cast<std::unique_ptr<dart::dynamics::Support> (dart::dynamics::EndEffector::*)()>(&dart::dynamics::EndEffector::releaseSupport))
.def("getSupport", static_cast<dart::dynamics::Support *(dart::dynamics::EndEffector::*)(bool)>(&dart::dynamics::EndEffector::getSupport), ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_createIfNull")))
.def("getSkeleton", static_cast<std::shared_ptr<dart::dynamics::Skeleton> (dart::dynamics::EndEffector::*)()>(&dart::dynamics::EndEffector::getSkeleton))
.def("dependsOn", static_cast<bool (dart::dynamics::EndEffector::*)(std::size_t) const>(&dart::dynamics::EndEffector::dependsOn), (::boost::python::arg("_genCoordIndex")))
.def("getNumDependentGenCoords", static_cast<std::size_t (dart::dynamics::EndEffector::*)() const>(&dart::dynamics::EndEffector::getNumDependentGenCoords))
.def("getDependentGenCoordIndex", static_cast<std::size_t (dart::dynamics::EndEffector::*)(std::size_t) const>(&dart::dynamics::EndEffector::getDependentGenCoordIndex), (::boost::python::arg("_arrayIndex")))
.def("getDependentGenCoordIndices", static_cast<const std::vector<std::size_t> &(dart::dynamics::EndEffector::*)() const>(&dart::dynamics::EndEffector::getDependentGenCoordIndices), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getNumDependentDofs", static_cast<std::size_t (dart::dynamics::EndEffector::*)() const>(&dart::dynamics::EndEffector::getNumDependentDofs))
.def("getDependentDof", static_cast<dart::dynamics::DegreeOfFreedom *(dart::dynamics::EndEffector::*)(std::size_t)>(&dart::dynamics::EndEffector::getDependentDof), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), (::boost::python::arg("_index")))
.def("getDependentDofs", static_cast<const std::vector<dart::dynamics::DegreeOfFreedom *> &(dart::dynamics::EndEffector::*)()>(&dart::dynamics::EndEffector::getDependentDofs), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getChainDofs", static_cast<const std::vector<const dart::dynamics::DegreeOfFreedom *> (dart::dynamics::EndEffector::*)() const>(&dart::dynamics::EndEffector::getChainDofs))
.def("getJacobian", static_cast<const dart::math::Jacobian &(dart::dynamics::EndEffector::*)() const>(&dart::dynamics::EndEffector::getJacobian), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getWorldJacobian", static_cast<const dart::math::Jacobian &(dart::dynamics::EndEffector::*)() const>(&dart::dynamics::EndEffector::getWorldJacobian), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getJacobianSpatialDeriv", static_cast<const dart::math::Jacobian &(dart::dynamics::EndEffector::*)() const>(&dart::dynamics::EndEffector::getJacobianSpatialDeriv), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getJacobianClassicDeriv", static_cast<const dart::math::Jacobian &(dart::dynamics::EndEffector::*)() const>(&dart::dynamics::EndEffector::getJacobianClassicDeriv), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("notifyTransformUpdate", static_cast<void (dart::dynamics::EndEffector::*)()>(&dart::dynamics::EndEffector::notifyTransformUpdate))
.def("notifyVelocityUpdate", static_cast<void (dart::dynamics::EndEffector::*)()>(&dart::dynamics::EndEffector::notifyVelocityUpdate))
;
}

/* footer */
