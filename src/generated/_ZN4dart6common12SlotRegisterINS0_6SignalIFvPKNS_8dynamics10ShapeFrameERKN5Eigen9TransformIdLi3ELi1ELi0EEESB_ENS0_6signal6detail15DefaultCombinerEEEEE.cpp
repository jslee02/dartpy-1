#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics10ShapeFrameERKN5Eigen9TransformIdLi3ELi1ELi0EEESB_ENS0_6signal6detail15DefaultCombinerEEEEE_docstring[] = R"CHIMERA_STRING( SlotRegister can be used as a public member for connecting slots to a
 private Signal member. In this way you won't have to write forwarding
 connect/disconnect boilerplate for your classes.
)CHIMERA_STRING";

constexpr char _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics10ShapeFrameERKN5Eigen9TransformIdLi3ELi1ELi0EEESB_ENS0_6signal6detail15DefaultCombinerEEEE7connectERKSt8functionISC_E_docstring[] = R"CHIMERA_STRING( Connect a slot to the signal
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics10ShapeFrameERKN5Eigen9TransformIdLi3ELi1ELi0EEESB_ENS0_6signal6detail15DefaultCombinerEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::SlotRegister<dart::common::Signal<void (const dart::dynamics::ShapeFrame *, const Eigen::Transform<double, 3, 1, 0> &, const Eigen::Transform<double, 3, 1, 0> &), dart::common::signal::detail::DefaultCombiner> >, ::boost::noncopyable >("ShapeFrameTransformChangedSlotRegister", _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics10ShapeFrameERKN5Eigen9TransformIdLi3ELi1ELi0EEESB_ENS0_6signal6detail15DefaultCombinerEEEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::common::Signal<void (const dart::dynamics::ShapeFrame *, const Eigen::Transform<double, 3, 1, 0> &, const Eigen::Transform<double, 3, 1, 0> &), dart::common::signal::detail::DefaultCombiner>::SignalType & _signal) -> dart::common::SlotRegister<dart::common::Signal<void (const dart::dynamics::ShapeFrame *, const Eigen::Transform<double, 3, 1, 0> &, const Eigen::Transform<double, 3, 1, 0> &), dart::common::signal::detail::DefaultCombiner> > * { return new dart::common::SlotRegister<dart::common::Signal<void (const dart::dynamics::ShapeFrame *, const Eigen::Transform<double, 3, 1, 0> &, const Eigen::Transform<double, 3, 1, 0> &), dart::common::signal::detail::DefaultCombiner> >(_signal); }, ::boost::python::default_call_policies(), (::boost::python::arg("_signal"))))
.def("connect", [](dart::common::SlotRegister<dart::common::Signal<void (const dart::dynamics::ShapeFrame *, const Eigen::Transform<double, 3, 1, 0> &, const Eigen::Transform<double, 3, 1, 0> &), dart::common::signal::detail::DefaultCombiner> > *self, const dart::common::SlotRegister<dart::common::Signal<void (const dart::dynamics::ShapeFrame *, const Eigen::Transform<double, 3, 1, 0> &, const Eigen::Transform<double, 3, 1, 0> &), dart::common::signal::detail::DefaultCombiner> >::SlotType & _slot) -> dart::common::Connection { return self->connect(_slot); }, _ZN4dart6common12SlotRegisterINS0_6SignalIFvPKNS_8dynamics10ShapeFrameERKN5Eigen9TransformIdLi3ELi1ELi0EEESB_ENS0_6signal6detail15DefaultCombinerEEEE7connectERKSt8functionISC_E_docstring, (::boost::python::arg("_slot")))
;
}

/* footer */
