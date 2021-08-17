#include <hxcpp.h>

#ifndef INCLUDED_b51bf83fd355e1db
#define INCLUDED_b51bf83fd355e1db
#include "hxcpp.h"
#endif
#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_llua_Convert
#include <llua/Convert.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_12_toLua,"llua.Convert","toLua",0x3fb91700,"llua.Convert.toLua","llua/Convert.hx",12,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_41_arrayToLua,"llua.Convert","arrayToLua",0x07e2abc1,"llua.Convert.arrayToLua","llua/Convert.hx",41,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_54_objectToLua,"llua.Convert","objectToLua",0xf6f99801,"llua.Convert.objectToLua","llua/Convert.hx",54,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_68_fromLua,"llua.Convert","fromLua",0x7fff7d31,"llua.Convert.fromLua","llua/Convert.hx",68,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_104_fromLuaTable,"llua.Convert","fromLuaTable",0xf549391d,"llua.Convert.fromLuaTable","llua/Convert.hx",104,0x49e36a6e)
namespace llua{

void Convert_obj::__construct() { }

Dynamic Convert_obj::__CreateEmpty() { return new Convert_obj; }

void *Convert_obj::_hx_vtable = 0;

Dynamic Convert_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Convert_obj > _hx_result = new Convert_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Convert_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x70578207;
}

bool Convert_obj::toLua( cpp::Reference<lua_State> l, ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_12_toLua)
HXLINE(  14)		{
HXLINE(  14)			 ::ValueType _g = ::Type_obj::_hx_typeof(val);
HXDLIN(  14)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE(  16)					lua_pushnil(l);
            				}
            				break;
            				case (int)1: {
HXLINE(  20)					lua_pushinteger(l,::hx::TCast< int >::cast(val));
            				}
            				break;
            				case (int)2: {
HXLINE(  22)					lua_pushnumber(l,( (Float)(val) ));
            				}
            				break;
            				case (int)3: {
HXLINE(  18)					int _hx_tmp;
HXDLIN(  18)					if ((( (bool)(val) ) == true)) {
HXLINE(  18)						_hx_tmp = 1;
            					}
            					else {
HXLINE(  18)						_hx_tmp = 0;
            					}
HXDLIN(  18)					lua_pushboolean(l,_hx_tmp);
            				}
            				break;
            				case (int)4: {
HXLINE(  28)					lua_createtable(l,0,0);
HXDLIN(  28)					{
HXLINE(  28)						int _g = 0;
HXDLIN(  28)						::Array< ::String > _g1 = ::Reflect_obj::fields(val);
HXDLIN(  28)						while((_g < _g1->length)){
HXLINE(  28)							::String n = _g1->__get(_g);
HXDLIN(  28)							_g = (_g + 1);
HXDLIN(  28)							lua_pushstring(l,n);
HXDLIN(  28)							::llua::Convert_obj::toLua(l,::Reflect_obj::field(val,n));
HXDLIN(  28)							lua_settable(l,-3);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE(  25)					::hx::Class _hx_switch_0 = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
            					if (  (_hx_switch_0==::hx::ArrayBase::__mClass) ){
HXLINE(  26)						::cpp::VirtualArray arr = ( (::cpp::VirtualArray)(val) );
HXDLIN(  26)						int size = arr->get_length();
HXDLIN(  26)						lua_createtable(l,size,0);
HXDLIN(  26)						{
HXLINE(  26)							int _g = 0;
HXDLIN(  26)							int _g1 = size;
HXDLIN(  26)							while((_g < _g1)){
HXLINE(  26)								_g = (_g + 1);
HXDLIN(  26)								int i = (_g - 1);
HXDLIN(  26)								lua_pushnumber(l,( (Float)((i + 1)) ));
HXDLIN(  26)								::llua::Convert_obj::toLua(l,arr->__get(i));
HXDLIN(  26)								lua_settable(l,-3);
            							}
            						}
HXDLIN(  26)						goto _hx_goto_1;
            					}
            					if (  (_hx_switch_0==::hx::ClassOf< ::String >()) ){
HXLINE(  24)						lua_pushstring(l,::hx::TCast< ::String >::cast(val));
HXDLIN(  24)						goto _hx_goto_1;
            					}
            					/* default */{
HXLINE(  33)						::haxe::Log_obj::trace(HX_("haxe value not supported\n",12,9a,82,3a),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),33,HX_("llua.Convert",31,b8,44,19),HX_("toLua",fd,0a,14,14)));
HXLINE(  34)						return false;
            					}
            					_hx_goto_1:;
            				}
            				break;
            				default:{
HXLINE(  33)					::haxe::Log_obj::trace(HX_("haxe value not supported\n",12,9a,82,3a),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),33,HX_("llua.Convert",31,b8,44,19),HX_("toLua",fd,0a,14,14)));
HXLINE(  34)					return false;
            				}
            			}
            		}
HXLINE(  37)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,toLua,return )

void Convert_obj::arrayToLua( cpp::Reference<lua_State> l,::cpp::VirtualArray arr){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_41_arrayToLua)
HXLINE(  43)		int size = arr->get_length();
HXLINE(  44)		lua_createtable(l,size,0);
HXLINE(  46)		{
HXLINE(  46)			int _g = 0;
HXDLIN(  46)			int _g1 = size;
HXDLIN(  46)			while((_g < _g1)){
HXLINE(  46)				_g = (_g + 1);
HXDLIN(  46)				int i = (_g - 1);
HXLINE(  47)				lua_pushnumber(l,( (Float)((i + 1)) ));
HXLINE(  48)				::llua::Convert_obj::toLua(l,arr->__get(i));
HXLINE(  49)				lua_settable(l,-3);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,arrayToLua,(void))

void Convert_obj::objectToLua( cpp::Reference<lua_State> l, ::Dynamic res){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_54_objectToLua)
HXLINE(  56)		lua_createtable(l,0,0);
HXLINE(  57)		{
HXLINE(  57)			int _g = 0;
HXDLIN(  57)			::Array< ::String > _g1 = ::Reflect_obj::fields(res);
HXDLIN(  57)			while((_g < _g1->length)){
HXLINE(  57)				::String n = _g1->__get(_g);
HXDLIN(  57)				_g = (_g + 1);
HXLINE(  58)				lua_pushstring(l,n);
HXLINE(  59)				::llua::Convert_obj::toLua(l,::Reflect_obj::field(res,n));
HXLINE(  60)				lua_settable(l,-3);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,objectToLua,(void))

 ::Dynamic Convert_obj::fromLua( cpp::Reference<lua_State> l,int v){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_68_fromLua)
HXLINE(  70)		 ::Dynamic ret = null();
HXLINE(  72)		switch((int)(lua_type(l,v))){
            			case (int)0: {
HXLINE(  74)				ret = null();
            			}
            			break;
            			case (int)1: {
HXLINE(  76)				ret = (lua_toboolean(l,v) != 0);
            			}
            			break;
            			case (int)3: {
HXLINE(  78)				ret = lua_tonumber(l,v);
            			}
            			break;
            			case (int)4: {
HXLINE(  80)				ret = linc::lua::tostring(l,v);
            			}
            			break;
            			case (int)5: {
HXLINE(  82)				bool array = true;
HXDLIN(  82)				 ::Dynamic ret1 = null();
HXDLIN(  82)				lua_pushnil(l);
HXDLIN(  82)				while((lua_next(l,-2) != 0)){
HXLINE(  82)					if ((lua_type(l,-2) != 3)) {
HXLINE(  82)						array = false;
HXDLIN(  82)						lua_pop(l,2);
HXDLIN(  82)						goto _hx_goto_8;
            					}
HXDLIN(  82)					Float n = lua_tonumber(l,-2);
HXDLIN(  82)					if ((n != ::Std_obj::_hx_int(n))) {
HXLINE(  82)						array = false;
HXDLIN(  82)						lua_pop(l,2);
HXDLIN(  82)						goto _hx_goto_8;
            					}
HXDLIN(  82)					lua_pop(l,1);
            				}
            				_hx_goto_8:;
HXDLIN(  82)				if (array) {
HXLINE(  82)					::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  82)					lua_pushnil(l);
HXDLIN(  82)					while((lua_next(l,-2) != 0)){
HXLINE(  82)						int index = (lua_tointeger(l,-2) - 1);
HXDLIN(  82)						arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN(  82)						lua_pop(l,1);
            					}
HXDLIN(  82)					ret1 = arr;
            				}
            				else {
HXLINE(  82)					 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN(  82)					lua_pushnil(l);
HXDLIN(  82)					while((lua_next(l,-2) != 0)){
HXLINE(  82)						::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN(  82)						obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN(  82)						lua_pop(l,1);
            					}
HXDLIN(  82)					ret1 = obj;
            				}
HXDLIN(  82)				ret = ret1;
            			}
            			break;
            			default:{
HXLINE(  96)				ret = null();
HXLINE(  97)				::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),97,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            			}
            		}
HXLINE( 100)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,fromLua,return )

 ::Dynamic Convert_obj::fromLuaTable( cpp::Reference<lua_State> l){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_104_fromLuaTable)
HXLINE( 106)		bool array = true;
HXLINE( 107)		 ::Dynamic ret = null();
HXLINE( 109)		lua_pushnil(l);
HXLINE( 110)		while((lua_next(l,-2) != 0)){
HXLINE( 112)			if ((lua_type(l,-2) != 3)) {
HXLINE( 113)				array = false;
HXLINE( 114)				lua_pop(l,2);
HXLINE( 115)				goto _hx_goto_12;
            			}
HXLINE( 119)			Float n = lua_tonumber(l,-2);
HXLINE( 120)			if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 121)				array = false;
HXLINE( 122)				lua_pop(l,2);
HXLINE( 123)				goto _hx_goto_12;
            			}
HXLINE( 126)			lua_pop(l,1);
            		}
            		_hx_goto_12:;
HXLINE( 130)		if (array) {
HXLINE( 132)			::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 133)			lua_pushnil(l);
HXLINE( 134)			while((lua_next(l,-2) != 0)){
HXLINE( 135)				int index = (lua_tointeger(l,-2) - 1);
HXLINE( 136)				 ::Dynamic ret = null();
HXDLIN( 136)				switch((int)(lua_type(l,-1))){
            					case (int)0: {
HXLINE( 136)						ret = null();
            					}
            					break;
            					case (int)1: {
HXLINE( 136)						ret = (lua_toboolean(l,-1) != 0);
            					}
            					break;
            					case (int)3: {
HXLINE( 136)						ret = lua_tonumber(l,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 136)						ret = linc::lua::tostring(l,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 136)						bool array = true;
HXDLIN( 136)						 ::Dynamic ret1 = null();
HXDLIN( 136)						lua_pushnil(l);
HXDLIN( 136)						while((lua_next(l,-2) != 0)){
HXLINE( 136)							if ((lua_type(l,-2) != 3)) {
HXLINE( 136)								array = false;
HXDLIN( 136)								lua_pop(l,2);
HXDLIN( 136)								goto _hx_goto_14;
            							}
HXDLIN( 136)							Float n = lua_tonumber(l,-2);
HXDLIN( 136)							if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 136)								array = false;
HXDLIN( 136)								lua_pop(l,2);
HXDLIN( 136)								goto _hx_goto_14;
            							}
HXDLIN( 136)							lua_pop(l,1);
            						}
            						_hx_goto_14:;
HXDLIN( 136)						if (array) {
HXLINE( 136)							::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 136)							lua_pushnil(l);
HXDLIN( 136)							while((lua_next(l,-2) != 0)){
HXLINE( 136)								int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 136)								arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 136)								lua_pop(l,1);
            							}
HXDLIN( 136)							ret1 = arr;
            						}
            						else {
HXLINE( 136)							 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 136)							lua_pushnil(l);
HXDLIN( 136)							while((lua_next(l,-2) != 0)){
HXLINE( 136)								::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 136)								obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 136)								lua_pop(l,1);
            							}
HXDLIN( 136)							ret1 = obj;
            						}
HXDLIN( 136)						ret = ret1;
            					}
            					break;
            					default:{
HXLINE( 136)						ret = null();
HXDLIN( 136)						::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),97,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            					}
            				}
HXDLIN( 136)				arr->set(index,ret);
HXLINE( 137)				lua_pop(l,1);
            			}
HXLINE( 139)			ret = arr;
            		}
            		else {
HXLINE( 143)			 hx::Anon obj = hx::Anon_obj::Create();
HXLINE( 144)			lua_pushnil(l);
HXLINE( 145)			while((lua_next(l,-2) != 0)){
HXLINE( 146)				 ::Dynamic ret = null();
HXDLIN( 146)				switch((int)(lua_type(l,-2))){
            					case (int)0: {
HXLINE( 146)						ret = null();
            					}
            					break;
            					case (int)1: {
HXLINE( 146)						ret = (lua_toboolean(l,-2) != 0);
            					}
            					break;
            					case (int)3: {
HXLINE( 146)						ret = lua_tonumber(l,-2);
            					}
            					break;
            					case (int)4: {
HXLINE( 146)						ret = linc::lua::tostring(l,-2);
            					}
            					break;
            					case (int)5: {
HXLINE( 146)						bool array = true;
HXDLIN( 146)						 ::Dynamic ret1 = null();
HXDLIN( 146)						lua_pushnil(l);
HXDLIN( 146)						while((lua_next(l,-2) != 0)){
HXLINE( 146)							if ((lua_type(l,-2) != 3)) {
HXLINE( 146)								array = false;
HXDLIN( 146)								lua_pop(l,2);
HXDLIN( 146)								goto _hx_goto_18;
            							}
HXDLIN( 146)							Float n = lua_tonumber(l,-2);
HXDLIN( 146)							if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 146)								array = false;
HXDLIN( 146)								lua_pop(l,2);
HXDLIN( 146)								goto _hx_goto_18;
            							}
HXDLIN( 146)							lua_pop(l,1);
            						}
            						_hx_goto_18:;
HXDLIN( 146)						if (array) {
HXLINE( 146)							::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 146)							lua_pushnil(l);
HXDLIN( 146)							while((lua_next(l,-2) != 0)){
HXLINE( 146)								int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 146)								 ::Dynamic ret = null();
HXDLIN( 146)								switch((int)(lua_type(l,-1))){
            									case (int)0: {
HXLINE( 146)										ret = null();
            									}
            									break;
            									case (int)1: {
HXLINE( 146)										ret = (lua_toboolean(l,-1) != 0);
            									}
            									break;
            									case (int)3: {
HXLINE( 146)										ret = lua_tonumber(l,-1);
            									}
            									break;
            									case (int)4: {
HXLINE( 146)										ret = linc::lua::tostring(l,-1);
            									}
            									break;
            									case (int)5: {
HXLINE( 146)										bool array = true;
HXDLIN( 146)										 ::Dynamic ret1 = null();
HXDLIN( 146)										lua_pushnil(l);
HXDLIN( 146)										while((lua_next(l,-2) != 0)){
HXLINE( 146)											if ((lua_type(l,-2) != 3)) {
HXLINE( 146)												array = false;
HXDLIN( 146)												lua_pop(l,2);
HXDLIN( 146)												goto _hx_goto_20;
            											}
HXDLIN( 146)											Float n = lua_tonumber(l,-2);
HXDLIN( 146)											if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 146)												array = false;
HXDLIN( 146)												lua_pop(l,2);
HXDLIN( 146)												goto _hx_goto_20;
            											}
HXDLIN( 146)											lua_pop(l,1);
            										}
            										_hx_goto_20:;
HXDLIN( 146)										if (array) {
HXLINE( 146)											::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 146)											lua_pushnil(l);
HXDLIN( 146)											while((lua_next(l,-2) != 0)){
HXLINE( 146)												int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 146)												arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 146)												lua_pop(l,1);
            											}
HXDLIN( 146)											ret1 = arr;
            										}
            										else {
HXLINE( 146)											 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 146)											lua_pushnil(l);
HXDLIN( 146)											while((lua_next(l,-2) != 0)){
HXLINE( 146)												::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 146)												obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 146)												lua_pop(l,1);
            											}
HXDLIN( 146)											ret1 = obj;
            										}
HXDLIN( 146)										ret = ret1;
            									}
            									break;
            									default:{
HXLINE( 146)										ret = null();
HXDLIN( 146)										::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),97,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            									}
            								}
HXDLIN( 146)								arr->set(index,ret);
HXDLIN( 146)								lua_pop(l,1);
            							}
HXDLIN( 146)							ret1 = arr;
            						}
            						else {
HXLINE( 146)							 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 146)							lua_pushnil(l);
HXDLIN( 146)							while((lua_next(l,-2) != 0)){
HXLINE( 146)								 ::Dynamic ret = null();
HXDLIN( 146)								switch((int)(lua_type(l,-2))){
            									case (int)0: {
HXLINE( 146)										ret = null();
            									}
            									break;
            									case (int)1: {
HXLINE( 146)										ret = (lua_toboolean(l,-2) != 0);
            									}
            									break;
            									case (int)3: {
HXLINE( 146)										ret = lua_tonumber(l,-2);
            									}
            									break;
            									case (int)4: {
HXLINE( 146)										ret = linc::lua::tostring(l,-2);
            									}
            									break;
            									case (int)5: {
HXLINE( 146)										bool array = true;
HXDLIN( 146)										 ::Dynamic ret1 = null();
HXDLIN( 146)										lua_pushnil(l);
HXDLIN( 146)										while((lua_next(l,-2) != 0)){
HXLINE( 146)											if ((lua_type(l,-2) != 3)) {
HXLINE( 146)												array = false;
HXDLIN( 146)												lua_pop(l,2);
HXDLIN( 146)												goto _hx_goto_24;
            											}
HXDLIN( 146)											Float n = lua_tonumber(l,-2);
HXDLIN( 146)											if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 146)												array = false;
HXDLIN( 146)												lua_pop(l,2);
HXDLIN( 146)												goto _hx_goto_24;
            											}
HXDLIN( 146)											lua_pop(l,1);
            										}
            										_hx_goto_24:;
HXDLIN( 146)										if (array) {
HXLINE( 146)											::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 146)											lua_pushnil(l);
HXDLIN( 146)											while((lua_next(l,-2) != 0)){
HXLINE( 146)												int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 146)												arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 146)												lua_pop(l,1);
            											}
HXDLIN( 146)											ret1 = arr;
            										}
            										else {
HXLINE( 146)											 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 146)											lua_pushnil(l);
HXDLIN( 146)											while((lua_next(l,-2) != 0)){
HXLINE( 146)												::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 146)												obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 146)												lua_pop(l,1);
            											}
HXDLIN( 146)											ret1 = obj;
            										}
HXDLIN( 146)										ret = ret1;
            									}
            									break;
            									default:{
HXLINE( 146)										ret = null();
HXDLIN( 146)										::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),97,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            									}
            								}
HXDLIN( 146)								::String ret1 = ::Std_obj::string(ret);
HXDLIN( 146)								 ::Dynamic ret2 = null();
HXDLIN( 146)								switch((int)(lua_type(l,-1))){
            									case (int)0: {
HXLINE( 146)										ret2 = null();
            									}
            									break;
            									case (int)1: {
HXLINE( 146)										ret2 = (lua_toboolean(l,-1) != 0);
            									}
            									break;
            									case (int)3: {
HXLINE( 146)										ret2 = lua_tonumber(l,-1);
            									}
            									break;
            									case (int)4: {
HXLINE( 146)										ret2 = linc::lua::tostring(l,-1);
            									}
            									break;
            									case (int)5: {
HXLINE( 146)										bool array = true;
HXDLIN( 146)										 ::Dynamic ret = null();
HXDLIN( 146)										lua_pushnil(l);
HXDLIN( 146)										while((lua_next(l,-2) != 0)){
HXLINE( 146)											if ((lua_type(l,-2) != 3)) {
HXLINE( 146)												array = false;
HXDLIN( 146)												lua_pop(l,2);
HXDLIN( 146)												goto _hx_goto_27;
            											}
HXDLIN( 146)											Float n = lua_tonumber(l,-2);
HXDLIN( 146)											if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 146)												array = false;
HXDLIN( 146)												lua_pop(l,2);
HXDLIN( 146)												goto _hx_goto_27;
            											}
HXDLIN( 146)											lua_pop(l,1);
            										}
            										_hx_goto_27:;
HXDLIN( 146)										if (array) {
HXLINE( 146)											::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 146)											lua_pushnil(l);
HXDLIN( 146)											while((lua_next(l,-2) != 0)){
HXLINE( 146)												int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 146)												arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 146)												lua_pop(l,1);
            											}
HXDLIN( 146)											ret = arr;
            										}
            										else {
HXLINE( 146)											 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 146)											lua_pushnil(l);
HXDLIN( 146)											while((lua_next(l,-2) != 0)){
HXLINE( 146)												::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 146)												obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 146)												lua_pop(l,1);
            											}
HXDLIN( 146)											ret = obj;
            										}
HXDLIN( 146)										ret2 = ret;
            									}
            									break;
            									default:{
HXLINE( 146)										ret2 = null();
HXDLIN( 146)										::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),97,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            									}
            								}
HXDLIN( 146)								obj->hx::Anon_obj::Add(ret1,ret2);
HXDLIN( 146)								lua_pop(l,1);
            							}
HXDLIN( 146)							ret1 = obj;
            						}
HXDLIN( 146)						ret = ret1;
            					}
            					break;
            					default:{
HXLINE( 146)						ret = null();
HXDLIN( 146)						::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),97,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            					}
            				}
HXDLIN( 146)				::String _hx_tmp = ::Std_obj::string(ret);
HXDLIN( 146)				 ::Dynamic ret1 = null();
HXDLIN( 146)				switch((int)(lua_type(l,-1))){
            					case (int)0: {
HXLINE( 146)						ret1 = null();
            					}
            					break;
            					case (int)1: {
HXLINE( 146)						ret1 = (lua_toboolean(l,-1) != 0);
            					}
            					break;
            					case (int)3: {
HXLINE( 146)						ret1 = lua_tonumber(l,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 146)						ret1 = linc::lua::tostring(l,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 146)						bool array = true;
HXDLIN( 146)						 ::Dynamic ret = null();
HXDLIN( 146)						lua_pushnil(l);
HXDLIN( 146)						while((lua_next(l,-2) != 0)){
HXLINE( 146)							if ((lua_type(l,-2) != 3)) {
HXLINE( 146)								array = false;
HXDLIN( 146)								lua_pop(l,2);
HXDLIN( 146)								goto _hx_goto_30;
            							}
HXDLIN( 146)							Float n = lua_tonumber(l,-2);
HXDLIN( 146)							if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 146)								array = false;
HXDLIN( 146)								lua_pop(l,2);
HXDLIN( 146)								goto _hx_goto_30;
            							}
HXDLIN( 146)							lua_pop(l,1);
            						}
            						_hx_goto_30:;
HXDLIN( 146)						if (array) {
HXLINE( 146)							::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 146)							lua_pushnil(l);
HXDLIN( 146)							while((lua_next(l,-2) != 0)){
HXLINE( 146)								int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 146)								arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 146)								lua_pop(l,1);
            							}
HXDLIN( 146)							ret = arr;
            						}
            						else {
HXLINE( 146)							 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 146)							lua_pushnil(l);
HXDLIN( 146)							while((lua_next(l,-2) != 0)){
HXLINE( 146)								::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 146)								obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 146)								lua_pop(l,1);
            							}
HXDLIN( 146)							ret = obj;
            						}
HXDLIN( 146)						ret1 = ret;
            					}
            					break;
            					default:{
HXLINE( 146)						ret1 = null();
HXDLIN( 146)						::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),97,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            					}
            				}
HXDLIN( 146)				obj->hx::Anon_obj::Add(_hx_tmp,ret1);
HXLINE( 147)				lua_pop(l,1);
            			}
HXLINE( 149)			ret = obj;
            		}
HXLINE( 153)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,fromLuaTable,return )


Convert_obj::Convert_obj()
{
}

bool Convert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toLua") ) { outValue = toLua_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromLua") ) { outValue = fromLua_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"arrayToLua") ) { outValue = arrayToLua_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectToLua") ) { outValue = objectToLua_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromLuaTable") ) { outValue = fromLuaTable_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Convert_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Convert_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Convert_obj::__mClass;

static ::String Convert_obj_sStaticFields[] = {
	HX_("toLua",fd,0a,14,14),
	HX_("arrayToLua",a4,22,41,0e),
	HX_("objectToLua",be,27,43,83),
	HX_("fromLua",6e,2a,fd,57),
	HX_("fromLuaTable",c0,6e,5d,29),
	::String(null())
};

void Convert_obj::__register()
{
	Convert_obj _hx_dummy;
	Convert_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("llua.Convert",31,b8,44,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Convert_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Convert_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Convert_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Convert_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Convert_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace llua
