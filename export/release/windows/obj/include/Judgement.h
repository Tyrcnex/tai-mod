#ifndef INCLUDED_Judgement
#define INCLUDED_Judgement

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Judgement)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES Judgement_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef Judgement_obj OBJ_;
		Judgement_obj();

	public:
		enum { _hx_ClassId = 0x6cd733f1 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Judgement")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Judgement"); }
		static ::hx::ObjectPtr< Judgement_obj > __new(::String desc);
		static ::hx::ObjectPtr< Judgement_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Judgement_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Judgement",95,ec,cc,fa); }

		bool press();

		::String updateDisplay();

		bool left();

		bool right();

};


#endif /* INCLUDED_Judgement */ 
