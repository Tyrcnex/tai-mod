#include <hxcpp.h>

#ifndef INCLUDED_GhostTapOption
#include <GhostTapOption.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_72f1a114c5fe7f32_129_new,"GhostTapOption","new",0x6c686a7b,"GhostTapOption.new","Options.hx",129,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_72f1a114c5fe7f32_135_press,"GhostTapOption","press",0xd68bea5e,"GhostTapOption.press","Options.hx",135,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_72f1a114c5fe7f32_143_updateDisplay,"GhostTapOption","updateDisplay",0xb7c6f914,"GhostTapOption.updateDisplay","Options.hx",143,0x9d9a0240)

void GhostTapOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_72f1a114c5fe7f32_129_new)
HXLINE( 130)		super::__construct();
HXLINE( 131)		this->description = desc;
            	}

Dynamic GhostTapOption_obj::__CreateEmpty() { return new GhostTapOption_obj; }

void *GhostTapOption_obj::_hx_vtable = 0;

Dynamic GhostTapOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GhostTapOption_obj > _hx_result = new GhostTapOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GhostTapOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x32a093c9;
	}
}

bool GhostTapOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_72f1a114c5fe7f32_135_press)
HXLINE( 136)		::flixel::FlxG_obj::save->data->__SetField(HX_("ghost",4f,8f,58,93),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("ghost",4f,8f,58,93),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 137)		this->display = this->updateDisplay();
HXLINE( 138)		return true;
            	}


::String GhostTapOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_72f1a114c5fe7f32_143_updateDisplay)
HXDLIN( 143)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("ghost",4f,8f,58,93),::hx::paccDynamic)) )) {
HXDLIN( 143)			return HX_("Ghost Tapping",44,6c,9f,40);
            		}
            		else {
HXDLIN( 143)			return HX_("No Ghost Tapping",45,a4,10,e0);
            		}
HXDLIN( 143)		return null();
            	}



::hx::ObjectPtr< GhostTapOption_obj > GhostTapOption_obj::__new(::String desc) {
	::hx::ObjectPtr< GhostTapOption_obj > __this = new GhostTapOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< GhostTapOption_obj > GhostTapOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	GhostTapOption_obj *__this = (GhostTapOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GhostTapOption_obj), true, "GhostTapOption"));
	*(void **)__this = GhostTapOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

GhostTapOption_obj::GhostTapOption_obj()
{
}

::hx::Val GhostTapOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GhostTapOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GhostTapOption_obj_sStaticStorageInfo = 0;
#endif

static ::String GhostTapOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class GhostTapOption_obj::__mClass;

void GhostTapOption_obj::__register()
{
	GhostTapOption_obj _hx_dummy;
	GhostTapOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GhostTapOption",09,11,b5,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GhostTapOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GhostTapOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GhostTapOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GhostTapOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

