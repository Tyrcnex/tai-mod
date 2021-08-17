#ifndef INCLUDED_ConvertScore
#define INCLUDED_ConvertScore

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ConvertScore)



class HXCPP_CLASS_ATTRIBUTES ConvertScore_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ConvertScore_obj OBJ_;
		ConvertScore_obj();

	public:
		enum { _hx_ClassId = 0x5c94133f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="ConvertScore")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"ConvertScore"); }

		inline static ::hx::ObjectPtr< ConvertScore_obj > __new() {
			::hx::ObjectPtr< ConvertScore_obj > __this = new ConvertScore_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ConvertScore_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ConvertScore_obj *__this = (ConvertScore_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ConvertScore_obj), false, "ConvertScore"));
			*(void **)__this = ConvertScore_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ConvertScore_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ConvertScore",7f,c0,b2,73); }

		static int convertScore(Float noteDiff);
		static ::Dynamic convertScore_dyn();

};


#endif /* INCLUDED_ConvertScore */ 
