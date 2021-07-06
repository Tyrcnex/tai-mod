// Generated by Haxe 4.1.5
#ifndef INCLUDED_polymod_format_CSV
#define INCLUDED_polymod_format_CSV

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(polymod,format,BaseParseFormat)
HX_DECLARE_CLASS2(polymod,format,CSV)
HX_DECLARE_CLASS2(polymod,format,CSVParseFormat)

namespace polymod{
namespace format{


class HXCPP_CLASS_ATTRIBUTES CSV_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CSV_obj OBJ_;
		CSV_obj();

	public:
		enum { _hx_ClassId = 0x37ab9499 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.format.CSV")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.format.CSV"); }
		static ::hx::ObjectPtr< CSV_obj > __new();
		static ::hx::ObjectPtr< CSV_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CSV_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CSV",a6,1f,33,00); }

		static  ::polymod::format::CSV parse(::String input,::String delimeter,::hx::Null< bool >  quotedCells);
		static ::Dynamic parse_dyn();

		static  ::polymod::format::CSV parseWithFormat(::String input, ::polymod::format::CSVParseFormat format);
		static ::Dynamic parseWithFormat_dyn();

		static  ::polymod::format::CSV parseSimple(::String input);
		static ::Dynamic parseSimple_dyn();

		::Array< ::String > fields;
		::Array< ::Dynamic> grid;
		void destroy();
		::Dynamic destroy_dyn();

		 ::EReg _rgx;
		::String _delimeter;
		bool _quoted;
		void _parse(::String input,::String delimeter,::hx::Null< bool >  quoted);
		::Dynamic _parse_dyn();

		void clearArray(::cpp::VirtualArray array);
		::Dynamic clearArray_dyn();

		void destroyThing( ::Dynamic thing);
		::Dynamic destroyThing_dyn();

		::Array< ::String > getCells(::String row);
		::Dynamic getCells_dyn();

		::Array< ::String > getRows(::String input);
		::Dynamic getRows_dyn();

		void processCells(::Array< ::String > cells,::hx::Null< int >  row);
		::Dynamic processCells_dyn();

		void processRows(::Array< ::String > rows);
		::Dynamic processRows_dyn();

};

} // end namespace polymod
} // end namespace format

#endif /* INCLUDED_polymod_format_CSV */ 