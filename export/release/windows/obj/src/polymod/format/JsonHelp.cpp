#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_polymod_format_JsonHelp
#include <polymod/format/JsonHelp.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9c18bffd7895cc1b_29_bool,"polymod.format.JsonHelp","bool",0x50ccdd90,"polymod.format.JsonHelp.bool","polymod/format/JsonHelp.hx",29,0x7164f0d6)
HX_LOCAL_STACK_FRAME(_hx_pos_9c18bffd7895cc1b_39_int,"polymod.format.JsonHelp","int",0x1ac96249,"polymod.format.JsonHelp.int","polymod/format/JsonHelp.hx",39,0x7164f0d6)
HX_LOCAL_STACK_FRAME(_hx_pos_9c18bffd7895cc1b_49_float,"polymod.format.JsonHelp","float",0xae13a576,"polymod.format.JsonHelp.float","polymod/format/JsonHelp.hx",49,0x7164f0d6)
HX_LOCAL_STACK_FRAME(_hx_pos_9c18bffd7895cc1b_66_mapStr,"polymod.format.JsonHelp","mapStr",0x1ad2de5b,"polymod.format.JsonHelp.mapStr","polymod/format/JsonHelp.hx",66,0x7164f0d6)
HX_LOCAL_STACK_FRAME(_hx_pos_9c18bffd7895cc1b_82_str,"polymod.format.JsonHelp","str",0x1ad0fe0b,"polymod.format.JsonHelp.str","polymod/format/JsonHelp.hx",82,0x7164f0d6)
HX_LOCAL_STACK_FRAME(_hx_pos_9c18bffd7895cc1b_90_arrStr,"polymod.format.JsonHelp","arrStr",0x19acd3b6,"polymod.format.JsonHelp.arrStr","polymod/format/JsonHelp.hx",90,0x7164f0d6)
namespace polymod{
namespace format{

void JsonHelp_obj::__construct() { }

Dynamic JsonHelp_obj::__CreateEmpty() { return new JsonHelp_obj; }

void *JsonHelp_obj::_hx_vtable = 0;

Dynamic JsonHelp_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JsonHelp_obj > _hx_result = new JsonHelp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JsonHelp_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x626a4b56;
}

bool JsonHelp_obj::_hx_bool( ::Dynamic json,::String field,::hx::Null< bool >  __o_defaultValue){
            		bool defaultValue = __o_defaultValue.Default(false);
            	HX_STACKFRAME(&_hx_pos_9c18bffd7895cc1b_29_bool)
HXLINE(  30)		::String str = HX_("",00,00,00,00);
HXLINE(  31)		if (::Reflect_obj::hasField(json,field)) {
HXLINE(  31)			str = ( (::String)(::Reflect_obj::field(json,field)) );
            		}
HXLINE(  32)		bool _hx_tmp;
HXDLIN(  32)		if (::hx::IsNotNull( str )) {
HXLINE(  32)			_hx_tmp = (str == HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  32)			_hx_tmp = true;
            		}
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  32)			return defaultValue;
            		}
HXLINE(  33)		str = str.toLowerCase();
HXLINE(  34)		if ((str == HX_("true",4e,a7,03,4d))) {
HXLINE(  34)			return true;
            		}
HXLINE(  35)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JsonHelp_obj,_hx_bool,return )

int JsonHelp_obj::_hx_int( ::Dynamic json,::String field,::hx::Null< int >  __o_defaultValue){
            		int defaultValue = __o_defaultValue.Default(0);
            	HX_STACKFRAME(&_hx_pos_9c18bffd7895cc1b_39_int)
HXLINE(  40)		::String str = HX_("",00,00,00,00);
HXLINE(  41)		if (::Reflect_obj::hasField(json,field)) {
HXLINE(  41)			str = ( (::String)(::Reflect_obj::field(json,field)) );
            		}
HXLINE(  42)		bool _hx_tmp;
HXDLIN(  42)		if (::hx::IsNotNull( str )) {
HXLINE(  42)			_hx_tmp = (str == HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  42)			_hx_tmp = true;
            		}
HXDLIN(  42)		if (_hx_tmp) {
HXLINE(  42)			return defaultValue;
            		}
HXLINE(  43)		 ::Dynamic i = ::Std_obj::parseInt(str);
HXLINE(  44)		if (::hx::IsNull( i )) {
HXLINE(  44)			return defaultValue;
            		}
HXLINE(  45)		return ( (int)(i) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JsonHelp_obj,_hx_int,return )

Float JsonHelp_obj::_hx_float( ::Dynamic json,::String field,::hx::Null< Float >  __o_defaultValue){
            		Float defaultValue = __o_defaultValue.Default(0);
            	HX_STACKFRAME(&_hx_pos_9c18bffd7895cc1b_49_float)
HXLINE(  50)		::String str = HX_("",00,00,00,00);
HXLINE(  51)		if (::Reflect_obj::hasField(json,field)) {
HXLINE(  51)			str = ( (::String)(::Reflect_obj::field(json,field)) );
            		}
HXLINE(  52)		bool _hx_tmp;
HXDLIN(  52)		if (::hx::IsNotNull( str )) {
HXLINE(  52)			_hx_tmp = (str == HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  52)			_hx_tmp = true;
            		}
HXDLIN(  52)		if (_hx_tmp) {
HXLINE(  52)			return defaultValue;
            		}
HXLINE(  53)		Float f = ::Math_obj::NaN;
HXLINE(  54)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  55)			f = ::Std_obj::parseFloat(str);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  56)				{
HXLINE(  56)					null();
            				}
HXLINE(  57)				f = ::Math_obj::NaN;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  59)		if (::Math_obj::isNaN(f)) {
HXLINE(  59)			return defaultValue;
            		}
HXLINE(  60)		return f;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JsonHelp_obj,_hx_float,return )

 ::haxe::ds::StringMap JsonHelp_obj::mapStr( ::Dynamic json,::String field){
            	HX_GC_STACKFRAME(&_hx_pos_9c18bffd7895cc1b_66_mapStr)
HXLINE(  67)		 ::haxe::ds::StringMap map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  68)		bool _hx_tmp;
HXDLIN(  68)		bool _hx_tmp1;
HXDLIN(  68)		if (::hx::IsNotNull( json )) {
HXLINE(  68)			_hx_tmp1 = (field == HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  68)			_hx_tmp1 = true;
            		}
HXDLIN(  68)		if (!(_hx_tmp1)) {
HXLINE(  68)			_hx_tmp = ::hx::IsNull( field );
            		}
            		else {
HXLINE(  68)			_hx_tmp = true;
            		}
HXDLIN(  68)		if (_hx_tmp) {
HXLINE(  68)			return map;
            		}
HXLINE(  69)		 ::Dynamic val = null();
HXLINE(  70)		if (::Reflect_obj::hasField(json,field)) {
HXLINE(  70)			val = ::Reflect_obj::field(json,field);
            		}
HXLINE(  71)		if (::hx::IsNotNull( val )) {
HXLINE(  73)			int _g = 0;
HXDLIN(  73)			::Array< ::String > _g1 = ::Reflect_obj::fields(val);
HXDLIN(  73)			while((_g < _g1->length)){
HXLINE(  73)				::String field = _g1->__get(_g);
HXDLIN(  73)				_g = (_g + 1);
HXLINE(  74)				 ::Dynamic fieldVal = ::Reflect_obj::field(val,field);
HXLINE(  75)				map->set(field,::Std_obj::string(fieldVal));
            			}
            		}
HXLINE(  78)		return map;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JsonHelp_obj,mapStr,return )

::String JsonHelp_obj::str( ::Dynamic json,::String field,::String __o_defaultValue){
            		::String defaultValue = __o_defaultValue;
            		if (::hx::IsNull(__o_defaultValue)) defaultValue = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_9c18bffd7895cc1b_82_str)
HXLINE(  83)		::String str = HX_("",00,00,00,00);
HXLINE(  84)		if (::Reflect_obj::hasField(json,field)) {
HXLINE(  84)			str = ( (::String)(::Reflect_obj::field(json,field)) );
            		}
HXLINE(  85)		bool _hx_tmp;
HXDLIN(  85)		if (::hx::IsNotNull( str )) {
HXLINE(  85)			_hx_tmp = (str == HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  85)			_hx_tmp = true;
            		}
HXDLIN(  85)		if (_hx_tmp) {
HXLINE(  85)			return defaultValue;
            		}
HXLINE(  86)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JsonHelp_obj,str,return )

::Array< ::String > JsonHelp_obj::arrStr( ::Dynamic json,::String field,::Array< ::String > defaultValue){
            	HX_STACKFRAME(&_hx_pos_9c18bffd7895cc1b_90_arrStr)
HXLINE(  91)		 ::Dynamic val = null();
HXLINE(  92)		if (::Reflect_obj::hasField(json,field)) {
HXLINE(  92)			val = ::Reflect_obj::field(json,field);
            		}
HXLINE(  93)		bool _hx_tmp;
HXDLIN(  93)		if (::hx::IsNotNull( val )) {
HXLINE(  93)			_hx_tmp = ::Std_obj::isOfType(val,( ( ::Dynamic)(::hx::ArrayBase::__mClass) ));
            		}
            		else {
HXLINE(  93)			_hx_tmp = false;
            		}
HXDLIN(  93)		if (_hx_tmp) {
HXLINE(  95)			return ( (::Array< ::String >)(val) );
            		}
HXLINE(  97)		return defaultValue;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JsonHelp_obj,arrStr,return )


JsonHelp_obj::JsonHelp_obj()
{
}

bool JsonHelp_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { outValue = _hx_int_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"str") ) { outValue = str_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bool") ) { outValue = _hx_bool_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { outValue = _hx_float_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mapStr") ) { outValue = mapStr_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"arrStr") ) { outValue = arrStr_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *JsonHelp_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *JsonHelp_obj_sStaticStorageInfo = 0;
#endif

::hx::Class JsonHelp_obj::__mClass;

static ::String JsonHelp_obj_sStaticFields[] = {
	HX_("bool",2a,84,1b,41),
	HX_("int",ef,0c,50,00),
	HX_("float",9c,c5,96,02),
	HX_("mapStr",75,df,0b,b9),
	HX_("str",b1,a8,57,00),
	HX_("arrStr",d0,d4,e5,b7),
	::String(null())
};

void JsonHelp_obj::__register()
{
	JsonHelp_obj _hx_dummy;
	JsonHelp_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.format.JsonHelp",c8,80,2d,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JsonHelp_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(JsonHelp_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< JsonHelp_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JsonHelp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JsonHelp_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace format
