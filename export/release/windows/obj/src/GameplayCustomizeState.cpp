#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Boyfriend
#include <Boyfriend.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_GameplayCustomizeState
#include <GameplayCustomizeState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_269668c8d87413fa_15_new,"GameplayCustomizeState","new",0x755e1b66,"GameplayCustomizeState.new","GameplayCustomizeState.hx",15,0x759ed2ca)
HX_LOCAL_STACK_FRAME(_hx_pos_269668c8d87413fa_35_create,"GameplayCustomizeState","create",0xe03d43b6,"GameplayCustomizeState.create","GameplayCustomizeState.hx",35,0x759ed2ca)
HX_LOCAL_STACK_FRAME(_hx_pos_269668c8d87413fa_112_update,"GameplayCustomizeState","update",0xeb3362c3,"GameplayCustomizeState.update","GameplayCustomizeState.hx",112,0x759ed2ca)
HX_LOCAL_STACK_FRAME(_hx_pos_269668c8d87413fa_144_beatHit,"GameplayCustomizeState","beatHit",0xb7f83083,"GameplayCustomizeState.beatHit","GameplayCustomizeState.hx",144,0x759ed2ca)
HX_LOCAL_STACK_FRAME(_hx_pos_269668c8d87413fa_162_generateStaticArrows,"GameplayCustomizeState","generateStaticArrows",0x379932e7,"GameplayCustomizeState.generateStaticArrows","GameplayCustomizeState.hx",162,0x759ed2ca)

void GameplayCustomizeState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_GC_STACKFRAME(&_hx_pos_269668c8d87413fa_15_new)
HXLINE(  27)		this->bf =  ::Boyfriend_obj::__alloc( HX_CTX ,( (Float)(770) ),( (Float)(450) ),HX_("bf",c4,55,00,00));
HXLINE(  25)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  25)		this->sick = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("sick",be,8c,53,4c)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d)),null(),null(),null(),null(),null());
HXLINE(  23)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-650,600,null());
HXDLIN(  23)		this->front = _hx_tmp1->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("stagefront",2b,fd,b0,c6)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d)),null(),null(),null(),null(),null());
HXLINE(  22)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-500,-300,null());
HXDLIN(  22)		this->curt = _hx_tmp2->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("stagecurtains",df,ec,1a,4b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d)),null(),null(),null(),null(),null());
HXLINE(  21)		 ::flixel::FlxSprite _hx_tmp3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-600,-200,null());
HXDLIN(  21)		this->background = _hx_tmp3->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("stageback",e5,7b,3b,06)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d)),null(),null(),null(),null(),null());
HXLINE(  19)		this->defaultY = ((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) - ( (Float)(50) ));
HXLINE(  18)		this->defaultX = ((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.55)) - ( (Float)(135) ));
HXLINE(  15)		super::__construct(TransIn,TransOut);
            	}

Dynamic GameplayCustomizeState_obj::__CreateEmpty() { return new GameplayCustomizeState_obj; }

void *GameplayCustomizeState_obj::_hx_vtable = 0;

Dynamic GameplayCustomizeState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameplayCustomizeState_obj > _hx_result = new GameplayCustomizeState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GameplayCustomizeState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4e1b7334) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x4e1b7334;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void GameplayCustomizeState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_269668c8d87413fa_35_create)
HXLINE(  38)		::DiscordClient_obj::changePresence(HX_("Customizing Gameplay",06,cf,1a,51),null(),null(),null(),null());
HXLINE(  41)		::Conductor_obj::changeBPM(102);
HXLINE(  42)		this->persistentUpdate = true;
HXLINE(  44)		this->super::create();
HXLINE(  46)		this->camHUD =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
HXLINE(  47)		{
HXLINE(  47)			 ::flixel::FlxCamera _hx_tmp = this->camHUD;
HXDLIN(  47)			_hx_tmp->bgColor = (_hx_tmp->bgColor & 16777215);
HXDLIN(  47)			 ::flixel::FlxCamera _hx_tmp1 = this->camHUD;
HXDLIN(  47)			_hx_tmp1->bgColor = (_hx_tmp1->bgColor | 0);
            		}
HXLINE(  48)		::flixel::FlxG_obj::cameras->add(this->camHUD,null()).StaticCast<  ::flixel::FlxCamera >();
HXLINE(  50)		this->background->scrollFactor->set(((Float)0.9),((Float)0.9));
HXLINE(  51)		this->curt->scrollFactor->set(((Float)0.9),((Float)0.9));
HXLINE(  52)		this->front->scrollFactor->set(((Float)0.9),((Float)0.9));
HXLINE(  54)		this->add(this->background);
HXLINE(  55)		this->add(this->front);
HXLINE(  56)		this->add(this->curt);
HXLINE(  58)		 ::flixel::FlxObject camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE(  60)		this->dad =  ::Character_obj::__alloc( HX_CTX ,( (Float)(100) ),( (Float)(100) ),HX_("dad",47,36,4c,00),null());
HXLINE(  62)		Float camPos = (this->dad->getGraphicMidpoint(null())->x + 400);
HXDLIN(  62)		 ::flixel::math::FlxPoint camPos1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,camPos,this->dad->getGraphicMidpoint(null())->y);
HXLINE(  64)		camFollow->setPosition(camPos1->x,camPos1->y);
HXLINE(  66)		this->add(this->bf);
HXLINE(  67)		this->add(this->dad);
HXLINE(  69)		this->add(this->sick);
HXLINE(  71)		this->add(camFollow);
HXLINE(  73)		::flixel::FlxG_obj::camera->follow(camFollow,::flixel::FlxCameraFollowStyle_obj::LOCKON_dyn(),((Float)0.01));
HXLINE(  75)		::flixel::FlxG_obj::camera->set_zoom(((Float)0.9));
HXLINE(  76)		{
HXLINE(  76)			 ::flixel::FlxCamera _this = ::flixel::FlxG_obj::camera;
HXDLIN(  76)			 ::flixel::math::FlxPoint point = camFollow->getPosition(null());
HXDLIN(  76)			_this->scroll->set((point->x - (( (Float)(_this->width) ) * ((Float)0.5))),(point->y - (( (Float)(_this->height) ) * ((Float)0.5))));
HXDLIN(  76)			if (point->_weak) {
HXLINE(  76)				point->put();
            			}
            		}
HXLINE(  78)		this->strumLine =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,25,null())->makeGraphic(::flixel::FlxG_obj::width,10,null(),null(),null());
HXLINE(  79)		this->strumLine->scrollFactor->set(null(),null());
HXLINE(  81)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("downscroll",ef,45,d4,4f),::hx::paccDynamic)) )) {
HXLINE(  82)			this->strumLine->set_y(( (Float)((::flixel::FlxG_obj::height - 165)) ));
            		}
HXLINE(  84)		this->strumLineNotes =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  85)		this->add(this->strumLineNotes);
HXLINE(  87)		this->playerStrums =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  89)		this->sick->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camHUD));
HXLINE(  90)		this->strumLine->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camHUD));
HXLINE(  91)		this->playerStrums->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camHUD));
HXLINE(  93)		this->generateStaticArrows(0);
HXLINE(  94)		this->generateStaticArrows(1);
HXLINE(  97)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("changedHit",bf,5d,c0,31),::hx::paccDynamic)) ))) {
HXLINE(  99)			::flixel::FlxG_obj::save->data->__SetField(HX_("changedHitX",b9,a9,91,56),this->defaultX,::hx::paccDynamic);
HXLINE( 100)			::flixel::FlxG_obj::save->data->__SetField(HX_("changedHitY",ba,a9,91,56),this->defaultY,::hx::paccDynamic);
            		}
HXLINE( 103)		this->sick->set_x(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("changedHitX",b9,a9,91,56),::hx::paccDynamic)) ));
HXLINE( 104)		this->sick->set_y(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("changedHitY",ba,a9,91,56),::hx::paccDynamic)) ));
HXLINE( 106)		this->sick->updateHitbox();
HXLINE( 108)		::flixel::FlxG_obj::mouse->set_visible(true);
            	}


void GameplayCustomizeState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_269668c8d87413fa_112_update)
HXLINE( 113)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 114)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 116)		this->super::update(elapsed);
HXLINE( 118)		::flixel::FlxG_obj::camera->set_zoom((((Float)0.9) + (((Float)0.95) * (::flixel::FlxG_obj::camera->zoom - ((Float)0.9)))));
HXLINE( 119)		this->camHUD->set_zoom((1 + (((Float)0.95) * (this->camHUD->zoom - ( (Float)(1) )))));
HXLINE( 121)		bool _hx_tmp;
HXDLIN( 121)		if (::flixel::FlxG_obj::mouse->overlaps(this->sick,null())) {
HXLINE( 121)			 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN( 121)			if ((_this->current != 1)) {
HXLINE( 121)				_hx_tmp = (_this->current == 2);
            			}
            			else {
HXLINE( 121)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 121)			_hx_tmp = false;
            		}
HXDLIN( 121)		if (_hx_tmp) {
HXLINE( 123)			 ::flixel::FlxSprite _hx_tmp = this->sick;
HXDLIN( 123)			int _hx_tmp1 = ::flixel::FlxG_obj::mouse->x;
HXDLIN( 123)			_hx_tmp->set_x((( (Float)(_hx_tmp1) ) - (this->sick->get_width() / ( (Float)(2) ))));
HXLINE( 124)			 ::flixel::FlxSprite _hx_tmp2 = this->sick;
HXDLIN( 124)			int _hx_tmp3 = ::flixel::FlxG_obj::mouse->y;
HXDLIN( 124)			_hx_tmp2->set_y((( (Float)(_hx_tmp3) ) - (this->sick->get_height() / ( (Float)(2) ))));
            		}
HXLINE( 127)		bool _hx_tmp1;
HXDLIN( 127)		if (::flixel::FlxG_obj::mouse->overlaps(this->sick,null())) {
HXLINE( 127)			_hx_tmp1 = (::flixel::FlxG_obj::mouse->_leftButton->current == -1);
            		}
            		else {
HXLINE( 127)			_hx_tmp1 = false;
            		}
HXDLIN( 127)		if (_hx_tmp1) {
HXLINE( 129)			::flixel::FlxG_obj::save->data->__SetField(HX_("changedHitX",b9,a9,91,56),this->sick->x,::hx::paccDynamic);
HXLINE( 130)			::flixel::FlxG_obj::save->data->__SetField(HX_("changedHitY",ba,a9,91,56),this->sick->y,::hx::paccDynamic);
HXLINE( 131)			::flixel::FlxG_obj::save->data->__SetField(HX_("changedHit",bf,5d,c0,31),true,::hx::paccDynamic);
            		}
HXLINE( 134)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 136)			::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 137)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 137)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 138)			{
HXLINE( 138)				 ::flixel::FlxState nextState =  ::OptionsMenu_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 138)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 138)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            	}


void GameplayCustomizeState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_269668c8d87413fa_144_beatHit)
HXLINE( 145)		this->super::beatHit();
HXLINE( 147)		this->bf->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 148)		this->dad->dance();
HXLINE( 150)		 ::flixel::FlxCamera fh = ::flixel::FlxG_obj::camera;
HXDLIN( 150)		fh->set_zoom((fh->zoom + ((Float)0.015)));
HXLINE( 151)		 ::flixel::FlxCamera fh1 = this->camHUD;
HXDLIN( 151)		fh1->set_zoom((fh1->zoom + ((Float)0.010)));
HXLINE( 153)		::haxe::Log_obj::trace(HX_("beat",76,e1,13,41),::hx::SourceInfo(HX_("source/GameplayCustomizeState.hx",56,1d,99,c3),153,HX_("GameplayCustomizeState",74,30,cf,3c),HX_("beatHit",7d,ea,04,74)));
            	}


void GameplayCustomizeState_obj::generateStaticArrows(int player){
            	HX_GC_STACKFRAME(&_hx_pos_269668c8d87413fa_162_generateStaticArrows)
HXDLIN( 162)		int _g = 0;
HXDLIN( 162)		while((_g < 4)){
HXDLIN( 162)			_g = (_g + 1);
HXDLIN( 162)			int i = (_g - 1);
HXLINE( 165)			 ::flixel::FlxSprite babyArrow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,this->strumLine->y,null());
HXLINE( 166)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d));
HXDLIN( 166)			babyArrow->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("shared",a5,5e,2b,1d))));
HXLINE( 167)			babyArrow->animation->addByPrefix(HX_("green",c3,0e,ed,99),HX_("arrowUP",64,88,b8,43),null(),null(),null(),null());
HXLINE( 168)			babyArrow->animation->addByPrefix(HX_("blue",9a,42,19,41),HX_("arrowDOWN",ab,52,f9,fd),null(),null(),null(),null());
HXLINE( 169)			babyArrow->animation->addByPrefix(HX_("purple",3c,f6,89,71),HX_("arrowLEFT",50,62,3b,03),null(),null(),null(),null());
HXLINE( 170)			babyArrow->animation->addByPrefix(HX_("red",51,d9,56,00),HX_("arrowRIGHT",53,b1,c7,47),null(),null(),null(),null());
HXLINE( 171)			babyArrow->set_antialiasing(true);
HXLINE( 172)			babyArrow->setGraphicSize(::Std_obj::_hx_int((babyArrow->get_width() * ((Float)0.7))),null());
HXLINE( 173)			Float _hx_switch_0 = ::Math_obj::abs(( (Float)(i) ));
            			if (  (_hx_switch_0==( (Float)(0) )) ){
HXLINE( 176)				babyArrow->set_x((babyArrow->x + (::Note_obj::swagWidth * ( (Float)(0) ))));
HXLINE( 177)				babyArrow->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowLEFT",50,62,3b,03),null(),null(),null(),null());
HXLINE( 178)				babyArrow->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("left press",aa,26,70,8e),24,false,null(),null());
HXLINE( 179)				babyArrow->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("left confirm",e7,c7,19,fe),24,false,null(),null());
HXLINE( 175)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==( (Float)(1) )) ){
HXLINE( 181)				babyArrow->set_x((babyArrow->x + ::Note_obj::swagWidth));
HXLINE( 182)				babyArrow->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowDOWN",ab,52,f9,fd),null(),null(),null(),null());
HXLINE( 183)				babyArrow->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("down press",45,4d,63,9c),24,false,null(),null());
HXLINE( 184)				babyArrow->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("down confirm",42,0b,18,cc),24,false,null(),null());
HXLINE( 180)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==( (Float)(2) )) ){
HXLINE( 186)				babyArrow->set_x((babyArrow->x + (::Note_obj::swagWidth * ( (Float)(2) ))));
HXLINE( 187)				babyArrow->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowUP",64,88,b8,43),null(),null(),null(),null());
HXLINE( 188)				babyArrow->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("up press",fe,fb,65,e9),24,false,null(),null());
HXLINE( 189)				babyArrow->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("up confirm",3b,9a,2e,62),24,false,null(),null());
HXLINE( 185)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==( (Float)(3) )) ){
HXLINE( 191)				babyArrow->set_x((babyArrow->x + (::Note_obj::swagWidth * ( (Float)(3) ))));
HXLINE( 192)				babyArrow->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowRIGHT",53,b1,c7,47),null(),null(),null(),null());
HXLINE( 193)				babyArrow->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("right press",3f,38,e4,c8),24,false,null(),null());
HXLINE( 194)				babyArrow->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("right confirm",bc,28,e5,ca),24,false,null(),null());
HXLINE( 190)				goto _hx_goto_5;
            			}
            			_hx_goto_5:;
HXLINE( 196)			babyArrow->updateHitbox();
HXLINE( 197)			babyArrow->scrollFactor->set(null(),null());
HXLINE( 199)			babyArrow->ID = i;
HXLINE( 201)			if ((player == 1)) {
HXLINE( 203)				this->playerStrums->add(babyArrow).StaticCast<  ::flixel::FlxSprite >();
            			}
HXLINE( 206)			babyArrow->animation->play(HX_("static",ae,dc,fb,05),null(),null(),null());
HXLINE( 207)			babyArrow->set_x((babyArrow->x + 50));
HXLINE( 208)			babyArrow->set_x((babyArrow->x + ((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )) * ( (Float)(player) ))));
HXLINE( 210)			this->strumLineNotes->add(babyArrow).StaticCast<  ::flixel::FlxSprite >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayCustomizeState_obj,generateStaticArrows,(void))


::hx::ObjectPtr< GameplayCustomizeState_obj > GameplayCustomizeState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< GameplayCustomizeState_obj > __this = new GameplayCustomizeState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< GameplayCustomizeState_obj > GameplayCustomizeState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	GameplayCustomizeState_obj *__this = (GameplayCustomizeState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameplayCustomizeState_obj), true, "GameplayCustomizeState"));
	*(void **)__this = GameplayCustomizeState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

GameplayCustomizeState_obj::GameplayCustomizeState_obj()
{
}

void GameplayCustomizeState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameplayCustomizeState);
	HX_MARK_MEMBER_NAME(defaultX,"defaultX");
	HX_MARK_MEMBER_NAME(defaultY,"defaultY");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(curt,"curt");
	HX_MARK_MEMBER_NAME(front,"front");
	HX_MARK_MEMBER_NAME(sick,"sick");
	HX_MARK_MEMBER_NAME(bf,"bf");
	HX_MARK_MEMBER_NAME(dad,"dad");
	HX_MARK_MEMBER_NAME(strumLine,"strumLine");
	HX_MARK_MEMBER_NAME(strumLineNotes,"strumLineNotes");
	HX_MARK_MEMBER_NAME(playerStrums,"playerStrums");
	HX_MARK_MEMBER_NAME(camHUD,"camHUD");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameplayCustomizeState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defaultX,"defaultX");
	HX_VISIT_MEMBER_NAME(defaultY,"defaultY");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(curt,"curt");
	HX_VISIT_MEMBER_NAME(front,"front");
	HX_VISIT_MEMBER_NAME(sick,"sick");
	HX_VISIT_MEMBER_NAME(bf,"bf");
	HX_VISIT_MEMBER_NAME(dad,"dad");
	HX_VISIT_MEMBER_NAME(strumLine,"strumLine");
	HX_VISIT_MEMBER_NAME(strumLineNotes,"strumLineNotes");
	HX_VISIT_MEMBER_NAME(playerStrums,"playerStrums");
	HX_VISIT_MEMBER_NAME(camHUD,"camHUD");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameplayCustomizeState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bf") ) { return ::hx::Val( bf ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dad") ) { return ::hx::Val( dad ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"curt") ) { return ::hx::Val( curt ); }
		if (HX_FIELD_EQ(inName,"sick") ) { return ::hx::Val( sick ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"front") ) { return ::hx::Val( front ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camHUD") ) { return ::hx::Val( camHUD ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaultX") ) { return ::hx::Val( defaultX ); }
		if (HX_FIELD_EQ(inName,"defaultY") ) { return ::hx::Val( defaultY ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"strumLine") ) { return ::hx::Val( strumLine ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"playerStrums") ) { return ::hx::Val( playerStrums ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strumLineNotes") ) { return ::hx::Val( strumLineNotes ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"generateStaticArrows") ) { return ::hx::Val( generateStaticArrows_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameplayCustomizeState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bf") ) { bf=inValue.Cast<  ::Boyfriend >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dad") ) { dad=inValue.Cast<  ::Character >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"curt") ) { curt=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sick") ) { sick=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"front") ) { front=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camHUD") ) { camHUD=inValue.Cast<  ::flixel::FlxCamera >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaultX") ) { defaultX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultY") ) { defaultY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"strumLine") ) { strumLine=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"playerStrums") ) { playerStrums=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strumLineNotes") ) { strumLineNotes=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameplayCustomizeState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("defaultX",77,d0,99,af));
	outFields->push(HX_("defaultY",78,d0,99,af));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("curt",f4,4a,c9,41));
	outFields->push(HX_("front",a9,18,8e,06));
	outFields->push(HX_("sick",be,8c,53,4c));
	outFields->push(HX_("bf",c4,55,00,00));
	outFields->push(HX_("dad",47,36,4c,00));
	outFields->push(HX_("strumLine",dd,79,d7,ee));
	outFields->push(HX_("strumLineNotes",24,f1,48,a4));
	outFields->push(HX_("playerStrums",4b,e1,2a,0d));
	outFields->push(HX_("camHUD",e8,2b,76,b7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameplayCustomizeState_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(GameplayCustomizeState_obj,defaultX),HX_("defaultX",77,d0,99,af)},
	{::hx::fsFloat,(int)offsetof(GameplayCustomizeState_obj,defaultY),HX_("defaultY",78,d0,99,af)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GameplayCustomizeState_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GameplayCustomizeState_obj,curt),HX_("curt",f4,4a,c9,41)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GameplayCustomizeState_obj,front),HX_("front",a9,18,8e,06)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GameplayCustomizeState_obj,sick),HX_("sick",be,8c,53,4c)},
	{::hx::fsObject /*  ::Boyfriend */ ,(int)offsetof(GameplayCustomizeState_obj,bf),HX_("bf",c4,55,00,00)},
	{::hx::fsObject /*  ::Character */ ,(int)offsetof(GameplayCustomizeState_obj,dad),HX_("dad",47,36,4c,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GameplayCustomizeState_obj,strumLine),HX_("strumLine",dd,79,d7,ee)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GameplayCustomizeState_obj,strumLineNotes),HX_("strumLineNotes",24,f1,48,a4)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GameplayCustomizeState_obj,playerStrums),HX_("playerStrums",4b,e1,2a,0d)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(int)offsetof(GameplayCustomizeState_obj,camHUD),HX_("camHUD",e8,2b,76,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameplayCustomizeState_obj_sStaticStorageInfo = 0;
#endif

static ::String GameplayCustomizeState_obj_sMemberFields[] = {
	HX_("defaultX",77,d0,99,af),
	HX_("defaultY",78,d0,99,af),
	HX_("background",ee,93,1d,26),
	HX_("curt",f4,4a,c9,41),
	HX_("front",a9,18,8e,06),
	HX_("sick",be,8c,53,4c),
	HX_("bf",c4,55,00,00),
	HX_("dad",47,36,4c,00),
	HX_("strumLine",dd,79,d7,ee),
	HX_("strumLineNotes",24,f1,48,a4),
	HX_("playerStrums",4b,e1,2a,0d),
	HX_("camHUD",e8,2b,76,b7),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("beatHit",7d,ea,04,74),
	HX_("generateStaticArrows",ad,44,90,42),
	::String(null()) };

::hx::Class GameplayCustomizeState_obj::__mClass;

void GameplayCustomizeState_obj::__register()
{
	GameplayCustomizeState_obj _hx_dummy;
	GameplayCustomizeState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameplayCustomizeState",74,30,cf,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameplayCustomizeState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameplayCustomizeState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameplayCustomizeState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameplayCustomizeState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

