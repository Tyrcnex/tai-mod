#include <hxcpp.h>

#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_TextFileFormat
#include <polymod/format/TextFileFormat.h>
#endif

namespace polymod{
namespace format{


static ::String BaseParseFormat_obj_sMemberFields[] = {
	HX_("format",37,8f,8e,fd),
	HX_("append",da,e1,d3,8f),
	HX_("merge",b8,a2,c6,05),
	::String(null()) };

::hx::Class BaseParseFormat_obj::__mClass;

void BaseParseFormat_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.format.BaseParseFormat",5a,0d,4a,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseParseFormat_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xa2d29dcc >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace format
