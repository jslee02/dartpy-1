#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5Color5WhiteEv()
{
boost::python::def("White", static_cast<Eigen::Vector3d (*)()>(&dart::Color::White))
;}

/* footer */
