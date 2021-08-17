#include <hxcpp.h>

#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_13_new,"HealthIcon","new",0x9b7badc7,"HealthIcon.new","HealthIcon.hx",13,0xf7836789)
static const int _hx_array_data_f8f9be55_2[] = {
	(int)0,(int)1,
};
static const int _hx_array_data_f8f9be55_3[] = {
	(int)0,(int)1,
};
static const int _hx_array_data_f8f9be55_4[] = {
	(int)0,(int)1,
};
static const int _hx_array_data_f8f9be55_5[] = {
	(int)21,(int)21,
};
static const int _hx_array_data_f8f9be55_6[] = {
	(int)2,(int)3,
};
static const int _hx_array_data_f8f9be55_7[] = {
	(int)4,(int)5,
};
static const int _hx_array_data_f8f9be55_8[] = {
	(int)6,(int)7,
};
static const int _hx_array_data_f8f9be55_9[] = {
	(int)6,(int)7,
};
static const int _hx_array_data_f8f9be55_10[] = {
	(int)8,(int)9,
};
static const int _hx_array_data_f8f9be55_11[] = {
	(int)10,(int)11,
};
static const int _hx_array_data_f8f9be55_12[] = {
	(int)12,(int)13,
};
static const int _hx_array_data_f8f9be55_13[] = {
	(int)22,(int)22,
};
static const int _hx_array_data_f8f9be55_14[] = {
	(int)22,(int)22,
};
static const int _hx_array_data_f8f9be55_15[] = {
	(int)23,(int)23,
};
static const int _hx_array_data_f8f9be55_16[] = {
	(int)14,(int)15,
};
static const int _hx_array_data_f8f9be55_17[] = {
	(int)16,
};
static const int _hx_array_data_f8f9be55_18[] = {
	(int)16,
};
static const int _hx_array_data_f8f9be55_19[] = {
	(int)16,
};
static const int _hx_array_data_f8f9be55_20[] = {
	(int)17,(int)18,
};
static const int _hx_array_data_f8f9be55_21[] = {
	(int)19,(int)20,
};
static const int _hx_array_data_f8f9be55_22[] = {
	(int)19,(int)20,
};
static const int _hx_array_data_f8f9be55_23[] = {
	(int)24,(int)25,
};
static const int _hx_array_data_f8f9be55_24[] = {
	(int)26,(int)27,
};
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_54_update,"HealthIcon","update",0x767ac302,"HealthIcon.update","HealthIcon.hx",54,0xf7836789)

void HealthIcon_obj::__construct(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer){
            		::String _hx_char = __o__hx_char;
            		if (::hx::IsNull(__o__hx_char)) _hx_char = HX_("bf",c4,55,00,00);
            		bool isPlayer = __o_isPlayer.Default(false);
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_13_new)
HXLINE(  14)		super::__construct(null(),null(),null());
HXLINE(  16)		::String library = null();
HXDLIN(  16)		this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("iconGrid",df,9a,73,71)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,150,150,null(),null());
HXLINE(  18)		this->set_antialiasing(true);
HXLINE(  19)		this->animation->add(HX_("bf",c4,55,00,00),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_2,2),0,false,isPlayer,null());
HXLINE(  20)		this->animation->add(HX_("bf-car",cb,95,e2,07),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_3,2),0,false,isPlayer,null());
HXLINE(  21)		this->animation->add(HX_("bf-christmas",79,02,f4,24),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_4,2),0,false,isPlayer,null());
HXLINE(  22)		this->animation->add(HX_("bf-pixel",fd,03,90,37),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_5,2),0,false,isPlayer,null());
HXLINE(  23)		this->animation->add(HX_("spooky",eb,bd,9e,c1),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_6,2),0,false,isPlayer,null());
HXLINE(  24)		this->animation->add(HX_("pico",e5,e8,57,4a),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_7,2),0,false,isPlayer,null());
HXLINE(  25)		this->animation->add(HX_("mom",cb,16,53,00),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_8,2),0,false,isPlayer,null());
HXLINE(  26)		this->animation->add(HX_("mom-car",52,e6,f7,f6),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_9,2),0,false,isPlayer,null());
HXLINE(  27)		this->animation->add(HX_("tankman",f0,7d,78,3d),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_10,2),0,false,isPlayer,null());
HXLINE(  28)		this->animation->add(HX_("face",9d,b4,b5,43),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_11,2),0,false,isPlayer,null());
HXLINE(  29)		this->animation->add(HX_("dad",47,36,4c,00),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_12,2),0,false,isPlayer,null());
HXLINE(  30)		this->animation->add(HX_("senpai",3c,df,8d,6b),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_13,2),0,false,isPlayer,null());
HXLINE(  31)		this->animation->add(HX_("senpai-angry",10,7a,b8,25),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_14,2),0,false,isPlayer,null());
HXLINE(  32)		this->animation->add(HX_("spirit",31,bb,a9,bd),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_15,2),0,false,isPlayer,null());
HXLINE(  33)		this->animation->add(HX_("bf-old",5e,ba,eb,07),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_16,2),0,false,isPlayer,null());
HXLINE(  34)		this->animation->add(HX_("gf",1f,5a,00,00),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_17,1),0,false,isPlayer,null());
HXLINE(  35)		this->animation->add(HX_("gf-christmas",94,26,b1,6d),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_18,1),0,false,isPlayer,null());
HXLINE(  36)		this->animation->add(HX_("gf-pixel",98,3e,8c,55),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_19,1),0,false,isPlayer,null());
HXLINE(  37)		this->animation->add(HX_("parents-christmas",fe,94,c5,32),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_20,2),0,false,isPlayer,null());
HXLINE(  38)		this->animation->add(HX_("monster",1a,54,b0,b8),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_21,2),0,false,isPlayer,null());
HXLINE(  39)		this->animation->add(HX_("monster-christmas",4f,88,85,27),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_22,2),0,false,isPlayer,null());
HXLINE(  40)		this->animation->add(HX_("tai",5c,5a,58,00),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_23,2),0,false,isPlayer,null());
HXLINE(  41)		this->animation->add(HX_("tai-demon",fa,69,05,25),::Array_obj< int >::fromData( _hx_array_data_f8f9be55_24,2),0,false,isPlayer,null());
HXLINE(  42)		this->animation->play(_hx_char,null(),null(),null());
HXLINE(  44)		::String _hx_switch_0 = _hx_char;
            		if (  (_hx_switch_0==HX_("bf-pixel",fd,03,90,37)) ||  (_hx_switch_0==HX_("gf-pixel",98,3e,8c,55)) ||  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ||  (_hx_switch_0==HX_("senpai-angry",10,7a,b8,25)) ||  (_hx_switch_0==HX_("spirit",31,bb,a9,bd)) ){
HXLINE(  47)			this->set_antialiasing(false);
HXDLIN(  47)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  50)		this->scrollFactor->set(null(),null());
            	}

Dynamic HealthIcon_obj::__CreateEmpty() { return new HealthIcon_obj; }

void *HealthIcon_obj::_hx_vtable = 0;

Dynamic HealthIcon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HealthIcon_obj > _hx_result = new HealthIcon_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HealthIcon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x10bce115) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x10bce115;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void HealthIcon_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_54_update)
HXLINE(  55)		this->super::update(elapsed);
HXLINE(  57)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  58)			Float _hx_tmp = this->sprTracker->x;
HXDLIN(  58)			Float _hx_tmp1 = ((_hx_tmp + this->sprTracker->get_width()) + 10);
HXDLIN(  58)			this->setPosition(_hx_tmp1,(this->sprTracker->y - ( (Float)(30) )));
            		}
            	}



::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__new(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer) {
	::hx::ObjectPtr< HealthIcon_obj > __this = new HealthIcon_obj();
	__this->__construct(__o__hx_char,__o_isPlayer);
	return __this;
}

::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o__hx_char,::hx::Null< bool >  __o_isPlayer) {
	HealthIcon_obj *__this = (HealthIcon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HealthIcon_obj), true, "HealthIcon"));
	*(void **)__this = HealthIcon_obj::_hx_vtable;
	__this->__construct(__o__hx_char,__o_isPlayer);
	return __this;
}

HealthIcon_obj::HealthIcon_obj()
{
}

void HealthIcon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HealthIcon);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HealthIcon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HealthIcon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HealthIcon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HealthIcon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HealthIcon_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HealthIcon_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HealthIcon_obj_sStaticStorageInfo = 0;
#endif

static ::String HealthIcon_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class HealthIcon_obj::__mClass;

void HealthIcon_obj::__register()
{
	HealthIcon_obj _hx_dummy;
	HealthIcon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HealthIcon",55,be,f9,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HealthIcon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HealthIcon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HealthIcon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HealthIcon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

