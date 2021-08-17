#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_DialogueBox
#include <DialogueBox.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_addons_text_FlxTypeText
#include <flixel/addons/text/FlxTypeText.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
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
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_66_new,"DialogueBox","new",0x1f391625,"DialogueBox.new","DialogueBox.hx",66,0x0149b4eb)
HX_DEFINE_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_15_new,"DialogueBox","new",0x1f391625,"DialogueBox.new","DialogueBox.hx",15,0x0149b4eb)
static const int _hx_array_data_ffc81fb3_4[] = {
	(int)4,
};
static const int _hx_array_data_ffc81fb3_5[] = {
	(int)4,
};
static const int _hx_array_data_ffc81fb3_6[] = {
	(int)4,
};
static const int _hx_array_data_ffc81fb3_7[] = {
	(int)4,
};
static const int _hx_array_data_ffc81fb3_8[] = {
	(int)4,
};
static const int _hx_array_data_ffc81fb3_9[] = {
	(int)11,
};
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_223_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",223,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_267_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",267,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_277_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",277,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_296_startDialogue,"DialogueBox","startDialogue",0x59859d9f,"DialogueBox.startDialogue","DialogueBox.hx",296,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_338_cleanDialog,"DialogueBox","cleanDialog",0x0fc249f6,"DialogueBox.cleanDialog","DialogueBox.hx",338,0x0149b4eb)

void DialogueBox_obj::__construct(::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_66_new)
HXLINE(  67)			 ::flixel::FlxSprite fh = _gthis->bgFade;
HXDLIN(  67)			fh->set_alpha((fh->alpha + ((Float)0.13999999999999999)));
HXLINE(  68)			if ((_gthis->bgFade->alpha > ((Float)0.7))) {
HXLINE(  69)				_gthis->bgFade->set_alpha(((Float)0.7));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		bool talkingRight = __o_talkingRight.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_15_new)
HXLINE( 293)		this->isEnding = false;
HXLINE( 220)		this->dialogueStarted = false;
HXLINE( 219)		this->dialogueOpened = false;
HXLINE(  22)		this->dialogueList = ::Array_obj< ::String >::__new(0);
HXLINE(  19)		this->curCharacter = HX_("",00,00,00,00);
HXLINE(  38)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  39)		super::__construct(null(),null(),null());
HXLINE(  41)		::String _hx_switch_0 = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
            		if (  (_hx_switch_0==HX_("brave",00,2e,e9,b8)) ){
HXLINE(  53)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  53)			::String library = null();
HXDLIN(  53)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("Lunchbox",c1,34,3f,3d)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),0,null(),null());
HXLINE(  54)			{
HXLINE(  54)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  54)				 ::Dynamic onComplete = null();
HXDLIN(  54)				if (::hx::IsNull( _this->_channel )) {
HXLINE(  54)					_this->play(null(),null(),null());
            				}
HXDLIN(  54)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  54)					_this->fadeTween->cancel();
            				}
HXDLIN(  54)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.8),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE(  52)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("loss",e3,a9,b7,47)) ){
HXLINE(  56)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  56)			::String library = null();
HXDLIN(  56)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("LunchboxScary",57,33,01,24)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),0,null(),null());
HXLINE(  57)			{
HXLINE(  57)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  57)				 ::Dynamic onComplete = null();
HXDLIN(  57)				if (::hx::IsNull( _this->_channel )) {
HXLINE(  57)					_this->play(null(),null(),null());
            				}
HXDLIN(  57)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  57)					_this->fadeTween->cancel();
            				}
HXDLIN(  57)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.8),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE(  55)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  44)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  44)			::String library = null();
HXDLIN(  44)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("Lunchbox",c1,34,3f,3d)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),0,null(),null());
HXLINE(  45)			{
HXLINE(  45)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  45)				 ::Dynamic onComplete = null();
HXDLIN(  45)				if (::hx::IsNull( _this->_channel )) {
HXLINE(  45)					_this->play(null(),null(),null());
            				}
HXDLIN(  45)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  45)					_this->fadeTween->cancel();
            				}
HXDLIN(  45)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.8),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE(  43)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("shift",82,ec,22,7c)) ){
HXLINE(  50)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  50)			::String library = null();
HXDLIN(  50)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("Lunchbox",c1,34,3f,3d)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),0,null(),null());
HXLINE(  51)			{
HXLINE(  51)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  51)				 ::Dynamic onComplete = null();
HXDLIN(  51)				if (::hx::IsNull( _this->_channel )) {
HXLINE(  51)					_this->play(null(),null(),null());
            				}
HXDLIN(  51)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  51)					_this->fadeTween->cancel();
            				}
HXDLIN(  51)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.8),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE(  49)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("thorns",9c,bf,c7,8c)) ){
HXLINE(  47)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  47)			::String library = null();
HXDLIN(  47)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("LunchboxScary",57,33,01,24)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),0,null(),null());
HXLINE(  48)			{
HXLINE(  48)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  48)				 ::Dynamic onComplete = null();
HXDLIN(  48)				if (::hx::IsNull( _this->_channel )) {
HXLINE(  48)					_this->play(null(),null(),null());
            				}
HXDLIN(  48)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  48)					_this->fadeTween->cancel();
            				}
HXDLIN(  48)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.8),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE(  46)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  60)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-200,-200,null());
HXDLIN(  60)		int _hx_tmp1 = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.3)));
HXDLIN(  60)		this->bgFade = _hx_tmp->makeGraphic(_hx_tmp1,::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.3))),-4988968,null(),null());
HXLINE(  61)		this->bgFade->scrollFactor->set(null(),null());
HXLINE(  62)		this->bgFade->set_alpha(( (Float)(0) ));
HXLINE(  63)		this->add(this->bgFade);
HXLINE(  65)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.83), ::Dynamic(new _hx_Closure_0(_gthis)),5);
HXLINE(  72)		this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,45,null());
HXLINE(  74)		bool hasDialog = false;
HXLINE(  75)		::String _hx_switch_1 = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
            		if (  (_hx_switch_1==HX_("brave",00,2e,e9,b8)) ){
HXLINE( 110)			hasDialog = true;
HXLINE( 111)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN( 111)			::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble_talking",00,7d,a2,c5)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d));
HXDLIN( 111)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble_talking",00,7d,a2,c5)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("shared",a5,5e,2b,1d))));
HXLINE( 112)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Speech Bubble Normal Open",0d,59,3f,7c),24,false,null(),null());
HXLINE( 113)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("speech bubble normal",bd,d5,bc,a7),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_4,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE( 114)			this->box->set_width(( (Float)(200) ));
HXLINE( 115)			this->box->set_height(( (Float)(200) ));
HXLINE( 116)			this->box->set_x(( (Float)(-100) ));
HXLINE( 117)			this->box->set_y(( (Float)(375) ));
HXLINE( 109)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("loss",e3,a9,b7,47)) ){
HXLINE( 119)			hasDialog = true;
HXLINE( 120)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN( 120)			::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble_talking",00,7d,a2,c5)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d));
HXDLIN( 120)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble_talking",00,7d,a2,c5)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("shared",a5,5e,2b,1d))));
HXLINE( 121)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("AHH speech bubble",eb,de,b2,20),24,false,null(),null());
HXLINE( 122)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("speech bubble loud open",42,35,10,f0),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_5,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE( 123)			this->box->set_width(( (Float)(230) ));
HXLINE( 124)			this->box->set_height(( (Float)(230) ));
HXLINE( 125)			this->box->set_x(( (Float)(-100) ));
HXLINE( 126)			this->box->set_y(( (Float)(300) ));
HXLINE( 118)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("roses",04,6c,64,ed)) ){
HXLINE(  83)			hasDialog = true;
HXLINE(  84)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  84)			_hx_tmp->play(::Paths_obj::sound(HX_("ANGRY_TEXT_BOX",57,5c,5c,19),null()),null(),null(),null(),null(),null());
HXLINE(  86)			 ::flixel::FlxSprite _hx_tmp1 = this->box;
HXDLIN(  86)			::String library = null();
HXDLIN(  86)			::String _hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  86)			_hx_tmp1->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp2,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  87)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("SENPAI ANGRY IMPACT SPEECH",f9,17,39,87),24,false,null(),null());
HXLINE(  88)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("SENPAI ANGRY IMPACT SPEECH",f9,17,39,87),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_6,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  82)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  78)			hasDialog = true;
HXLINE(  79)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN(  79)			::String library = null();
HXDLIN(  79)			::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  79)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  80)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Text Box Appear",bd,48,54,1a),24,false,null(),null());
HXLINE(  81)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("Text Box Appear",bd,48,54,1a),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_7,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  77)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("shift",82,ec,22,7c)) ){
HXLINE( 101)			hasDialog = true;
HXLINE( 102)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN( 102)			::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble_talking",00,7d,a2,c5)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d));
HXDLIN( 102)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble_talking",00,7d,a2,c5)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("shared",a5,5e,2b,1d))));
HXLINE( 103)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Speech Bubble Normal Open",0d,59,3f,7c),24,false,null(),null());
HXLINE( 104)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("speech bubble normal",bd,d5,bc,a7),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_8,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE( 105)			this->box->set_width(( (Float)(200) ));
HXLINE( 106)			this->box->set_height(( (Float)(200) ));
HXLINE( 107)			this->box->set_x(( (Float)(-100) ));
HXLINE( 108)			this->box->set_y(( (Float)(375) ));
HXLINE( 100)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("thorns",9c,bf,c7,8c)) ){
HXLINE(  91)			hasDialog = true;
HXLINE(  92)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN(  92)			::String library = null();
HXDLIN(  92)			::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  92)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  93)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Spirit Textbox spawn",ea,ee,35,84),24,false,null(),null());
HXLINE(  94)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("Spirit Textbox spawn",ea,ee,35,84),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_9,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  96)			 ::flixel::FlxSprite face =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,320,170,null());
HXDLIN(  96)			::String library1 = null();
HXDLIN(  96)			 ::flixel::FlxSprite face1 = face->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/spiritFaceForward",93,1c,29,2a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  97)			face1->setGraphicSize(::Std_obj::_hx_int((face1->get_width() * ( (Float)(6) ))),null());
HXLINE(  98)			this->add(face1);
HXLINE(  90)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE( 129)		this->dialogueList = dialogueList;
HXLINE( 131)		if (!(hasDialog)) {
HXLINE( 132)			return;
            		}
HXLINE( 134)		bool _hx_tmp2;
HXDLIN( 134)		bool _hx_tmp3;
HXDLIN( 134)		if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() != HX_("senpai",3c,df,8d,6b))) {
HXLINE( 134)			_hx_tmp3 = (( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("roses",04,6c,64,ed));
            		}
            		else {
HXLINE( 134)			_hx_tmp3 = true;
            		}
HXDLIN( 134)		if (!(_hx_tmp3)) {
HXLINE( 134)			_hx_tmp2 = (( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("thorns",9c,bf,c7,8c));
            		}
            		else {
HXLINE( 134)			_hx_tmp2 = true;
            		}
HXDLIN( 134)		if (_hx_tmp2) {
HXLINE( 135)			this->portraitLeft =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,40,null());
HXLINE( 136)			 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 136)			::String library = null();
HXDLIN( 136)			::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 136)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 137)			this->portraitLeft->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Senpai Portrait Enter",d7,e0,09,14),24,false,null(),null());
HXLINE( 138)			 ::flixel::FlxSprite _hx_tmp2 = this->portraitLeft;
HXDLIN( 138)			Float _hx_tmp3 = this->portraitLeft->get_width();
HXDLIN( 138)			_hx_tmp2->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp3 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 139)			this->portraitLeft->updateHitbox();
HXLINE( 140)			this->portraitLeft->scrollFactor->set(null(),null());
HXLINE( 141)			this->add(this->portraitLeft);
HXLINE( 142)			this->portraitLeft->set_visible(false);
            		}
            		else {
HXLINE( 143)			bool _hx_tmp;
HXDLIN( 143)			if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() != HX_("shift",82,ec,22,7c))) {
HXLINE( 143)				_hx_tmp = (( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("brave",00,2e,e9,b8));
            			}
            			else {
HXLINE( 143)				_hx_tmp = true;
            			}
HXDLIN( 143)			if (_hx_tmp) {
HXLINE( 144)				this->portraitLeft =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,40,null());
HXLINE( 145)				 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 145)				::String library = null();
HXDLIN( 145)				::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 145)				_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 146)				this->portraitLeft->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Senpai Portrait Enter",d7,e0,09,14),24,false,null(),null());
HXLINE( 147)				 ::flixel::FlxSprite _hx_tmp2 = this->portraitLeft;
HXDLIN( 147)				Float _hx_tmp3 = this->portraitLeft->get_width();
HXDLIN( 147)				_hx_tmp2->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp3 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 148)				this->portraitLeft->updateHitbox();
HXLINE( 149)				this->portraitLeft->scrollFactor->set(null(),null());
HXLINE( 150)				this->add(this->portraitLeft);
HXLINE( 151)				this->portraitLeft->set_visible(false);
            			}
            			else {
HXLINE( 152)				if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("loss",e3,a9,b7,47))) {
HXLINE( 153)					this->portraitLeft =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,40,null());
HXLINE( 154)					 ::flixel::FlxSprite fh = this->portraitLeft;
HXDLIN( 154)					fh->set_y((fh->y + 30));
HXLINE( 155)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 155)					::String library = null();
HXDLIN( 155)					::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 155)					_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 156)					this->portraitLeft->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Senpai Portrait Enter",d7,e0,09,14),24,false,null(),null());
HXLINE( 157)					 ::flixel::FlxSprite _hx_tmp2 = this->portraitLeft;
HXDLIN( 157)					Float _hx_tmp3 = this->portraitLeft->get_width();
HXDLIN( 157)					_hx_tmp2->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp3 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 158)					this->portraitLeft->updateHitbox();
HXLINE( 159)					this->portraitLeft->scrollFactor->set(null(),null());
HXLINE( 160)					this->add(this->portraitLeft);
HXLINE( 161)					this->portraitLeft->set_visible(false);
            				}
            			}
            		}
HXLINE( 164)		bool _hx_tmp4;
HXDLIN( 164)		bool _hx_tmp5;
HXDLIN( 164)		if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() != HX_("senpai",3c,df,8d,6b))) {
HXLINE( 164)			_hx_tmp5 = (( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("roses",04,6c,64,ed));
            		}
            		else {
HXLINE( 164)			_hx_tmp5 = true;
            		}
HXDLIN( 164)		if (!(_hx_tmp5)) {
HXLINE( 164)			_hx_tmp4 = (( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("thorns",9c,bf,c7,8c));
            		}
            		else {
HXLINE( 164)			_hx_tmp4 = true;
            		}
HXDLIN( 164)		if (_hx_tmp4) {
HXLINE( 165)			this->portraitRight =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,40,null());
HXLINE( 166)			 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 166)			::String library = null();
HXDLIN( 166)			::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPortrait",23,ea,7a,a3)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 166)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPortrait",23,ea,7a,a3)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 167)			this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Boyfriend portrait enter",a9,02,f8,de),24,false,null(),null());
HXLINE( 168)			 ::flixel::FlxSprite _hx_tmp2 = this->portraitRight;
HXDLIN( 168)			Float _hx_tmp3 = this->portraitRight->get_width();
HXDLIN( 168)			_hx_tmp2->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp3 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 169)			this->portraitRight->updateHitbox();
HXLINE( 170)			this->portraitRight->scrollFactor->set(null(),null());
HXLINE( 171)			this->add(this->portraitRight);
HXLINE( 172)			this->portraitRight->set_visible(false);
            		}
            		else {
HXLINE( 173)			bool _hx_tmp;
HXDLIN( 173)			bool _hx_tmp1;
HXDLIN( 173)			if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() != HX_("shift",82,ec,22,7c))) {
HXLINE( 173)				_hx_tmp1 = (( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("brave",00,2e,e9,b8));
            			}
            			else {
HXLINE( 173)				_hx_tmp1 = true;
            			}
HXDLIN( 173)			if (!(_hx_tmp1)) {
HXLINE( 173)				_hx_tmp = (( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("loss",e3,a9,b7,47));
            			}
            			else {
HXLINE( 173)				_hx_tmp = true;
            			}
HXDLIN( 173)			if (_hx_tmp) {
HXLINE( 174)				this->portraitRight =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,40,null());
HXLINE( 175)				 ::flixel::FlxSprite fh = this->portraitRight;
HXDLIN( 175)				fh->set_y((fh->y + 92));
HXLINE( 176)				 ::flixel::FlxSprite fh1 = this->portraitRight;
HXDLIN( 176)				fh1->set_x((fh1->x + 677));
HXLINE( 177)				 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 177)				::String library = null();
HXDLIN( 177)				::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/boyfriendPort",a7,69,fb,e0)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 177)				_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/boyfriendPort",a7,69,fb,e0)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 178)				this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("BF Portrait Enter",6f,6f,4f,45),24,false,null(),null());
HXLINE( 179)				 ::flixel::FlxSprite _hx_tmp2 = this->portraitRight;
HXDLIN( 179)				Float _hx_tmp3 = this->portraitRight->get_width();
HXDLIN( 179)				_hx_tmp2->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp3 * ::PlayState_obj::daPixelZoom) * ((Float)0.2))),null());
HXLINE( 180)				this->portraitRight->updateHitbox();
HXLINE( 181)				this->portraitRight->scrollFactor->set(null(),null());
HXLINE( 182)				this->add(this->portraitRight);
HXLINE( 183)				this->portraitRight->set_visible(false);
            			}
            		}
HXLINE( 186)		this->box->animation->play(HX_("normalOpen",91,41,38,70),null(),null(),null());
HXLINE( 187)		 ::flixel::FlxSprite _hx_tmp6 = this->box;
HXDLIN( 187)		Float _hx_tmp7 = this->box->get_width();
HXDLIN( 187)		_hx_tmp6->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp7 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 188)		this->box->updateHitbox();
HXLINE( 189)		this->add(this->box);
HXLINE( 191)		this->box->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 192)		this->portraitLeft->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 194)		 ::flixel::FlxSprite _hx_tmp8 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.9)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.9)),null());
HXDLIN( 194)		::String library = null();
HXDLIN( 194)		this->handSelect = _hx_tmp8->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/hand_textbox",67,1b,cd,60)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE( 195)		this->add(this->handSelect);
HXLINE( 198)		bool _hx_tmp9 = !(talkingRight);
HXLINE( 203)		this->dropText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,242,502,::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6))),HX_("",00,00,00,00),32,null());
HXLINE( 204)		this->dropText->set_font(HX_("Pixel Arial 11 Bold",ae,17,c6,45));
HXLINE( 205)		this->dropText->set_color(-2583404);
HXLINE( 206)		this->add(this->dropText);
HXLINE( 208)		this->swagDialogue =  ::flixel::addons::text::FlxTypeText_obj::__alloc( HX_CTX ,( (Float)(240) ),( (Float)(500) ),::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6))),HX_("",00,00,00,00),32,null());
HXLINE( 209)		this->swagDialogue->set_font(HX_("Pixel Arial 11 Bold",ae,17,c6,45));
HXLINE( 210)		this->swagDialogue->set_color(-12640223);
HXLINE( 211)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp10 = ::flixel::FlxG_obj::sound;
HXDLIN( 211)		 ::flixel::_hx_system::FlxSound _hx_tmp11 = _hx_tmp10->load(::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.6),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 211)		this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp11);
HXLINE( 212)		this->add(this->swagDialogue);
HXLINE( 214)		this->dialogue =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(80) ),HX_("",00,00,00,00),false,true);
            	}

Dynamic DialogueBox_obj::__CreateEmpty() { return new DialogueBox_obj; }

void *DialogueBox_obj::_hx_vtable = 0;

Dynamic DialogueBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogueBox_obj > _hx_result = new DialogueBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DialogueBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x288ce903) {
			if (inClassId<=(int)0x04b35cb7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x04b35cb7;
			} else {
				return inClassId==(int)0x288ce903;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void DialogueBox_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_223_update)
HXDLIN( 223)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 225)		if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("roses",04,6c,64,ed))) {
HXLINE( 226)			this->portraitLeft->set_visible(false);
            		}
HXLINE( 227)		if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("thorns",9c,bf,c7,8c))) {
HXLINE( 229)			this->portraitLeft->set_color(-16777216);
HXLINE( 230)			this->swagDialogue->set_color(-1);
HXLINE( 231)			this->dropText->set_color(-16777216);
            		}
HXLINE( 234)		this->dropText->set_text(this->swagDialogue->text);
HXLINE( 236)		if (::hx::IsNotNull( this->box->animation->_curAnim )) {
HXLINE( 238)			bool _hx_tmp;
HXDLIN( 238)			if ((this->box->animation->_curAnim->name == HX_("normalOpen",91,41,38,70))) {
HXLINE( 238)				_hx_tmp = this->box->animation->_curAnim->finished;
            			}
            			else {
HXLINE( 238)				_hx_tmp = false;
            			}
HXDLIN( 238)			if (_hx_tmp) {
HXLINE( 240)				this->box->animation->play(HX_("normal",27,72,69,30),null(),null(),null());
HXLINE( 241)				this->dialogueOpened = true;
            			}
            		}
HXLINE( 245)		bool _hx_tmp;
HXDLIN( 245)		if (this->dialogueOpened) {
HXLINE( 245)			_hx_tmp = !(this->dialogueStarted);
            		}
            		else {
HXLINE( 245)			_hx_tmp = false;
            		}
HXDLIN( 245)		if (_hx_tmp) {
HXLINE( 247)			this->startDialogue();
HXLINE( 248)			this->dialogueStarted = true;
            		}
HXLINE( 251)		bool _hx_tmp1;
HXDLIN( 251)		if (( ( ::flixel::input::FlxBaseKeyList)(::flixel::FlxG_obj::keys->justPressed) )->get_ANY()) {
HXLINE( 251)			_hx_tmp1 = (this->dialogueStarted == true);
            		}
            		else {
HXLINE( 251)			_hx_tmp1 = false;
            		}
HXDLIN( 251)		if (_hx_tmp1) {
HXLINE( 253)			this->remove(this->dialogue,null());
HXLINE( 255)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 255)			_hx_tmp->play(::Paths_obj::sound(HX_("clickText",15,39,f9,2b),null()),((Float)0.8),null(),null(),null(),null());
HXLINE( 257)			bool _hx_tmp1;
HXDLIN( 257)			if (::hx::IsNull( this->dialogueList->__get(1) )) {
HXLINE( 257)				_hx_tmp1 = ::hx::IsNotNull( this->dialogueList->__get(0) );
            			}
            			else {
HXLINE( 257)				_hx_tmp1 = false;
            			}
HXDLIN( 257)			if (_hx_tmp1) {
HXLINE( 259)				if (!(this->isEnding)) {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::util::FlxTimer tmr){
            						HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_267_update)
HXLINE( 268)						 ::flixel::FlxSprite fh = _gthis->box;
HXDLIN( 268)						fh->set_alpha((fh->alpha - ((Float)0.2)));
HXLINE( 269)						 ::flixel::FlxSprite fh1 = _gthis->bgFade;
HXDLIN( 269)						fh1->set_alpha((fh1->alpha - ((Float)0.13999999999999999)));
HXLINE( 270)						_gthis->portraitLeft->set_visible(false);
HXLINE( 271)						_gthis->portraitRight->set_visible(false);
HXLINE( 272)						 ::flixel::addons::text::FlxTypeText fh2 = _gthis->swagDialogue;
HXDLIN( 272)						fh2->set_alpha((fh2->alpha - ((Float)0.2)));
HXLINE( 273)						_gthis->dropText->set_alpha(_gthis->swagDialogue->alpha);
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::DialogueBox,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::util::FlxTimer tmr){
            						HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_277_update)
HXLINE( 278)						_gthis->finishThing();
HXLINE( 279)						_gthis->kill();
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 261)					this->isEnding = true;
HXLINE( 263)					bool _hx_tmp;
HXDLIN( 263)					bool _hx_tmp1;
HXDLIN( 263)					bool _hx_tmp2;
HXDLIN( 263)					bool _hx_tmp3;
HXDLIN( 263)					if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() != HX_("senpai",3c,df,8d,6b))) {
HXLINE( 263)						_hx_tmp3 = (( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("thorns",9c,bf,c7,8c));
            					}
            					else {
HXLINE( 263)						_hx_tmp3 = true;
            					}
HXDLIN( 263)					if (!(_hx_tmp3)) {
HXLINE( 263)						_hx_tmp2 = (( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("shift",82,ec,22,7c));
            					}
            					else {
HXLINE( 263)						_hx_tmp2 = true;
            					}
HXDLIN( 263)					if (!(_hx_tmp2)) {
HXLINE( 263)						_hx_tmp1 = (( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("brave",00,2e,e9,b8));
            					}
            					else {
HXLINE( 263)						_hx_tmp1 = true;
            					}
HXDLIN( 263)					if (!(_hx_tmp1)) {
HXLINE( 263)						_hx_tmp = (( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("loss",e3,a9,b7,47));
            					}
            					else {
HXLINE( 263)						_hx_tmp = true;
            					}
HXDLIN( 263)					if (_hx_tmp) {
HXLINE( 264)						 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 264)						 ::Dynamic To = 0;
HXDLIN( 264)						 ::Dynamic onComplete = null();
HXDLIN( 264)						if (::hx::IsNull( To )) {
HXLINE( 264)							To = 0;
            						}
HXDLIN( 264)						if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 264)							_this->fadeTween->cancel();
            						}
HXDLIN( 264)						_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),((Float)2.2), ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            					}
HXLINE( 266)					 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.2), ::Dynamic(new _hx_Closure_0(_gthis)),5);
HXLINE( 276)					 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)1.2), ::Dynamic(new _hx_Closure_1(_gthis)),null());
            				}
            			}
            			else {
HXLINE( 285)				this->dialogueList->remove(this->dialogueList->__get(0));
HXLINE( 286)				this->startDialogue();
            			}
            		}
HXLINE( 290)		this->super::update(elapsed);
            	}


void DialogueBox_obj::startDialogue(){
            	HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_296_startDialogue)
HXLINE( 297)		this->cleanDialog();
HXLINE( 303)		this->swagDialogue->resetText(this->dialogueList->__get(0));
HXLINE( 304)		this->swagDialogue->start(((Float)0.04),true,null(),null(),null());
HXLINE( 306)		::String _hx_switch_0 = this->curCharacter;
            		if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE( 316)			this->portraitLeft->set_visible(false);
HXLINE( 317)			if (!(this->portraitRight->visible)) {
HXLINE( 319)				this->portraitRight->set_visible(true);
HXLINE( 320)				this->portraitRight->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            			}
HXLINE( 315)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==HX_("dad",47,36,4c,00)) ){
HXLINE( 309)			this->portraitRight->set_visible(false);
HXLINE( 310)			if (!(this->portraitLeft->visible)) {
HXLINE( 312)				this->portraitLeft->set_visible(true);
HXLINE( 313)				this->portraitLeft->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            			}
HXLINE( 308)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==HX_("tai",5c,5a,58,00)) ){
HXLINE( 323)			this->portraitRight->set_visible(false);
HXLINE( 324)			if (!(this->portraitLeft->visible)) {
HXLINE( 325)				this->portraitLeft->set_visible(true);
HXLINE( 326)				this->portraitLeft->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            			}
HXLINE( 322)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==HX_("tai-demon",fa,69,05,25)) ){
HXLINE( 329)			this->portraitRight->set_visible(false);
HXLINE( 330)			if (!(this->portraitLeft->visible)) {
HXLINE( 331)				this->portraitLeft->set_visible(true);
HXLINE( 332)				this->portraitLeft->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            			}
HXLINE( 328)			goto _hx_goto_13;
            		}
            		_hx_goto_13:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,startDialogue,(void))

void DialogueBox_obj::cleanDialog(){
            	HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_338_cleanDialog)
HXLINE( 339)		::Array< ::String > splitName = this->dialogueList->__get(0).split(HX_(":",3a,00,00,00));
HXLINE( 340)		this->curCharacter = splitName->__get(1);
HXLINE( 341)		this->dialogueList[0] = ::StringTools_obj::trim(this->dialogueList->__get(0).substr((splitName->__get(1).length + 2),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,cleanDialog,(void))


::hx::ObjectPtr< DialogueBox_obj > DialogueBox_obj::__new(::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList) {
	::hx::ObjectPtr< DialogueBox_obj > __this = new DialogueBox_obj();
	__this->__construct(__o_talkingRight,dialogueList);
	return __this;
}

::hx::ObjectPtr< DialogueBox_obj > DialogueBox_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList) {
	DialogueBox_obj *__this = (DialogueBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogueBox_obj), true, "DialogueBox"));
	*(void **)__this = DialogueBox_obj::_hx_vtable;
	__this->__construct(__o_talkingRight,dialogueList);
	return __this;
}

DialogueBox_obj::DialogueBox_obj()
{
}

void DialogueBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogueBox);
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(dialogue,"dialogue");
	HX_MARK_MEMBER_NAME(dialogueList,"dialogueList");
	HX_MARK_MEMBER_NAME(swagDialogue,"swagDialogue");
	HX_MARK_MEMBER_NAME(dropText,"dropText");
	HX_MARK_MEMBER_NAME(finishThing,"finishThing");
	HX_MARK_MEMBER_NAME(portraitLeft,"portraitLeft");
	HX_MARK_MEMBER_NAME(portraitRight,"portraitRight");
	HX_MARK_MEMBER_NAME(handSelect,"handSelect");
	HX_MARK_MEMBER_NAME(bgFade,"bgFade");
	HX_MARK_MEMBER_NAME(dialogueOpened,"dialogueOpened");
	HX_MARK_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_MARK_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogueBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(dialogue,"dialogue");
	HX_VISIT_MEMBER_NAME(dialogueList,"dialogueList");
	HX_VISIT_MEMBER_NAME(swagDialogue,"swagDialogue");
	HX_VISIT_MEMBER_NAME(dropText,"dropText");
	HX_VISIT_MEMBER_NAME(finishThing,"finishThing");
	HX_VISIT_MEMBER_NAME(portraitLeft,"portraitLeft");
	HX_VISIT_MEMBER_NAME(portraitRight,"portraitRight");
	HX_VISIT_MEMBER_NAME(handSelect,"handSelect");
	HX_VISIT_MEMBER_NAME(bgFade,"bgFade");
	HX_VISIT_MEMBER_NAME(dialogueOpened,"dialogueOpened");
	HX_VISIT_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_VISIT_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogueBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return ::hx::Val( box ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { return ::hx::Val( bgFade ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { return ::hx::Val( dialogue ); }
		if (HX_FIELD_EQ(inName,"dropText") ) { return ::hx::Val( dropText ); }
		if (HX_FIELD_EQ(inName,"isEnding") ) { return ::hx::Val( isEnding ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handSelect") ) { return ::hx::Val( handSelect ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { return ::hx::Val( finishThing ); }
		if (HX_FIELD_EQ(inName,"cleanDialog") ) { return ::hx::Val( cleanDialog_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
		if (HX_FIELD_EQ(inName,"dialogueList") ) { return ::hx::Val( dialogueList ); }
		if (HX_FIELD_EQ(inName,"swagDialogue") ) { return ::hx::Val( swagDialogue ); }
		if (HX_FIELD_EQ(inName,"portraitLeft") ) { return ::hx::Val( portraitLeft ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"portraitRight") ) { return ::hx::Val( portraitRight ); }
		if (HX_FIELD_EQ(inName,"startDialogue") ) { return ::hx::Val( startDialogue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dialogueOpened") ) { return ::hx::Val( dialogueOpened ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { return ::hx::Val( dialogueStarted ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DialogueBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { bgFade=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { dialogue=inValue.Cast<  ::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dropText") ) { dropText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isEnding") ) { isEnding=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handSelect") ) { handSelect=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { finishThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueList") ) { dialogueList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swagDialogue") ) { swagDialogue=inValue.Cast<  ::flixel::addons::text::FlxTypeText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"portraitLeft") ) { portraitLeft=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"portraitRight") ) { portraitRight=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dialogueOpened") ) { dialogueOpened=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { dialogueStarted=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DialogueBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("box",0b,be,4a,00));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("dialogue",18,2d,94,a7));
	outFields->push(HX_("dialogueList",96,e1,d8,0d));
	outFields->push(HX_("swagDialogue",c2,ad,00,ad));
	outFields->push(HX_("dropText",7c,74,94,f2));
	outFields->push(HX_("portraitLeft",02,9f,53,0d));
	outFields->push(HX_("portraitRight",81,90,e4,12));
	outFields->push(HX_("handSelect",cb,77,90,7c));
	outFields->push(HX_("bgFade",e1,fd,cd,ab));
	outFields->push(HX_("dialogueOpened",e1,e5,9f,10));
	outFields->push(HX_("dialogueStarted",09,77,22,70));
	outFields->push(HX_("isEnding",71,3f,f2,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogueBox_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,box),HX_("box",0b,be,4a,00)},
	{::hx::fsString,(int)offsetof(DialogueBox_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(DialogueBox_obj,dialogue),HX_("dialogue",18,2d,94,a7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBox_obj,dialogueList),HX_("dialogueList",96,e1,d8,0d)},
	{::hx::fsObject /*  ::flixel::addons::text::FlxTypeText */ ,(int)offsetof(DialogueBox_obj,swagDialogue),HX_("swagDialogue",c2,ad,00,ad)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(DialogueBox_obj,dropText),HX_("dropText",7c,74,94,f2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBox_obj,finishThing),HX_("finishThing",9b,aa,8e,36)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,portraitLeft),HX_("portraitLeft",02,9f,53,0d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,portraitRight),HX_("portraitRight",81,90,e4,12)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,handSelect),HX_("handSelect",cb,77,90,7c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,bgFade),HX_("bgFade",e1,fd,cd,ab)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueOpened),HX_("dialogueOpened",e1,e5,9f,10)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueStarted),HX_("dialogueStarted",09,77,22,70)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,isEnding),HX_("isEnding",71,3f,f2,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DialogueBox_obj_sStaticStorageInfo = 0;
#endif

static ::String DialogueBox_obj_sMemberFields[] = {
	HX_("box",0b,be,4a,00),
	HX_("curCharacter",09,86,7c,d7),
	HX_("dialogue",18,2d,94,a7),
	HX_("dialogueList",96,e1,d8,0d),
	HX_("swagDialogue",c2,ad,00,ad),
	HX_("dropText",7c,74,94,f2),
	HX_("finishThing",9b,aa,8e,36),
	HX_("portraitLeft",02,9f,53,0d),
	HX_("portraitRight",81,90,e4,12),
	HX_("handSelect",cb,77,90,7c),
	HX_("bgFade",e1,fd,cd,ab),
	HX_("dialogueOpened",e1,e5,9f,10),
	HX_("dialogueStarted",09,77,22,70),
	HX_("update",09,86,05,87),
	HX_("isEnding",71,3f,f2,52),
	HX_("startDialogue",9a,8f,4f,ac),
	HX_("cleanDialog",31,37,ca,9e),
	::String(null()) };

::hx::Class DialogueBox_obj::__mClass;

void DialogueBox_obj::__register()
{
	DialogueBox_obj _hx_dummy;
	DialogueBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DialogueBox",b3,1f,c8,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogueBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogueBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogueBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogueBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

