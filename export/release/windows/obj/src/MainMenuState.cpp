#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_KeyboardScheme
#include <KeyboardScheme.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
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
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
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
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_24_new,"MainMenuState","new",0x83a7c9cb,"MainMenuState.new","MainMenuState.hx",24,0x0e5db805)
static const ::String _hx_array_data_205e8859_1[] = {
	HX_("story mode",6e,d7,a7,5e),HX_("freeplay",a0,90,86,22),HX_("donate",6f,f1,29,2e),HX_("options",5e,33,fe,df),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_49_create,"MainMenuState","create",0x6b76e271,"MainMenuState.create","MainMenuState.hx",49,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_209_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",209,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_128_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",128,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_173_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",173,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_179_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",179,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_189_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",189,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_196_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",196,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_214_goToState,"MainMenuState","goToState",0xcf6f00f9,"MainMenuState.goToState","MainMenuState.hx",214,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_242_changeItem,"MainMenuState","changeItem",0xf62bd498,"MainMenuState.changeItem","MainMenuState.hx",242,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_233_changeItem,"MainMenuState","changeItem",0xf62bd498,"MainMenuState.changeItem","MainMenuState.hx",233,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_40_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",40,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_42_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",42,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_43_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",43,0x0e5db805)

void MainMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_24_new)
HXLINE( 125)		this->selectedSomethin = false;
HXLINE(  38)		this->newInput = true;
HXLINE(  31)		this->optionShit = ::Array_obj< ::String >::fromData( _hx_array_data_205e8859_1,4);
HXLINE(  26)		this->curSelected = 0;
HXLINE(  24)		super::__construct(TransIn,TransOut);
            	}

Dynamic MainMenuState_obj::__CreateEmpty() { return new MainMenuState_obj; }

void *MainMenuState_obj::_hx_vtable = 0;

Dynamic MainMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainMenuState_obj > _hx_result = new MainMenuState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MainMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x6915cded || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void MainMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_49_create)
HXLINE(  52)		::DiscordClient_obj::changePresence(HX_("In the Menus",0a,c1,ad,c6),null(),null(),null(),null());
HXLINE(  55)		if (::hx::IsNull( ::flixel::FlxG_obj::sound->music->_channel )) {
HXLINE(  57)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  57)			::String library = null();
HXDLIN(  57)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null());
            		}
HXLINE(  60)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  62)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN(  62)		::String library = null();
HXDLIN(  62)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBG",24,65,6d,05)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  63)		bg1->scrollFactor->set_x(( (Float)(0) ));
HXLINE(  64)		bg1->scrollFactor->set_y(((Float)0.15));
HXLINE(  65)		bg1->setGraphicSize(::Std_obj::_hx_int((bg1->get_width() * ((Float)1.1))),null());
HXLINE(  66)		bg1->updateHitbox();
HXLINE(  67)		bg1->screenCenter(null());
HXLINE(  68)		bg1->set_antialiasing(true);
HXLINE(  69)		this->add(bg1);
HXLINE(  71)		this->camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE(  72)		this->add(this->camFollow);
HXLINE(  74)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN(  74)		::String library1 = null();
HXDLIN(  74)		this->magenta = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  75)		this->magenta->scrollFactor->set_x(( (Float)(0) ));
HXLINE(  76)		this->magenta->scrollFactor->set_y(((Float)0.15));
HXLINE(  77)		 ::flixel::FlxSprite _hx_tmp1 = this->magenta;
HXDLIN(  77)		_hx_tmp1->setGraphicSize(::Std_obj::_hx_int((this->magenta->get_width() * ((Float)1.1))),null());
HXLINE(  78)		this->magenta->updateHitbox();
HXLINE(  79)		this->magenta->screenCenter(null());
HXLINE(  80)		this->magenta->set_visible(false);
HXLINE(  81)		this->magenta->set_antialiasing(true);
HXLINE(  82)		this->magenta->set_color(-167525);
HXLINE(  83)		this->add(this->magenta);
HXLINE(  86)		this->menuItems =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  87)		this->add(this->menuItems);
HXLINE(  89)		::String library2 = null();
HXDLIN(  89)		::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("FNF_main_menu_assets",be,dc,57,e2)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2);
HXDLIN(  89)		 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("FNF_main_menu_assets",be,dc,57,e2)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2));
HXLINE(  91)		{
HXLINE(  91)			int _g = 0;
HXDLIN(  91)			int _g1 = this->optionShit->length;
HXDLIN(  91)			while((_g < _g1)){
HXLINE(  91)				_g = (_g + 1);
HXDLIN(  91)				int i = (_g - 1);
HXLINE(  93)				 ::flixel::FlxSprite menuItem =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(60 + (i * 160)),null());
HXLINE(  94)				menuItem->set_frames(tex1);
HXLINE(  95)				menuItem->animation->addByPrefix(HX_("idle",14,a7,b3,45),(this->optionShit->__get(i) + HX_(" basic",8e,b6,25,79)),24,null(),null(),null());
HXLINE(  96)				menuItem->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),(this->optionShit->__get(i) + HX_(" white",89,d6,28,95)),24,null(),null(),null());
HXLINE(  97)				menuItem->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  98)				menuItem->ID = i;
HXLINE(  99)				menuItem->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 100)				this->menuItems->add(menuItem).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 101)				menuItem->scrollFactor->set(null(),null());
HXLINE( 102)				menuItem->set_antialiasing(true);
            			}
            		}
HXLINE( 105)		::flixel::FlxG_obj::camera->follow(this->camFollow,null(),(((Float)0.60) * (( (Float)(60) ) / ( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)) ))));
HXLINE( 107)		::String versionShit;
HXDLIN( 107)		if (::Main_obj::watermarks) {
HXLINE( 107)			versionShit = ((HX_(" FNF - ",55,b8,48,47) + ::MainMenuState_obj::kadeEngineVer) + HX_(" Kade Engine",0b,2a,4a,30));
            		}
            		else {
HXLINE( 107)			versionShit = HX_("",00,00,00,00);
            		}
HXDLIN( 107)		 ::flixel::text::FlxText versionShit1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,(::flixel::FlxG_obj::height - 18),0,(::MainMenuState_obj::gameVer + versionShit),12,null());
HXLINE( 108)		versionShit1->scrollFactor->set(null(),null());
HXLINE( 109)		versionShit1->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 110)		this->add(versionShit1);
HXLINE( 115)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("dfjk",c3,18,67,42),::hx::paccDynamic)) )) {
HXLINE( 116)			::PlayerSettings_obj::player1->controls->setKeyboardScheme(::KeyboardScheme_obj::Solo_dyn(),true);
            		}
            		else {
HXLINE( 118)			::PlayerSettings_obj::player1->controls->setKeyboardScheme(::KeyboardScheme_obj::Duo(true),true);
            		}
HXLINE( 120)		this->changeItem(null());
HXLINE( 122)		this->super::create();
            	}


void MainMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_209_update)
HXLINE( 209)			spr->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_128_update)
HXDLIN( 128)		 ::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 129)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.8))) {
HXLINE( 131)			 ::flixel::_hx_system::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 131)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 134)		if (!(this->selectedSomethin)) {
HXLINE( 136)			if (::PlayerSettings_obj::player1->controls->_upP->check()) {
HXLINE( 138)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 138)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 139)				this->changeItem(-1);
            			}
HXLINE( 142)			if (::PlayerSettings_obj::player1->controls->_downP->check()) {
HXLINE( 144)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 144)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 145)				this->changeItem(1);
            			}
HXLINE( 148)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 150)				 ::flixel::FlxState nextState =  ::TitleState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 150)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 150)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 153)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 155)				if ((this->optionShit->__get(this->curSelected) == HX_("donate",6f,f1,29,2e))) {
HXLINE( 160)					::String prefix = HX_("",00,00,00,00);
HXDLIN( 160)					if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(HX_("https://discord.com/invite/sdx6Xe5Tqk",3c,80,1e,2b)))) {
HXLINE( 160)						prefix = HX_("http://",52,75,cd,5a);
            					}
HXDLIN( 160)					::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + HX_("https://discord.com/invite/sdx6Xe5Tqk",3c,80,1e,2b))),HX_("_blank",95,26,d9,b0));
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::MainMenuState,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::FlxSprite spr){
            						HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_173_update)
HXLINE( 173)						if ((_gthis->curSelected != spr->ID)) {
            							HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,spr) HXARGC(1)
            							void _hx_run( ::flixel::tweens::FlxTween twn){
            								HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_179_update)
HXLINE( 179)								spr->kill();
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 175)							::flixel::tweens::FlxTween_obj::tween(spr, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)1.3), ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            								->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(spr)))));
            						}
            						else {
HXLINE( 185)							if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) )) {
            								HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::MainMenuState,_gthis) HXARGC(1)
            								void _hx_run( ::flixel::effects::FlxFlicker flick){
            									HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_189_update)
HXLINE( 189)									_gthis->goToState();
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE( 187)								::flixel::effects::FlxFlicker_obj::flicker(spr,1,((Float)0.06),false,false, ::Dynamic(new _hx_Closure_1(_gthis)),null());
            							}
            							else {
            								HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::MainMenuState,_gthis) HXARGC(1)
            								void _hx_run( ::flixel::util::FlxTimer tmr){
            									HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_196_update)
HXLINE( 196)									_gthis->goToState();
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE( 194)								 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_2(_gthis)),null());
            							}
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 165)					this->selectedSomethin = true;
HXLINE( 166)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 166)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 168)					if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) )) {
HXLINE( 169)						::flixel::effects::FlxFlicker_obj::flicker(this->magenta,((Float)1.1),((Float)0.15),false,null(),null(),null());
            					}
HXLINE( 171)					this->menuItems->forEach( ::Dynamic(new _hx_Closure_3(_gthis)),null());
            				}
            			}
            		}
HXLINE( 205)		this->super::update(elapsed);
HXLINE( 207)		this->menuItems->forEach( ::Dynamic(new _hx_Closure_4()),null());
            	}


void MainMenuState_obj::goToState(){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_214_goToState)
HXLINE( 215)		::String daChoice = this->optionShit->__get(this->curSelected);
HXLINE( 217)		::String _hx_switch_0 = daChoice;
            		if (  (_hx_switch_0==HX_("freeplay",a0,90,86,22)) ){
HXLINE( 223)			{
HXLINE( 223)				 ::flixel::FlxState nextState =  ::FreeplayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 223)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 223)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 225)			::haxe::Log_obj::trace(HX_("Freeplay Menu Selected",9c,6d,5a,ca),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),225,HX_("MainMenuState",59,88,5e,20),HX_("goToState",4e,a5,e1,c9)));
HXLINE( 222)			goto _hx_goto_10;
            		}
            		if (  (_hx_switch_0==HX_("options",5e,33,fe,df)) ){
HXLINE( 228)			 ::flixel::FlxState nextState =  ::OptionsMenu_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 228)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 228)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
HXDLIN( 228)			goto _hx_goto_10;
            		}
            		if (  (_hx_switch_0==HX_("story mode",6e,d7,a7,5e)) ){
HXLINE( 220)			{
HXLINE( 220)				 ::flixel::FlxState nextState =  ::StoryMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 220)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 220)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 221)			::haxe::Log_obj::trace(HX_("Story Menu Selected",71,ff,9b,4a),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),221,HX_("MainMenuState",59,88,5e,20),HX_("goToState",4e,a5,e1,c9)));
HXLINE( 219)			goto _hx_goto_10;
            		}
            		_hx_goto_10:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MainMenuState_obj,goToState,(void))

void MainMenuState_obj::changeItem(::hx::Null< int >  __o_huh){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::MainMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_242_changeItem)
HXLINE( 243)			spr->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 245)			if ((spr->ID == _gthis->curSelected)) {
HXLINE( 247)				spr->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE( 248)				 ::flixel::FlxObject _gthis1 = _gthis->camFollow;
HXDLIN( 248)				Float _hx_tmp = spr->getGraphicMidpoint(null())->x;
HXDLIN( 248)				_gthis1->setPosition(_hx_tmp,spr->getGraphicMidpoint(null())->y);
            			}
HXLINE( 251)			spr->updateHitbox();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		int huh = __o_huh.Default(0);
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_233_changeItem)
HXDLIN( 233)		 ::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 234)		 ::MainMenuState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 234)		_hx_tmp->curSelected = (_hx_tmp->curSelected + huh);
HXLINE( 236)		if ((this->curSelected >= this->menuItems->length)) {
HXLINE( 237)			this->curSelected = 0;
            		}
HXLINE( 238)		if ((this->curSelected < 0)) {
HXLINE( 239)			this->curSelected = (this->menuItems->length - 1);
            		}
HXLINE( 241)		this->menuItems->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,changeItem,(void))

::String MainMenuState_obj::nightly;

::String MainMenuState_obj::kadeEngineVer;

::String MainMenuState_obj::gameVer;


::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MainMenuState_obj > __this = new MainMenuState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MainMenuState_obj *__this = (MainMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainMenuState_obj), true, "MainMenuState"));
	*(void **)__this = MainMenuState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MainMenuState_obj::MainMenuState_obj()
{
}

void MainMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenuState);
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(optionShit,"optionShit");
	HX_MARK_MEMBER_NAME(newGaming,"newGaming");
	HX_MARK_MEMBER_NAME(newGaming2,"newGaming2");
	HX_MARK_MEMBER_NAME(newInput,"newInput");
	HX_MARK_MEMBER_NAME(magenta,"magenta");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(optionShit,"optionShit");
	HX_VISIT_MEMBER_NAME(newGaming,"newGaming");
	HX_VISIT_MEMBER_NAME(newGaming2,"newGaming2");
	HX_VISIT_MEMBER_NAME(newInput,"newInput");
	HX_VISIT_MEMBER_NAME(magenta,"magenta");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"magenta") ) { return ::hx::Val( magenta ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"newInput") ) { return ::hx::Val( newInput ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"newGaming") ) { return ::hx::Val( newGaming ); }
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		if (HX_FIELD_EQ(inName,"goToState") ) { return ::hx::Val( goToState_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { return ::hx::Val( optionShit ); }
		if (HX_FIELD_EQ(inName,"newGaming2") ) { return ::hx::Val( newGaming2 ); }
		if (HX_FIELD_EQ(inName,"changeItem") ) { return ::hx::Val( changeItem_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { return ::hx::Val( selectedSomethin ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MainMenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"nightly") ) { outValue = ( nightly ); return true; }
		if (HX_FIELD_EQ(inName,"gameVer") ) { outValue = ( gameVer ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kadeEngineVer") ) { outValue = ( kadeEngineVer ); return true; }
	}
	return false;
}

::hx::Val MainMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"magenta") ) { magenta=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"newInput") ) { newInput=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newGaming") ) { newGaming=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { optionShit=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newGaming2") ) { newGaming2=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { selectedSomethin=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MainMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"nightly") ) { nightly=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"gameVer") ) { gameVer=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kadeEngineVer") ) { kadeEngineVer=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void MainMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("optionShit",d5,2d,ee,91));
	outFields->push(HX_("newGaming",2f,8a,ad,0e));
	outFields->push(HX_("newGaming2",23,5f,2b,c9));
	outFields->push(HX_("newInput",8a,07,68,e1));
	outFields->push(HX_("magenta",29,ba,9d,0e));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("selectedSomethin",c8,ec,fb,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(MainMenuState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MainMenuState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MainMenuState_obj,optionShit),HX_("optionShit",d5,2d,ee,91)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenuState_obj,newGaming),HX_("newGaming",2f,8a,ad,0e)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenuState_obj,newGaming2),HX_("newGaming2",23,5f,2b,c9)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,newInput),HX_("newInput",8a,07,68,e1)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,magenta),HX_("magenta",29,ba,9d,0e)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(MainMenuState_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,selectedSomethin),HX_("selectedSomethin",c8,ec,fb,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MainMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &MainMenuState_obj::nightly,HX_("nightly",65,3e,0e,6d)},
	{::hx::fsString,(void *) &MainMenuState_obj::kadeEngineVer,HX_("kadeEngineVer",2a,26,b2,03)},
	{::hx::fsString,(void *) &MainMenuState_obj::gameVer,HX_("gameVer",91,29,72,89)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MainMenuState_obj_sMemberFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("menuItems",e1,15,e5,5c),
	HX_("optionShit",d5,2d,ee,91),
	HX_("newGaming",2f,8a,ad,0e),
	HX_("newGaming2",23,5f,2b,c9),
	HX_("newInput",8a,07,68,e1),
	HX_("magenta",29,ba,9d,0e),
	HX_("camFollow",e0,6e,47,22),
	HX_("create",fc,66,0f,7c),
	HX_("selectedSomethin",c8,ec,fb,99),
	HX_("update",09,86,05,87),
	HX_("goToState",4e,a5,e1,c9),
	HX_("changeItem",a3,fa,08,20),
	::String(null()) };

static void MainMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainMenuState_obj::nightly,"nightly");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::kadeEngineVer,"kadeEngineVer");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::gameVer,"gameVer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::nightly,"nightly");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::kadeEngineVer,"kadeEngineVer");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::gameVer,"gameVer");
};

#endif

::hx::Class MainMenuState_obj::__mClass;

static ::String MainMenuState_obj_sStaticFields[] = {
	HX_("nightly",65,3e,0e,6d),
	HX_("kadeEngineVer",2a,26,b2,03),
	HX_("gameVer",91,29,72,89),
	::String(null())
};

void MainMenuState_obj::__register()
{
	MainMenuState_obj _hx_dummy;
	MainMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MainMenuState",59,88,5e,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MainMenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &MainMenuState_obj::__SetStatic;
	__mClass->mMarkFunc = MainMenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainMenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainMenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MainMenuState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_40_boot)
HXDLIN(  40)		nightly = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_42_boot)
HXDLIN(  42)		kadeEngineVer = (HX_("1.4.2",bb,da,31,55) + ::MainMenuState_obj::nightly);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_43_boot)
HXDLIN(  43)		gameVer = HX_("0.2.7.1",40,93,0b,19);
            	}
}

