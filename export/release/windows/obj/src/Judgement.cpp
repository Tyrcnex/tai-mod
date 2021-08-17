#include <hxcpp.h>

#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_HelperFunctions
#include <HelperFunctions.h>
#endif
#ifndef INCLUDED_Judgement
#include <Judgement.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4303cb2e29fdc109_252_new,"Judgement","new",0xcb22fc07,"Judgement.new","Options.hx",252,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_4303cb2e29fdc109_260_press,"Judgement","press",0x4636f6ea,"Judgement.press","Options.hx",260,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_4303cb2e29fdc109_265_updateDisplay,"Judgement","updateDisplay",0xf76371a0,"Judgement.updateDisplay","Options.hx",265,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_4303cb2e29fdc109_268_left,"Judgement","left",0xf2270e80,"Judgement.left","Options.hx",268,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_4303cb2e29fdc109_287_right,"Judgement","right",0x6712af43,"Judgement.right","Options.hx",287,0x9d9a0240)

void Judgement_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_4303cb2e29fdc109_252_new)
HXLINE( 253)		super::__construct();
HXLINE( 254)		this->description = desc;
HXLINE( 255)		this->acceptValues = true;
            	}

Dynamic Judgement_obj::__CreateEmpty() { return new Judgement_obj; }

void *Judgement_obj::_hx_vtable = 0;

Dynamic Judgement_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Judgement_obj > _hx_result = new Judgement_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Judgement_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x6cd733f1;
	}
}

bool Judgement_obj::press(){
            	HX_STACKFRAME(&_hx_pos_4303cb2e29fdc109_260_press)
HXDLIN( 260)		return true;
            	}


::String Judgement_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_4303cb2e29fdc109_265_updateDisplay)
HXDLIN( 265)		return HX_("Safe Frames",19,0a,34,55);
            	}


bool Judgement_obj::left(){
            	HX_STACKFRAME(&_hx_pos_4303cb2e29fdc109_268_left)
HXLINE( 270)		if ((::Conductor_obj::safeFrames == 1)) {
HXLINE( 271)			return false;
            		}
HXLINE( 273)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::Conductor >();
HXDLIN( 273)		::Conductor_obj::safeFrames = (::Conductor_obj::safeFrames - 1);
HXLINE( 274)		::flixel::FlxG_obj::save->data->__SetField(HX_("frames",a6,af,85,ac),::Conductor_obj::safeFrames,::hx::paccDynamic);
HXLINE( 276)		::Conductor_obj::recalculateTimings();
HXLINE( 278)		 ::flixel::text::FlxText _hx_tmp1 = ::OptionsMenu_obj::versionShit;
HXDLIN( 278)		::String _hx_tmp2 = ((((HX_("Current Safe Frames: ",b8,7e,9e,66) + ::Conductor_obj::safeFrames) + HX_(" - Description - ",ca,32,1d,cd)) + this->description) + HX_(" - SIK: ",88,84,bb,3b));
HXDLIN( 278)		::String _hx_tmp3 = ((_hx_tmp2 + ::HelperFunctions_obj::truncateFloat((( (Float)(45) ) * ::Conductor_obj::timeScale),0)) + HX_("ms GD: ",fd,90,a2,4b));
HXDLIN( 278)		::String _hx_tmp4 = ((_hx_tmp3 + ::HelperFunctions_obj::truncateFloat((( (Float)(90) ) * ::Conductor_obj::timeScale),0)) + HX_("ms BD: ",e2,7f,54,48));
HXDLIN( 278)		::String _hx_tmp5 = ((_hx_tmp4 + ::HelperFunctions_obj::truncateFloat((( (Float)(135) ) * ::Conductor_obj::timeScale),0)) + HX_("ms SHT: ",4b,ee,23,ce));
HXDLIN( 278)		::String _hx_tmp6 = ((_hx_tmp5 + ::HelperFunctions_obj::truncateFloat((( (Float)(155) ) * ::Conductor_obj::timeScale),0)) + HX_("ms TOTAL: ",90,68,8b,8c));
HXDLIN( 278)		_hx_tmp1->set_text(((_hx_tmp6 + ::HelperFunctions_obj::truncateFloat(::Conductor_obj::safeZoneOffset,0)) + HX_("ms",66,5f,00,00)));
HXLINE( 284)		return true;
            	}


bool Judgement_obj::right(){
            	HX_STACKFRAME(&_hx_pos_4303cb2e29fdc109_287_right)
HXLINE( 289)		if ((::Conductor_obj::safeFrames == 20)) {
HXLINE( 290)			return false;
            		}
HXLINE( 292)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::Conductor >();
HXDLIN( 292)		::Conductor_obj::safeFrames = (::Conductor_obj::safeFrames + 1);
HXLINE( 293)		::flixel::FlxG_obj::save->data->__SetField(HX_("frames",a6,af,85,ac),::Conductor_obj::safeFrames,::hx::paccDynamic);
HXLINE( 295)		::Conductor_obj::recalculateTimings();
HXLINE( 297)		 ::flixel::text::FlxText _hx_tmp1 = ::OptionsMenu_obj::versionShit;
HXDLIN( 297)		::String _hx_tmp2 = ((((HX_("Current Safe Frames: ",b8,7e,9e,66) + ::Conductor_obj::safeFrames) + HX_(" - Description - ",ca,32,1d,cd)) + this->description) + HX_(" - SIK: ",88,84,bb,3b));
HXDLIN( 297)		::String _hx_tmp3 = ((_hx_tmp2 + ::HelperFunctions_obj::truncateFloat((( (Float)(44) ) * ::Conductor_obj::timeScale),0)) + HX_("ms GD: ",fd,90,a2,4b));
HXDLIN( 297)		::String _hx_tmp4 = ((_hx_tmp3 + ::HelperFunctions_obj::truncateFloat((( (Float)(45) ) * ::Conductor_obj::timeScale),0)) + HX_("ms BD: ",e2,7f,54,48));
HXDLIN( 297)		::String _hx_tmp5 = ((_hx_tmp4 + ::HelperFunctions_obj::truncateFloat((( (Float)(90) ) * ::Conductor_obj::timeScale),0)) + HX_("ms SHT: ",4b,ee,23,ce));
HXDLIN( 297)		::String _hx_tmp6 = ((_hx_tmp5 + ::HelperFunctions_obj::truncateFloat((( (Float)(135) ) * ::Conductor_obj::timeScale),0)) + HX_("ms TOTAL: ",90,68,8b,8c));
HXDLIN( 297)		_hx_tmp1->set_text(((_hx_tmp6 + ::HelperFunctions_obj::truncateFloat(::Conductor_obj::safeZoneOffset,0)) + HX_("ms",66,5f,00,00)));
HXLINE( 303)		return true;
            	}



::hx::ObjectPtr< Judgement_obj > Judgement_obj::__new(::String desc) {
	::hx::ObjectPtr< Judgement_obj > __this = new Judgement_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< Judgement_obj > Judgement_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	Judgement_obj *__this = (Judgement_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Judgement_obj), true, "Judgement"));
	*(void **)__this = Judgement_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

Judgement_obj::Judgement_obj()
{
}

::hx::Val Judgement_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *Judgement_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Judgement_obj_sStaticStorageInfo = 0;
#endif

static ::String Judgement_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	::String(null()) };

::hx::Class Judgement_obj::__mClass;

void Judgement_obj::__register()
{
	Judgement_obj _hx_dummy;
	Judgement_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Judgement",95,ec,cc,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Judgement_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Judgement_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Judgement_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Judgement_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

