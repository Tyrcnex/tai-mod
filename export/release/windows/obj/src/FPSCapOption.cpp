#include <hxcpp.h>

#ifndef INCLUDED_FPSCapOption
#include <FPSCapOption.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionsMenu
#include <OptionsMenu.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_84c20c769231eb97_334_new,"FPSCapOption","new",0x20665810,"FPSCapOption.new","Options.hx",334,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_84c20c769231eb97_342_press,"FPSCapOption","press",0xf8102733,"FPSCapOption.press","Options.hx",342,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_84c20c769231eb97_347_updateDisplay,"FPSCapOption","updateDisplay",0x14c392e9,"FPSCapOption.updateDisplay","Options.hx",347,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_84c20c769231eb97_350_right,"FPSCapOption","right",0x18ebdf8c,"FPSCapOption.right","Options.hx",350,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_84c20c769231eb97_365_left,"FPSCapOption","left",0x37d43a57,"FPSCapOption.left","Options.hx",365,0x9d9a0240)

void FPSCapOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_84c20c769231eb97_334_new)
HXLINE( 335)		super::__construct();
HXLINE( 336)		this->description = desc;
HXLINE( 337)		this->acceptValues = true;
            	}

Dynamic FPSCapOption_obj::__CreateEmpty() { return new FPSCapOption_obj; }

void *FPSCapOption_obj::_hx_vtable = 0;

Dynamic FPSCapOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FPSCapOption_obj > _hx_result = new FPSCapOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FPSCapOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25e90a42) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25e90a42;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool FPSCapOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_84c20c769231eb97_342_press)
HXDLIN( 342)		return false;
            	}


::String FPSCapOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_84c20c769231eb97_347_updateDisplay)
HXDLIN( 347)		return HX_("FPS Cap",1b,7c,07,3b);
            	}


bool FPSCapOption_obj::right(){
            	HX_STACKFRAME(&_hx_pos_84c20c769231eb97_350_right)
HXLINE( 351)		if (::hx::IsGreaterEq( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic),290 )) {
HXLINE( 353)			::flixel::FlxG_obj::save->data->__SetField(HX_("fpsCap",a9,7b,7e,91),290,::hx::paccDynamic);
HXLINE( 354)			::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->setFPSCap(( (Float)(290) ));
            		}
            		else {
HXLINE( 357)			::flixel::FlxG_obj::save->data->__SetField(HX_("fpsCap",a9,7b,7e,91),(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic) + 10),::hx::paccDynamic);
            		}
HXLINE( 358)		::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->setFPSCap(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)) ));
HXLINE( 360)		 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 360)		::String _hx_tmp1 = ((HX_("Current FPS Cap: ",ba,64,4c,34) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)))) + HX_(" - Description - ",ca,32,1d,cd));
HXDLIN( 360)		_hx_tmp->set_text((_hx_tmp1 + this->description));
HXLINE( 362)		return true;
            	}


bool FPSCapOption_obj::left(){
            	HX_STACKFRAME(&_hx_pos_84c20c769231eb97_365_left)
HXLINE( 366)		if (::hx::IsGreater( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic),290 )) {
HXLINE( 367)			::flixel::FlxG_obj::save->data->__SetField(HX_("fpsCap",a9,7b,7e,91),290,::hx::paccDynamic);
            		}
            		else {
HXLINE( 368)			if (::hx::IsLess( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic),60 )) {
HXLINE( 369)				::flixel::FlxG_obj::save->data->__SetField(HX_("fpsCap",a9,7b,7e,91),::lime::app::Application_obj::current->_hx___window->get_displayMode()->refreshRate,::hx::paccDynamic);
            			}
            			else {
HXLINE( 371)				::flixel::FlxG_obj::save->data->__SetField(HX_("fpsCap",a9,7b,7e,91),(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)) ) - ( (Float)(10) )),::hx::paccDynamic);
            			}
            		}
HXLINE( 372)		::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->setFPSCap(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)) ));
HXLINE( 374)		 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 374)		::String _hx_tmp1 = (HX_("Current FPS Cap: ",ba,64,4c,34) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic))));
HXLINE( 375)		::String _hx_tmp2;
HXDLIN( 375)		 ::Dynamic _hx_tmp3 =  ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic));
HXDLIN( 375)		if (::hx::IsEq( _hx_tmp3,::lime::app::Application_obj::current->_hx___window->get_displayMode()->refreshRate )) {
HXLINE( 375)			_hx_tmp2 = HX_("Hz (Refresh Rate)",0a,55,63,20);
            		}
            		else {
HXLINE( 375)			_hx_tmp2 = HX_("",00,00,00,00);
            		}
HXLINE( 374)		_hx_tmp->set_text((((_hx_tmp1 + _hx_tmp2) + HX_(" - Description - ",ca,32,1d,cd)) + this->description));
HXLINE( 378)		return true;
            	}



::hx::ObjectPtr< FPSCapOption_obj > FPSCapOption_obj::__new(::String desc) {
	::hx::ObjectPtr< FPSCapOption_obj > __this = new FPSCapOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< FPSCapOption_obj > FPSCapOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	FPSCapOption_obj *__this = (FPSCapOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FPSCapOption_obj), true, "FPSCapOption"));
	*(void **)__this = FPSCapOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

FPSCapOption_obj::FPSCapOption_obj()
{
}

::hx::Val FPSCapOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FPSCapOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FPSCapOption_obj_sStaticStorageInfo = 0;
#endif

static ::String FPSCapOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	HX_("right",dc,0b,64,e9),
	HX_("left",07,08,b0,47),
	::String(null()) };

::hx::Class FPSCapOption_obj::__mClass;

void FPSCapOption_obj::__register()
{
	FPSCapOption_obj _hx_dummy;
	FPSCapOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FPSCapOption",1e,50,bd,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FPSCapOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FPSCapOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FPSCapOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FPSCapOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

