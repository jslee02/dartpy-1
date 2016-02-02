#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart9collision20collideCylinderPlaneERKdS2_RKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS3_6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7_PSt6vectorINS0_7ContactESaISD_EE()
{
boost::python::def("collideCylinderPlane", static_cast<int (*)(const double &, const double &, const Eigen::Isometry3d &, const Eigen::Vector3d &, const Eigen::Isometry3d &, std::vector<dart::collision::Contact> *)>(&dart::collision::collideCylinderPlane), (::boost::python::arg("cyl_rad"), ::boost::python::arg("half_height"), ::boost::python::arg("T0"), ::boost::python::arg("plane_normal"), ::boost::python::arg("T1"), ::boost::python::arg("result")))
;}

/* footer */
