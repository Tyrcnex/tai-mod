// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_utils_AssetManifest
#define INCLUDED_lime_utils_AssetManifest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,utils,AssetManifest)

namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES AssetManifest_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AssetManifest_obj OBJ_;
		AssetManifest_obj();

	public:
		enum { _hx_ClassId = 0x20b0fe87 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.utils.AssetManifest")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.utils.AssetManifest"); }
		static ::hx::ObjectPtr< AssetManifest_obj > __new();
		static ::hx::ObjectPtr< AssetManifest_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AssetManifest_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AssetManifest",9f,e1,68,3f); }

		static  ::lime::utils::AssetManifest fromBytes( ::haxe::io::Bytes bytes,::String rootPath);
		static ::Dynamic fromBytes_dyn();

		static  ::lime::utils::AssetManifest fromFile(::String path,::String rootPath);
		static ::Dynamic fromFile_dyn();

		static  ::lime::app::Future loadFromBytes( ::haxe::io::Bytes bytes,::String rootPath);
		static ::Dynamic loadFromBytes_dyn();

		static  ::lime::app::Future loadFromFile(::String path,::String rootPath);
		static ::Dynamic loadFromFile_dyn();

		static  ::lime::utils::AssetManifest parse(::String data,::String rootPath);
		static ::Dynamic parse_dyn();

		static ::String _hx___resolvePath(::String path);
		static ::Dynamic _hx___resolvePath_dyn();

		static ::String _hx___resolveRootPath(::String rootPath,::String path);
		static ::Dynamic _hx___resolveRootPath_dyn();

		::cpp::VirtualArray assets;
		::Array< ::String > libraryArgs;
		::String libraryType;
		::String name;
		::String rootPath;
		int version;
		::String serialize();
		::Dynamic serialize_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_AssetManifest */ 