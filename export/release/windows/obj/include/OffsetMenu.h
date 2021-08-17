#ifndef INCLUDED_OffsetMenu
#define INCLUDED_OffsetMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(OffsetMenu)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES OffsetMenu_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef OffsetMenu_obj OBJ_;
		OffsetMenu_obj();

	public:
		enum { _hx_ClassId = 0x52e4f5b2 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="OffsetMenu")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"OffsetMenu"); }
		static ::hx::ObjectPtr< OffsetMenu_obj > __new(::String desc);
		static ::hx::ObjectPtr< OffsetMenu_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OffsetMenu_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OffsetMenu",f2,d2,21,3b); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_OffsetMenu */ 
