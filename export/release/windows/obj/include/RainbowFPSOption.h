#ifndef INCLUDED_RainbowFPSOption
#define INCLUDED_RainbowFPSOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(RainbowFPSOption)



class HXCPP_CLASS_ATTRIBUTES RainbowFPSOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef RainbowFPSOption_obj OBJ_;
		RainbowFPSOption_obj();

	public:
		enum { _hx_ClassId = 0x7b2bfcf0 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="RainbowFPSOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"RainbowFPSOption"); }
		static ::hx::ObjectPtr< RainbowFPSOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< RainbowFPSOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RainbowFPSOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RainbowFPSOption",48,2c,33,ea); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_RainbowFPSOption */ 
