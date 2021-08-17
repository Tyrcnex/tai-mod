#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_LoadReplayState
#include <LoadReplayState.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_OptionsMenu
#include <OptionsMenu.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Replay
#include <Replay.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_SongMetadata
#include <SongMetadata.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_67c80871309dda48_19_new,"LoadReplayState","new",0x1e338fb6,"LoadReplayState.new","LoadReplayState.hx",19,0xb45e587a)
HX_LOCAL_STACK_FRAME(_hx_pos_67c80871309dda48_33_create,"LoadReplayState","create",0x8c296166,"LoadReplayState.create","LoadReplayState.hx",33,0xb45e587a)
static const ::String _hx_array_data_8a203cc4_4[] = {
	HX_("Bopeebo",90,29,16,da),HX_("Fresh",4e,f6,b3,99),HX_("Dadbattle",9f,4a,7c,48),
};
static const ::String _hx_array_data_8a203cc4_5[] = {
	HX_("dad",47,36,4c,00),
};
static const ::String _hx_array_data_8a203cc4_6[] = {
	HX_("Spookeez",2c,36,dd,4e),HX_("South",ed,01,fa,13),HX_("Monster",fa,7b,01,86),
};
static const ::String _hx_array_data_8a203cc4_7[] = {
	HX_("spooky",eb,bd,9e,c1),
};
static const ::String _hx_array_data_8a203cc4_8[] = {
	HX_("Pico",05,15,31,35),HX_("Philly",48,eb,f2,23),HX_("Blammed",76,2a,51,09),
};
static const ::String _hx_array_data_8a203cc4_9[] = {
	HX_("pico",e5,e8,57,4a),
};
static const ::String _hx_array_data_8a203cc4_10[] = {
	HX_("Satin-Panties",be,dc,41,e6),HX_("High",82,63,e7,2f),HX_("Milf",f6,78,35,33),
};
static const ::String _hx_array_data_8a203cc4_11[] = {
	HX_("mom",cb,16,53,00),
};
static const ::String _hx_array_data_8a203cc4_12[] = {
	HX_("Cocoa",e9,0c,83,dd),HX_("Eggnog",81,78,4e,29),HX_("Winter-Horrorland",9d,fd,2a,b7),
};
static const ::String _hx_array_data_8a203cc4_13[] = {
	HX_("parents-christmas",fe,94,c5,32),HX_("parents-christmas",fe,94,c5,32),HX_("monster-christmas",4f,88,85,27),
};
static const ::String _hx_array_data_8a203cc4_14[] = {
	HX_("Senpai",5c,53,22,a0),HX_("Roses",e4,db,91,80),HX_("Thorns",bc,33,5c,c1),
};
static const ::String _hx_array_data_8a203cc4_15[] = {
	HX_("senpai",3c,df,8d,6b),HX_("senpai",3c,df,8d,6b),HX_("spirit",31,bb,a9,bd),
};
HX_LOCAL_STACK_FRAME(_hx_pos_67c80871309dda48_100_getWeekNumbFromSong,"LoadReplayState","getWeekNumbFromSong",0x140b87fb,"LoadReplayState.getWeekNumbFromSong","LoadReplayState.hx",100,0xb45e587a)
HX_LOCAL_STACK_FRAME(_hx_pos_67c80871309dda48_113_addSong,"LoadReplayState","addSong",0x8f3688ec,"LoadReplayState.addSong","LoadReplayState.hx",113,0xb45e587a)
HX_LOCAL_STACK_FRAME(_hx_pos_67c80871309dda48_117_addWeek,"LoadReplayState","addWeek",0x91d3c50b,"LoadReplayState.addWeek","LoadReplayState.hx",117,0xb45e587a)
static const ::String _hx_array_data_8a203cc4_21[] = {
	HX_("bf",c4,55,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_67c80871309dda48_133_update,"LoadReplayState","update",0x971f8073,"LoadReplayState.update","LoadReplayState.hx",133,0xb45e587a)
HX_LOCAL_STACK_FRAME(_hx_pos_67c80871309dda48_164_changeSelection,"LoadReplayState","changeSelection",0x45620112,"LoadReplayState.changeSelection","LoadReplayState.hx",164,0xb45e587a)

void LoadReplayState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_67c80871309dda48_19_new)
HXLINE( 161)		this->isSettingControl = false;
HXLINE(  27)		this->actualNames = ::Array_obj< ::String >::__new(0);
HXLINE(  26)		this->controlsStrings = ::Array_obj< ::String >::__new(0);
HXLINE(  24)		this->songs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  22)		this->curSelected = 0;
HXLINE(  19)		super::__construct(TransIn,TransOut);
            	}

Dynamic LoadReplayState_obj::__CreateEmpty() { return new LoadReplayState_obj; }

void *LoadReplayState_obj::_hx_vtable = 0;

Dynamic LoadReplayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LoadReplayState_obj > _hx_result = new LoadReplayState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LoadReplayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x56472204) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x56472204;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void LoadReplayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_67c80871309dda48_33_create)
HXLINE(  34)		 ::flixel::FlxSprite menuBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  34)		::String library = null();
HXDLIN(  34)		 ::flixel::FlxSprite menuBG1 = menuBG->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  36)		this->controlsStrings = ::sys::FileSystem_obj::readDirectory((::Sys_obj::getCwd() + HX_("/assets/replays/",40,86,c0,57)));
HXLINE(  38)		::haxe::Log_obj::trace(this->controlsStrings,::hx::SourceInfo(HX_("source/LoadReplayState.hx",6e,34,7a,fb),38,HX_("LoadReplayState",c4,3c,20,8a),HX_("create",fc,66,0f,7c)));
HXLINE(  40)		this->controlsStrings->sort(::Reflect_obj::compare_dyn());
HXLINE(  42)		this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_4,3),1,::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_5,1));
HXLINE(  43)		this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_6,3),2,::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_7,1));
HXLINE(  44)		this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_8,3),3,::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_9,1));
HXLINE(  46)		this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_10,3),4,::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_11,1));
HXLINE(  47)		this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_12,3),5,::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_13,3));
HXLINE(  49)		this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_14,3),6,::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_15,3));
HXLINE(  52)		{
HXLINE(  52)			int _g = 0;
HXDLIN(  52)			int _g1 = this->controlsStrings->length;
HXDLIN(  52)			while((_g < _g1)){
HXLINE(  52)				_g = (_g + 1);
HXDLIN(  52)				int i = (_g - 1);
HXLINE(  54)				::String string = this->controlsStrings->__get(i);
HXLINE(  55)				this->actualNames[i] = string;
HXLINE(  56)				 ::Replay rep = ::Replay_obj::LoadReplay(string);
HXLINE(  57)				::Array< ::String > _hx_tmp = this->controlsStrings;
HXDLIN(  57)				::String _hx_tmp1 = (string.split(HX_("time",0d,cc,fc,4c))->__get(0) + HX_(" ",20,00,00,00));
HXDLIN(  57)				::String _hx_tmp2;
HXDLIN(  57)				if (::hx::IsEq( rep->replay->__Field(HX_("songDiff",7a,ba,41,30),::hx::paccDynamic),2 )) {
HXLINE(  57)					_hx_tmp2 = HX_("HARD",eb,f6,c8,2f);
            				}
            				else {
HXLINE(  57)					if (::hx::IsEq( rep->replay->__Field(HX_("songDiff",7a,ba,41,30),::hx::paccDynamic),1 )) {
HXLINE(  57)						_hx_tmp2 = HX_("EASY",02,54,cd,2d);
            					}
            					else {
HXLINE(  57)						_hx_tmp2 = HX_("NORMAL",27,1e,ec,e2);
            					}
            				}
HXDLIN(  57)				_hx_tmp[i] = (_hx_tmp1 + _hx_tmp2);
            			}
            		}
HXLINE(  60)		if ((this->controlsStrings->length == 0)) {
HXLINE(  61)			this->controlsStrings->push(HX_("No Replays...",81,d1,ed,00));
            		}
HXLINE(  63)		menuBG1->set_color(-1412611);
HXLINE(  64)		menuBG1->setGraphicSize(::Std_obj::_hx_int((menuBG1->get_width() * ((Float)1.1))),null());
HXLINE(  65)		menuBG1->updateHitbox();
HXLINE(  66)		menuBG1->screenCenter(null());
HXLINE(  67)		menuBG1->set_antialiasing(true);
HXLINE(  68)		this->add(menuBG1);
HXLINE(  70)		this->grpControls =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  71)		this->add(this->grpControls);
HXLINE(  73)		{
HXLINE(  73)			int _g2 = 0;
HXDLIN(  73)			int _g3 = this->controlsStrings->length;
HXDLIN(  73)			while((_g2 < _g3)){
HXLINE(  73)				_g2 = (_g2 + 1);
HXDLIN(  73)				int i = (_g2 - 1);
HXLINE(  75)				 ::Alphabet controlLabel =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->controlsStrings->__get(i),true,false);
HXLINE(  76)				controlLabel->isMenuItem = true;
HXLINE(  77)				controlLabel->targetY = ( (Float)(i) );
HXLINE(  78)				this->grpControls->add(controlLabel).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE(  83)		this->versionShit =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,(::flixel::FlxG_obj::height - 34),0,HX_("Replay Loader (ESCAPE TO GO BACK)\nNOTICE!!!! Replays are in a beta stage, and they are probably not 100% correct. expect misses and other stuff that isn't there!",b8,5a,29,fe),12,null());
HXLINE(  84)		this->versionShit->scrollFactor->set(null(),null());
HXLINE(  85)		this->versionShit->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  86)		this->add(this->versionShit);
HXLINE(  89)		this->poggerDetails =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,34,0,HX_("Replay Details - \nnone",38,c3,7c,19),12,null());
HXLINE(  90)		this->poggerDetails->scrollFactor->set(null(),null());
HXLINE(  91)		this->poggerDetails->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  92)		this->add(this->poggerDetails);
HXLINE(  94)		this->changeSelection(0);
HXLINE(  96)		this->super::create();
            	}


int LoadReplayState_obj::getWeekNumbFromSong(::String songName){
            	HX_STACKFRAME(&_hx_pos_67c80871309dda48_100_getWeekNumbFromSong)
HXLINE( 101)		int week = 0;
HXLINE( 102)		{
HXLINE( 102)			int _g = 0;
HXDLIN( 102)			int _g1 = this->songs->length;
HXDLIN( 102)			while((_g < _g1)){
HXLINE( 102)				_g = (_g + 1);
HXDLIN( 102)				int i = (_g - 1);
HXLINE( 104)				 ::SongMetadata pog = this->songs->__get(i).StaticCast<  ::SongMetadata >();
HXLINE( 105)				if ((pog->songName.toLowerCase() == songName)) {
HXLINE( 106)					week = pog->week;
            				}
            			}
            		}
HXLINE( 108)		return week;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadReplayState_obj,getWeekNumbFromSong,return )

void LoadReplayState_obj::addSong(::String songName,int weekNum,::String songCharacter){
            	HX_GC_STACKFRAME(&_hx_pos_67c80871309dda48_113_addSong)
HXDLIN( 113)		::Array< ::Dynamic> _hx_tmp = this->songs;
HXDLIN( 113)		_hx_tmp->push( ::SongMetadata_obj::__alloc( HX_CTX ,songName,weekNum,songCharacter));
            	}


HX_DEFINE_DYNAMIC_FUNC3(LoadReplayState_obj,addSong,(void))

void LoadReplayState_obj::addWeek(::Array< ::String > songs,int weekNum,::Array< ::String > songCharacters){
            	HX_STACKFRAME(&_hx_pos_67c80871309dda48_117_addWeek)
HXLINE( 118)		if (::hx::IsNull( songCharacters )) {
HXLINE( 119)			songCharacters = ::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_21,1);
            		}
HXLINE( 121)		int num = 0;
HXLINE( 122)		{
HXLINE( 122)			int _g = 0;
HXDLIN( 122)			while((_g < songs->length)){
HXLINE( 122)				::String song = songs->__get(_g);
HXDLIN( 122)				_g = (_g + 1);
HXLINE( 124)				this->addSong(song,weekNum,songCharacters->__get(num));
HXLINE( 126)				if ((songCharacters->length != 1)) {
HXLINE( 127)					num = (num + 1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(LoadReplayState_obj,addWeek,(void))

void LoadReplayState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_67c80871309dda48_133_update)
HXLINE( 134)		this->super::update(elapsed);
HXLINE( 136)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 137)			 ::flixel::FlxState nextState =  ::OptionsMenu_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 137)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 137)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 138)		if (::PlayerSettings_obj::player1->controls->_upP->check()) {
HXLINE( 139)			this->changeSelection(-1);
            		}
HXLINE( 140)		if (::PlayerSettings_obj::player1->controls->_downP->check()) {
HXLINE( 141)			this->changeSelection(1);
            		}
HXLINE( 144)		bool _hx_tmp;
HXDLIN( 144)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 144)			_hx_tmp = (Dynamic( this->grpControls->members->__get(this->curSelected)).StaticCast<  ::Alphabet >()->text != HX_("No Replays...",81,d1,ed,00));
            		}
            		else {
HXLINE( 144)			_hx_tmp = false;
            		}
HXDLIN( 144)		if (_hx_tmp) {
HXLINE( 146)			::haxe::Log_obj::trace((HX_("loading ",24,de,81,cb) + this->actualNames->__get(this->curSelected)),::hx::SourceInfo(HX_("source/LoadReplayState.hx",6e,34,7a,fb),146,HX_("LoadReplayState",c4,3c,20,8a),HX_("update",09,86,05,87)));
HXLINE( 147)			::PlayState_obj::rep = ::Replay_obj::LoadReplay(this->actualNames->__get(this->curSelected));
HXLINE( 149)			::PlayState_obj::loadRep = true;
HXLINE( 151)			::String poop = ( (::String)(::PlayState_obj::rep->replay->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ).toLowerCase();
HXDLIN( 151)			::String poop1 = ::Highscore_obj::formatSong(poop,( (int)(::PlayState_obj::rep->replay->__Field(HX_("songDiff",7a,ba,41,30),::hx::paccDynamic)) ));
HXLINE( 153)			::PlayState_obj::SONG = ::Song_obj::loadFromJson(poop1,( (::String)(::PlayState_obj::rep->replay->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ).toLowerCase());
HXLINE( 154)			::PlayState_obj::isStoryMode = false;
HXLINE( 155)			::PlayState_obj::storyDifficulty = ( (int)(::PlayState_obj::rep->replay->__Field(HX_("songDiff",7a,ba,41,30),::hx::paccDynamic)) );
HXLINE( 156)			::PlayState_obj::storyWeek = this->getWeekNumbFromSong(( (::String)(::PlayState_obj::rep->replay->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ));
HXLINE( 157)			{
HXLINE( 157)				 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 157)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 157)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            	}


void LoadReplayState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_67c80871309dda48_164_changeSelection)
HXLINE( 169)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 169)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 171)		 ::LoadReplayState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 171)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + change);
HXLINE( 173)		if ((this->curSelected < 0)) {
HXLINE( 174)			this->curSelected = (this->grpControls->length - 1);
            		}
HXLINE( 175)		if ((this->curSelected >= this->grpControls->length)) {
HXLINE( 176)			this->curSelected = 0;
            		}
HXLINE( 178)		 ::Replay rep = ::Replay_obj::LoadReplay(this->actualNames->__get(this->curSelected));
HXLINE( 180)		 ::flixel::text::FlxText _hx_tmp2 = this->poggerDetails;
HXDLIN( 180)		::String _hx_tmp3 = ((HX_("Replay Details - \nDate Created: ",9c,0e,70,a7) + ::Std_obj::string( ::Dynamic(rep->replay->__Field(HX_("timestamp",d6,d4,ce,a5),::hx::paccDynamic)))) + HX_("\nSong: ",65,cd,f3,01));
HXDLIN( 180)		::String _hx_tmp4;
HXDLIN( 180)		if (::hx::IsNotEq( rep->replay->__Field(HX_("replayGameVer",2a,ad,0b,ce),::hx::paccDynamic),::Replay_obj::version )) {
HXLINE( 180)			_hx_tmp4 = HX_("OUTDATED",28,3f,a2,5d);
            		}
            		else {
HXLINE( 180)			_hx_tmp4 = HX_("Latest",67,79,f7,89);
            		}
HXDLIN( 180)		_hx_tmp2->set_text(( (::String)((((_hx_tmp3 + rep->replay->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) + HX_("\nReplay Version: ",8f,f9,99,d3)) + _hx_tmp4)) ));
HXLINE( 184)		int bullShit = 0;
HXLINE( 186)		{
HXLINE( 186)			int _g = 0;
HXDLIN( 186)			::Array< ::Dynamic> _g1 = this->grpControls->members;
HXDLIN( 186)			while((_g < _g1->length)){
HXLINE( 186)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 186)				_g = (_g + 1);
HXLINE( 188)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 189)				bullShit = (bullShit + 1);
HXLINE( 191)				item->set_alpha(((Float)0.6));
HXLINE( 194)				if ((item->targetY == 0)) {
HXLINE( 196)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadReplayState_obj,changeSelection,(void))


::hx::ObjectPtr< LoadReplayState_obj > LoadReplayState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< LoadReplayState_obj > __this = new LoadReplayState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< LoadReplayState_obj > LoadReplayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	LoadReplayState_obj *__this = (LoadReplayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LoadReplayState_obj), true, "LoadReplayState"));
	*(void **)__this = LoadReplayState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

LoadReplayState_obj::LoadReplayState_obj()
{
}

void LoadReplayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoadReplayState);
	HX_MARK_MEMBER_NAME(selector,"selector");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(songs,"songs");
	HX_MARK_MEMBER_NAME(controlsStrings,"controlsStrings");
	HX_MARK_MEMBER_NAME(actualNames,"actualNames");
	HX_MARK_MEMBER_NAME(grpControls,"grpControls");
	HX_MARK_MEMBER_NAME(versionShit,"versionShit");
	HX_MARK_MEMBER_NAME(poggerDetails,"poggerDetails");
	HX_MARK_MEMBER_NAME(isSettingControl,"isSettingControl");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoadReplayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(selector,"selector");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(songs,"songs");
	HX_VISIT_MEMBER_NAME(controlsStrings,"controlsStrings");
	HX_VISIT_MEMBER_NAME(actualNames,"actualNames");
	HX_VISIT_MEMBER_NAME(grpControls,"grpControls");
	HX_VISIT_MEMBER_NAME(versionShit,"versionShit");
	HX_VISIT_MEMBER_NAME(poggerDetails,"poggerDetails");
	HX_VISIT_MEMBER_NAME(isSettingControl,"isSettingControl");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LoadReplayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { return ::hx::Val( songs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addSong") ) { return ::hx::Val( addSong_dyn() ); }
		if (HX_FIELD_EQ(inName,"addWeek") ) { return ::hx::Val( addWeek_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { return ::hx::Val( selector ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"actualNames") ) { return ::hx::Val( actualNames ); }
		if (HX_FIELD_EQ(inName,"grpControls") ) { return ::hx::Val( grpControls ); }
		if (HX_FIELD_EQ(inName,"versionShit") ) { return ::hx::Val( versionShit ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"poggerDetails") ) { return ::hx::Val( poggerDetails ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"controlsStrings") ) { return ::hx::Val( controlsStrings ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isSettingControl") ) { return ::hx::Val( isSettingControl ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getWeekNumbFromSong") ) { return ::hx::Val( getWeekNumbFromSong_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LoadReplayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { songs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { selector=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actualNames") ) { actualNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpControls") ) { grpControls=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"versionShit") ) { versionShit=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"poggerDetails") ) { poggerDetails=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"controlsStrings") ) { controlsStrings=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isSettingControl") ) { isSettingControl=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoadReplayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selector",1f,33,6d,b1));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("songs",fe,36,c7,80));
	outFields->push(HX_("controlsStrings",ac,8a,05,03));
	outFields->push(HX_("actualNames",5a,b2,63,04));
	outFields->push(HX_("grpControls",7b,bb,b2,d5));
	outFields->push(HX_("versionShit",f8,4e,3b,e2));
	outFields->push(HX_("poggerDetails",16,16,08,68));
	outFields->push(HX_("isSettingControl",37,39,d8,de));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LoadReplayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(LoadReplayState_obj,selector),HX_("selector",1f,33,6d,b1)},
	{::hx::fsInt,(int)offsetof(LoadReplayState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(LoadReplayState_obj,songs),HX_("songs",fe,36,c7,80)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(LoadReplayState_obj,controlsStrings),HX_("controlsStrings",ac,8a,05,03)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(LoadReplayState_obj,actualNames),HX_("actualNames",5a,b2,63,04)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(LoadReplayState_obj,grpControls),HX_("grpControls",7b,bb,b2,d5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(LoadReplayState_obj,versionShit),HX_("versionShit",f8,4e,3b,e2)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(LoadReplayState_obj,poggerDetails),HX_("poggerDetails",16,16,08,68)},
	{::hx::fsBool,(int)offsetof(LoadReplayState_obj,isSettingControl),HX_("isSettingControl",37,39,d8,de)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LoadReplayState_obj_sStaticStorageInfo = 0;
#endif

static ::String LoadReplayState_obj_sMemberFields[] = {
	HX_("selector",1f,33,6d,b1),
	HX_("curSelected",fb,eb,ab,32),
	HX_("songs",fe,36,c7,80),
	HX_("controlsStrings",ac,8a,05,03),
	HX_("actualNames",5a,b2,63,04),
	HX_("grpControls",7b,bb,b2,d5),
	HX_("versionShit",f8,4e,3b,e2),
	HX_("poggerDetails",16,16,08,68),
	HX_("create",fc,66,0f,7c),
	HX_("getWeekNumbFromSong",a5,3c,95,20),
	HX_("addSong",96,66,95,88),
	HX_("addWeek",b5,a2,32,8b),
	HX_("update",09,86,05,87),
	HX_("isSettingControl",37,39,d8,de),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

::hx::Class LoadReplayState_obj::__mClass;

void LoadReplayState_obj::__register()
{
	LoadReplayState_obj _hx_dummy;
	LoadReplayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LoadReplayState",c4,3c,20,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LoadReplayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LoadReplayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoadReplayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoadReplayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

