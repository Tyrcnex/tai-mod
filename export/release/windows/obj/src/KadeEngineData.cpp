#include <hxcpp.h>

#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_KadeEngineData
#include <KadeEngineData.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fa146bb3dc6eaa33_7_initSave,"KadeEngineData","initSave",0xa0157798,"KadeEngineData.initSave","KadeEngineData.hx",7,0xb03595fb)

void KadeEngineData_obj::__construct() { }

Dynamic KadeEngineData_obj::__CreateEmpty() { return new KadeEngineData_obj; }

void *KadeEngineData_obj::_hx_vtable = 0;

Dynamic KadeEngineData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KadeEngineData_obj > _hx_result = new KadeEngineData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool KadeEngineData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0703882b;
}

void KadeEngineData_obj::initSave(){
            	HX_STACKFRAME(&_hx_pos_fa146bb3dc6eaa33_7_initSave)
HXLINE(   8)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("newInput",8a,07,68,e1),::hx::paccDynamic) )) {
HXLINE(   9)			::flixel::FlxG_obj::save->data->__SetField(HX_("newInput",8a,07,68,e1),true,::hx::paccDynamic);
            		}
HXLINE(  11)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("downscroll",ef,45,d4,4f),::hx::paccDynamic) )) {
HXLINE(  12)			::flixel::FlxG_obj::save->data->__SetField(HX_("downscroll",ef,45,d4,4f),false,::hx::paccDynamic);
            		}
HXLINE(  14)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("dfjk",c3,18,67,42),::hx::paccDynamic) )) {
HXLINE(  15)			::flixel::FlxG_obj::save->data->__SetField(HX_("dfjk",c3,18,67,42),true,::hx::paccDynamic);
            		}
HXLINE(  17)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("accuracyDisplay",09,75,5e,26),::hx::paccDynamic) )) {
HXLINE(  18)			::flixel::FlxG_obj::save->data->__SetField(HX_("accuracyDisplay",09,75,5e,26),true,::hx::paccDynamic);
            		}
HXLINE(  20)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) )) {
HXLINE(  21)			::flixel::FlxG_obj::save->data->__SetField(HX_("offset",93,97,3f,60),0,::hx::paccDynamic);
            		}
HXLINE(  23)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("songPosition",9e,dd,3b,8d),::hx::paccDynamic) )) {
HXLINE(  24)			::flixel::FlxG_obj::save->data->__SetField(HX_("songPosition",9e,dd,3b,8d),false,::hx::paccDynamic);
            		}
HXLINE(  26)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic) )) {
HXLINE(  27)			::flixel::FlxG_obj::save->data->__SetField(HX_("fps",e9,c7,4d,00),false,::hx::paccDynamic);
            		}
HXLINE(  29)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("changedHit",bf,5d,c0,31),::hx::paccDynamic) )) {
HXLINE(  31)			::flixel::FlxG_obj::save->data->__SetField(HX_("changedHitX",b9,a9,91,56),-1,::hx::paccDynamic);
HXLINE(  32)			::flixel::FlxG_obj::save->data->__SetField(HX_("changedHitY",ba,a9,91,56),-1,::hx::paccDynamic);
HXLINE(  33)			::flixel::FlxG_obj::save->data->__SetField(HX_("changedHit",bf,5d,c0,31),false,::hx::paccDynamic);
            		}
HXLINE(  36)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsRain",dd,e5,17,c7),::hx::paccDynamic) )) {
HXLINE(  37)			::flixel::FlxG_obj::save->data->__SetField(HX_("fpsRain",dd,e5,17,c7),false,::hx::paccDynamic);
            		}
HXLINE(  39)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic) )) {
HXLINE(  40)			::flixel::FlxG_obj::save->data->__SetField(HX_("fpsCap",a9,7b,7e,91),120,::hx::paccDynamic);
            		}
HXLINE(  42)		bool _hx_tmp;
HXDLIN(  42)		if (!(::hx::IsGreater( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic),285 ))) {
HXLINE(  42)			_hx_tmp = ::hx::IsLess( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic),60 );
            		}
            		else {
HXLINE(  42)			_hx_tmp = true;
            		}
HXDLIN(  42)		if (_hx_tmp) {
HXLINE(  43)			::flixel::FlxG_obj::save->data->__SetField(HX_("fpsCap",a9,7b,7e,91),120,::hx::paccDynamic);
            		}
HXLINE(  45)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("scrollSpeed",3a,e0,46,cb),::hx::paccDynamic) )) {
HXLINE(  46)			::flixel::FlxG_obj::save->data->__SetField(HX_("scrollSpeed",3a,e0,46,cb),1,::hx::paccDynamic);
            		}
HXLINE(  48)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("npsDisplay",51,08,e2,23),::hx::paccDynamic) )) {
HXLINE(  49)			::flixel::FlxG_obj::save->data->__SetField(HX_("npsDisplay",51,08,e2,23),false,::hx::paccDynamic);
            		}
HXLINE(  51)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic) )) {
HXLINE(  52)			::flixel::FlxG_obj::save->data->__SetField(HX_("frames",a6,af,85,ac),10,::hx::paccDynamic);
            		}
HXLINE(  54)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("accuracyMod",09,b2,8a,86),::hx::paccDynamic) )) {
HXLINE(  55)			::flixel::FlxG_obj::save->data->__SetField(HX_("accuracyMod",09,b2,8a,86),1,::hx::paccDynamic);
            		}
HXLINE(  57)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("watermark",a4,af,1e,e0),::hx::paccDynamic) )) {
HXLINE(  58)			::flixel::FlxG_obj::save->data->__SetField(HX_("watermark",a4,af,1e,e0),true,::hx::paccDynamic);
            		}
HXLINE(  60)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("ghost",4f,8f,58,93),::hx::paccDynamic) )) {
HXLINE(  61)			::flixel::FlxG_obj::save->data->__SetField(HX_("ghost",4f,8f,58,93),true,::hx::paccDynamic);
            		}
HXLINE(  63)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("distractions",31,13,7d,60),::hx::paccDynamic) )) {
HXLINE(  64)			::flixel::FlxG_obj::save->data->__SetField(HX_("distractions",31,13,7d,60),true,::hx::paccDynamic);
            		}
HXLINE(  66)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic) )) {
HXLINE(  67)			::flixel::FlxG_obj::save->data->__SetField(HX_("flashing",32,85,e8,99),true,::hx::paccDynamic);
            		}
HXLINE(  69)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("resetButton",21,e5,f4,79),::hx::paccDynamic) )) {
HXLINE(  70)			::flixel::FlxG_obj::save->data->__SetField(HX_("resetButton",21,e5,f4,79),false,::hx::paccDynamic);
            		}
HXLINE(  72)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic) )) {
HXLINE(  73)			::flixel::FlxG_obj::save->data->__SetField(HX_("botplay",7b,fb,a9,61),false,::hx::paccDynamic);
            		}
HXLINE(  75)		::Conductor_obj::recalculateTimings();
HXLINE(  77)		::Main_obj::watermarks = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("watermark",a4,af,1e,e0),::hx::paccDynamic)) );
HXLINE(  79)		::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->setFPSCap(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(KadeEngineData_obj,initSave,(void))


KadeEngineData_obj::KadeEngineData_obj()
{
}

bool KadeEngineData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"initSave") ) { outValue = initSave_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *KadeEngineData_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *KadeEngineData_obj_sStaticStorageInfo = 0;
#endif

::hx::Class KadeEngineData_obj::__mClass;

static ::String KadeEngineData_obj_sStaticFields[] = {
	HX_("initSave",6d,ba,04,51),
	::String(null())
};

void KadeEngineData_obj::__register()
{
	KadeEngineData_obj _hx_dummy;
	KadeEngineData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("KadeEngineData",a3,f4,9b,d6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &KadeEngineData_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(KadeEngineData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< KadeEngineData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KadeEngineData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KadeEngineData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

