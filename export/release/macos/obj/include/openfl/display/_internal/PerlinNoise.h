// Generated by Haxe 4.1.5
#ifndef INCLUDED_openfl_display__internal_PerlinNoise
#define INCLUDED_openfl_display__internal_PerlinNoise

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display__internal_AbstractNoise
#include <openfl/display/_internal/AbstractNoise.h>
#endif
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_internal,AbstractNoise)
HX_DECLARE_CLASS3(openfl,display,_internal,PerlinNoise)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES PerlinNoise_obj : public  ::openfl::display::_internal::AbstractNoise_obj
{
	public:
		typedef  ::openfl::display::_internal::AbstractNoise_obj super;
		typedef PerlinNoise_obj OBJ_;
		PerlinNoise_obj();

	public:
		enum { _hx_ClassId = 0x4234fc78 };

		void __construct(int seed,int octaves,int channels,bool grayScale,Float falloff,::hx::Null< bool >  __o_stitch,::hx::Null< Float >  __o_stitch_threshold);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display._internal.PerlinNoise")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display._internal.PerlinNoise"); }
		static ::hx::ObjectPtr< PerlinNoise_obj > __new(int seed,int octaves,int channels,bool grayScale,Float falloff,::hx::Null< bool >  __o_stitch,::hx::Null< Float >  __o_stitch_threshold);
		static ::hx::ObjectPtr< PerlinNoise_obj > __alloc(::hx::Ctx *_hx_ctx,int seed,int octaves,int channels,bool grayScale,Float falloff,::hx::Null< bool >  __o_stitch,::hx::Null< Float >  __o_stitch_threshold);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PerlinNoise_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PerlinNoise",46,1c,2b,70); }

		static void __boot();
		static  ::Dynamic __meta__;
		static ::Array< int > P;
		::Array< int > p_perm;
		Float x_offset;
		Float y_offset;
		Float z_offset;
		Float base_factor;
		void fill( ::openfl::display::BitmapData bitmap,Float _scale_x,Float _scale_y,Float _scale_z);

		Float noise(Float x,Float y,Float z);
		::Dynamic noise_dyn();

		void setSeed(int seed);
		::Dynamic setSeed_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_PerlinNoise */ 
