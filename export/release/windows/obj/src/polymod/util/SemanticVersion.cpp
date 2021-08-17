#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_polymod_util_SemanticVersion
#include <polymod/util/SemanticVersion.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad8fc9d174356b99_148_new,"polymod.util.SemanticVersion","new",0x2b1b6d90,"polymod.util.SemanticVersion.new","polymod/util/SemanticVersion.hx",148,0xe2d86840)
HX_LOCAL_STACK_FRAME(_hx_pos_ad8fc9d174356b99_156_checkCompatibility,"polymod.util.SemanticVersion","checkCompatibility",0x65d75718,"polymod.util.SemanticVersion.checkCompatibility","polymod/util/SemanticVersion.hx",156,0xe2d86840)
HX_LOCAL_STACK_FRAME(_hx_pos_ad8fc9d174356b99_174_compare,"polymod.util.SemanticVersion","compare",0xa9ff0dd5,"polymod.util.SemanticVersion.compare","polymod/util/SemanticVersion.hx",174,0xe2d86840)
HX_LOCAL_STACK_FRAME(_hx_pos_ad8fc9d174356b99_210_isEqualTo,"polymod.util.SemanticVersion","isEqualTo",0xa87d8cb5,"polymod.util.SemanticVersion.isEqualTo","polymod/util/SemanticVersion.hx",210,0xe2d86840)
HX_LOCAL_STACK_FRAME(_hx_pos_ad8fc9d174356b99_215_isNewerThan,"polymod.util.SemanticVersion","isNewerThan",0x099c1ab4,"polymod.util.SemanticVersion.isNewerThan","polymod/util/SemanticVersion.hx",215,0xe2d86840)
HX_LOCAL_STACK_FRAME(_hx_pos_ad8fc9d174356b99_220_toString,"polymod.util.SemanticVersion","toString",0xd50f657c,"polymod.util.SemanticVersion.toString","polymod/util/SemanticVersion.hx",220,0xe2d86840)
HX_LOCAL_STACK_FRAME(_hx_pos_ad8fc9d174356b99_34_fromString,"polymod.util.SemanticVersion","fromString",0xc9ff96ab,"polymod.util.SemanticVersion.fromString","polymod/util/SemanticVersion.hx",34,0xe2d86840)
namespace polymod{
namespace util{

void SemanticVersion_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ad8fc9d174356b99_148_new)
            	}

Dynamic SemanticVersion_obj::__CreateEmpty() { return new SemanticVersion_obj; }

void *SemanticVersion_obj::_hx_vtable = 0;

Dynamic SemanticVersion_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SemanticVersion_obj > _hx_result = new SemanticVersion_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SemanticVersion_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3992c45a;
}

int SemanticVersion_obj::checkCompatibility( ::polymod::util::SemanticVersion newer){
            	HX_STACKFRAME(&_hx_pos_ad8fc9d174356b99_156_checkCompatibility)
HXLINE( 157)		int score = 0;
HXLINE( 158)		bool _hx_tmp;
HXDLIN( 158)		bool _hx_tmp1;
HXDLIN( 158)		if ((newer->major != this->major)) {
HXLINE( 158)			_hx_tmp1 = (newer->major == -1);
            		}
            		else {
HXLINE( 158)			_hx_tmp1 = true;
            		}
HXDLIN( 158)		if (!(_hx_tmp1)) {
HXLINE( 158)			_hx_tmp = (this->major == -1);
            		}
            		else {
HXLINE( 158)			_hx_tmp = true;
            		}
HXDLIN( 158)		if (_hx_tmp) {
HXLINE( 160)			score = (score + 1);
HXLINE( 161)			bool _hx_tmp;
HXDLIN( 161)			bool _hx_tmp1;
HXDLIN( 161)			if ((newer->minor < this->minor)) {
HXLINE( 161)				_hx_tmp1 = (newer->minor == -1);
            			}
            			else {
HXLINE( 161)				_hx_tmp1 = true;
            			}
HXDLIN( 161)			if (!(_hx_tmp1)) {
HXLINE( 161)				_hx_tmp = (this->minor == -1);
            			}
            			else {
HXLINE( 161)				_hx_tmp = true;
            			}
HXDLIN( 161)			if (_hx_tmp) {
HXLINE( 163)				score = (score + 1);
HXLINE( 164)				bool _hx_tmp;
HXDLIN( 164)				bool _hx_tmp1;
HXDLIN( 164)				if ((newer->patch < this->patch)) {
HXLINE( 164)					_hx_tmp1 = (newer->patch == -1);
            				}
            				else {
HXLINE( 164)					_hx_tmp1 = true;
            				}
HXDLIN( 164)				if (!(_hx_tmp1)) {
HXLINE( 164)					_hx_tmp = (this->patch == -1);
            				}
            				else {
HXLINE( 164)					_hx_tmp = true;
            				}
HXDLIN( 164)				if (_hx_tmp) {
HXLINE( 166)					score = (score + 1);
            				}
            			}
            		}
HXLINE( 170)		return score;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SemanticVersion_obj,checkCompatibility,return )

int SemanticVersion_obj::compare( ::polymod::util::SemanticVersion other){
            	HX_STACKFRAME(&_hx_pos_ad8fc9d174356b99_174_compare)
HXLINE( 175)		bool _hx_tmp;
HXDLIN( 175)		if ((this->major != -1)) {
HXLINE( 175)			_hx_tmp = (other->major == -1);
            		}
            		else {
HXLINE( 175)			_hx_tmp = true;
            		}
HXDLIN( 175)		if (_hx_tmp) {
HXLINE( 175)			return 0;
            		}
HXLINE( 176)		if ((this->major > other->major)) {
HXLINE( 176)			return -1;
            		}
HXLINE( 177)		if ((this->major < other->major)) {
HXLINE( 177)			return 1;
            		}
HXLINE( 178)		bool _hx_tmp1;
HXDLIN( 178)		if ((this->minor != -1)) {
HXLINE( 178)			_hx_tmp1 = (other->minor == -1);
            		}
            		else {
HXLINE( 178)			_hx_tmp1 = true;
            		}
HXDLIN( 178)		if (_hx_tmp1) {
HXLINE( 178)			return 0;
            		}
HXLINE( 179)		if ((this->minor > other->minor)) {
HXLINE( 179)			return -1;
            		}
HXLINE( 180)		if ((this->minor < other->minor)) {
HXLINE( 180)			return 1;
            		}
HXLINE( 181)		bool _hx_tmp2;
HXDLIN( 181)		if ((this->patch != -1)) {
HXLINE( 181)			_hx_tmp2 = (other->patch == -1);
            		}
            		else {
HXLINE( 181)			_hx_tmp2 = true;
            		}
HXDLIN( 181)		if (_hx_tmp2) {
HXLINE( 181)			return 0;
            		}
HXLINE( 182)		if ((this->patch > other->patch)) {
HXLINE( 182)			return -1;
            		}
HXLINE( 183)		if ((this->patch < other->patch)) {
HXLINE( 183)			return 1;
            		}
HXLINE( 184)		int bits = this->preRelease->length;
HXLINE( 185)		int otherBits = other->preRelease->length;
HXLINE( 186)		if ((otherBits > bits)) {
HXLINE( 186)			bits = otherBits;
            		}
HXLINE( 187)		{
HXLINE( 187)			int _g = 0;
HXDLIN( 187)			int _g1 = bits;
HXDLIN( 187)			while((_g < _g1)){
HXLINE( 187)				_g = (_g + 1);
HXDLIN( 187)				int i = (_g - 1);
HXLINE( 188)				::String bit;
HXDLIN( 188)				bool bit1;
HXDLIN( 188)				if (::hx::IsNotNull( this->preRelease )) {
HXLINE( 188)					bit1 = (this->preRelease->length > i);
            				}
            				else {
HXLINE( 188)					bit1 = false;
            				}
HXDLIN( 188)				if (bit1) {
HXLINE( 188)					bit = this->preRelease->__get(i);
            				}
            				else {
HXLINE( 188)					bit = HX_("",00,00,00,00);
            				}
HXLINE( 189)				::String otherBit;
HXDLIN( 189)				bool otherBit1;
HXDLIN( 189)				if (::hx::IsNotNull( other->preRelease )) {
HXLINE( 189)					otherBit1 = (other->preRelease->length > i);
            				}
            				else {
HXLINE( 189)					otherBit1 = false;
            				}
HXDLIN( 189)				if (otherBit1) {
HXLINE( 189)					otherBit = other->preRelease->__get(i);
            				}
            				else {
HXLINE( 189)					otherBit = HX_("",00,00,00,00);
            				}
HXLINE( 190)				bool _hx_tmp;
HXDLIN( 190)				if ((bit == HX_("",00,00,00,00))) {
HXLINE( 190)					_hx_tmp = (otherBit != HX_("",00,00,00,00));
            				}
            				else {
HXLINE( 190)					_hx_tmp = false;
            				}
HXDLIN( 190)				if (_hx_tmp) {
HXLINE( 190)					return -1;
            				}
HXLINE( 191)				bool _hx_tmp1;
HXDLIN( 191)				if ((bit != HX_("",00,00,00,00))) {
HXLINE( 191)					_hx_tmp1 = (otherBit == HX_("",00,00,00,00));
            				}
            				else {
HXLINE( 191)					_hx_tmp1 = false;
            				}
HXDLIN( 191)				if (_hx_tmp1) {
HXLINE( 191)					return 1;
            				}
HXLINE( 192)				 ::Dynamic i1 = ::Std_obj::parseInt(bit);
HXLINE( 193)				 ::Dynamic j = ::Std_obj::parseInt(otherBit);
HXLINE( 194)				bool _hx_tmp2;
HXDLIN( 194)				if (::hx::IsNotNull( i1 )) {
HXLINE( 194)					_hx_tmp2 = ::hx::IsNotNull( j );
            				}
            				else {
HXLINE( 194)					_hx_tmp2 = false;
            				}
HXDLIN( 194)				if (_hx_tmp2) {
HXLINE( 196)					if (::hx::IsGreater( i1,j )) {
HXLINE( 196)						return -1;
            					}
HXLINE( 197)					if (::hx::IsLess( i1,j )) {
HXLINE( 197)						return 1;
            					}
            				}
            				else {
HXLINE( 201)					if ((bit > otherBit)) {
HXLINE( 201)						return -1;
            					}
HXLINE( 202)					if ((bit < otherBit)) {
HXLINE( 202)						return 1;
            					}
            				}
            			}
            		}
HXLINE( 205)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SemanticVersion_obj,compare,return )

bool SemanticVersion_obj::isEqualTo( ::polymod::util::SemanticVersion other){
            	HX_STACKFRAME(&_hx_pos_ad8fc9d174356b99_210_isEqualTo)
HXDLIN( 210)		return (this->compare(other) == 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SemanticVersion_obj,isEqualTo,return )

bool SemanticVersion_obj::isNewerThan( ::polymod::util::SemanticVersion other){
            	HX_STACKFRAME(&_hx_pos_ad8fc9d174356b99_215_isNewerThan)
HXDLIN( 215)		return (this->compare(other) == -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SemanticVersion_obj,isNewerThan,return )

::String SemanticVersion_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_ad8fc9d174356b99_220_toString)
HXDLIN( 220)		return this->effective;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SemanticVersion_obj,toString,return )

 ::polymod::util::SemanticVersion SemanticVersion_obj::fromString(::String str){
            	HX_GC_STACKFRAME(&_hx_pos_ad8fc9d174356b99_34_fromString)
HXLINE(  35)		 ::polymod::util::SemanticVersion v =  ::polymod::util::SemanticVersion_obj::__alloc( HX_CTX );
HXLINE(  36)		v->original = str;
HXLINE(  37)		bool _hx_tmp;
HXDLIN(  37)		if ((str != HX_("",00,00,00,00))) {
HXLINE(  37)			_hx_tmp = ::hx::IsNull( str );
            		}
            		else {
HXLINE(  37)			_hx_tmp = true;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  37)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("SemanticVersion.hx: string is empty!",6d,e3,65,74)));
            		}
HXLINE(  38)		::String extra = HX_("",00,00,00,00);
HXLINE(  39)		if ((str.indexOf(HX_("+",2b,00,00,00),null()) != -1)) {
HXLINE(  41)			::Array< ::String > arr = str.split(HX_("+",2b,00,00,00));
HXLINE(  42)			str = arr->__get(0);
            		}
HXLINE(  44)		if ((str.indexOf(HX_("-",2d,00,00,00),null()) != -1)) {
HXLINE(  46)			::Array< ::String > arr = str.split(HX_("-",2d,00,00,00));
HXLINE(  47)			str = arr->__get(0);
HXLINE(  48)			extra = arr->__get(1);
            		}
HXLINE(  50)		::Array< ::String > arr = str.split(HX_(".",2e,00,00,00));
HXLINE(  51)		if ((arr->length < 3)) {
HXLINE(  51)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("SemanticVersion.hx: needs major, minor, and patch versions! :\"",f4,ad,40,59) + str) + HX_("\"",22,00,00,00))));
            		}
HXLINE(  52)		{
HXLINE(  52)			int _g = 0;
HXDLIN(  52)			int _g1 = arr->length;
HXDLIN(  52)			while((_g < _g1)){
HXLINE(  52)				_g = (_g + 1);
HXDLIN(  52)				int ii = (_g - 1);
HXLINE(  54)				::String substr = arr->__get(ii);
HXLINE(  55)				bool _hx_tmp;
HXDLIN(  55)				if ((substr.length > 1)) {
HXLINE(  55)					_hx_tmp = (substr.charAt(0) == HX_("0",30,00,00,00));
            				}
            				else {
HXLINE(  55)					_hx_tmp = false;
            				}
HXDLIN(  55)				if (_hx_tmp) {
HXLINE(  57)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("SemanticVersion.hx: no leading zeroes allowed! :\"",2c,99,db,6d) + str) + HX_("\"",22,00,00,00))));
            				}
HXLINE(  59)				{
HXLINE(  59)					int _g1 = 0;
HXDLIN(  59)					int _g2 = substr.length;
HXDLIN(  59)					while((_g1 < _g2)){
HXLINE(  59)						_g1 = (_g1 + 1);
HXDLIN(  59)						int i = (_g1 - 1);
HXLINE(  61)						::String _hx_char = substr.charAt(i);
HXLINE(  62)						::String _hx_switch_0 = _hx_char;
            						if (  (_hx_switch_0==HX_("*",2a,00,00,00)) ||  (_hx_switch_0==HX_("0",30,00,00,00)) ||  (_hx_switch_0==HX_("1",31,00,00,00)) ||  (_hx_switch_0==HX_("2",32,00,00,00)) ||  (_hx_switch_0==HX_("3",33,00,00,00)) ||  (_hx_switch_0==HX_("4",34,00,00,00)) ||  (_hx_switch_0==HX_("5",35,00,00,00)) ||  (_hx_switch_0==HX_("6",36,00,00,00)) ||  (_hx_switch_0==HX_("7",37,00,00,00)) ||  (_hx_switch_0==HX_("8",38,00,00,00)) ||  (_hx_switch_0==HX_("9",39,00,00,00)) ){
HXLINE(  64)							goto _hx_goto_9;
            						}
            						/* default */{
HXLINE(  67)							::String word;
HXDLIN(  67)							switch((int)(ii)){
            								case (int)0: {
HXLINE(  67)									word = HX_("major",39,bd,1b,03);
            								}
            								break;
            								case (int)1: {
HXLINE(  67)									word = HX_("minor",35,7b,68,08);
            								}
            								break;
            								case (int)2: {
HXLINE(  67)									word = HX_("patch",c8,06,57,bd);
            								}
            								break;
            								default:{
HXLINE(  67)									word = HX_("",00,00,00,00);
            								}
            							}
HXLINE(  73)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("SemanticVersion.hx: couldn't parse ",21,61,91,29) + word) + HX_(" version! :\"",3f,8c,e5,f8)) + str) + HX_("\"",22,00,00,00))));
            						}
            						_hx_goto_9:;
            					}
            				}
            			}
            		}
HXLINE(  77)		 ::Dynamic maj = null();
HXLINE(  78)		 ::Dynamic min = null();
HXLINE(  79)		 ::Dynamic pat = null();
HXLINE(  80)		if ((arr->__get(0) == HX_("*",2a,00,00,00))) {
HXLINE(  80)			maj = -1;
            		}
HXLINE(  81)		if ((arr->__get(1) == HX_("*",2a,00,00,00))) {
HXLINE(  81)			min = -1;
            		}
HXLINE(  82)		if ((arr->__get(2) == HX_("*",2a,00,00,00))) {
HXLINE(  82)			pat = -1;
            		}
HXLINE(  83)		if (::hx::IsNull( maj )) {
HXLINE(  83)			maj = ::Std_obj::parseInt(arr->__get(0));
            		}
HXLINE(  84)		if (::hx::IsNull( min )) {
HXLINE(  84)			min = ::Std_obj::parseInt(arr->__get(1));
            		}
HXLINE(  85)		if (::hx::IsNull( pat )) {
HXLINE(  85)			pat = ::Std_obj::parseInt(arr->__get(2));
            		}
HXLINE(  86)		if (::hx::IsNull( maj )) {
HXLINE(  86)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("SemanticVersion.hx: couldn't parse major version! :\"",b7,04,b8,9c) + str) + HX_("\"",22,00,00,00))));
            		}
HXLINE(  87)		if (::hx::IsNull( min )) {
HXLINE(  87)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("SemanticVersion.hx: couldn't parse minor version! :\"",b3,cc,27,2a) + str) + HX_("\"",22,00,00,00))));
            		}
HXLINE(  88)		if (::hx::IsNull( pat )) {
HXLINE(  88)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("SemanticVersion.hx: couldn't parse patch version! :\"",c6,e8,c2,1d) + str) + HX_("\"",22,00,00,00))));
            		}
HXLINE(  90)		if (::hx::IsEq( maj,-1 )) {
HXLINE(  92)			min = -1;
HXLINE(  93)			pat = -1;
            		}
HXLINE(  95)		if (::hx::IsEq( min,-1 )) {
HXLINE(  97)			pat = -1;
            		}
HXLINE( 100)		v->major = ( (int)(maj) );
HXLINE( 101)		v->minor = ( (int)(min) );
HXLINE( 102)		v->patch = ( (int)(pat) );
HXLINE( 103)		v->preRelease = ::Array_obj< ::String >::__new(0);
HXLINE( 105)		bool _hx_tmp1;
HXDLIN( 105)		bool _hx_tmp2;
HXDLIN( 105)		if (::hx::IsNotEq( maj,-1 )) {
HXLINE( 105)			_hx_tmp2 = ::hx::IsEq( min,-1 );
            		}
            		else {
HXLINE( 105)			_hx_tmp2 = true;
            		}
HXDLIN( 105)		if (!(_hx_tmp2)) {
HXLINE( 105)			_hx_tmp1 = ::hx::IsEq( pat,-1 );
            		}
            		else {
HXLINE( 105)			_hx_tmp1 = true;
            		}
HXDLIN( 105)		if (_hx_tmp1) {
HXLINE( 107)			extra = HX_("",00,00,00,00);
            		}
HXLINE( 110)		bool _hx_tmp3;
HXDLIN( 110)		if (::hx::IsNotNull( extra )) {
HXLINE( 110)			_hx_tmp3 = (extra != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 110)			_hx_tmp3 = false;
            		}
HXDLIN( 110)		if (_hx_tmp3) {
HXLINE( 112)			if (::hx::IsGreater( maj,1 )) {
HXLINE( 112)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("SemanticVersion.hx: pre-release version not allowed post 1.0.0! :\"",9e,d7,4c,d5) + str) + HX_("\"",22,00,00,00))));
            			}
HXLINE( 113)			if (::hx::IsEq( maj,1 )) {
HXLINE( 114)				if (::hx::IsGreater( min,0 )) {
HXLINE( 114)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("SemanticVersion.hx: pre-release version not allowed post 1.0.0! :\"",9e,d7,4c,d5) + str) + HX_("\"",22,00,00,00))));
            				}
HXLINE( 115)				if (::hx::IsGreater( pat,0 )) {
HXLINE( 115)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("SemanticVersion.hx: pre-release version not allowed post 1.0.0! :\"",9e,d7,4c,d5) + str) + HX_("\"",22,00,00,00))));
            				}
            			}
HXLINE( 117)			::Array< ::String > arr = extra.split(HX_(".",2e,00,00,00));
HXLINE( 118)			bool _hx_tmp;
HXDLIN( 118)			if (::hx::IsNotNull( arr )) {
HXLINE( 118)				_hx_tmp = (arr->length > 0);
            			}
            			else {
HXLINE( 118)				_hx_tmp = false;
            			}
HXDLIN( 118)			if (_hx_tmp) {
HXLINE( 120)				int _g = 0;
HXDLIN( 120)				while((_g < arr->length)){
HXLINE( 120)					::String substr = arr->__get(_g);
HXDLIN( 120)					_g = (_g + 1);
HXLINE( 122)					 ::Dynamic i = ::Std_obj::parseInt(substr);
HXLINE( 123)					if (::hx::IsNotNull( i )) {
HXLINE( 125)						bool _hx_tmp;
HXDLIN( 125)						if ((substr.length > 0)) {
HXLINE( 125)							_hx_tmp = (substr.charAt(0) == HX_("0",30,00,00,00));
            						}
            						else {
HXLINE( 125)							_hx_tmp = false;
            						}
HXDLIN( 125)						if (_hx_tmp) {
HXLINE( 127)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("SemanticVersion.hx: no leading zeroes allowed! :\"",2c,99,db,6d) + str) + HX_("\"",22,00,00,00))));
            						}
            					}
HXLINE( 130)					v->preRelease->push(substr);
            				}
            			}
            		}
HXLINE( 134)		v->effective = ((((v->major + HX_(".",2e,00,00,00)) + v->minor) + HX_(".",2e,00,00,00)) + v->patch);
HXLINE( 135)		bool _hx_tmp4;
HXDLIN( 135)		if (::hx::IsNotNull( v->preRelease )) {
HXLINE( 135)			_hx_tmp4 = (v->preRelease->length > 0);
            		}
            		else {
HXLINE( 135)			_hx_tmp4 = false;
            		}
HXDLIN( 135)		if (_hx_tmp4) {
HXLINE( 136)			::String _hx_tmp = (v->effective + HX_("-",2d,00,00,00));
HXDLIN( 136)			v->effective = (_hx_tmp + v->preRelease->join(HX_(".",2e,00,00,00)));
            		}
HXLINE( 138)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SemanticVersion_obj,fromString,return )


::hx::ObjectPtr< SemanticVersion_obj > SemanticVersion_obj::__new() {
	::hx::ObjectPtr< SemanticVersion_obj > __this = new SemanticVersion_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SemanticVersion_obj > SemanticVersion_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SemanticVersion_obj *__this = (SemanticVersion_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SemanticVersion_obj), true, "polymod.util.SemanticVersion"));
	*(void **)__this = SemanticVersion_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SemanticVersion_obj::SemanticVersion_obj()
{
}

void SemanticVersion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SemanticVersion);
	HX_MARK_MEMBER_NAME(original,"original");
	HX_MARK_MEMBER_NAME(effective,"effective");
	HX_MARK_MEMBER_NAME(major,"major");
	HX_MARK_MEMBER_NAME(minor,"minor");
	HX_MARK_MEMBER_NAME(patch,"patch");
	HX_MARK_MEMBER_NAME(preRelease,"preRelease");
	HX_MARK_END_CLASS();
}

void SemanticVersion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(original,"original");
	HX_VISIT_MEMBER_NAME(effective,"effective");
	HX_VISIT_MEMBER_NAME(major,"major");
	HX_VISIT_MEMBER_NAME(minor,"minor");
	HX_VISIT_MEMBER_NAME(patch,"patch");
	HX_VISIT_MEMBER_NAME(preRelease,"preRelease");
}

::hx::Val SemanticVersion_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"major") ) { return ::hx::Val( major ); }
		if (HX_FIELD_EQ(inName,"minor") ) { return ::hx::Val( minor ); }
		if (HX_FIELD_EQ(inName,"patch") ) { return ::hx::Val( patch ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return ::hx::Val( compare_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"original") ) { return ::hx::Val( original ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"effective") ) { return ::hx::Val( effective ); }
		if (HX_FIELD_EQ(inName,"isEqualTo") ) { return ::hx::Val( isEqualTo_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"preRelease") ) { return ::hx::Val( preRelease ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isNewerThan") ) { return ::hx::Val( isNewerThan_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"checkCompatibility") ) { return ::hx::Val( checkCompatibility_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SemanticVersion_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

::hx::Val SemanticVersion_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"major") ) { major=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minor") ) { minor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"patch") ) { patch=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"original") ) { original=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"effective") ) { effective=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"preRelease") ) { preRelease=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SemanticVersion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("original",51,34,e8,e0));
	outFields->push(HX_("effective",e7,e9,98,44));
	outFields->push(HX_("major",39,bd,1b,03));
	outFields->push(HX_("minor",35,7b,68,08));
	outFields->push(HX_("patch",c8,06,57,bd));
	outFields->push(HX_("preRelease",e4,e7,3a,c7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SemanticVersion_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(SemanticVersion_obj,original),HX_("original",51,34,e8,e0)},
	{::hx::fsString,(int)offsetof(SemanticVersion_obj,effective),HX_("effective",e7,e9,98,44)},
	{::hx::fsInt,(int)offsetof(SemanticVersion_obj,major),HX_("major",39,bd,1b,03)},
	{::hx::fsInt,(int)offsetof(SemanticVersion_obj,minor),HX_("minor",35,7b,68,08)},
	{::hx::fsInt,(int)offsetof(SemanticVersion_obj,patch),HX_("patch",c8,06,57,bd)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(SemanticVersion_obj,preRelease),HX_("preRelease",e4,e7,3a,c7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SemanticVersion_obj_sStaticStorageInfo = 0;
#endif

static ::String SemanticVersion_obj_sMemberFields[] = {
	HX_("original",51,34,e8,e0),
	HX_("effective",e7,e9,98,44),
	HX_("major",39,bd,1b,03),
	HX_("minor",35,7b,68,08),
	HX_("patch",c8,06,57,bd),
	HX_("preRelease",e4,e7,3a,c7),
	HX_("checkCompatibility",48,9e,7e,76),
	HX_("compare",a5,18,69,83),
	HX_("isEqualTo",85,eb,9b,38),
	HX_("isNewerThan",84,cd,2b,a5),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class SemanticVersion_obj::__mClass;

static ::String SemanticVersion_obj_sStaticFields[] = {
	HX_("fromString",db,2d,74,54),
	::String(null())
};

void SemanticVersion_obj::__register()
{
	SemanticVersion_obj _hx_dummy;
	SemanticVersion_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.util.SemanticVersion",9e,a5,d9,14);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SemanticVersion_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SemanticVersion_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SemanticVersion_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SemanticVersion_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SemanticVersion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SemanticVersion_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace util
