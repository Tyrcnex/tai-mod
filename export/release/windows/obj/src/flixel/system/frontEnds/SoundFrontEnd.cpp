#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2d161672f440721c_18_new,"flixel.system.frontEnds.SoundFrontEnd","new",0x71610699,"flixel.system.frontEnds.SoundFrontEnd.new","flixel/system/frontEnds/SoundFrontEnd.hx",18,0x9ba4fb18)
static const int _hx_array_data_7ea9c627_1[] = {
	(int)48,(int)96,
};
static const int _hx_array_data_7ea9c627_2[] = {
	(int)189,(int)109,
};
static const int _hx_array_data_7ea9c627_3[] = {
	(int)187,(int)107,
};
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_91_playMusic,"flixel.system.frontEnds.SoundFrontEnd","playMusic",0x3360250a,"flixel.system.frontEnds.SoundFrontEnd.playMusic","flixel/system/frontEnds/SoundFrontEnd.hx",91,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_125_load,"flixel.system.frontEnds.SoundFrontEnd","load",0xc239d5cd,"flixel.system.frontEnds.SoundFrontEnd.load","flixel/system/frontEnds/SoundFrontEnd.hx",125,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_149_load,"flixel.system.frontEnds.SoundFrontEnd","load",0xc239d5cd,"flixel.system.frontEnds.SoundFrontEnd.load","flixel/system/frontEnds/SoundFrontEnd.hx",149,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_165_loadHelper,"flixel.system.frontEnds.SoundFrontEnd","loadHelper",0x945a9f1b,"flixel.system.frontEnds.SoundFrontEnd.loadHelper","flixel/system/frontEnds/SoundFrontEnd.hx",165,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_185_cache,"flixel.system.frontEnds.SoundFrontEnd","cache",0xf88690bb,"flixel.system.frontEnds.SoundFrontEnd.cache","flixel/system/frontEnds/SoundFrontEnd.hx",185,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_199_cacheAll,"flixel.system.frontEnds.SoundFrontEnd","cacheAll",0x49c00726,"flixel.system.frontEnds.SoundFrontEnd.cacheAll","flixel/system/frontEnds/SoundFrontEnd.hx",199,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_219_play,"flixel.system.frontEnds.SoundFrontEnd","play",0xc4dc699b,"flixel.system.frontEnds.SoundFrontEnd.play","flixel/system/frontEnds/SoundFrontEnd.hx",219,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_245_stream,"flixel.system.frontEnds.SoundFrontEnd","stream",0xdd72c7e7,"flixel.system.frontEnds.SoundFrontEnd.stream","flixel/system/frontEnds/SoundFrontEnd.hx",245,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_252_pause,"flixel.system.frontEnds.SoundFrontEnd","pause",0x74c9cd6f,"flixel.system.frontEnds.SoundFrontEnd.pause","flixel/system/frontEnds/SoundFrontEnd.hx",252,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_271_resume,"flixel.system.frontEnds.SoundFrontEnd","resume",0xd4ca1d14,"flixel.system.frontEnds.SoundFrontEnd.resume","flixel/system/frontEnds/SoundFrontEnd.hx",271,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_292_destroy,"flixel.system.frontEnds.SoundFrontEnd","destroy",0x153d73b3,"flixel.system.frontEnds.SoundFrontEnd.destroy","flixel/system/frontEnds/SoundFrontEnd.hx",292,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_309_destroySound,"flixel.system.frontEnds.SoundFrontEnd","destroySound",0x7dfd401c,"flixel.system.frontEnds.SoundFrontEnd.destroySound","flixel/system/frontEnds/SoundFrontEnd.hx",309,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_319_toggleMuted,"flixel.system.frontEnds.SoundFrontEnd","toggleMuted",0xe215de70,"flixel.system.frontEnds.SoundFrontEnd.toggleMuted","flixel/system/frontEnds/SoundFrontEnd.hx",319,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_334_changeVolume,"flixel.system.frontEnds.SoundFrontEnd","changeVolume",0x51b19e11,"flixel.system.frontEnds.SoundFrontEnd.changeVolume","flixel/system/frontEnds/SoundFrontEnd.hx",334,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_346_showSoundTray,"flixel.system.frontEnds.SoundFrontEnd","showSoundTray",0x0761fd21,"flixel.system.frontEnds.SoundFrontEnd.showSoundTray","flixel/system/frontEnds/SoundFrontEnd.hx",346,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_363_update,"flixel.system.frontEnds.SoundFrontEnd","update",0x534b3970,"flixel.system.frontEnds.SoundFrontEnd.update","flixel/system/frontEnds/SoundFrontEnd.hx",363,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_382_onFocusLost,"flixel.system.frontEnds.SoundFrontEnd","onFocusLost",0xeb797bf6,"flixel.system.frontEnds.SoundFrontEnd.onFocusLost","flixel/system/frontEnds/SoundFrontEnd.hx",382,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_399_onFocus,"flixel.system.frontEnds.SoundFrontEnd","onFocus",0x8b7e44f2,"flixel.system.frontEnds.SoundFrontEnd.onFocus","flixel/system/frontEnds/SoundFrontEnd.hx",399,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_418_loadSavedPrefs,"flixel.system.frontEnds.SoundFrontEnd","loadSavedPrefs",0xc70de056,"flixel.system.frontEnds.SoundFrontEnd.loadSavedPrefs","flixel/system/frontEnds/SoundFrontEnd.hx",418,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_431_set_volume,"flixel.system.frontEnds.SoundFrontEnd","set_volume",0x2e392afe,"flixel.system.frontEnds.SoundFrontEnd.set_volume","flixel/system/frontEnds/SoundFrontEnd.hx",431,0x9ba4fb18)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void SoundFrontEnd_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2d161672f440721c_18_new)
HXLINE(  80)		this->volume = ((Float)1);
HXLINE(  75)		this->list =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  70)		this->defaultSoundGroup =  ::flixel::_hx_system::FlxSoundGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  65)		this->defaultMusicGroup =  ::flixel::_hx_system::FlxSoundGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  60)		this->soundTrayEnabled = true;
HXLINE(  53)		this->muteKeys = ::Array_obj< int >::fromData( _hx_array_data_7ea9c627_1,2);
HXLINE(  47)		this->volumeDownKeys = ::Array_obj< int >::fromData( _hx_array_data_7ea9c627_2,2);
HXLINE(  41)		this->volumeUpKeys = ::Array_obj< int >::fromData( _hx_array_data_7ea9c627_3,2);
HXLINE(  28)		this->muted = false;
HXLINE( 355)		this->loadSavedPrefs();
            	}

Dynamic SoundFrontEnd_obj::__CreateEmpty() { return new SoundFrontEnd_obj; }

void *SoundFrontEnd_obj::_hx_vtable = 0;

Dynamic SoundFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SoundFrontEnd_obj > _hx_result = new SoundFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SoundFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3aad4c0f;
}

void SoundFrontEnd_obj::playMusic( ::Dynamic Music,::hx::Null< Float >  __o_Volume,::hx::Null< bool >  __o_Looped, ::flixel::_hx_system::FlxSoundGroup Group){
            		Float Volume = __o_Volume.Default(1);
            		bool Looped = __o_Looped.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_2d161672f440721c_91_playMusic)
HXLINE(  92)		if (::hx::IsNull( this->music )) {
HXLINE(  94)			this->music =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE(  96)			if (this->music->active) {
HXLINE(  98)				 ::flixel::_hx_system::FlxSound _this = this->music;
HXDLIN(  98)				_this->cleanup(_this->autoDestroy,true);
            			}
            		}
HXLINE( 101)		this->music->loadEmbedded(Music,Looped,null(),null());
HXLINE( 102)		this->music->set_volume(Volume);
HXLINE( 103)		this->music->persist = true;
HXLINE( 104)		 ::flixel::_hx_system::FlxSoundGroup _hx_tmp;
HXDLIN( 104)		if (::hx::IsNull( Group )) {
HXLINE( 104)			_hx_tmp = this->defaultMusicGroup;
            		}
            		else {
HXLINE( 104)			_hx_tmp = Group;
            		}
HXDLIN( 104)		this->music->set_group(_hx_tmp);
HXLINE( 105)		this->music->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(SoundFrontEnd_obj,playMusic,(void))

 ::flixel::_hx_system::FlxSound SoundFrontEnd_obj::load( ::Dynamic EmbeddedSound,::hx::Null< Float >  __o_Volume,::hx::Null< bool >  __o_Looped, ::flixel::_hx_system::FlxSoundGroup Group,::hx::Null< bool >  __o_AutoDestroy,::hx::Null< bool >  __o_AutoPlay,::String URL, ::Dynamic OnComplete, ::Dynamic OnLoad){
            		Float Volume = __o_Volume.Default(1);
            		bool Looped = __o_Looped.Default(false);
            		bool AutoDestroy = __o_AutoDestroy.Default(false);
            		bool AutoPlay = __o_AutoPlay.Default(false);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_125_load)
HXLINE( 126)		bool _hx_tmp;
HXDLIN( 126)		if (::hx::IsNull( EmbeddedSound )) {
HXLINE( 126)			_hx_tmp = ::hx::IsNull( URL );
            		}
            		else {
HXLINE( 126)			_hx_tmp = false;
            		}
HXDLIN( 126)		if (_hx_tmp) {
HXLINE( 129)			return null();
            		}
HXLINE( 132)		 ::flixel::_hx_system::FlxSound sound = this->list->recycle(::hx::ClassOf< ::flixel::_hx_system::FlxSound >(),null(),null(),null()).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXLINE( 134)		if (::hx::IsNotNull( EmbeddedSound )) {
HXLINE( 136)			sound->loadEmbedded(EmbeddedSound,Looped,AutoDestroy,OnComplete);
HXLINE( 137)			this->loadHelper(sound,Volume,Group,AutoPlay);
HXLINE( 139)			bool _hx_tmp;
HXDLIN( 139)			if (::hx::IsNotNull( OnLoad )) {
HXLINE( 139)				_hx_tmp = ::hx::IsNotNull( sound->_sound );
            			}
            			else {
HXLINE( 139)				_hx_tmp = false;
            			}
HXDLIN( 139)			if (_hx_tmp) {
HXLINE( 140)				OnLoad();
            			}
            		}
            		else {
HXLINE( 144)			 ::Dynamic loadCallback = OnLoad;
HXLINE( 145)			if (AutoPlay) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,OnLoad, ::flixel::_hx_system::FlxSound,sound) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_2d161672f440721c_149_load)
HXLINE( 150)					sound->play(null(),null(),null());
HXLINE( 152)					if (::hx::IsNotNull( OnLoad )) {
HXLINE( 153)						OnLoad();
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 148)				loadCallback =  ::Dynamic(new _hx_Closure_0(OnLoad,sound));
            			}
HXLINE( 157)			sound->loadStream(URL,Looped,AutoDestroy,OnComplete,loadCallback);
HXLINE( 158)			this->loadHelper(sound,Volume,Group,null());
            		}
HXLINE( 161)		return sound;
            	}


HX_DEFINE_DYNAMIC_FUNC9(SoundFrontEnd_obj,load,return )

 ::flixel::_hx_system::FlxSound SoundFrontEnd_obj::loadHelper( ::flixel::_hx_system::FlxSound sound,Float Volume, ::flixel::_hx_system::FlxSoundGroup Group,::hx::Null< bool >  __o_AutoPlay){
            		bool AutoPlay = __o_AutoPlay.Default(false);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_165_loadHelper)
HXLINE( 166)		sound->set_volume(Volume);
HXLINE( 168)		if (AutoPlay) {
HXLINE( 170)			sound->play(null(),null(),null());
            		}
HXLINE( 173)		 ::flixel::_hx_system::FlxSoundGroup _hx_tmp;
HXDLIN( 173)		if (::hx::IsNull( Group )) {
HXLINE( 173)			_hx_tmp = this->defaultSoundGroup;
            		}
            		else {
HXLINE( 173)			_hx_tmp = Group;
            		}
HXDLIN( 173)		sound->set_group(_hx_tmp);
HXLINE( 174)		return sound;
            	}


HX_DEFINE_DYNAMIC_FUNC4(SoundFrontEnd_obj,loadHelper,return )

 ::openfl::media::Sound SoundFrontEnd_obj::cache(::String EmbeddedSound){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_185_cache)
HXLINE( 187)		bool _hx_tmp;
HXDLIN( 187)		if (!(::openfl::utils::Assets_obj::exists(EmbeddedSound,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 187)			_hx_tmp = ::openfl::utils::Assets_obj::exists(EmbeddedSound,HX_("MUSIC",85,08,49,8e));
            		}
            		else {
HXLINE( 187)			_hx_tmp = true;
            		}
HXDLIN( 187)		if (_hx_tmp) {
HXLINE( 188)			return ::openfl::utils::Assets_obj::getSound(EmbeddedSound,true);
            		}
HXLINE( 190)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,cache,return )

void SoundFrontEnd_obj::cacheAll(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_199_cacheAll)
HXDLIN( 199)		int _g = 0;
HXDLIN( 199)		::Array< ::String > _g1 = ::openfl::utils::Assets_obj::list(HX_("SOUND",af,c4,ba,fe));
HXDLIN( 199)		while((_g < _g1->length)){
HXDLIN( 199)			::String id = _g1->__get(_g);
HXDLIN( 199)			_g = (_g + 1);
HXLINE( 201)			bool _hx_tmp;
HXDLIN( 201)			if (!(::openfl::utils::Assets_obj::exists(id,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 201)				_hx_tmp = ::openfl::utils::Assets_obj::exists(id,HX_("MUSIC",85,08,49,8e));
            			}
            			else {
HXLINE( 201)				_hx_tmp = true;
            			}
HXDLIN( 201)			if (_hx_tmp) {
HXLINE( 201)				::openfl::utils::Assets_obj::getSound(id,true);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,cacheAll,(void))

 ::flixel::_hx_system::FlxSound SoundFrontEnd_obj::play( ::Dynamic EmbeddedSound,::hx::Null< Float >  __o_Volume,::hx::Null< bool >  __o_Looped, ::flixel::_hx_system::FlxSoundGroup Group,::hx::Null< bool >  __o_AutoDestroy, ::Dynamic OnComplete){
            		Float Volume = __o_Volume.Default(1);
            		bool Looped = __o_Looped.Default(false);
            		bool AutoDestroy = __o_AutoDestroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_219_play)
HXLINE( 220)		if (::Std_obj::isOfType(EmbeddedSound,::hx::ClassOf< ::String >())) {
HXLINE( 222)			 ::openfl::media::Sound EmbeddedSound1;
HXDLIN( 222)			bool EmbeddedSound2;
HXDLIN( 222)			if (!(::openfl::utils::Assets_obj::exists(( (::String)(EmbeddedSound) ),HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 222)				EmbeddedSound2 = ::openfl::utils::Assets_obj::exists(( (::String)(EmbeddedSound) ),HX_("MUSIC",85,08,49,8e));
            			}
            			else {
HXLINE( 222)				EmbeddedSound2 = true;
            			}
HXDLIN( 222)			if (EmbeddedSound2) {
HXLINE( 222)				EmbeddedSound1 = ::openfl::utils::Assets_obj::getSound(( (::String)(EmbeddedSound) ),true);
            			}
            			else {
HXLINE( 222)				EmbeddedSound1 = null();
            			}
HXDLIN( 222)			EmbeddedSound = EmbeddedSound1;
            		}
HXLINE( 224)		 ::flixel::_hx_system::FlxSound sound = this->list->recycle(::hx::ClassOf< ::flixel::_hx_system::FlxSound >(),null(),null(),null()).StaticCast<  ::flixel::_hx_system::FlxSound >()->loadEmbedded(EmbeddedSound,Looped,AutoDestroy,OnComplete);
HXLINE( 225)		return this->loadHelper(sound,Volume,Group,true);
            	}


HX_DEFINE_DYNAMIC_FUNC6(SoundFrontEnd_obj,play,return )

 ::flixel::_hx_system::FlxSound SoundFrontEnd_obj::stream(::String URL,::hx::Null< Float >  __o_Volume,::hx::Null< bool >  __o_Looped, ::flixel::_hx_system::FlxSoundGroup Group,::hx::Null< bool >  __o_AutoDestroy, ::Dynamic OnComplete, ::Dynamic OnLoad){
            		Float Volume = __o_Volume.Default(1);
            		bool Looped = __o_Looped.Default(false);
            		bool AutoDestroy = __o_AutoDestroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_245_stream)
HXDLIN( 245)		return this->load(null(),Volume,Looped,Group,AutoDestroy,true,URL,OnComplete,OnLoad);
            	}


HX_DEFINE_DYNAMIC_FUNC7(SoundFrontEnd_obj,stream,return )

void SoundFrontEnd_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_252_pause)
HXLINE( 253)		bool _hx_tmp;
HXDLIN( 253)		bool _hx_tmp1;
HXDLIN( 253)		if (::hx::IsNotNull( this->music )) {
HXLINE( 253)			_hx_tmp1 = this->music->exists;
            		}
            		else {
HXLINE( 253)			_hx_tmp1 = false;
            		}
HXDLIN( 253)		if (_hx_tmp1) {
HXLINE( 253)			_hx_tmp = this->music->active;
            		}
            		else {
HXLINE( 253)			_hx_tmp = false;
            		}
HXDLIN( 253)		if (_hx_tmp) {
HXLINE( 255)			this->music->pause();
            		}
HXLINE( 258)		{
HXLINE( 258)			int _g = 0;
HXDLIN( 258)			::Array< ::Dynamic> _g1 = this->list->members;
HXDLIN( 258)			while((_g < _g1->length)){
HXLINE( 258)				 ::flixel::_hx_system::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXDLIN( 258)				_g = (_g + 1);
HXLINE( 260)				bool _hx_tmp;
HXDLIN( 260)				bool _hx_tmp1;
HXDLIN( 260)				if (::hx::IsNotNull( sound )) {
HXLINE( 260)					_hx_tmp1 = sound->exists;
            				}
            				else {
HXLINE( 260)					_hx_tmp1 = false;
            				}
HXDLIN( 260)				if (_hx_tmp1) {
HXLINE( 260)					_hx_tmp = sound->active;
            				}
            				else {
HXLINE( 260)					_hx_tmp = false;
            				}
HXDLIN( 260)				if (_hx_tmp) {
HXLINE( 262)					sound->pause();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,pause,(void))

void SoundFrontEnd_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_271_resume)
HXLINE( 272)		bool _hx_tmp;
HXDLIN( 272)		if (::hx::IsNotNull( this->music )) {
HXLINE( 272)			_hx_tmp = this->music->exists;
            		}
            		else {
HXLINE( 272)			_hx_tmp = false;
            		}
HXDLIN( 272)		if (_hx_tmp) {
HXLINE( 274)			this->music->resume();
            		}
HXLINE( 277)		{
HXLINE( 277)			int _g = 0;
HXDLIN( 277)			::Array< ::Dynamic> _g1 = this->list->members;
HXDLIN( 277)			while((_g < _g1->length)){
HXLINE( 277)				 ::flixel::_hx_system::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXDLIN( 277)				_g = (_g + 1);
HXLINE( 279)				bool _hx_tmp;
HXDLIN( 279)				if (::hx::IsNotNull( sound )) {
HXLINE( 279)					_hx_tmp = sound->exists;
            				}
            				else {
HXLINE( 279)					_hx_tmp = false;
            				}
HXDLIN( 279)				if (_hx_tmp) {
HXLINE( 281)					sound->resume();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,resume,(void))

void SoundFrontEnd_obj::destroy(::hx::Null< bool >  __o_ForceDestroy){
            		bool ForceDestroy = __o_ForceDestroy.Default(false);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_292_destroy)
HXLINE( 293)		bool _hx_tmp;
HXDLIN( 293)		if (::hx::IsNotNull( this->music )) {
HXLINE( 293)			if (!(ForceDestroy)) {
HXLINE( 293)				_hx_tmp = !(this->music->persist);
            			}
            			else {
HXLINE( 293)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 293)			_hx_tmp = false;
            		}
HXDLIN( 293)		if (_hx_tmp) {
HXLINE( 295)			this->destroySound(this->music);
HXLINE( 296)			this->music = null();
            		}
HXLINE( 299)		{
HXLINE( 299)			int _g = 0;
HXDLIN( 299)			::Array< ::Dynamic> _g1 = this->list->members;
HXDLIN( 299)			while((_g < _g1->length)){
HXLINE( 299)				 ::flixel::_hx_system::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXDLIN( 299)				_g = (_g + 1);
HXLINE( 301)				bool _hx_tmp;
HXDLIN( 301)				if (::hx::IsNotNull( sound )) {
HXLINE( 301)					if (!(ForceDestroy)) {
HXLINE( 301)						_hx_tmp = !(sound->persist);
            					}
            					else {
HXLINE( 301)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 301)					_hx_tmp = false;
            				}
HXDLIN( 301)				if (_hx_tmp) {
HXLINE( 303)					this->destroySound(sound);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,destroy,(void))

void SoundFrontEnd_obj::destroySound( ::flixel::_hx_system::FlxSound sound){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_309_destroySound)
HXLINE( 310)		this->defaultMusicGroup->remove(sound);
HXLINE( 311)		this->defaultSoundGroup->remove(sound);
HXLINE( 312)		sound->destroy();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,destroySound,(void))

void SoundFrontEnd_obj::toggleMuted(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_319_toggleMuted)
HXLINE( 320)		this->muted = !(this->muted);
HXLINE( 322)		if (::hx::IsNotNull( this->volumeHandler )) {
HXLINE( 324)			Float _hx_tmp;
HXDLIN( 324)			if (this->muted) {
HXLINE( 324)				_hx_tmp = ( (Float)(0) );
            			}
            			else {
HXLINE( 324)				_hx_tmp = this->volume;
            			}
HXDLIN( 324)			this->volumeHandler(_hx_tmp);
            		}
HXLINE( 327)		this->showSoundTray();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,toggleMuted,(void))

void SoundFrontEnd_obj::changeVolume(Float Amount){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_334_changeVolume)
HXLINE( 335)		this->muted = false;
HXLINE( 336)		this->set_volume((this->volume + Amount));
HXLINE( 337)		this->showSoundTray();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,changeVolume,(void))

void SoundFrontEnd_obj::showSoundTray(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_346_showSoundTray)
HXDLIN( 346)		bool _hx_tmp;
HXDLIN( 346)		if (::hx::IsNotNull( ::flixel::FlxG_obj::game->soundTray )) {
HXDLIN( 346)			_hx_tmp = this->soundTrayEnabled;
            		}
            		else {
HXDLIN( 346)			_hx_tmp = false;
            		}
HXDLIN( 346)		if (_hx_tmp) {
HXLINE( 348)			::flixel::FlxG_obj::game->soundTray->show(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,showSoundTray,(void))

void SoundFrontEnd_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_363_update)
HXLINE( 364)		bool _hx_tmp;
HXDLIN( 364)		if (::hx::IsNotNull( this->music )) {
HXLINE( 364)			_hx_tmp = this->music->active;
            		}
            		else {
HXLINE( 364)			_hx_tmp = false;
            		}
HXDLIN( 364)		if (_hx_tmp) {
HXLINE( 365)			this->music->update(elapsed);
            		}
HXLINE( 367)		bool _hx_tmp1;
HXDLIN( 367)		if (::hx::IsNotNull( this->list )) {
HXLINE( 367)			_hx_tmp1 = this->list->active;
            		}
            		else {
HXLINE( 367)			_hx_tmp1 = false;
            		}
HXDLIN( 367)		if (_hx_tmp1) {
HXLINE( 368)			this->list->update(elapsed);
            		}
HXLINE( 371)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(this->muteKeys,-1)) {
HXLINE( 372)			this->toggleMuted();
            		}
            		else {
HXLINE( 373)			if (::flixel::FlxG_obj::keys->checkKeyArrayState(this->volumeUpKeys,-1)) {
HXLINE( 374)				this->changeVolume(((Float)0.1));
            			}
            			else {
HXLINE( 375)				if (::flixel::FlxG_obj::keys->checkKeyArrayState(this->volumeDownKeys,-1)) {
HXLINE( 376)					this->changeVolume(((Float)-0.1));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,update,(void))

void SoundFrontEnd_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_382_onFocusLost)
HXLINE( 383)		if (::hx::IsNotNull( this->music )) {
HXLINE( 385)			this->music->onFocusLost();
            		}
HXLINE( 388)		{
HXLINE( 388)			int _g = 0;
HXDLIN( 388)			::Array< ::Dynamic> _g1 = this->list->members;
HXDLIN( 388)			while((_g < _g1->length)){
HXLINE( 388)				 ::flixel::_hx_system::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXDLIN( 388)				_g = (_g + 1);
HXLINE( 390)				if (::hx::IsNotNull( sound )) {
HXLINE( 392)					sound->onFocusLost();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocusLost,(void))

void SoundFrontEnd_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_399_onFocus)
HXLINE( 400)		if (::hx::IsNotNull( this->music )) {
HXLINE( 402)			this->music->onFocus();
            		}
HXLINE( 405)		{
HXLINE( 405)			int _g = 0;
HXDLIN( 405)			::Array< ::Dynamic> _g1 = this->list->members;
HXDLIN( 405)			while((_g < _g1->length)){
HXLINE( 405)				 ::flixel::_hx_system::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXDLIN( 405)				_g = (_g + 1);
HXLINE( 407)				if (::hx::IsNotNull( sound )) {
HXLINE( 409)					sound->onFocus();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocus,(void))

void SoundFrontEnd_obj::loadSavedPrefs(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_418_loadSavedPrefs)
HXLINE( 419)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("volume",da,29,53,5f),::hx::paccDynamic) )) {
HXLINE( 421)			this->set_volume(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("volume",da,29,53,5f),::hx::paccDynamic)) ));
            		}
HXLINE( 424)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("mute",d9,6e,65,48),::hx::paccDynamic) )) {
HXLINE( 426)			this->muted = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("mute",d9,6e,65,48),::hx::paccDynamic)) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,loadSavedPrefs,(void))

Float SoundFrontEnd_obj::set_volume(Float Volume){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_431_set_volume)
HXLINE( 432)		Float lowerBound;
HXDLIN( 432)		if ((Volume < 0)) {
HXLINE( 432)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 432)			lowerBound = Volume;
            		}
HXDLIN( 432)		if ((lowerBound > 1)) {
HXLINE( 432)			Volume = ( (Float)(1) );
            		}
            		else {
HXLINE( 432)			Volume = lowerBound;
            		}
HXLINE( 434)		if (::hx::IsNotNull( this->volumeHandler )) {
HXLINE( 436)			Float param;
HXDLIN( 436)			if (this->muted) {
HXLINE( 436)				param = ( (Float)(0) );
            			}
            			else {
HXLINE( 436)				param = Volume;
            			}
HXLINE( 437)			this->volumeHandler(param);
            		}
HXLINE( 439)		return (this->volume = Volume);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,set_volume,return )


::hx::ObjectPtr< SoundFrontEnd_obj > SoundFrontEnd_obj::__new() {
	::hx::ObjectPtr< SoundFrontEnd_obj > __this = new SoundFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SoundFrontEnd_obj > SoundFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SoundFrontEnd_obj *__this = (SoundFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SoundFrontEnd_obj), true, "flixel.system.frontEnds.SoundFrontEnd"));
	*(void **)__this = SoundFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SoundFrontEnd_obj::SoundFrontEnd_obj()
{
}

void SoundFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundFrontEnd);
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(muted,"muted");
	HX_MARK_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_MARK_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_MARK_MEMBER_NAME(defaultMusicGroup,"defaultMusicGroup");
	HX_MARK_MEMBER_NAME(defaultSoundGroup,"defaultSoundGroup");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_END_CLASS();
}

void SoundFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(muted,"muted");
	HX_VISIT_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_VISIT_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_VISIT_MEMBER_NAME(defaultMusicGroup,"defaultMusicGroup");
	HX_VISIT_MEMBER_NAME(defaultSoundGroup,"defaultSoundGroup");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(volume,"volume");
}

::hx::Val SoundFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return ::hx::Val( music ); }
		if (HX_FIELD_EQ(inName,"muted") ) { return ::hx::Val( muted ); }
		if (HX_FIELD_EQ(inName,"cache") ) { return ::hx::Val( cache_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return ::hx::Val( volume ); }
		if (HX_FIELD_EQ(inName,"stream") ) { return ::hx::Val( stream_dyn() ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { return ::hx::Val( muteKeys ); }
		if (HX_FIELD_EQ(inName,"cacheAll") ) { return ::hx::Val( cacheAll_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playMusic") ) { return ::hx::Val( playMusic_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadHelper") ) { return ::hx::Val( loadHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return ::hx::Val( set_volume_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toggleMuted") ) { return ::hx::Val( toggleMuted_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { return ::hx::Val( volumeUpKeys ); }
		if (HX_FIELD_EQ(inName,"destroySound") ) { return ::hx::Val( destroySound_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeVolume") ) { return ::hx::Val( changeVolume_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { return ::hx::Val( volumeHandler ); }
		if (HX_FIELD_EQ(inName,"showSoundTray") ) { return ::hx::Val( showSoundTray_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { return ::hx::Val( volumeDownKeys ); }
		if (HX_FIELD_EQ(inName,"loadSavedPrefs") ) { return ::hx::Val( loadSavedPrefs_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { return ::hx::Val( soundTrayEnabled ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultMusicGroup") ) { return ::hx::Val( defaultMusicGroup ); }
		if (HX_FIELD_EQ(inName,"defaultSoundGroup") ) { return ::hx::Val( defaultSoundGroup ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SoundFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_volume(inValue.Cast< Float >()) );volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { volumeHandler=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { soundTrayEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultMusicGroup") ) { defaultMusicGroup=inValue.Cast<  ::flixel::_hx_system::FlxSoundGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultSoundGroup") ) { defaultSoundGroup=inValue.Cast<  ::flixel::_hx_system::FlxSoundGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("music",a5,d0,5a,10));
	outFields->push(HX_("muted",6b,8f,5b,10));
	outFields->push(HX_("volumeUpKeys",69,bb,f5,23));
	outFields->push(HX_("volumeDownKeys",70,2f,58,0b));
	outFields->push(HX_("muteKeys",6d,5d,88,16));
	outFields->push(HX_("soundTrayEnabled",9c,10,68,e0));
	outFields->push(HX_("defaultMusicGroup",7b,94,d9,a0));
	outFields->push(HX_("defaultSoundGroup",11,80,9b,d9));
	outFields->push(HX_("list",5e,1c,b3,47));
	outFields->push(HX_("volume",da,29,53,5f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SoundFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(SoundFrontEnd_obj,music),HX_("music",a5,d0,5a,10)},
	{::hx::fsBool,(int)offsetof(SoundFrontEnd_obj,muted),HX_("muted",6b,8f,5b,10)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SoundFrontEnd_obj,volumeHandler),HX_("volumeHandler",10,fd,6f,5d)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(SoundFrontEnd_obj,volumeUpKeys),HX_("volumeUpKeys",69,bb,f5,23)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(SoundFrontEnd_obj,volumeDownKeys),HX_("volumeDownKeys",70,2f,58,0b)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(SoundFrontEnd_obj,muteKeys),HX_("muteKeys",6d,5d,88,16)},
	{::hx::fsBool,(int)offsetof(SoundFrontEnd_obj,soundTrayEnabled),HX_("soundTrayEnabled",9c,10,68,e0)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSoundGroup */ ,(int)offsetof(SoundFrontEnd_obj,defaultMusicGroup),HX_("defaultMusicGroup",7b,94,d9,a0)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSoundGroup */ ,(int)offsetof(SoundFrontEnd_obj,defaultSoundGroup),HX_("defaultSoundGroup",11,80,9b,d9)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(SoundFrontEnd_obj,list),HX_("list",5e,1c,b3,47)},
	{::hx::fsFloat,(int)offsetof(SoundFrontEnd_obj,volume),HX_("volume",da,29,53,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SoundFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String SoundFrontEnd_obj_sMemberFields[] = {
	HX_("music",a5,d0,5a,10),
	HX_("muted",6b,8f,5b,10),
	HX_("volumeHandler",10,fd,6f,5d),
	HX_("volumeUpKeys",69,bb,f5,23),
	HX_("volumeDownKeys",70,2f,58,0b),
	HX_("muteKeys",6d,5d,88,16),
	HX_("soundTrayEnabled",9c,10,68,e0),
	HX_("defaultMusicGroup",7b,94,d9,a0),
	HX_("defaultSoundGroup",11,80,9b,d9),
	HX_("list",5e,1c,b3,47),
	HX_("volume",da,29,53,5f),
	HX_("playMusic",11,fe,3e,31),
	HX_("load",26,9a,b7,47),
	HX_("loadHelper",34,ac,79,b9),
	HX_("cache",42,9a,14,41),
	HX_("cacheAll",ff,6b,19,9a),
	HX_("play",f4,2d,5a,4a),
	HX_("stream",80,14,2d,11),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("destroy",fa,2c,86,24),
	HX_("destroySound",75,85,cc,72),
	HX_("toggleMuted",37,47,22,38),
	HX_("changeVolume",6a,e3,80,46),
	HX_("showSoundTray",a8,65,ef,47),
	HX_("update",09,86,05,87),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("onFocus",39,fe,c6,9a),
	HX_("loadSavedPrefs",ef,ed,3b,02),
	HX_("set_volume",17,38,58,53),
	::String(null()) };

::hx::Class SoundFrontEnd_obj::__mClass;

void SoundFrontEnd_obj::__register()
{
	SoundFrontEnd_obj _hx_dummy;
	SoundFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.SoundFrontEnd",27,c6,a9,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SoundFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SoundFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SoundFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SoundFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
