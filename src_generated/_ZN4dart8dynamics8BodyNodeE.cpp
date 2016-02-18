#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics8BodyNodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::BodyNode, ::boost::noncopyable, dart::dynamics::BodyNode *, ::boost::python::bases<dart::common::AddonManager, dart::dynamics::SpecializedNodeManagerForBodyNode<dart::dynamics::EndEffector>, dart::dynamics::SkeletonRefCountingBase, dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> > >("BodyNode", boost::python::no_init)
.def("setProperties", static_cast<void (dart::dynamics::BodyNode::*)(const dart::dynamics::BodyNode::ExtendedProperties &)>(&dart::dynamics::BodyNode::setProperties), (::boost::python::arg("_properties")))
.def("setProperties", static_cast<void (dart::dynamics::BodyNode::*)(const dart::dynamics::BodyNode::NodeProperties &)>(&dart::dynamics::BodyNode::setProperties), (::boost::python::arg("_properties")))
.def("setProperties", static_cast<void (dart::dynamics::BodyNode::*)(const dart::dynamics::BodyNode::AddonProperties &)>(&dart::dynamics::BodyNode::setProperties), (::boost::python::arg("_properties")))
.def("setProperties", static_cast<void (dart::dynamics::BodyNode::*)(const dart::dynamics::BodyNode::Properties &)>(&dart::dynamics::BodyNode::setProperties), (::boost::python::arg("_properties")))
.def("setProperties", static_cast<void (dart::dynamics::BodyNode::*)(const dart::dynamics::BodyNode::UniqueProperties &)>(&dart::dynamics::BodyNode::setProperties), (::boost::python::arg("_properties")))
.def("getBodyNodeProperties", static_cast<dart::dynamics::BodyNode::Properties (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getBodyNodeProperties))
.def("getAttachedNodeProperties", static_cast<dart::dynamics::BodyNode::NodeProperties (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getAttachedNodeProperties))
.def("getExtendedProperties", static_cast<dart::dynamics::BodyNode::ExtendedProperties (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getExtendedProperties))
.def("copy", static_cast<void (dart::dynamics::BodyNode::*)(const dart::dynamics::BodyNode &)>(&dart::dynamics::BodyNode::copy), (::boost::python::arg("_otherBodyNode")))
.def("copy", static_cast<void (dart::dynamics::BodyNode::*)(const dart::dynamics::BodyNode *)>(&dart::dynamics::BodyNode::copy), (::boost::python::arg("_otherBodyNode")))
.def("duplicateNodes", static_cast<void (dart::dynamics::BodyNode::*)(const dart::dynamics::BodyNode *)>(&dart::dynamics::BodyNode::duplicateNodes), (::boost::python::arg("otherBodyNode")))
.def("matchNodes", static_cast<void (dart::dynamics::BodyNode::*)(const dart::dynamics::BodyNode *)>(&dart::dynamics::BodyNode::matchNodes), (::boost::python::arg("otherBodyNode")))
.def("setName", static_cast<const std::string &(dart::dynamics::BodyNode::*)(const std::string &)>(&dart::dynamics::BodyNode::setName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_name")))
.def("setGravityMode", static_cast<void (dart::dynamics::BodyNode::*)(bool)>(&dart::dynamics::BodyNode::setGravityMode), (::boost::python::arg("_gravityMode")))
.def("getGravityMode", static_cast<bool (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getGravityMode))
.def("isCollidable", static_cast<bool (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::isCollidable))
.def("setCollidable", static_cast<void (dart::dynamics::BodyNode::*)(bool)>(&dart::dynamics::BodyNode::setCollidable), (::boost::python::arg("_isCollidable")))
.def("setMass", static_cast<void (dart::dynamics::BodyNode::*)(double)>(&dart::dynamics::BodyNode::setMass), (::boost::python::arg("_mass")))
.def("getMass", static_cast<double (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getMass))
.def("setMomentOfInertia", static_cast<void (dart::dynamics::BodyNode::*)(double, double, double, double, double, double)>(&dart::dynamics::BodyNode::setMomentOfInertia), (::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz"), ::boost::python::arg("_Ixy"), ::boost::python::arg("_Ixz"), ::boost::python::arg("_Iyz")))
.def("getMomentOfInertia", static_cast<void (dart::dynamics::BodyNode::*)(double &, double &, double &, double &, double &, double &) const>(&dart::dynamics::BodyNode::getMomentOfInertia), (::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz"), ::boost::python::arg("_Ixy"), ::boost::python::arg("_Ixz"), ::boost::python::arg("_Iyz")))
.def("getSpatialInertia", static_cast<const Eigen::Matrix6d &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getSpatialInertia), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setInertia", static_cast<void (dart::dynamics::BodyNode::*)(const dart::dynamics::Inertia &)>(&dart::dynamics::BodyNode::setInertia), (::boost::python::arg("_inertia")))
.def("getInertia", static_cast<const dart::dynamics::Inertia &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getInertia), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getArticulatedInertia", static_cast<const dart::math::Inertia &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getArticulatedInertia), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getArticulatedInertiaImplicit", static_cast<const dart::math::Inertia &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getArticulatedInertiaImplicit), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setLocalCOM", static_cast<void (dart::dynamics::BodyNode::*)(const Eigen::Vector3d &)>(&dart::dynamics::BodyNode::setLocalCOM), (::boost::python::arg("_com")))
.def("getLocalCOM", static_cast<const Eigen::Vector3d &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getLocalCOM), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getCOM", static_cast<Eigen::Vector3d (dart::dynamics::BodyNode::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::BodyNode::getCOM), (::boost::python::arg("_withRespectTo")))
.def("getCOMLinearVelocity", static_cast<Eigen::Vector3d (dart::dynamics::BodyNode::*)(const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::BodyNode::getCOMLinearVelocity), (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMSpatialVelocity", static_cast<Eigen::Vector6d (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getCOMSpatialVelocity))
.def("getCOMSpatialVelocity", static_cast<Eigen::Vector6d (dart::dynamics::BodyNode::*)(const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::BodyNode::getCOMSpatialVelocity), (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearAcceleration", static_cast<Eigen::Vector3d (dart::dynamics::BodyNode::*)(const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::BodyNode::getCOMLinearAcceleration), (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMSpatialAcceleration", static_cast<Eigen::Vector6d (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getCOMSpatialAcceleration))
.def("getCOMSpatialAcceleration", static_cast<Eigen::Vector6d (dart::dynamics::BodyNode::*)(const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::BodyNode::getCOMSpatialAcceleration), (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("setFrictionCoeff", static_cast<void (dart::dynamics::BodyNode::*)(double)>(&dart::dynamics::BodyNode::setFrictionCoeff), (::boost::python::arg("_coeff")))
.def("getFrictionCoeff", static_cast<double (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getFrictionCoeff))
.def("setRestitutionCoeff", static_cast<void (dart::dynamics::BodyNode::*)(double)>(&dart::dynamics::BodyNode::setRestitutionCoeff), (::boost::python::arg("_coeff")))
.def("getRestitutionCoeff", static_cast<double (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getRestitutionCoeff))
.def("addCollisionShape", static_cast<void (dart::dynamics::BodyNode::*)(const dart::dynamics::ShapePtr &)>(&dart::dynamics::BodyNode::addCollisionShape), (::boost::python::arg("_shape")))
.def("removeCollisionShape", static_cast<void (dart::dynamics::BodyNode::*)(const dart::dynamics::ShapePtr &)>(&dart::dynamics::BodyNode::removeCollisionShape), (::boost::python::arg("_shape")))
.def("removeAllCollisionShapes", static_cast<void (dart::dynamics::BodyNode::*)()>(&dart::dynamics::BodyNode::removeAllCollisionShapes))
.def("getNumCollisionShapes", static_cast<std::size_t (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getNumCollisionShapes))
.def("getCollisionShape", static_cast<dart::dynamics::ShapePtr (dart::dynamics::BodyNode::*)(std::size_t)>(&dart::dynamics::BodyNode::getCollisionShape), (::boost::python::arg("_index")))
.def("getIndexInSkeleton", static_cast<std::size_t (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getIndexInSkeleton))
.def("getIndexInTree", static_cast<std::size_t (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getIndexInTree))
.def("getTreeIndex", static_cast<std::size_t (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getTreeIndex))
.def("remove", static_cast<dart::dynamics::SkeletonPtr (dart::dynamics::BodyNode::*)(const std::string &)>(&dart::dynamics::BodyNode::remove), (::boost::python::arg("_name") = "temporary"))
.def("moveTo", static_cast<bool (dart::dynamics::BodyNode::*)(dart::dynamics::BodyNode *)>(&dart::dynamics::BodyNode::moveTo), (::boost::python::arg("_newParent")))
.def("moveTo", static_cast<bool (dart::dynamics::BodyNode::*)(const dart::dynamics::SkeletonPtr &, dart::dynamics::BodyNode *)>(&dart::dynamics::BodyNode::moveTo), (::boost::python::arg("_newSkeleton"), ::boost::python::arg("_newParent")))
.def("split", static_cast<dart::dynamics::SkeletonPtr (dart::dynamics::BodyNode::*)(const std::string &)>(&dart::dynamics::BodyNode::split), (::boost::python::arg("_skeletonName")))
.def("copyTo", static_cast<std::pair<dart::dynamics::Joint *, dart::dynamics::BodyNode *> (dart::dynamics::BodyNode::*)(dart::dynamics::BodyNode *, bool)>(&dart::dynamics::BodyNode::copyTo), (::boost::python::arg("_newParent"), ::boost::python::arg("_recursive")))
.def("copyTo", static_cast<std::pair<dart::dynamics::Joint *, dart::dynamics::BodyNode *> (dart::dynamics::BodyNode::*)(const dart::dynamics::SkeletonPtr &, dart::dynamics::BodyNode *, bool) const>(&dart::dynamics::BodyNode::copyTo), (::boost::python::arg("_newSkeleton"), ::boost::python::arg("_newParent"), ::boost::python::arg("_recursive")))
.def("copyAs", static_cast<dart::dynamics::SkeletonPtr (dart::dynamics::BodyNode::*)(const std::string &, bool) const>(&dart::dynamics::BodyNode::copyAs), (::boost::python::arg("_skeletonName"), ::boost::python::arg("_recursive")))
.def("getSkeleton", static_cast<dart::dynamics::SkeletonPtr (dart::dynamics::BodyNode::*)()>(&dart::dynamics::BodyNode::getSkeleton))
.def("getParentJoint", static_cast<dart::dynamics::Joint *(dart::dynamics::BodyNode::*)()>(&dart::dynamics::BodyNode::getParentJoint), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >())
.def("getParentBodyNode", static_cast<dart::dynamics::BodyNode *(dart::dynamics::BodyNode::*)()>(&dart::dynamics::BodyNode::getParentBodyNode), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >())
.def("getNumChildBodyNodes", static_cast<std::size_t (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getNumChildBodyNodes))
.def("getChildBodyNode", static_cast<dart::dynamics::BodyNode *(dart::dynamics::BodyNode::*)(std::size_t)>(&dart::dynamics::BodyNode::getChildBodyNode), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), (::boost::python::arg("_index")))
.def("getNumChildJoints", static_cast<std::size_t (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getNumChildJoints))
.def("getChildJoint", static_cast<dart::dynamics::Joint *(dart::dynamics::BodyNode::*)(std::size_t)>(&dart::dynamics::BodyNode::getChildJoint), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >(), (::boost::python::arg("_index")))
.def("createEndEffector", static_cast<dart::dynamics::EndEffector *(dart::dynamics::BodyNode::*)(const std::string &)>(&dart::dynamics::BodyNode::createEndEffector), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), (::boost::python::arg("_name") = "EndEffector"))
.def("createEndEffector", static_cast<dart::dynamics::EndEffector *(dart::dynamics::BodyNode::*)(const char *)>(&dart::dynamics::BodyNode::createEndEffector), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), (::boost::python::arg("_name")))
.def("addMarker", static_cast<void (dart::dynamics::BodyNode::*)(dart::dynamics::Marker *)>(&dart::dynamics::BodyNode::addMarker), (::boost::python::arg("_marker")))
.def("getNumMarkers", static_cast<std::size_t (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getNumMarkers))
.def("getMarker", static_cast<dart::dynamics::Marker *(dart::dynamics::BodyNode::*)(std::size_t)>(&dart::dynamics::BodyNode::getMarker), ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_index")))
.def("dependsOn", static_cast<bool (dart::dynamics::BodyNode::*)(std::size_t) const>(&dart::dynamics::BodyNode::dependsOn), (::boost::python::arg("_genCoordIndex")))
.def("getNumDependentGenCoords", static_cast<std::size_t (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getNumDependentGenCoords))
.def("getDependentGenCoordIndex", static_cast<std::size_t (dart::dynamics::BodyNode::*)(std::size_t) const>(&dart::dynamics::BodyNode::getDependentGenCoordIndex), (::boost::python::arg("_arrayIndex")))
.def("getDependentGenCoordIndices", static_cast<const std::vector<std::size_t> &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getDependentGenCoordIndices), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getNumDependentDofs", static_cast<std::size_t (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getNumDependentDofs))
.def("getDependentDof", static_cast<dart::dynamics::DegreeOfFreedom *(dart::dynamics::BodyNode::*)(std::size_t)>(&dart::dynamics::BodyNode::getDependentDof), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), (::boost::python::arg("_index")))
.def("getDependentDofs", static_cast<const std::vector<dart::dynamics::DegreeOfFreedom *> &(dart::dynamics::BodyNode::*)()>(&dart::dynamics::BodyNode::getDependentDofs), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getChainDofs", static_cast<const std::vector<const dart::dynamics::DegreeOfFreedom *> (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getChainDofs))
.def("getRelativeTransform", static_cast<const Eigen::Isometry3d &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getRelativeTransform), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativeSpatialVelocity", static_cast<const Eigen::Vector6d &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getRelativeSpatialVelocity), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativeSpatialAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getRelativeSpatialAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPrimaryRelativeAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getPrimaryRelativeAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPartialAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getPartialAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getJacobian", static_cast<const dart::math::Jacobian &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getJacobian), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getWorldJacobian", static_cast<const dart::math::Jacobian &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getWorldJacobian), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getJacobianSpatialDeriv", static_cast<const dart::math::Jacobian &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getJacobianSpatialDeriv), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getJacobianClassicDeriv", static_cast<const dart::math::Jacobian &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getJacobianClassicDeriv), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getBodyVelocityChange", static_cast<const Eigen::Vector6d &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getBodyVelocityChange), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setColliding", static_cast<void (dart::dynamics::BodyNode::*)(bool)>(&dart::dynamics::BodyNode::setColliding), (::boost::python::arg("_isColliding")))
.def("isColliding", static_cast<bool (dart::dynamics::BodyNode::*)()>(&dart::dynamics::BodyNode::isColliding))
.def("addExtForce", static_cast<void (dart::dynamics::BodyNode::*)(const Eigen::Vector3d &, const Eigen::Vector3d &, bool, bool)>(&dart::dynamics::BodyNode::addExtForce), (::boost::python::arg("_force"), ::boost::python::arg("_offset"), ::boost::python::arg("_isForceLocal"), ::boost::python::arg("_isOffsetLocal")))
.def("setExtForce", static_cast<void (dart::dynamics::BodyNode::*)(const Eigen::Vector3d &, const Eigen::Vector3d &, bool, bool)>(&dart::dynamics::BodyNode::setExtForce), (::boost::python::arg("_force"), ::boost::python::arg("_offset"), ::boost::python::arg("_isForceLocal"), ::boost::python::arg("_isOffsetLocal")))
.def("addExtTorque", static_cast<void (dart::dynamics::BodyNode::*)(const Eigen::Vector3d &, bool)>(&dart::dynamics::BodyNode::addExtTorque), (::boost::python::arg("_torque"), ::boost::python::arg("_isLocal")))
.def("setExtTorque", static_cast<void (dart::dynamics::BodyNode::*)(const Eigen::Vector3d &, bool)>(&dart::dynamics::BodyNode::setExtTorque), (::boost::python::arg("_torque"), ::boost::python::arg("_isLocal")))
.def("clearExternalForces", static_cast<void (dart::dynamics::BodyNode::*)()>(&dart::dynamics::BodyNode::clearExternalForces))
.def("clearInternalForces", static_cast<void (dart::dynamics::BodyNode::*)()>(&dart::dynamics::BodyNode::clearInternalForces))
.def("getExternalForceLocal", static_cast<const Eigen::Vector6d &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getExternalForceLocal), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getExternalForceGlobal", static_cast<Eigen::Vector6d (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getExternalForceGlobal))
.def("getBodyForce", static_cast<const Eigen::Vector6d &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getBodyForce), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isReactive", static_cast<bool (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::isReactive))
.def("setConstraintImpulse", static_cast<void (dart::dynamics::BodyNode::*)(const Eigen::Vector6d &)>(&dart::dynamics::BodyNode::setConstraintImpulse), (::boost::python::arg("_constImp")))
.def("addConstraintImpulse", static_cast<void (dart::dynamics::BodyNode::*)(const Eigen::Vector6d &)>(&dart::dynamics::BodyNode::addConstraintImpulse), (::boost::python::arg("_constImp")))
.def("addConstraintImpulse", static_cast<void (dart::dynamics::BodyNode::*)(const Eigen::Vector3d &, const Eigen::Vector3d &, bool, bool)>(&dart::dynamics::BodyNode::addConstraintImpulse), (::boost::python::arg("_constImp"), ::boost::python::arg("_offset"), ::boost::python::arg("_isImpulseLocal"), ::boost::python::arg("_isOffsetLocal")))
.def("clearConstraintImpulse", static_cast<void (dart::dynamics::BodyNode::*)()>(&dart::dynamics::BodyNode::clearConstraintImpulse))
.def("getConstraintImpulse", static_cast<const Eigen::Vector6d &(dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getConstraintImpulse), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getKineticEnergy", static_cast<double (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getKineticEnergy))
.def("getPotentialEnergy", static_cast<double (dart::dynamics::BodyNode::*)(const Eigen::Vector3d &) const>(&dart::dynamics::BodyNode::getPotentialEnergy), (::boost::python::arg("_gravity")))
.def("getLinearMomentum", static_cast<Eigen::Vector3d (dart::dynamics::BodyNode::*)() const>(&dart::dynamics::BodyNode::getLinearMomentum))
.def("getAngularMomentum", static_cast<Eigen::Vector3d (dart::dynamics::BodyNode::*)(const Eigen::Vector3d &)>(&dart::dynamics::BodyNode::getAngularMomentum), (::boost::python::arg("_pivot")))
.def("drawMarkers", static_cast<void (dart::dynamics::BodyNode::*)(dart::renderer::RenderInterface *, const Eigen::Vector4d &, bool) const>(&dart::dynamics::BodyNode::drawMarkers), (::boost::python::arg("_ri"), ::boost::python::arg("_color"), ::boost::python::arg("_useDefaultColor")))
.def("notifyTransformUpdate", static_cast<void (dart::dynamics::BodyNode::*)()>(&dart::dynamics::BodyNode::notifyTransformUpdate))
.def("notifyVelocityUpdate", static_cast<void (dart::dynamics::BodyNode::*)()>(&dart::dynamics::BodyNode::notifyVelocityUpdate))
.def("notifyAccelerationUpdate", static_cast<void (dart::dynamics::BodyNode::*)()>(&dart::dynamics::BodyNode::notifyAccelerationUpdate))
.def("notifyArticulatedInertiaUpdate", static_cast<void (dart::dynamics::BodyNode::*)()>(&dart::dynamics::BodyNode::notifyArticulatedInertiaUpdate))
.def("notifyExternalForcesUpdate", static_cast<void (dart::dynamics::BodyNode::*)()>(&dart::dynamics::BodyNode::notifyExternalForcesUpdate))
.def("notifyCoriolisUpdate", static_cast<void (dart::dynamics::BodyNode::*)()>(&dart::dynamics::BodyNode::notifyCoriolisUpdate))
;
}

/* footer */
