#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_tiled_rendering
#define INCLUDED_lime_graphics_opengl_ext_QCOM_tiled_rendering

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_3b8ec67eacdc1e11_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_tiled_rendering)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES QCOM_tiled_rendering_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef QCOM_tiled_rendering_obj OBJ_;
		QCOM_tiled_rendering_obj();

	public:
		enum { _hx_ClassId = 0x767f9de6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_tiled_rendering")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.QCOM_tiled_rendering"); }

		inline static ::hx::ObjectPtr< QCOM_tiled_rendering_obj > __new() {
			::hx::ObjectPtr< QCOM_tiled_rendering_obj > __this = new QCOM_tiled_rendering_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< QCOM_tiled_rendering_obj > __alloc(::hx::Ctx *_hx_ctx) {
			QCOM_tiled_rendering_obj *__this = (QCOM_tiled_rendering_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QCOM_tiled_rendering_obj), false, "lime.graphics.opengl.ext.QCOM_tiled_rendering"));
			*(void **)__this = QCOM_tiled_rendering_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_3b8ec67eacdc1e11_4_new)
HXLINE(  37)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->MULTISAMPLE_BUFFER_BIT7_QCOM = (int)-2147483648;
HXLINE(  36)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->MULTISAMPLE_BUFFER_BIT6_QCOM = (int)1073741824;
HXLINE(  35)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->MULTISAMPLE_BUFFER_BIT5_QCOM = 536870912;
HXLINE(  34)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->MULTISAMPLE_BUFFER_BIT4_QCOM = 268435456;
HXLINE(  33)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->MULTISAMPLE_BUFFER_BIT3_QCOM = 134217728;
HXLINE(  32)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->MULTISAMPLE_BUFFER_BIT2_QCOM = 67108864;
HXLINE(  31)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->MULTISAMPLE_BUFFER_BIT1_QCOM = 33554432;
HXLINE(  30)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->MULTISAMPLE_BUFFER_BIT0_QCOM = 16777216;
HXLINE(  29)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->STENCIL_BUFFER_BIT7_QCOM = 8388608;
HXLINE(  28)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->STENCIL_BUFFER_BIT6_QCOM = 4194304;
HXLINE(  27)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->STENCIL_BUFFER_BIT5_QCOM = 2097152;
HXLINE(  26)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->STENCIL_BUFFER_BIT4_QCOM = 1048576;
HXLINE(  25)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->STENCIL_BUFFER_BIT3_QCOM = 524288;
HXLINE(  24)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->STENCIL_BUFFER_BIT2_QCOM = 262144;
HXLINE(  23)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->STENCIL_BUFFER_BIT1_QCOM = 131072;
HXLINE(  22)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->STENCIL_BUFFER_BIT0_QCOM = 65536;
HXLINE(  21)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->DEPTH_BUFFER_BIT7_QCOM = 32768;
HXLINE(  20)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->DEPTH_BUFFER_BIT6_QCOM = 16384;
HXLINE(  19)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->DEPTH_BUFFER_BIT5_QCOM = 8192;
HXLINE(  18)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->DEPTH_BUFFER_BIT4_QCOM = 4096;
HXLINE(  17)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->DEPTH_BUFFER_BIT3_QCOM = 2048;
HXLINE(  16)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->DEPTH_BUFFER_BIT2_QCOM = 1024;
HXLINE(  15)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->DEPTH_BUFFER_BIT1_QCOM = 512;
HXLINE(  14)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->DEPTH_BUFFER_BIT0_QCOM = 256;
HXLINE(  13)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->COLOR_BUFFER_BIT7_QCOM = 128;
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->COLOR_BUFFER_BIT6_QCOM = 64;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->COLOR_BUFFER_BIT5_QCOM = 32;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->COLOR_BUFFER_BIT4_QCOM = 16;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->COLOR_BUFFER_BIT3_QCOM = 8;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->COLOR_BUFFER_BIT2_QCOM = 4;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->COLOR_BUFFER_BIT1_QCOM = 2;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::QCOM_tiled_rendering)(__this) )->COLOR_BUFFER_BIT0_QCOM = 1;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QCOM_tiled_rendering_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("QCOM_tiled_rendering",f4,8a,1f,ec); }

		int COLOR_BUFFER_BIT0_QCOM;
		int COLOR_BUFFER_BIT1_QCOM;
		int COLOR_BUFFER_BIT2_QCOM;
		int COLOR_BUFFER_BIT3_QCOM;
		int COLOR_BUFFER_BIT4_QCOM;
		int COLOR_BUFFER_BIT5_QCOM;
		int COLOR_BUFFER_BIT6_QCOM;
		int COLOR_BUFFER_BIT7_QCOM;
		int DEPTH_BUFFER_BIT0_QCOM;
		int DEPTH_BUFFER_BIT1_QCOM;
		int DEPTH_BUFFER_BIT2_QCOM;
		int DEPTH_BUFFER_BIT3_QCOM;
		int DEPTH_BUFFER_BIT4_QCOM;
		int DEPTH_BUFFER_BIT5_QCOM;
		int DEPTH_BUFFER_BIT6_QCOM;
		int DEPTH_BUFFER_BIT7_QCOM;
		int STENCIL_BUFFER_BIT0_QCOM;
		int STENCIL_BUFFER_BIT1_QCOM;
		int STENCIL_BUFFER_BIT2_QCOM;
		int STENCIL_BUFFER_BIT3_QCOM;
		int STENCIL_BUFFER_BIT4_QCOM;
		int STENCIL_BUFFER_BIT5_QCOM;
		int STENCIL_BUFFER_BIT6_QCOM;
		int STENCIL_BUFFER_BIT7_QCOM;
		int MULTISAMPLE_BUFFER_BIT0_QCOM;
		int MULTISAMPLE_BUFFER_BIT1_QCOM;
		int MULTISAMPLE_BUFFER_BIT2_QCOM;
		int MULTISAMPLE_BUFFER_BIT3_QCOM;
		int MULTISAMPLE_BUFFER_BIT4_QCOM;
		int MULTISAMPLE_BUFFER_BIT5_QCOM;
		int MULTISAMPLE_BUFFER_BIT6_QCOM;
		int MULTISAMPLE_BUFFER_BIT7_QCOM;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_tiled_rendering */ 
