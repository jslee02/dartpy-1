#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_11EndEffectorEEEEEE_docstring[] = R"CHIMERA_STRING( This class is used to have CRTP functions inherit their template parameters
 virtually instead of directly.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_11EndEffectorEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Virtual<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::EndEffector> >, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::EndEffector> > >("VirtualBodyNodeSpecializedForEndEffector", _ZN4dart6common7VirtualINS_8dynamics22BodyNodeSpecializedForIJNS2_11EndEffectorEEEEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::Virtual<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::EndEffector> > * { return new dart::common::Virtual<dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::EndEffector> >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */