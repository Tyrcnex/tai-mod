#ifndef INCLUDED_KadeEngineData
#define INCLUDED_KadeEngineData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(KadeEngineData)



class HXCPP_CLASS_ATTRIBUTES KadeEngineData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef KadeEngineData_obj OBJ_;
		KadeEngineData_obj();

	public:
		enum { _hx_ClassId = 0x0703882b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="KadeEngineData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"KadeEngineData"); }

		inline static ::hx::ObjectPtr< KadeEngineData_obj > __new() {
			::hx::ObjectPtr< KadeEngineData_obj > __this = new KadeEngineData_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< KadeEngineData_obj > __alloc(::hx::Ctx *_hx_ctx) {
			KadeEngineData_obj *__this = (KadeEngineData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KadeEngineData_obj), false, "KadeEngineData"));
			*(void **)__this = KadeEngineData_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~KadeEngineData_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("KadeEngineData",a3,f4,9b,d6); }

		static void initSave();
		static ::Dynamic initSave_dyn();

};


#endif /* INCLUDED_KadeEngineData */ 
