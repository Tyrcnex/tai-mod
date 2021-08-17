#ifndef INCLUDED_openfl_display__internal_DOMTextField
#define INCLUDED_openfl_display__internal_DOMTextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(openfl,display,DOMRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,display,_internal,DOMTextField)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES DOMTextField_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DOMTextField_obj OBJ_;
		DOMTextField_obj();

	public:
		enum { _hx_ClassId = 0x43d09599 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.DOMTextField")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.DOMTextField"); }

		inline static ::hx::ObjectPtr< DOMTextField_obj > __new() {
			::hx::ObjectPtr< DOMTextField_obj > __this = new DOMTextField_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DOMTextField_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DOMTextField_obj *__this = (DOMTextField_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DOMTextField_obj), false, "openfl.display._internal.DOMTextField"));
			*(void **)__this = DOMTextField_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DOMTextField_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DOMTextField",0b,4a,36,4d); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::EReg _hx___regexColor;
		static  ::EReg _hx___regexFace;
		static  ::EReg _hx___regexFont;
		static  ::EReg _hx___regexCloseFont;
		static  ::EReg _hx___regexSize;
		static void clear( ::openfl::text::TextField textField, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic clear_dyn();

		static void measureText( ::openfl::text::TextField textField);
		static ::Dynamic measureText_dyn();

		static void render( ::openfl::text::TextField textField, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderDrawable( ::openfl::text::TextField textField, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableClear( ::openfl::text::TextField textField, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderDrawableClear_dyn();

		static ::String _hx___getAttributeMatch( ::EReg regex);
		static ::Dynamic _hx___getAttributeMatch_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_DOMTextField */ 
