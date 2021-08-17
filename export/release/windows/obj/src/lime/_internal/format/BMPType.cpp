#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_format_BMPType
#include <lime/_internal/format/BMPType.h>
#endif
namespace lime{
namespace _internal{
namespace format{

::lime::_internal::format::BMPType BMPType_obj::BITFIELD;

::lime::_internal::format::BMPType BMPType_obj::ICO;

::lime::_internal::format::BMPType BMPType_obj::RGB;

bool BMPType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BITFIELD",cd,64,1c,af)) { outValue = BMPType_obj::BITFIELD; return true; }
	if (inName==HX_("ICO",35,9f,37,00)) { outValue = BMPType_obj::ICO; return true; }
	if (inName==HX_("RGB",ed,76,3e,00)) { outValue = BMPType_obj::RGB; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(BMPType_obj)

int BMPType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BITFIELD",cd,64,1c,af)) return 1;
	if (inName==HX_("ICO",35,9f,37,00)) return 2;
	if (inName==HX_("RGB",ed,76,3e,00)) return 0;
	return super::__FindIndex(inName);
}

int BMPType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BITFIELD",cd,64,1c,af)) return 0;
	if (inName==HX_("ICO",35,9f,37,00)) return 0;
	if (inName==HX_("RGB",ed,76,3e,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val BMPType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BITFIELD",cd,64,1c,af)) return BITFIELD;
	if (inName==HX_("ICO",35,9f,37,00)) return ICO;
	if (inName==HX_("RGB",ed,76,3e,00)) return RGB;
	return super::__Field(inName,inCallProp);
}

static ::String BMPType_obj_sStaticFields[] = {
	HX_("RGB",ed,76,3e,00),
	HX_("BITFIELD",cd,64,1c,af),
	HX_("ICO",35,9f,37,00),
	::String(null())
};

::hx::Class BMPType_obj::__mClass;

Dynamic __Create_BMPType_obj() { return new BMPType_obj; }

void BMPType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("lime._internal.format.BMPType",53,b1,d9,82), ::hx::TCanCast< BMPType_obj >,BMPType_obj_sStaticFields,0,
	&__Create_BMPType_obj, &__Create,
	&super::__SGetClass(), &CreateBMPType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &BMPType_obj::__GetStatic;
}

void BMPType_obj::__boot()
{
BITFIELD = ::hx::CreateConstEnum< BMPType_obj >(HX_("BITFIELD",cd,64,1c,af),1);
ICO = ::hx::CreateConstEnum< BMPType_obj >(HX_("ICO",35,9f,37,00),2);
RGB = ::hx::CreateConstEnum< BMPType_obj >(HX_("RGB",ed,76,3e,00),0);
}


} // end namespace lime
} // end namespace _internal
} // end namespace format
