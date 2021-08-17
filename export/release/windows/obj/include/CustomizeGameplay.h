#ifndef INCLUDED_CustomizeGameplay
#define INCLUDED_CustomizeGameplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(CustomizeGameplay)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES CustomizeGameplay_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef CustomizeGameplay_obj OBJ_;
		CustomizeGameplay_obj();

	public:
		enum { _hx_ClassId = 0x5c466369 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="CustomizeGameplay")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"CustomizeGameplay"); }
		static ::hx::ObjectPtr< CustomizeGameplay_obj > __new(::String desc);
		static ::hx::ObjectPtr< CustomizeGameplay_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CustomizeGameplay_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CustomizeGameplay",29,ae,ab,0c); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_CustomizeGameplay */ 
