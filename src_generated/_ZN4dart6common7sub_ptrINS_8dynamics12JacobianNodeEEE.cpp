#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart6common7sub_ptrINS_8dynamics12JacobianNodeEEE()
{
::boost::python::class_<dart::common::sub_ptr<dart::dynamics::JacobianNode>, ::boost::noncopyable, ::boost::python::bases<dart::common::Observer > >("_ZN4dart6common7sub_ptrINS_8dynamics12JacobianNodeEEE", boost::python::no_init)
.def(::boost::python::init<>())
.def(::boost::python::init<dart::dynamics::JacobianNode *>((::boost::python::arg("_ptr"))))
.def("get", static_cast<dart::dynamics::JacobianNode *(dart::common::sub_ptr<dart::dynamics::JacobianNode>::*)() const>(&dart::common::sub_ptr<dart::dynamics::JacobianNode>::get), ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("set", static_cast<void (dart::common::sub_ptr<dart::dynamics::JacobianNode>::*)(dart::dynamics::JacobianNode *)>(&dart::common::sub_ptr<dart::dynamics::JacobianNode>::set), (::boost::python::arg("_ptr")))
.def("valid", static_cast<bool (dart::common::sub_ptr<dart::dynamics::JacobianNode>::*)()>(&dart::common::sub_ptr<dart::dynamics::JacobianNode>::valid))
;
}

/* footer */
