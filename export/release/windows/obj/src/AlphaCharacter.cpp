#include <hxcpp.h>

#ifndef INCLUDED_AlphaCharacter
#include <AlphaCharacter.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_235_new,"AlphaCharacter","new",0xcdf30efd,"AlphaCharacter.new","Alphabet.hx",235,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_255_createBold,"AlphaCharacter","createBold",0x537dc1a4,"AlphaCharacter.createBold","Alphabet.hx",255,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_262_createLetter,"AlphaCharacter","createLetter",0xc29272c5,"AlphaCharacter.createLetter","Alphabet.hx",262,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_280_createNumber,"AlphaCharacter","createNumber",0xc1044ca8,"AlphaCharacter.createNumber","Alphabet.hx",280,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_288_createSymbol,"AlphaCharacter","createSymbol",0x0e677537,"AlphaCharacter.createSymbol","Alphabet.hx",288,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_237_boot,"AlphaCharacter","boot",0x5ed30ef5,"AlphaCharacter.boot","Alphabet.hx",237,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_239_boot,"AlphaCharacter","boot",0x5ed30ef5,"AlphaCharacter.boot","Alphabet.hx",239,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_241_boot,"AlphaCharacter","boot",0x5ed30ef5,"AlphaCharacter.boot","Alphabet.hx",241,0xc2e40fcb)

void AlphaCharacter_obj::__construct(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_235_new)
HXLINE( 243)		this->row = 0;
HXLINE( 247)		super::__construct(x,y,null());
HXLINE( 248)		::String library = null();
HXDLIN( 248)		::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("alphabet",b3,7c,38,21)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 248)		 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("alphabet",b3,7c,38,21)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 249)		this->set_frames(tex1);
HXLINE( 251)		this->set_antialiasing(true);
            	}

Dynamic AlphaCharacter_obj::__CreateEmpty() { return new AlphaCharacter_obj; }

void *AlphaCharacter_obj::_hx_vtable = 0;

Dynamic AlphaCharacter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AlphaCharacter_obj > _hx_result = new AlphaCharacter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AlphaCharacter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x10d46877) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x10d46877;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void AlphaCharacter_obj::createBold(::String letter){
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_255_createBold)
HXLINE( 256)		 ::flixel::animation::FlxAnimationController _hx_tmp = this->animation;
HXDLIN( 256)		_hx_tmp->addByPrefix(letter,(letter.toUpperCase() + HX_(" bold",a5,11,ee,ad)),24,null(),null(),null());
HXLINE( 257)		this->animation->play(letter,null(),null(),null());
HXLINE( 258)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AlphaCharacter_obj,createBold,(void))

void AlphaCharacter_obj::createLetter(::String letter){
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_262_createLetter)
HXLINE( 263)		::String letterCase = HX_("lowercase",31,ad,a5,66);
HXLINE( 264)		if ((letter.toLowerCase() != letter)) {
HXLINE( 266)			letterCase = HX_("capital",a8,a6,0b,a0);
            		}
HXLINE( 269)		this->animation->addByPrefix(letter,((letter + HX_(" ",20,00,00,00)) + letterCase),24,null(),null(),null());
HXLINE( 270)		this->animation->play(letter,null(),null(),null());
HXLINE( 271)		this->updateHitbox();
HXLINE( 275)		this->set_y((( (Float)(110) ) - this->get_height()));
HXLINE( 276)		this->set_y((this->y + (this->row * 60)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AlphaCharacter_obj,createLetter,(void))

void AlphaCharacter_obj::createNumber(::String letter){
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_280_createNumber)
HXLINE( 281)		this->animation->addByPrefix(letter,letter,24,null(),null(),null());
HXLINE( 282)		this->animation->play(letter,null(),null(),null());
HXLINE( 284)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AlphaCharacter_obj,createNumber,(void))

void AlphaCharacter_obj::createSymbol(::String letter){
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_288_createSymbol)
HXLINE( 289)		::String _hx_switch_0 = letter;
            		if (  (_hx_switch_0==HX_(" ",20,00,00,00)) ){
HXLINE( 345)			this->animation->addByPrefix(letter,HX_("space",c6,8c,66,81),24,null(),null(),null());
HXLINE( 346)			this->animation->play(letter,null(),null(),null());
HXLINE( 344)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("!",21,00,00,00)) ){
HXLINE( 303)			this->animation->addByPrefix(letter,HX_("exclamation point",dd,17,c1,eb),24,null(),null(),null());
HXLINE( 304)			this->animation->play(letter,null(),null(),null());
HXLINE( 302)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("\"",22,00,00,00)) ){
HXLINE( 334)			this->animation->addByPrefix(letter,HX_("\"",22,00,00,00),24,null(),null(),null());
HXLINE( 335)			this->animation->play(letter,null(),null(),null());
HXLINE( 336)			this->set_y(this->y);
HXLINE( 333)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("#",23,00,00,00)) ){
HXLINE( 310)			this->animation->addByPrefix(letter,HX_("#",23,00,00,00),24,null(),null(),null());
HXLINE( 311)			this->animation->play(letter,null(),null(),null());
HXLINE( 309)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("$",24,00,00,00)) ){
HXLINE( 313)			this->animation->addByPrefix(letter,HX_("$",24,00,00,00),24,null(),null(),null());
HXLINE( 314)			this->animation->play(letter,null(),null(),null());
HXLINE( 312)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("%",25,00,00,00)) ){
HXLINE( 316)			this->animation->addByPrefix(letter,HX_("%",25,00,00,00),24,null(),null(),null());
HXLINE( 317)			this->animation->play(letter,null(),null(),null());
HXLINE( 315)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("&",26,00,00,00)) ){
HXLINE( 319)			this->animation->addByPrefix(letter,HX_("&",26,00,00,00),24,null(),null(),null());
HXLINE( 320)			this->animation->play(letter,null(),null(),null());
HXLINE( 318)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("'",27,00,00,00)) ){
HXLINE( 296)			this->animation->addByPrefix(letter,HX_("apostraphie",04,43,cf,ad),24,null(),null(),null());
HXLINE( 297)			this->animation->play(letter,null(),null(),null());
HXLINE( 298)			this->set_y(this->y);
HXLINE( 295)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("(",28,00,00,00)) ){
HXLINE( 322)			this->animation->addByPrefix(letter,HX_("(",28,00,00,00),24,null(),null(),null());
HXLINE( 323)			this->animation->play(letter,null(),null(),null());
HXLINE( 321)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_(")",29,00,00,00)) ){
HXLINE( 325)			this->animation->addByPrefix(letter,HX_(")",29,00,00,00),24,null(),null(),null());
HXLINE( 326)			this->animation->play(letter,null(),null(),null());
HXLINE( 324)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("+",2b,00,00,00)) ){
HXLINE( 328)			this->animation->addByPrefix(letter,HX_("+",2b,00,00,00),24,null(),null(),null());
HXLINE( 329)			this->animation->play(letter,null(),null(),null());
HXLINE( 327)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("-",2d,00,00,00)) ){
HXLINE( 331)			this->animation->addByPrefix(letter,HX_("-",2d,00,00,00),24,null(),null(),null());
HXLINE( 332)			this->animation->play(letter,null(),null(),null());
HXLINE( 330)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_(".",2e,00,00,00)) ){
HXLINE( 292)			this->animation->addByPrefix(letter,HX_("period",01,61,1b,3b),24,null(),null(),null());
HXLINE( 293)			this->animation->play(letter,null(),null(),null());
HXLINE( 294)			this->set_y((this->y + 50));
HXLINE( 291)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("?",3f,00,00,00)) ){
HXLINE( 300)			this->animation->addByPrefix(letter,HX_("question mark",47,0b,f6,d2),24,null(),null(),null());
HXLINE( 301)			this->animation->play(letter,null(),null(),null());
HXLINE( 299)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("@",40,00,00,00)) ){
HXLINE( 338)			this->animation->addByPrefix(letter,HX_("@",40,00,00,00),24,null(),null(),null());
HXLINE( 339)			this->animation->play(letter,null(),null(),null());
HXLINE( 337)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("^",5e,00,00,00)) ){
HXLINE( 341)			this->animation->addByPrefix(letter,HX_("^",5e,00,00,00),24,null(),null(),null());
HXLINE( 342)			this->animation->play(letter,null(),null(),null());
HXLINE( 343)			this->set_y(this->y);
HXLINE( 340)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("_",5f,00,00,00)) ){
HXLINE( 306)			this->animation->addByPrefix(letter,HX_("_",5f,00,00,00),24,null(),null(),null());
HXLINE( 307)			this->animation->play(letter,null(),null(),null());
HXLINE( 308)			this->set_y((this->y + 50));
HXLINE( 305)			goto _hx_goto_4;
            		}
            		_hx_goto_4:;
HXLINE( 349)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AlphaCharacter_obj,createSymbol,(void))

::String AlphaCharacter_obj::alphabet;

::String AlphaCharacter_obj::numbers;

::String AlphaCharacter_obj::symbols;


::hx::ObjectPtr< AlphaCharacter_obj > AlphaCharacter_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< AlphaCharacter_obj > __this = new AlphaCharacter_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< AlphaCharacter_obj > AlphaCharacter_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	AlphaCharacter_obj *__this = (AlphaCharacter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AlphaCharacter_obj), true, "AlphaCharacter"));
	*(void **)__this = AlphaCharacter_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

AlphaCharacter_obj::AlphaCharacter_obj()
{
}

::hx::Val AlphaCharacter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { return ::hx::Val( row ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createBold") ) { return ::hx::Val( createBold_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createLetter") ) { return ::hx::Val( createLetter_dyn() ); }
		if (HX_FIELD_EQ(inName,"createNumber") ) { return ::hx::Val( createNumber_dyn() ); }
		if (HX_FIELD_EQ(inName,"createSymbol") ) { return ::hx::Val( createSymbol_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AlphaCharacter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"numbers") ) { outValue = ( numbers ); return true; }
		if (HX_FIELD_EQ(inName,"symbols") ) { outValue = ( symbols ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"alphabet") ) { outValue = ( alphabet ); return true; }
	}
	return false;
}

::hx::Val AlphaCharacter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { row=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AlphaCharacter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"numbers") ) { numbers=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"symbols") ) { symbols=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"alphabet") ) { alphabet=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void AlphaCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("row",1a,e2,56,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AlphaCharacter_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(AlphaCharacter_obj,row),HX_("row",1a,e2,56,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AlphaCharacter_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &AlphaCharacter_obj::alphabet,HX_("alphabet",b3,7c,38,21)},
	{::hx::fsString,(void *) &AlphaCharacter_obj::numbers,HX_("numbers",8a,69,bb,a9)},
	{::hx::fsString,(void *) &AlphaCharacter_obj::symbols,HX_("symbols",1b,be,1b,13)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AlphaCharacter_obj_sMemberFields[] = {
	HX_("row",1a,e2,56,00),
	HX_("createBold",a1,42,a9,53),
	HX_("createLetter",02,ed,5d,c5),
	HX_("createNumber",e5,c6,cf,c3),
	HX_("createSymbol",74,ef,32,11),
	::String(null()) };

static void AlphaCharacter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AlphaCharacter_obj::alphabet,"alphabet");
	HX_MARK_MEMBER_NAME(AlphaCharacter_obj::numbers,"numbers");
	HX_MARK_MEMBER_NAME(AlphaCharacter_obj::symbols,"symbols");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AlphaCharacter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AlphaCharacter_obj::alphabet,"alphabet");
	HX_VISIT_MEMBER_NAME(AlphaCharacter_obj::numbers,"numbers");
	HX_VISIT_MEMBER_NAME(AlphaCharacter_obj::symbols,"symbols");
};

#endif

::hx::Class AlphaCharacter_obj::__mClass;

static ::String AlphaCharacter_obj_sStaticFields[] = {
	HX_("alphabet",b3,7c,38,21),
	HX_("numbers",8a,69,bb,a9),
	HX_("symbols",1b,be,1b,13),
	::String(null())
};

void AlphaCharacter_obj::__register()
{
	AlphaCharacter_obj _hx_dummy;
	AlphaCharacter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AlphaCharacter",8b,cc,2e,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AlphaCharacter_obj::__GetStatic;
	__mClass->mSetStaticField = &AlphaCharacter_obj::__SetStatic;
	__mClass->mMarkFunc = AlphaCharacter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AlphaCharacter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AlphaCharacter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AlphaCharacter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AlphaCharacter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AlphaCharacter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AlphaCharacter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AlphaCharacter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_237_boot)
HXDLIN( 237)		alphabet = HX_("abcdefghijklmnopqrstuvwxyz",6d,97,f1,fb);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_239_boot)
HXDLIN( 239)		numbers = HX_("1234567890",5b,2e,e3,45);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_241_boot)
HXDLIN( 241)		symbols = HX_("|~#$%()*+-:;<=>@[]^_.,'!? ",49,1e,7a,47);
            	}
}

