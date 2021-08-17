#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_KadeEngineData
#include <KadeEngineData.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_NGio
#include <NGio.h>
#endif
#ifndef INCLUDED_OutdatedSubState
#include <OutdatedSubState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_transition_GraphicTransTileDiamond
#include <flixel/addons/transition/GraphicTransTileDiamond.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_io_newgrounds_NG
#include <io/newgrounds/NG.h>
#endif
#ifndef INCLUDED_io_newgrounds_NGLite
#include <io/newgrounds/NGLite.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_Medal
#include <io/newgrounds/objects/Medal.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_Object
#include <io/newgrounds/objects/Object.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_polymod_ModMetadata
#include <polymod/ModMetadata.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a55214e0452daa02_37_new,"TitleState","new",0x3b23deeb,"TitleState.new","TitleState.hx",37,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_73_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",73,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_118_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",118,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_52_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",52,0xd132a6e5)
static const ::String _hx_array_data_8ca18d79_4[] = {
	HX_("introMod",b6,4f,97,a2),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_129_startIntro,"TitleState","startIntro",0x6a094b7f,"TitleState.startIntro","TitleState.hx",129,0xd132a6e5)
static const int _hx_array_data_8ca18d79_6[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_8ca18d79_7[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_236_getIntroTextShit,"TitleState","getIntroTextShit",0x5dcf15b8,"TitleState.getIntroTextShit","TitleState.hx",236,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_253_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",253,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_316_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",316,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_332_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",332,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_308_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",308,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_352_createCoolText,"TitleState","createCoolText",0x83610287,"TitleState.createCoolText","TitleState.hx",352,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_363_addMoreText,"TitleState","addMoreText",0xcf420fae,"TitleState.addMoreText","TitleState.hx",363,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_373_deleteCoolText,"TitleState","deleteCoolText",0x8afda2b6,"TitleState.deleteCoolText","TitleState.hx",373,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_381_beatHit,"TitleState","beatHit",0xfba69a88,"TitleState.beatHit","TitleState.hx",381,0xd132a6e5)
static const ::String _hx_array_data_8ca18d79_20[] = {
	HX_("mraydinminer",33,e9,8b,5b),HX_("tyrcnex",ab,89,5a,1e),HX_("verytide",ec,8b,60,52),HX_("nickolosses",7d,8d,bd,25),
};
static const ::String _hx_array_data_8ca18d79_21[] = {
	HX_("khio",c3,1a,09,47),HX_("mixisdumb",ac,44,8a,39),HX_("ragolithic",22,7a,56,8a),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_449_skipIntro,"TitleState","skipIntro",0xc9924038,"TitleState.skipIntro","TitleState.hx",449,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_39_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",39,0xd132a6e5)

void TitleState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_37_new)
HXLINE( 445)		this->skippedIntro = false;
HXLINE( 250)		this->transitioning = false;
HXLINE( 125)		this->danceLeft = false;
HXLINE(  47)		this->curWacky = ::Array_obj< ::String >::__new(0);
HXLINE(  37)		super::__construct(TransIn,TransOut);
            	}

Dynamic TitleState_obj::__CreateEmpty() { return new TitleState_obj; }

void *TitleState_obj::_hx_vtable = 0;

Dynamic TitleState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TitleState_obj > _hx_result = new TitleState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TitleState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x22c6bd01) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x22c6bd01;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void TitleState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run(int exitCode){
            			HX_STACKFRAME(&_hx_pos_a55214e0452daa02_73_create)
HXLINE(  73)			::DiscordClient_obj::shutdown();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::TitleState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_118_create)
HXLINE( 118)			_gthis->startIntro();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_52_create)
HXDLIN(  52)		 ::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  54)		::polymod::Polymod_obj::init( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("modRoot",04,ba,da,e0),HX_("mods",71,d3,60,48))
            			->setFixed(1,HX_("dirs",86,66,69,42),::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_4,1))));
HXLINE(  58)		if (!(::sys::FileSystem_obj::exists((::Sys_obj::getCwd() + HX_("/assets/replays",0f,a7,b1,e3))))) {
HXLINE(  59)			::sys::FileSystem_obj::createDirectory((::Sys_obj::getCwd() + HX_("/assets/replays",0f,a7,b1,e3)));
            		}
HXLINE(  64)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  64)		::String _hx_tmp1 = ((HX_("Loaded ",5b,e4,40,d6) + ::openfl::utils::Assets_obj::getLibrary(HX_("default",c1,d8,c3,9b))->assetsLoaded) + HX_(" assets (DEFAULT)",d3,2e,5f,74));
HXDLIN(  64)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/TitleState.hx",71,4f,0c,46),64,HX_("TitleState",79,8d,a1,8c),HX_("create",fc,66,0f,7c)));
HXLINE(  67)		::PlayerSettings_obj::init();
HXLINE(  70)		::DiscordClient_obj::initialize();
HXLINE(  72)		::lime::app::Application_obj::current->onExit->add( ::Dynamic(new _hx_Closure_0()),null(),null());
HXLINE(  78)		 ::flixel::math::FlxRandom _hx_tmp2 = ::flixel::FlxG_obj::random;
HXDLIN(  78)		this->curWacky = _hx_tmp2->getObject_Array_String(this->getIntroTextShit(),null(),null(),null());
HXLINE(  82)		this->super::create();
HXLINE(  91)		::flixel::FlxG_obj::save->bind(HX_("funkin",31,b2,4f,6f),HX_("ninjamuffin99",f7,4c,e5,00));
HXLINE(  93)		::KadeEngineData_obj::initSave();
HXLINE(  95)		::Highscore_obj::load();
HXLINE(  97)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("weekUnlocked",37,64,c4,a5),::hx::paccDynamic) )) {
HXLINE( 103)			if ((::StoryMenuState_obj::weekUnlocked->length < 4)) {
HXLINE( 104)				::StoryMenuState_obj::weekUnlocked->insert(0,true);
            			}
HXLINE( 107)			if (!(::StoryMenuState_obj::weekUnlocked->__get(0))) {
HXLINE( 108)				::StoryMenuState_obj::weekUnlocked[0] = true;
            			}
            		}
HXLINE( 116)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_1(_gthis)),null());
            	}


void TitleState_obj::startIntro(){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_129_startIntro)
HXLINE( 130)		if (!(::TitleState_obj::initialized)) {
HXLINE( 132)			 ::flixel::graphics::FlxGraphic diamond = ::flixel::graphics::FlxGraphic_obj::fromClass(::hx::ClassOf< ::flixel::addons::transition::GraphicTransTileDiamond >(),null(),null(),null());
HXLINE( 133)			diamond->persist = true;
HXLINE( 134)			diamond->set_destroyOnNoUse(false);
HXLINE( 136)			 ::flixel::math::FlxPoint _hx_tmp =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,0,-1);
HXDLIN( 136)			::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn =  ::flixel::addons::transition::TransitionData_obj::__alloc( HX_CTX ,HX_("fade",7c,b5,b5,43),-16777216,1,_hx_tmp, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("width",06,b6,62,ca),32)
            				->setFixed(1,HX_("height",e7,07,4c,02),32)
            				->setFixed(2,HX_("asset",f0,69,39,26),diamond)), ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,-200,-200,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.4)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.4))));
HXLINE( 138)			 ::flixel::math::FlxPoint _hx_tmp1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 138)			::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut =  ::flixel::addons::transition::TransitionData_obj::__alloc( HX_CTX ,HX_("fade",7c,b5,b5,43),-16777216,((Float)0.7),_hx_tmp1, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("width",06,b6,62,ca),32)
            				->setFixed(1,HX_("height",e7,07,4c,02),32)
            				->setFixed(2,HX_("asset",f0,69,39,26),diamond)), ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,-200,-200,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.4)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.4))));
HXLINE( 141)			this->transIn = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn;
HXLINE( 142)			this->transOut = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut;
HXLINE( 152)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp2 = ::flixel::FlxG_obj::sound;
HXDLIN( 152)			::String library = null();
HXDLIN( 152)			_hx_tmp2->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),0,null(),null());
HXLINE( 154)			{
HXLINE( 154)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 154)				 ::Dynamic onComplete = null();
HXDLIN( 154)				if (::hx::IsNull( _this->_channel )) {
HXLINE( 154)					_this->play(null(),null(),null());
            				}
HXDLIN( 154)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 154)					_this->fadeTween->cancel();
            				}
HXDLIN( 154)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
            		}
HXLINE( 157)		::Conductor_obj::changeBPM(102);
HXLINE( 158)		this->persistentUpdate = true;
HXLINE( 160)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 164)		this->add(bg);
HXLINE( 166)		this->logoBl =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-150,-100,null());
HXLINE( 167)		 ::flixel::FlxSprite _hx_tmp = this->logoBl;
HXDLIN( 167)		::String library = null();
HXDLIN( 167)		::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logoBumpin",26,cb,02,ab)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 167)		_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logoBumpin",26,cb,02,ab)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 168)		this->logoBl->set_antialiasing(true);
HXLINE( 169)		this->logoBl->animation->addByPrefix(HX_("bump",f6,0f,20,41),HX_("logo bumpin",70,a1,0b,72),24,null(),null(),null());
HXLINE( 170)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 171)		this->logoBl->updateHitbox();
HXLINE( 175)		this->gfDance =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.4)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.07)),null());
HXLINE( 176)		 ::flixel::FlxSprite _hx_tmp2 = this->gfDance;
HXDLIN( 176)		::String library1 = null();
HXDLIN( 176)		::String _hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gfDanceTitle",64,64,d2,7b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN( 176)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gfDanceTitle",64,64,d2,7b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1)));
HXLINE( 177)		this->gfDance->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_6,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 178)		this->gfDance->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_7,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 179)		this->gfDance->set_antialiasing(true);
HXLINE( 180)		this->add(this->gfDance);
HXLINE( 181)		this->add(this->logoBl);
HXLINE( 183)		this->titleText =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,100,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.8)),null());
HXLINE( 184)		 ::flixel::FlxSprite _hx_tmp4 = this->titleText;
HXDLIN( 184)		::String library2 = null();
HXDLIN( 184)		::String _hx_tmp5 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("titleEnter",60,80,6b,82)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2);
HXDLIN( 184)		_hx_tmp4->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp5,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("titleEnter",60,80,6b,82)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2)));
HXLINE( 185)		this->titleText->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Press Enter to Begin",e9,79,2c,83),24,null(),null(),null());
HXLINE( 186)		this->titleText->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("ENTER PRESSED",5a,47,9f,63),24,null(),null(),null());
HXLINE( 187)		this->titleText->set_antialiasing(true);
HXLINE( 188)		this->titleText->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 189)		this->titleText->updateHitbox();
HXLINE( 191)		this->add(this->titleText);
HXLINE( 193)		 ::flixel::FlxSprite logo =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 193)		::String library3 = null();
HXDLIN( 193)		 ::flixel::FlxSprite logo1 = logo->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logo",6b,9f,b7,47)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3),null(),null(),null(),null(),null());
HXLINE( 194)		logo1->screenCenter(null());
HXLINE( 195)		logo1->set_antialiasing(true);
HXLINE( 201)		this->credGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 202)		this->add(this->credGroup);
HXLINE( 203)		this->textGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 205)		this->blackScreen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 206)		this->credGroup->add(this->blackScreen).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 208)		this->credTextShit =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("mraydinminer\ntyrcnex\njemartz",53,ed,f7,23),true,null());
HXLINE( 209)		this->credTextShit->screenCenter(null());
HXLINE( 213)		this->credTextShit->set_visible(false);
HXLINE( 215)		 ::flixel::FlxSprite _hx_tmp6 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.52)),null());
HXDLIN( 215)		::String library4 = null();
HXDLIN( 215)		this->ngSpr = _hx_tmp6->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("newgrounds_logo",1e,5c,8d,a6)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library4),null(),null(),null(),null(),null());
HXLINE( 216)		this->add(this->ngSpr);
HXLINE( 217)		this->ngSpr->set_visible(false);
HXLINE( 218)		 ::flixel::FlxSprite _hx_tmp7 = this->ngSpr;
HXDLIN( 218)		_hx_tmp7->setGraphicSize(::Std_obj::_hx_int((this->ngSpr->get_width() * ((Float)0.8))),null());
HXLINE( 219)		this->ngSpr->updateHitbox();
HXLINE( 220)		this->ngSpr->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 221)		this->ngSpr->set_antialiasing(true);
HXLINE( 223)		::flixel::tweens::FlxTween_obj::tween(this->credTextShit, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(this->credTextShit->y + 20))),((Float)2.9), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            			->setFixed(1,HX_("type",ba,f2,08,4d),4)));
HXLINE( 225)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 227)		if (::TitleState_obj::initialized) {
HXLINE( 228)			this->skipIntro();
            		}
            		else {
HXLINE( 230)			::TitleState_obj::initialized = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,startIntro,(void))

::Array< ::Dynamic> TitleState_obj::getIntroTextShit(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_236_getIntroTextShit)
HXLINE( 237)		::String library = null();
HXDLIN( 237)		::String fullText = ::openfl::utils::Assets_obj::getText(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + HX_("introText",39,69,67,a6)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 239)		::Array< ::String > firstArray = fullText.split(HX_("\n",0a,00,00,00));
HXLINE( 240)		::Array< ::Dynamic> swagGoodArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 242)		{
HXLINE( 242)			int _g = 0;
HXDLIN( 242)			while((_g < firstArray->length)){
HXLINE( 242)				::String i = firstArray->__get(_g);
HXDLIN( 242)				_g = (_g + 1);
HXLINE( 244)				swagGoodArray->push(i.split(HX_("--",60,27,00,00)));
            			}
            		}
HXLINE( 247)		return swagGoodArray;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,getIntroTextShit,return )

void TitleState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_253_update)
HXLINE( 254)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 255)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 258)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 258)		if (_this->keyManager->checkStatus(70,_this->status)) {
HXLINE( 260)			::flixel::FlxG_obj::set_fullscreen(!(::flixel::FlxG_obj::get_fullscreen()));
            		}
HXLINE( 263)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 263)		bool pressedEnter = _this1->keyManager->checkStatus(13,_this1->status);
HXLINE( 275)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE( 277)		if (::hx::IsNotNull( gamepad )) {
HXLINE( 279)			 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 279)			int id = 7;
HXDLIN( 279)			 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 279)			int Status = _this->status;
HXDLIN( 279)			bool _hx_tmp;
HXDLIN( 279)			switch((int)(id)){
            				case (int)-2: {
HXLINE( 279)					_hx_tmp = _this1->anyButton(Status);
            				}
            				break;
            				case (int)-1: {
HXLINE( 279)					_hx_tmp = !(_this1->anyButton(Status));
            				}
            				break;
            				default:{
HXLINE( 279)					int RawID = _this1->mapping->getRawID(id);
HXDLIN( 279)					 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 279)					if (::hx::IsNotNull( button )) {
HXLINE( 279)						_hx_tmp = button->hasState(Status);
            					}
            					else {
HXLINE( 279)						_hx_tmp = false;
            					}
            				}
            			}
HXDLIN( 279)			if (_hx_tmp) {
HXLINE( 280)				pressedEnter = true;
            			}
            		}
HXLINE( 288)		bool _hx_tmp;
HXDLIN( 288)		bool _hx_tmp1;
HXDLIN( 288)		if (pressedEnter) {
HXLINE( 288)			_hx_tmp1 = !(this->transitioning);
            		}
            		else {
HXLINE( 288)			_hx_tmp1 = false;
            		}
HXDLIN( 288)		if (_hx_tmp1) {
HXLINE( 288)			_hx_tmp = this->skippedIntro;
            		}
            		else {
HXLINE( 288)			_hx_tmp = false;
            		}
HXDLIN( 288)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,returnedData) HXARGC(1)
            				void _hx_run(::String data){
            					HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_316_update)
HXLINE( 317)					returnedData[0] = data.substring(0,data.indexOf(HX_(";",3b,00,00,00),null()));
HXLINE( 318)					::Array< ::String > returnedData1 = returnedData;
HXDLIN( 318)					int _hx_tmp = data.indexOf(HX_("-",2d,00,00,00),null());
HXDLIN( 318)					returnedData1[1] = data.substring(_hx_tmp,data.length);
HXLINE( 319)					bool _hx_tmp1;
HXDLIN( 319)					bool _hx_tmp2;
HXDLIN( 319)					::String s = ::MainMenuState_obj::kadeEngineVer;
HXDLIN( 319)					if ((s.indexOf(::StringTools_obj::trim(returnedData->__get(0)),null()) == -1)) {
HXLINE( 319)						_hx_tmp2 = !(::OutdatedSubState_obj::leftState);
            					}
            					else {
HXLINE( 319)						_hx_tmp2 = false;
            					}
HXDLIN( 319)					if (_hx_tmp2) {
HXLINE( 319)						_hx_tmp1 = (::MainMenuState_obj::nightly == HX_("",00,00,00,00));
            					}
            					else {
HXLINE( 319)						_hx_tmp1 = false;
            					}
HXDLIN( 319)					if (_hx_tmp1) {
HXLINE( 321)						::haxe::Log_obj::trace((((HX_("outdated lmao! ",46,1a,a2,c7) + returnedData->__get(0)) + HX_(" != ",84,13,40,15)) + ::MainMenuState_obj::kadeEngineVer),::hx::SourceInfo(HX_("source/TitleState.hx",71,4f,0c,46),321,HX_("TitleState",79,8d,a1,8c),HX_("update",09,86,05,87)));
HXLINE( 322)						::OutdatedSubState_obj::needVer = returnedData->__get(0);
HXLINE( 323)						::OutdatedSubState_obj::currChanges = returnedData->__get(1);
HXLINE( 324)						{
HXLINE( 324)							 ::flixel::FlxState nextState =  ::OutdatedSubState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 324)							if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 324)								::flixel::FlxG_obj::game->_requestedState = nextState;
            							}
            						}
            					}
            					else {
HXLINE( 328)						 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 328)						if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 328)							::flixel::FlxG_obj::game->_requestedState = nextState;
            						}
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            				void _hx_run(::String error){
            					HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_332_update)
HXLINE( 333)					::haxe::Log_obj::trace((HX_("error: ",6e,80,0a,ea) + error),::hx::SourceInfo(HX_("source/TitleState.hx",71,4f,0c,46),333,HX_("TitleState",79,8d,a1,8c),HX_("update",09,86,05,87)));
HXLINE( 334)					{
HXLINE( 334)						 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 334)						if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 334)							::flixel::FlxG_obj::game->_requestedState = nextState;
            						}
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_308_update)
HXLINE( 312)				 ::sys::Http http =  ::sys::Http_obj::__alloc( HX_CTX ,HX_("https://raw.githubusercontent.com/KadeDev/Kade-Engine/patchnotes/version.downloadMe",fe,93,17,13));
HXLINE( 313)				::Array< ::String > returnedData = ::Array_obj< ::String >::__new(0);
HXLINE( 315)				http->onData =  ::Dynamic(new _hx_Closure_0(returnedData));
HXLINE( 332)				http->onError =  ::Dynamic(new _hx_Closure_1());
HXLINE( 337)				http->request(null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 291)			if (::NGio_obj::isLoggedIn) {
HXLINE( 291)				 ::io::newgrounds::objects::Medal medal = ( ( ::io::newgrounds::objects::Medal)(::io::newgrounds::NG_obj::core->medals->get(60960)) );
HXDLIN( 291)				if (!(( (bool)(medal->_data->__Field(HX_("unlocked",23,34,0e,5c),::hx::paccDynamic)) ))) {
HXLINE( 291)					medal->sendUnlock();
            				}
            			}
HXLINE( 294)			if ((::Date_obj::now()->getDay() == 5)) {
HXLINE( 295)				if (::NGio_obj::isLoggedIn) {
HXLINE( 295)					 ::io::newgrounds::objects::Medal medal = ( ( ::io::newgrounds::objects::Medal)(::io::newgrounds::NG_obj::core->medals->get(61034)) );
HXDLIN( 295)					if (!(( (bool)(medal->_data->__Field(HX_("unlocked",23,34,0e,5c),::hx::paccDynamic)) ))) {
HXLINE( 295)						medal->sendUnlock();
            					}
            				}
            			}
HXLINE( 298)			if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) )) {
HXLINE( 299)				this->titleText->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
            			}
HXLINE( 301)			::flixel::FlxG_obj::camera->flash(-1,1,null(),null());
HXLINE( 302)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 302)			_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
HXLINE( 304)			this->transitioning = true;
HXLINE( 307)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_2()),null());
            		}
HXLINE( 342)		bool _hx_tmp2;
HXDLIN( 342)		bool _hx_tmp3;
HXDLIN( 342)		if (pressedEnter) {
HXLINE( 342)			_hx_tmp3 = !(this->skippedIntro);
            		}
            		else {
HXLINE( 342)			_hx_tmp3 = false;
            		}
HXDLIN( 342)		if (_hx_tmp3) {
HXLINE( 342)			_hx_tmp2 = ::TitleState_obj::initialized;
            		}
            		else {
HXLINE( 342)			_hx_tmp2 = false;
            		}
HXDLIN( 342)		if (_hx_tmp2) {
HXLINE( 344)			this->skipIntro();
            		}
HXLINE( 347)		this->super::update(elapsed);
            	}


void TitleState_obj::createCoolText(::Array< ::String > textArray){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_352_createCoolText)
HXDLIN( 352)		int _g = 0;
HXDLIN( 352)		int _g1 = textArray->length;
HXDLIN( 352)		while((_g < _g1)){
HXDLIN( 352)			_g = (_g + 1);
HXDLIN( 352)			int i = (_g - 1);
HXLINE( 354)			 ::Alphabet money =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),textArray->__get(i),true,false);
HXLINE( 355)			money->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 356)			money->set_y((money->y + ((i * 60) + 200)));
HXLINE( 357)			this->credGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 358)			this->textGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TitleState_obj,createCoolText,(void))

void TitleState_obj::addMoreText(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_363_addMoreText)
HXLINE( 364)		 ::Alphabet coolText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),text,true,false);
HXLINE( 365)		coolText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 366)		coolText->set_y((coolText->y + ((this->textGroup->length * 60) + 200)));
HXLINE( 367)		this->credGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 368)		this->textGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TitleState_obj,addMoreText,(void))

void TitleState_obj::deleteCoolText(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_373_deleteCoolText)
HXDLIN( 373)		while((this->textGroup->members->get_length() > 0)){
HXLINE( 375)			this->credGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 376)			this->textGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,deleteCoolText,(void))

void TitleState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_381_beatHit)
HXLINE( 382)		this->super::beatHit();
HXLINE( 384)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 385)		this->danceLeft = !(this->danceLeft);
HXLINE( 387)		if (this->danceLeft) {
HXLINE( 388)			this->gfDance->animation->play(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            		}
            		else {
HXLINE( 390)			this->gfDance->animation->play(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            		}
HXLINE( 394)		switch((int)(this->curBeat)){
            			case (int)2: {
HXLINE( 397)				this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_20,4));
            			}
            			break;
            			case (int)3: {
HXLINE( 400)				this->addMoreText(HX_("together with",2c,cc,6b,5e));
            			}
            			break;
            			case (int)4: {
HXLINE( 404)				this->deleteCoolText();
            			}
            			break;
            			case (int)5: {
HXLINE( 409)				this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_21,3));
            			}
            			break;
            			case (int)7: {
HXLINE( 411)				this->addMoreText(HX_("present",fb,3a,dc,39));
            			}
            			break;
            			case (int)8: {
HXLINE( 414)				this->deleteCoolText();
HXLINE( 415)				this->ngSpr->set_visible(false);
            			}
            			break;
            			case (int)9: {
HXLINE( 421)				this->createCoolText(::Array_obj< ::String >::__new(1)->init(0,this->curWacky->__get(0)));
            			}
            			break;
            			case (int)11: {
HXLINE( 424)				this->addMoreText(this->curWacky->__get(1));
            			}
            			break;
            			case (int)12: {
HXLINE( 427)				this->deleteCoolText();
            			}
            			break;
            			case (int)13: {
HXLINE( 432)				this->addMoreText(HX_("VS",3d,4b,00,00));
            			}
            			break;
            			case (int)14: {
HXLINE( 435)				this->addMoreText(HX_("TAI",3c,f6,3f,00));
            			}
            			break;
            			case (int)15: {
HXLINE( 438)				this->addMoreText(HX_("MOD",a2,b2,3a,00));
            			}
            			break;
            			case (int)16: {
HXLINE( 441)				this->skipIntro();
            			}
            			break;
            		}
            	}


void TitleState_obj::skipIntro(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_449_skipIntro)
HXDLIN( 449)		if (!(this->skippedIntro)) {
HXLINE( 451)			this->remove(this->ngSpr,null());
HXLINE( 453)			::flixel::FlxG_obj::camera->flash(-1,4,null(),null());
HXLINE( 454)			this->remove(this->credGroup,null());
HXLINE( 455)			this->skippedIntro = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,skipIntro,(void))

bool TitleState_obj::initialized;


::hx::ObjectPtr< TitleState_obj > TitleState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< TitleState_obj > __this = new TitleState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< TitleState_obj > TitleState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	TitleState_obj *__this = (TitleState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TitleState_obj), true, "TitleState"));
	*(void **)__this = TitleState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

TitleState_obj::TitleState_obj()
{
}

void TitleState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TitleState);
	HX_MARK_MEMBER_NAME(blackScreen,"blackScreen");
	HX_MARK_MEMBER_NAME(credGroup,"credGroup");
	HX_MARK_MEMBER_NAME(credTextShit,"credTextShit");
	HX_MARK_MEMBER_NAME(textGroup,"textGroup");
	HX_MARK_MEMBER_NAME(ngSpr,"ngSpr");
	HX_MARK_MEMBER_NAME(curWacky,"curWacky");
	HX_MARK_MEMBER_NAME(wackyImage,"wackyImage");
	HX_MARK_MEMBER_NAME(logoBl,"logoBl");
	HX_MARK_MEMBER_NAME(gfDance,"gfDance");
	HX_MARK_MEMBER_NAME(danceLeft,"danceLeft");
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(transitioning,"transitioning");
	HX_MARK_MEMBER_NAME(skippedIntro,"skippedIntro");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TitleState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blackScreen,"blackScreen");
	HX_VISIT_MEMBER_NAME(credGroup,"credGroup");
	HX_VISIT_MEMBER_NAME(credTextShit,"credTextShit");
	HX_VISIT_MEMBER_NAME(textGroup,"textGroup");
	HX_VISIT_MEMBER_NAME(ngSpr,"ngSpr");
	HX_VISIT_MEMBER_NAME(curWacky,"curWacky");
	HX_VISIT_MEMBER_NAME(wackyImage,"wackyImage");
	HX_VISIT_MEMBER_NAME(logoBl,"logoBl");
	HX_VISIT_MEMBER_NAME(gfDance,"gfDance");
	HX_VISIT_MEMBER_NAME(danceLeft,"danceLeft");
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(transitioning,"transitioning");
	HX_VISIT_MEMBER_NAME(skippedIntro,"skippedIntro");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TitleState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { return ::hx::Val( ngSpr ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"logoBl") ) { return ::hx::Val( logoBl ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gfDance") ) { return ::hx::Val( gfDance ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { return ::hx::Val( curWacky ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { return ::hx::Val( credGroup ); }
		if (HX_FIELD_EQ(inName,"textGroup") ) { return ::hx::Val( textGroup ); }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { return ::hx::Val( danceLeft ); }
		if (HX_FIELD_EQ(inName,"titleText") ) { return ::hx::Val( titleText ); }
		if (HX_FIELD_EQ(inName,"skipIntro") ) { return ::hx::Val( skipIntro_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { return ::hx::Val( wackyImage ); }
		if (HX_FIELD_EQ(inName,"startIntro") ) { return ::hx::Val( startIntro_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { return ::hx::Val( blackScreen ); }
		if (HX_FIELD_EQ(inName,"addMoreText") ) { return ::hx::Val( addMoreText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { return ::hx::Val( credTextShit ); }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { return ::hx::Val( skippedIntro ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { return ::hx::Val( transitioning ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createCoolText") ) { return ::hx::Val( createCoolText_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteCoolText") ) { return ::hx::Val( deleteCoolText_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getIntroTextShit") ) { return ::hx::Val( getIntroTextShit_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TitleState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
	}
	return false;
}

::hx::Val TitleState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { ngSpr=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { logoBl=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gfDance") ) { gfDance=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { curWacky=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { credGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textGroup") ) { textGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { danceLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { wackyImage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { blackScreen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { credTextShit=inValue.Cast<  ::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { skippedIntro=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { transitioning=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TitleState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void TitleState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("blackScreen",8b,de,f4,5d));
	outFields->push(HX_("credGroup",91,7f,9c,9c));
	outFields->push(HX_("credTextShit",fb,55,c1,3c));
	outFields->push(HX_("textGroup",52,43,e2,32));
	outFields->push(HX_("ngSpr",7c,26,68,9a));
	outFields->push(HX_("curWacky",67,31,c6,0c));
	outFields->push(HX_("wackyImage",d4,7e,d6,81));
	outFields->push(HX_("logoBl",15,ca,6e,5c));
	outFields->push(HX_("gfDance",94,88,3a,eb));
	outFields->push(HX_("danceLeft",da,cc,f9,df));
	outFields->push(HX_("titleText",65,ba,a4,70));
	outFields->push(HX_("transitioning",6d,6a,93,94));
	outFields->push(HX_("skippedIntro",9c,44,26,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TitleState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,blackScreen),HX_("blackScreen",8b,de,f4,5d)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,credGroup),HX_("credGroup",91,7f,9c,9c)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(TitleState_obj,credTextShit),HX_("credTextShit",fb,55,c1,3c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,textGroup),HX_("textGroup",52,43,e2,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,ngSpr),HX_("ngSpr",7c,26,68,9a)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(TitleState_obj,curWacky),HX_("curWacky",67,31,c6,0c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,wackyImage),HX_("wackyImage",d4,7e,d6,81)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,logoBl),HX_("logoBl",15,ca,6e,5c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,gfDance),HX_("gfDance",94,88,3a,eb)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,danceLeft),HX_("danceLeft",da,cc,f9,df)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,titleText),HX_("titleText",65,ba,a4,70)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,transitioning),HX_("transitioning",6d,6a,93,94)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,skippedIntro),HX_("skippedIntro",9c,44,26,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TitleState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &TitleState_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TitleState_obj_sMemberFields[] = {
	HX_("blackScreen",8b,de,f4,5d),
	HX_("credGroup",91,7f,9c,9c),
	HX_("credTextShit",fb,55,c1,3c),
	HX_("textGroup",52,43,e2,32),
	HX_("ngSpr",7c,26,68,9a),
	HX_("curWacky",67,31,c6,0c),
	HX_("wackyImage",d4,7e,d6,81),
	HX_("create",fc,66,0f,7c),
	HX_("logoBl",15,ca,6e,5c),
	HX_("gfDance",94,88,3a,eb),
	HX_("danceLeft",da,cc,f9,df),
	HX_("titleText",65,ba,a4,70),
	HX_("startIntro",aa,a2,37,da),
	HX_("getIntroTextShit",23,9f,f3,eb),
	HX_("transitioning",6d,6a,93,94),
	HX_("update",09,86,05,87),
	HX_("createCoolText",32,cb,41,41),
	HX_("addMoreText",23,fe,9f,87),
	HX_("deleteCoolText",61,6b,de,48),
	HX_("beatHit",7d,ea,04,74),
	HX_("skippedIntro",9c,44,26,49),
	HX_("skipIntro",6d,37,1c,d2),
	::String(null()) };

static void TitleState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TitleState_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TitleState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TitleState_obj::initialized,"initialized");
};

#endif

::hx::Class TitleState_obj::__mClass;

static ::String TitleState_obj_sStaticFields[] = {
	HX_("initialized",14,f5,0f,37),
	::String(null())
};

void TitleState_obj::__register()
{
	TitleState_obj _hx_dummy;
	TitleState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TitleState",79,8d,a1,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TitleState_obj::__GetStatic;
	__mClass->mSetStaticField = &TitleState_obj::__SetStatic;
	__mClass->mMarkFunc = TitleState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TitleState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TitleState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TitleState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TitleState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TitleState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TitleState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TitleState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_39_boot)
HXDLIN(  39)		initialized = false;
            	}
}

