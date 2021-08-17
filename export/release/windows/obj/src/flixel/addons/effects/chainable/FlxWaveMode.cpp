#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveMode
#include <flixel/addons/effects/chainable/FlxWaveMode.h>
#endif
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{

::flixel::addons::effects::chainable::FlxWaveMode FlxWaveMode_obj::ALL;

::flixel::addons::effects::chainable::FlxWaveMode FlxWaveMode_obj::END;

::flixel::addons::effects::chainable::FlxWaveMode FlxWaveMode_obj::START;

bool FlxWaveMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALL",01,95,31,00)) { outValue = FlxWaveMode_obj::ALL; return true; }
	if (inName==HX_("END",bb,9f,34,00)) { outValue = FlxWaveMode_obj::END; return true; }
	if (inName==HX_("START",42,ac,f9,01)) { outValue = FlxWaveMode_obj::START; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxWaveMode_obj)

int FlxWaveMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ALL",01,95,31,00)) return 0;
	if (inName==HX_("END",bb,9f,34,00)) return 2;
	if (inName==HX_("START",42,ac,f9,01)) return 1;
	return super::__FindIndex(inName);
}

int FlxWaveMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ALL",01,95,31,00)) return 0;
	if (inName==HX_("END",bb,9f,34,00)) return 0;
	if (inName==HX_("START",42,ac,f9,01)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxWaveMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALL",01,95,31,00)) return ALL;
	if (inName==HX_("END",bb,9f,34,00)) return END;
	if (inName==HX_("START",42,ac,f9,01)) return START;
	return super::__Field(inName,inCallProp);
}

static ::String FlxWaveMode_obj_sStaticFields[] = {
	HX_("ALL",01,95,31,00),
	HX_("START",42,ac,f9,01),
	HX_("END",bb,9f,34,00),
	::String(null())
};

::hx::Class FlxWaveMode_obj::__mClass;

Dynamic __Create_FlxWaveMode_obj() { return new FlxWaveMode_obj; }

void FlxWaveMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.addons.effects.chainable.FlxWaveMode",46,8c,cd,8e), ::hx::TCanCast< FlxWaveMode_obj >,FlxWaveMode_obj_sStaticFields,0,
	&__Create_FlxWaveMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxWaveMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxWaveMode_obj::__GetStatic;
}

void FlxWaveMode_obj::__boot()
{
ALL = ::hx::CreateConstEnum< FlxWaveMode_obj >(HX_("ALL",01,95,31,00),0);
END = ::hx::CreateConstEnum< FlxWaveMode_obj >(HX_("END",bb,9f,34,00),2);
START = ::hx::CreateConstEnum< FlxWaveMode_obj >(HX_("START",42,ac,f9,01),1);
}


} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable
