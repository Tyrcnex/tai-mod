#ifndef INCLUDED_polymod_fs_PolymodFileSystem
#define INCLUDED_polymod_fs_PolymodFileSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(polymod,fs,PolymodFileSystem)

namespace polymod{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES PolymodFileSystem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PolymodFileSystem_obj OBJ_;
		PolymodFileSystem_obj();

	public:
		enum { _hx_ClassId = 0x4abdba0a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="polymod.fs.PolymodFileSystem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"polymod.fs.PolymodFileSystem"); }

		inline static ::hx::ObjectPtr< PolymodFileSystem_obj > __new() {
			::hx::ObjectPtr< PolymodFileSystem_obj > __this = new PolymodFileSystem_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PolymodFileSystem_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PolymodFileSystem_obj *__this = (PolymodFileSystem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PolymodFileSystem_obj), false, "polymod.fs.PolymodFileSystem"));
			*(void **)__this = PolymodFileSystem_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PolymodFileSystem_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PolymodFileSystem",01,02,17,7e); }

		static bool exists(::String path);
		static ::Dynamic exists_dyn();

		static bool isDirectory(::String path);
		static ::Dynamic isDirectory_dyn();

		static ::Array< ::String > readDirectory(::String path);
		static ::Dynamic readDirectory_dyn();

		static ::String getFileContent(::String path);
		static ::Dynamic getFileContent_dyn();

		static  ::haxe::io::Bytes getFileBytes(::String path);
		static ::Dynamic getFileBytes_dyn();

		static ::Array< ::String > readDirectoryRecursive(::String path);
		static ::Dynamic readDirectoryRecursive_dyn();

};

} // end namespace polymod
} // end namespace fs

#endif /* INCLUDED_polymod_fs_PolymodFileSystem */ 
