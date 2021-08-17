#ifndef INCLUDED_OptionCatagory
#define INCLUDED_OptionCatagory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(OptionCatagory)



class HXCPP_CLASS_ATTRIBUTES OptionCatagory_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OptionCatagory_obj OBJ_;
		OptionCatagory_obj();

	public:
		enum { _hx_ClassId = 0x5d1f7c6f };

		void __construct(::String catName,::Array< ::Dynamic> options);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="OptionCatagory")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"OptionCatagory"); }
		static ::hx::ObjectPtr< OptionCatagory_obj > __new(::String catName,::Array< ::Dynamic> options);
		static ::hx::ObjectPtr< OptionCatagory_obj > __alloc(::hx::Ctx *_hx_ctx,::String catName,::Array< ::Dynamic> options);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OptionCatagory_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OptionCatagory",af,f9,33,7b); }

		::Array< ::Dynamic> _options;
		::Array< ::Dynamic> getOptions();
		::Dynamic getOptions_dyn();

		void addOption( ::Option opt);
		::Dynamic addOption_dyn();

		void removeOption( ::Option opt);
		::Dynamic removeOption_dyn();

		::String _name;
		::String getName();
		::Dynamic getName_dyn();

};


#endif /* INCLUDED_OptionCatagory */ 
