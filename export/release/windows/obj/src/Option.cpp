#include <hxcpp.h>

#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1cce971975218b09_42_new,"Option","new",0x702ed707,"Option.new","Options.hx",42,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1cce971975218b09_53_getDisplay,"Option","getDisplay",0x9ac5dc85,"Option.getDisplay","Options.hx",53,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1cce971975218b09_58_getAccept,"Option","getAccept",0x6ec11a25,"Option.getAccept","Options.hx",58,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1cce971975218b09_63_getDescription,"Option","getDescription",0xff3298bf,"Option.getDescription","Options.hx",63,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1cce971975218b09_68_press,"Option","press",0x2a2f91ea,"Option.press","Options.hx",68,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1cce971975218b09_69_updateDisplay,"Option","updateDisplay",0xbdef0ca0,"Option.updateDisplay","Options.hx",69,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1cce971975218b09_70_left,"Option","left",0xb77ad380,"Option.left","Options.hx",70,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1cce971975218b09_71_right,"Option","right",0x4b0b4a43,"Option.right","Options.hx",71,0x9d9a0240)

void Option_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_42_new)
HXLINE(  50)		this->acceptValues = false;
HXLINE(  48)		this->description = HX_("",00,00,00,00);
HXLINE(  46)		this->display = this->updateDisplay();
            	}

Dynamic Option_obj::__CreateEmpty() { return new Option_obj; }

void *Option_obj::_hx_vtable = 0;

Dynamic Option_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Option_obj > _hx_result = new Option_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Option_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
}

::String Option_obj::getDisplay(){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_53_getDisplay)
HXDLIN(  53)		return this->display;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,getDisplay,return )

bool Option_obj::getAccept(){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_58_getAccept)
HXDLIN(  58)		return this->acceptValues;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,getAccept,return )

::String Option_obj::getDescription(){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_63_getDescription)
HXDLIN(  63)		return this->description;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,getDescription,return )

bool Option_obj::press(){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_68_press)
HXDLIN(  68)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("stub!",33,93,1a,84)));
HXDLIN(  68)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,press,return )

::String Option_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_69_updateDisplay)
HXDLIN(  69)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("stub!",33,93,1a,84)));
HXDLIN(  69)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,updateDisplay,return )

bool Option_obj::left(){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_70_left)
HXDLIN(  70)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("stub!",33,93,1a,84)));
HXDLIN(  70)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,left,return )

bool Option_obj::right(){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_71_right)
HXDLIN(  71)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("stub!",33,93,1a,84)));
HXDLIN(  71)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,right,return )


::hx::ObjectPtr< Option_obj > Option_obj::__new() {
	::hx::ObjectPtr< Option_obj > __this = new Option_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Option_obj > Option_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Option_obj *__this = (Option_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Option_obj), true, "Option"));
	*(void **)__this = Option_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Option_obj::Option_obj()
{
}

void Option_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Option);
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_MEMBER_NAME(acceptValues,"acceptValues");
	HX_MARK_END_CLASS();
}

void Option_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(display,"display");
	HX_VISIT_MEMBER_NAME(acceptValues,"acceptValues");
}

::hx::Val Option_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return ::hx::Val( display ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getAccept") ) { return ::hx::Val( getAccept_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDisplay") ) { return ::hx::Val( getDisplay_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return ::hx::Val( description ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceptValues") ) { return ::hx::Val( acceptValues ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDescription") ) { return ::hx::Val( getDescription_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Option_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceptValues") ) { acceptValues=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Option_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("description",fc,08,1d,5f));
	outFields->push(HX_("display",42,2a,4a,bb));
	outFields->push(HX_("acceptValues",0a,01,ae,b7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Option_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Option_obj,description),HX_("description",fc,08,1d,5f)},
	{::hx::fsString,(int)offsetof(Option_obj,display),HX_("display",42,2a,4a,bb)},
	{::hx::fsBool,(int)offsetof(Option_obj,acceptValues),HX_("acceptValues",0a,01,ae,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Option_obj_sStaticStorageInfo = 0;
#endif

static ::String Option_obj_sMemberFields[] = {
	HX_("description",fc,08,1d,5f),
	HX_("display",42,2a,4a,bb),
	HX_("acceptValues",0a,01,ae,b7),
	HX_("getDisplay",4c,b0,ab,0a),
	HX_("getAccept",3e,1c,5d,87),
	HX_("getDescription",06,5c,bb,e6),
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	::String(null()) };

::hx::Class Option_obj::__mClass;

void Option_obj::__register()
{
	Option_obj _hx_dummy;
	Option_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Option",95,47,0f,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Option_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Option_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Option_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Option_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

