#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics18SoftBodyNodeHelperE()
{
::boost::python::class_<dart::dynamics::SoftBodyNodeHelper, ::boost::noncopyable >("SoftBodyNodeHelper", boost::python::no_init)
.def("makeBoxProperties", static_cast<dart::dynamics::SoftBodyNode::UniqueProperties (*)(const Eigen::Vector3d &, const Eigen::Isometry3d &, double, double, double, double)>(&dart::dynamics::SoftBodyNodeHelper::makeBoxProperties), (::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness") = 1.000000e+00, ::boost::python::arg("_edgeStiffness") = 1.000000e+00, ::boost::python::arg("_dampingCoeff") = 1.000000e-02))
.def("setBox", static_cast<void (*)(dart::dynamics::SoftBodyNode *, const Eigen::Vector3d &, const Eigen::Isometry3d &, double, double, double, double)>(&dart::dynamics::SoftBodyNodeHelper::setBox), (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness") = 1.000000e+00, ::boost::python::arg("_edgeStiffness") = 1.000000e+00, ::boost::python::arg("_dampingCoeff") = 1.000000e-02))
.def("makeBoxProperties", static_cast<dart::dynamics::SoftBodyNode::UniqueProperties (*)(const Eigen::Vector3d &, const Eigen::Isometry3d &, const Eigen::Vector3i &, double, double, double, double)>(&dart::dynamics::SoftBodyNodeHelper::makeBoxProperties), (::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_frags"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness") = 1.000000e+00, ::boost::python::arg("_edgeStiffness") = 1.000000e+00, ::boost::python::arg("_dampingCoeff") = 1.000000e-02))
.def("setBox", static_cast<void (*)(dart::dynamics::SoftBodyNode *, const Eigen::Vector3d &, const Eigen::Isometry3d &, const Eigen::Vector3i &, double, double, double, double)>(&dart::dynamics::SoftBodyNodeHelper::setBox), (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_size"), ::boost::python::arg("_localTransform"), ::boost::python::arg("_frags"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness") = 1.000000e+00, ::boost::python::arg("_edgeStiffness") = 1.000000e+00, ::boost::python::arg("_dampingCoeff") = 1.000000e-02))
.def("makeSinglePointMassProperties", static_cast<dart::dynamics::SoftBodyNode::UniqueProperties (*)(double, double, double, double)>(&dart::dynamics::SoftBodyNodeHelper::makeSinglePointMassProperties), (::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness") = 1.000000e+00, ::boost::python::arg("_edgeStiffness") = 1.000000e+00, ::boost::python::arg("_dampingCoeff") = 1.000000e-02))
.def("setSinglePointMass", static_cast<void (*)(dart::dynamics::SoftBodyNode *, double, double, double, double)>(&dart::dynamics::SoftBodyNodeHelper::setSinglePointMass), (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness") = 1.000000e+00, ::boost::python::arg("_edgeStiffness") = 1.000000e+00, ::boost::python::arg("_dampingCoeff") = 1.000000e-02))
.def("makeEllipsoidProperties", static_cast<dart::dynamics::SoftBodyNode::UniqueProperties (*)(const Eigen::Vector3d &, std::size_t, std::size_t, double, double, double, double)>(&dart::dynamics::SoftBodyNodeHelper::makeEllipsoidProperties), (::boost::python::arg("_size"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness") = 1.000000e+00, ::boost::python::arg("_edgeStiffness") = 1.000000e+00, ::boost::python::arg("_dampingCoeff") = 1.000000e-02))
.def("setEllipsoid", static_cast<void (*)(dart::dynamics::SoftBodyNode *, const Eigen::Vector3d &, std::size_t, std::size_t, double, double, double, double)>(&dart::dynamics::SoftBodyNodeHelper::setEllipsoid), (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_size"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness") = 1.000000e+00, ::boost::python::arg("_edgeStiffness") = 1.000000e+00, ::boost::python::arg("_dampingCoeff") = 1.000000e-02))
.def("makeCylinderProperties", static_cast<dart::dynamics::SoftBodyNode::UniqueProperties (*)(double, double, std::size_t, std::size_t, std::size_t, double, double, double, double)>(&dart::dynamics::SoftBodyNodeHelper::makeCylinderProperties), (::boost::python::arg("_radius"), ::boost::python::arg("_height"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_nRings"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness") = 1.000000e+00, ::boost::python::arg("_edgeStiffness") = 1.000000e+00, ::boost::python::arg("_dampingCoeff") = 1.000000e-02))
.def("setCylinder", static_cast<void (*)(dart::dynamics::SoftBodyNode *, double, double, std::size_t, std::size_t, std::size_t, double, double, double, double)>(&dart::dynamics::SoftBodyNodeHelper::setCylinder), (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_radius"), ::boost::python::arg("_height"), ::boost::python::arg("_nSlices"), ::boost::python::arg("_nStacks"), ::boost::python::arg("_nRings"), ::boost::python::arg("_totalMass"), ::boost::python::arg("_vertexStiffness") = 1.000000e+00, ::boost::python::arg("_edgeStiffness") = 1.000000e+00, ::boost::python::arg("_dampingCoeff") = 1.000000e-02))
.staticmethod("makeBoxProperties")
.staticmethod("makeCylinderProperties")
.staticmethod("makeEllipsoidProperties")
.staticmethod("makeSinglePointMassProperties")
.staticmethod("setBox")
.staticmethod("setCylinder")
.staticmethod("setEllipsoid")
.staticmethod("setSinglePointMass")
;
}

/* footer */
