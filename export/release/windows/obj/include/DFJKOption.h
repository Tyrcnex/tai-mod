#ifndef INCLUDED_DFJKOption
#define INCLUDED_DFJKOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Controls)
HX_DECLARE_CLASS0(DFJKOption)
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionSet)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES DFJKOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef DFJKOption_obj OBJ_;
		DFJKOption_obj();

	public:
		enum { _hx_ClassId = 0x302cc5bc };

		void __construct( ::Controls controls);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DFJKOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"DFJKOption"); }
		static ::hx::ObjectPtr< DFJKOption_obj > __new( ::Controls controls);
		static ::hx::ObjectPtr< DFJKOption_obj > __alloc(::hx::Ctx *_hx_ctx, ::Controls controls);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DFJKOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DFJKOption",98,9c,38,d9); }

		 ::Controls controls;
		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_DFJKOption */ 
