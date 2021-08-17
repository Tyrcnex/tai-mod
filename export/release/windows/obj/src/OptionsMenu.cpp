#include <hxcpp.h>

#ifndef INCLUDED_AccuracyDOption
#include <AccuracyDOption.h>
#endif
#ifndef INCLUDED_AccuracyOption
#include <AccuracyOption.h>
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_BotPlay
#include <BotPlay.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CustomizeGameplay
#include <CustomizeGameplay.h>
#endif
#ifndef INCLUDED_DFJKOption
#include <DFJKOption.h>
#endif
#ifndef INCLUDED_DistractionsAndEffectsOption
#include <DistractionsAndEffectsOption.h>
#endif
#ifndef INCLUDED_DownscrollOption
#include <DownscrollOption.h>
#endif
#ifndef INCLUDED_FPSCapOption
#include <FPSCapOption.h>
#endif
#ifndef INCLUDED_FPSOption
#include <FPSOption.h>
#endif
#ifndef INCLUDED_FlashingLightsOption
#include <FlashingLightsOption.h>
#endif
#ifndef INCLUDED_GhostTapOption
#include <GhostTapOption.h>
#endif
#ifndef INCLUDED_HelperFunctions
#include <HelperFunctions.h>
#endif
#ifndef INCLUDED_Judgement
#include <Judgement.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_NPSDisplayOption
#include <NPSDisplayOption.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionCatagory
#include <OptionCatagory.h>
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
#ifndef INCLUDED_RainbowFPSOption
#include <RainbowFPSOption.h>
#endif
#ifndef INCLUDED_ReplayOption
#include <ReplayOption.h>
#endif
#ifndef INCLUDED_ResetButtonOption
#include <ResetButtonOption.h>
#endif
#ifndef INCLUDED_ScrollSpeedOption
#include <ScrollSpeedOption.h>
#endif
#ifndef INCLUDED_SongPositionOption
#include <SongPositionOption.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_WatermarkOption
#include <WatermarkOption.h>
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
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
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
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b7c1b117f8362d86_17_new,"OptionsMenu","new",0x0f1d276f,"OptionsMenu.new","OptionsMenu.hx",17,0x7ae6dae1)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c1b117f8362d86_68_create,"OptionsMenu","create",0x9c60a34d,"OptionsMenu.create","OptionsMenu.hx",68,0x7ae6dae1)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c1b117f8362d86_104_update,"OptionsMenu","update",0xa756c25a,"OptionsMenu.update","OptionsMenu.hx",104,0x7ae6dae1)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c1b117f8362d86_219_changeSelection,"OptionsMenu","changeSelection",0x61ecca4b,"OptionsMenu.changeSelection","OptionsMenu.hx",219,0x7ae6dae1)

void OptionsMenu_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_GC_STACKFRAME(&_hx_pos_b7c1b117f8362d86_17_new)
HXLINE( 216)		this->isSettingControl = false;
HXLINE( 100)		this->isCat = false;
HXLINE(  61)		this->currentDescription = HX_("",00,00,00,00);
HXLINE(  24)		 ::DFJKOption _hx_tmp =  ::DFJKOption_obj::__alloc( HX_CTX ,::PlayerSettings_obj::player1->controls);
HXLINE(  25)		 ::DownscrollOption _hx_tmp1 =  ::DownscrollOption_obj::__alloc( HX_CTX ,HX_("Change the layout of the strumline.",32,91,e6,a0));
HXLINE(  26)		 ::GhostTapOption _hx_tmp2 =  ::GhostTapOption_obj::__alloc( HX_CTX ,HX_("Ghost Tapping is when you tap a direction and it doesn't give you a miss.",23,ec,73,95));
HXLINE(  27)		 ::Judgement _hx_tmp3 =  ::Judgement_obj::__alloc( HX_CTX ,HX_("Customize your Hit Timings (LEFT or RIGHT)",45,15,ea,ec));
HXLINE(  29)		 ::FPSCapOption _hx_tmp4 =  ::FPSCapOption_obj::__alloc( HX_CTX ,HX_("Cap your FPS (Left for -10, Right for +10. SHIFT to go faster)",b0,e9,22,c2));
HXLINE(  31)		 ::ScrollSpeedOption _hx_tmp5 =  ::ScrollSpeedOption_obj::__alloc( HX_CTX ,HX_("Change your scroll speed (Left for -0.1, right for +0.1. If it's at 1, it will be chart dependent)",ac,58,de,33));
HXLINE(  32)		 ::AccuracyDOption _hx_tmp6 =  ::AccuracyDOption_obj::__alloc( HX_CTX ,HX_("Change how accuracy is calculated. (Accurate = Simple, Complex = Milisecond Based)",8a,fa,fc,fc));
HXLINE(  33)		 ::ResetButtonOption _hx_tmp7 =  ::ResetButtonOption_obj::__alloc( HX_CTX ,HX_("Toggle pressing R to gameover.",26,82,70,70));
HXLINE(  23)		 ::OptionCatagory _hx_tmp8 =  ::OptionCatagory_obj::__alloc( HX_CTX ,HX_("Gameplay",06,bf,58,a5),::Array_obj< ::Dynamic>::__new(9)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,_hx_tmp2)->init(3,_hx_tmp3)->init(4,_hx_tmp4)->init(5,_hx_tmp5)->init(6,_hx_tmp6)->init(7,_hx_tmp7)->init(8, ::CustomizeGameplay_obj::__alloc( HX_CTX ,HX_("Drag'n'Drop Gameplay Modules around to your preference",88,b2,13,61))));
HXLINE(  39)		 ::DistractionsAndEffectsOption _hx_tmp9 =  ::DistractionsAndEffectsOption_obj::__alloc( HX_CTX ,HX_("Toggle stage distractions that can hinder your gameplay.",0f,37,95,93));
HXLINE(  40)		 ::RainbowFPSOption _hx_tmp10 =  ::RainbowFPSOption_obj::__alloc( HX_CTX ,HX_("Make the FPS Counter Rainbow (Only works with the FPS Counter toggled on and Flashing Lights toggled off)",25,b2,cd,d1));
HXLINE(  41)		 ::AccuracyOption _hx_tmp11 =  ::AccuracyOption_obj::__alloc( HX_CTX ,HX_("Display accuracy information.",0b,46,c5,44));
HXLINE(  42)		 ::NPSDisplayOption _hx_tmp12 =  ::NPSDisplayOption_obj::__alloc( HX_CTX ,HX_("Shows your current Notes Per Second.",0e,4d,64,b3));
HXLINE(  37)		 ::OptionCatagory _hx_tmp13 =  ::OptionCatagory_obj::__alloc( HX_CTX ,HX_("Appearance",04,ca,4d,37),::Array_obj< ::Dynamic>::__new(5)->init(0,_hx_tmp9)->init(1,_hx_tmp10)->init(2,_hx_tmp11)->init(3,_hx_tmp12)->init(4, ::SongPositionOption_obj::__alloc( HX_CTX ,HX_("Show the songs current position (as a bar)",37,bf,46,18))));
HXLINE(  51)		 ::FPSOption _hx_tmp14 =  ::FPSOption_obj::__alloc( HX_CTX ,HX_("Toggle the FPS Counter",ea,68,c5,9e));
HXLINE(  52)		 ::ReplayOption _hx_tmp15 =  ::ReplayOption_obj::__alloc( HX_CTX ,HX_("View replays",d1,8a,98,ae));
HXLINE(  54)		 ::FlashingLightsOption _hx_tmp16 =  ::FlashingLightsOption_obj::__alloc( HX_CTX ,HX_("Toggle flashing lights that can cause epileptic seizures and strain.",c8,92,75,4d));
HXLINE(  55)		 ::WatermarkOption _hx_tmp17 =  ::WatermarkOption_obj::__alloc( HX_CTX ,HX_("Enable and disable all watermarks from the engine.",bb,b5,df,79));
HXLINE(  22)		this->options = ::Array_obj< ::Dynamic>::__new(3)->init(0,_hx_tmp8)->init(1,_hx_tmp13)->init(2, ::OptionCatagory_obj::__alloc( HX_CTX ,HX_("Misc",0c,7f,35,33),::Array_obj< ::Dynamic>::__new(5)->init(0,_hx_tmp14)->init(1,_hx_tmp15)->init(2,_hx_tmp16)->init(3,_hx_tmp17)->init(4, ::BotPlay_obj::__alloc( HX_CTX ,HX_("Showcase your charts and mods with autoplay.",86,b2,aa,76)))));
HXLINE(  20)		this->curSelected = 0;
HXLINE(  17)		super::__construct(TransIn,TransOut);
            	}

Dynamic OptionsMenu_obj::__CreateEmpty() { return new OptionsMenu_obj; }

void *OptionsMenu_obj::_hx_vtable = 0;

Dynamic OptionsMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsMenu_obj > _hx_result = new OptionsMenu_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OptionsMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x109e893d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x109e893d;
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

void OptionsMenu_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b7c1b117f8362d86_68_create)
HXLINE(  69)		 ::flixel::FlxSprite menuBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  69)		::String library = null();
HXDLIN(  69)		 ::flixel::FlxSprite menuBG1 = menuBG->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  71)		menuBG1->set_color(-1412611);
HXLINE(  72)		menuBG1->setGraphicSize(::Std_obj::_hx_int((menuBG1->get_width() * ((Float)1.1))),null());
HXLINE(  73)		menuBG1->updateHitbox();
HXLINE(  74)		menuBG1->screenCenter(null());
HXLINE(  75)		menuBG1->set_antialiasing(true);
HXLINE(  76)		this->add(menuBG1);
HXLINE(  78)		this->grpControls =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  79)		this->add(this->grpControls);
HXLINE(  81)		{
HXLINE(  81)			int _g = 0;
HXDLIN(  81)			int _g1 = this->options->length;
HXDLIN(  81)			while((_g < _g1)){
HXLINE(  81)				_g = (_g + 1);
HXDLIN(  81)				int i = (_g - 1);
HXLINE(  83)				 ::Alphabet controlLabel =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->options->__get(i).StaticCast<  ::OptionCatagory >()->getName(),true,false);
HXLINE(  84)				controlLabel->isMenuItem = true;
HXLINE(  85)				controlLabel->targetY = ( (Float)(i) );
HXLINE(  86)				this->grpControls->add(controlLabel).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE(  90)		this->currentDescription = HX_("none",b8,12,0a,49);
HXLINE(  92)		int _hx_tmp = (::flixel::FlxG_obj::height - 18);
HXDLIN(  92)		::String _hx_tmp1 = ((HX_("Offset (Left, Right): ",e9,11,cb,c4) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)))) + HX_(" - Description - ",ca,32,1d,cd));
HXDLIN(  92)		::OptionsMenu_obj::versionShit =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,_hx_tmp,0,(_hx_tmp1 + this->currentDescription),12,null());
HXLINE(  93)		::OptionsMenu_obj::versionShit->scrollFactor->set(null(),null());
HXLINE(  94)		::OptionsMenu_obj::versionShit->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  95)		this->add(::OptionsMenu_obj::versionShit);
HXLINE(  97)		this->super::create();
            	}


void OptionsMenu_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_b7c1b117f8362d86_104_update)
HXLINE( 105)		this->super::update(elapsed);
HXLINE( 107)		bool _hx_tmp;
HXDLIN( 107)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 107)			_hx_tmp = !(this->isCat);
            		}
            		else {
HXLINE( 107)			_hx_tmp = false;
            		}
HXDLIN( 107)		if (_hx_tmp) {
HXLINE( 108)			 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 108)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 108)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            		else {
HXLINE( 109)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 111)				this->isCat = false;
HXLINE( 112)				this->grpControls->clear();
HXLINE( 113)				{
HXLINE( 113)					int _g = 0;
HXDLIN( 113)					int _g1 = this->options->length;
HXDLIN( 113)					while((_g < _g1)){
HXLINE( 113)						_g = (_g + 1);
HXDLIN( 113)						int i = (_g - 1);
HXLINE( 115)						 ::Alphabet controlLabel =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->options->__get(i).StaticCast<  ::OptionCatagory >()->getName(),true,false);
HXLINE( 116)						controlLabel->isMenuItem = true;
HXLINE( 117)						controlLabel->targetY = ( (Float)(i) );
HXLINE( 118)						this->grpControls->add(controlLabel).StaticCast<  ::Alphabet >();
            					}
            				}
HXLINE( 121)				this->curSelected = 0;
            			}
            		}
HXLINE( 123)		if (::PlayerSettings_obj::player1->controls->_upP->check()) {
HXLINE( 124)			this->changeSelection(-1);
            		}
HXLINE( 125)		if (::PlayerSettings_obj::player1->controls->_downP->check()) {
HXLINE( 126)			this->changeSelection(1);
            		}
HXLINE( 128)		if (this->isCat) {
HXLINE( 130)			if (this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getAccept()) {
HXLINE( 132)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 132)				if (_this->keyManager->checkStatus(16,_this->status)) {
HXLINE( 134)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 134)					if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 135)						this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->right();
            					}
HXLINE( 136)					 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 136)					if (_this1->keyManager->checkStatus(37,_this1->status)) {
HXLINE( 137)						this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->left();
            					}
            				}
            				else {
HXLINE( 141)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 141)					if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 142)						this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->right();
            					}
HXLINE( 143)					 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 143)					if (_this1->keyManager->checkStatus(37,_this1->status)) {
HXLINE( 144)						this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->left();
            					}
            				}
            			}
            			else {
HXLINE( 150)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 150)				if (_this->keyManager->checkStatus(16,_this->status)) {
HXLINE( 152)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 152)					if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 153)						 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 153)						fh->__SetField(HX_("offset",93,97,3f,60),(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) + ((Float)0.1)),::hx::paccDynamic);
            					}
            					else {
HXLINE( 154)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 154)						if (_this->keyManager->checkStatus(37,_this->status)) {
HXLINE( 155)							 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 155)							fh->__SetField(HX_("offset",93,97,3f,60),( ::Dynamic(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) - ((Float)0.1)),::hx::paccDynamic);
            						}
            					}
            				}
            				else {
HXLINE( 157)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 157)					if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 158)						 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 158)						fh->__SetField(HX_("offset",93,97,3f,60),(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) + ((Float)0.1)),::hx::paccDynamic);
            					}
            					else {
HXLINE( 159)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 159)						if (_this->keyManager->checkStatus(37,_this->status)) {
HXLINE( 160)							 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 160)							fh->__SetField(HX_("offset",93,97,3f,60),( ::Dynamic(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) - ((Float)0.1)),::hx::paccDynamic);
            						}
            					}
            				}
HXLINE( 162)				 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 162)				::String _hx_tmp1 = ((HX_("Offset (Left, Right, Shift for slow): ",bf,2c,df,41) + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) ),2)) + HX_(" - Description - ",ca,32,1d,cd));
HXDLIN( 162)				_hx_tmp->set_text((_hx_tmp1 + this->currentDescription));
            			}
            		}
            		else {
HXLINE( 167)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 167)			if (_this->keyManager->checkStatus(16,_this->status)) {
HXLINE( 169)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 169)				if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 170)					 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 170)					fh->__SetField(HX_("offset",93,97,3f,60),(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) + ((Float)0.1)),::hx::paccDynamic);
            				}
            				else {
HXLINE( 171)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 171)					if (_this->keyManager->checkStatus(37,_this->status)) {
HXLINE( 172)						 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 172)						fh->__SetField(HX_("offset",93,97,3f,60),( ::Dynamic(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) - ((Float)0.1)),::hx::paccDynamic);
            					}
            				}
            			}
            			else {
HXLINE( 174)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 174)				if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 175)					 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 175)					fh->__SetField(HX_("offset",93,97,3f,60),(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) + ((Float)0.1)),::hx::paccDynamic);
            				}
            				else {
HXLINE( 176)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 176)					if (_this->keyManager->checkStatus(37,_this->status)) {
HXLINE( 177)						 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 177)						fh->__SetField(HX_("offset",93,97,3f,60),( ::Dynamic(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) - ((Float)0.1)),::hx::paccDynamic);
            					}
            				}
            			}
HXLINE( 179)			 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 179)			::String _hx_tmp1 = ((HX_("Offset (Left, Right, Shift for slow): ",bf,2c,df,41) + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) ),2)) + HX_(" - Description - ",ca,32,1d,cd));
HXDLIN( 179)			_hx_tmp->set_text((_hx_tmp1 + this->currentDescription));
            		}
HXLINE( 183)		if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 184)			::flixel::FlxG_obj::save->data->__SetField(HX_("offset",93,97,3f,60),0,::hx::paccDynamic);
            		}
HXLINE( 186)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 188)			if (this->isCat) {
HXLINE( 190)				if (this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->press()) {
HXLINE( 191)					this->grpControls->remove(Dynamic( this->grpControls->members->__get(this->curSelected)).StaticCast<  ::Alphabet >(),null()).StaticCast<  ::Alphabet >();
HXLINE( 192)					int ctrl = ((70 * this->curSelected) + 30);
HXDLIN( 192)					 ::Alphabet ctrl1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(ctrl) ),this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getDisplay(),true,false);
HXLINE( 193)					ctrl1->isMenuItem = true;
HXLINE( 194)					this->grpControls->add(ctrl1).StaticCast<  ::Alphabet >();
            				}
            			}
            			else {
HXLINE( 199)				this->currentSelectedCat = this->options->__get(this->curSelected).StaticCast<  ::OptionCatagory >();
HXLINE( 200)				this->isCat = true;
HXLINE( 201)				this->grpControls->clear();
HXLINE( 202)				{
HXLINE( 202)					int _g = 0;
HXDLIN( 202)					int _g1 = this->currentSelectedCat->getOptions()->length;
HXDLIN( 202)					while((_g < _g1)){
HXLINE( 202)						_g = (_g + 1);
HXDLIN( 202)						int i = (_g - 1);
HXLINE( 204)						 ::Alphabet controlLabel =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->currentSelectedCat->getOptions()->__get(i).StaticCast<  ::Option >()->getDisplay(),true,false);
HXLINE( 205)						controlLabel->isMenuItem = true;
HXLINE( 206)						controlLabel->targetY = ( (Float)(i) );
HXLINE( 207)						this->grpControls->add(controlLabel).StaticCast<  ::Alphabet >();
            					}
            				}
HXLINE( 210)				this->curSelected = 0;
            			}
            		}
HXLINE( 213)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


void OptionsMenu_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_b7c1b117f8362d86_219_changeSelection)
HXLINE( 224)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 224)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 226)		 ::OptionsMenu _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + change);
HXLINE( 228)		if ((this->curSelected < 0)) {
HXLINE( 229)			this->curSelected = (this->grpControls->length - 1);
            		}
HXLINE( 230)		if ((this->curSelected >= this->grpControls->length)) {
HXLINE( 231)			this->curSelected = 0;
            		}
HXLINE( 233)		if (this->isCat) {
HXLINE( 234)			this->currentDescription = this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getDescription();
            		}
            		else {
HXLINE( 236)			this->currentDescription = HX_("Please select a category",ab,e3,01,d1);
            		}
HXLINE( 237)		 ::flixel::text::FlxText _hx_tmp2 = ::OptionsMenu_obj::versionShit;
HXDLIN( 237)		::String _hx_tmp3 = ((HX_("Offset (Left, Right, Shift for slow): ",bf,2c,df,41) + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) ),2)) + HX_(" - Description - ",ca,32,1d,cd));
HXDLIN( 237)		_hx_tmp2->set_text((_hx_tmp3 + this->currentDescription));
HXLINE( 241)		int bullShit = 0;
HXLINE( 243)		{
HXLINE( 243)			int _g = 0;
HXDLIN( 243)			::Array< ::Dynamic> _g1 = this->grpControls->members;
HXDLIN( 243)			while((_g < _g1->length)){
HXLINE( 243)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 243)				_g = (_g + 1);
HXLINE( 245)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 246)				bullShit = (bullShit + 1);
HXLINE( 248)				item->set_alpha(((Float)0.6));
HXLINE( 251)				if ((item->targetY == 0)) {
HXLINE( 253)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsMenu_obj,changeSelection,(void))

 ::flixel::text::FlxText OptionsMenu_obj::versionShit;


::hx::ObjectPtr< OptionsMenu_obj > OptionsMenu_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< OptionsMenu_obj > __this = new OptionsMenu_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< OptionsMenu_obj > OptionsMenu_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	OptionsMenu_obj *__this = (OptionsMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsMenu_obj), true, "OptionsMenu"));
	*(void **)__this = OptionsMenu_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

OptionsMenu_obj::OptionsMenu_obj()
{
}

void OptionsMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsMenu);
	HX_MARK_MEMBER_NAME(selector,"selector");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(currentDescription,"currentDescription");
	HX_MARK_MEMBER_NAME(grpControls,"grpControls");
	HX_MARK_MEMBER_NAME(currentSelectedCat,"currentSelectedCat");
	HX_MARK_MEMBER_NAME(isCat,"isCat");
	HX_MARK_MEMBER_NAME(isSettingControl,"isSettingControl");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(selector,"selector");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(currentDescription,"currentDescription");
	HX_VISIT_MEMBER_NAME(grpControls,"grpControls");
	HX_VISIT_MEMBER_NAME(currentSelectedCat,"currentSelectedCat");
	HX_VISIT_MEMBER_NAME(isCat,"isCat");
	HX_VISIT_MEMBER_NAME(isSettingControl,"isSettingControl");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"isCat") ) { return ::hx::Val( isCat ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { return ::hx::Val( selector ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"grpControls") ) { return ::hx::Val( grpControls ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isSettingControl") ) { return ::hx::Val( isSettingControl ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentDescription") ) { return ::hx::Val( currentDescription ); }
		if (HX_FIELD_EQ(inName,"currentSelectedCat") ) { return ::hx::Val( currentSelectedCat ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OptionsMenu_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"versionShit") ) { outValue = ( versionShit ); return true; }
	}
	return false;
}

::hx::Val OptionsMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"isCat") ) { isCat=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { selector=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpControls") ) { grpControls=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isSettingControl") ) { isSettingControl=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentDescription") ) { currentDescription=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentSelectedCat") ) { currentSelectedCat=inValue.Cast<  ::OptionCatagory >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OptionsMenu_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"versionShit") ) { versionShit=ioValue.Cast<  ::flixel::text::FlxText >(); return true; }
	}
	return false;
}

void OptionsMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selector",1f,33,6d,b1));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("currentDescription",43,ed,b8,d6));
	outFields->push(HX_("grpControls",7b,bb,b2,d5));
	outFields->push(HX_("currentSelectedCat",c2,90,9e,a7));
	outFields->push(HX_("isCat",4c,9e,49,c1));
	outFields->push(HX_("isSettingControl",37,39,d8,de));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsMenu_obj,selector),HX_("selector",1f,33,6d,b1)},
	{::hx::fsInt,(int)offsetof(OptionsMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(OptionsMenu_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsString,(int)offsetof(OptionsMenu_obj,currentDescription),HX_("currentDescription",43,ed,b8,d6)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(OptionsMenu_obj,grpControls),HX_("grpControls",7b,bb,b2,d5)},
	{::hx::fsObject /*  ::OptionCatagory */ ,(int)offsetof(OptionsMenu_obj,currentSelectedCat),HX_("currentSelectedCat",c2,90,9e,a7)},
	{::hx::fsBool,(int)offsetof(OptionsMenu_obj,isCat),HX_("isCat",4c,9e,49,c1)},
	{::hx::fsBool,(int)offsetof(OptionsMenu_obj,isSettingControl),HX_("isSettingControl",37,39,d8,de)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OptionsMenu_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(void *) &OptionsMenu_obj::versionShit,HX_("versionShit",f8,4e,3b,e2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OptionsMenu_obj_sMemberFields[] = {
	HX_("selector",1f,33,6d,b1),
	HX_("curSelected",fb,eb,ab,32),
	HX_("options",5e,33,fe,df),
	HX_("currentDescription",43,ed,b8,d6),
	HX_("grpControls",7b,bb,b2,d5),
	HX_("currentSelectedCat",c2,90,9e,a7),
	HX_("create",fc,66,0f,7c),
	HX_("isCat",4c,9e,49,c1),
	HX_("update",09,86,05,87),
	HX_("isSettingControl",37,39,d8,de),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

static void OptionsMenu_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionsMenu_obj::versionShit,"versionShit");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionsMenu_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionsMenu_obj::versionShit,"versionShit");
};

#endif

::hx::Class OptionsMenu_obj::__mClass;

static ::String OptionsMenu_obj_sStaticFields[] = {
	HX_("versionShit",f8,4e,3b,e2),
	::String(null())
};

void OptionsMenu_obj::__register()
{
	OptionsMenu_obj _hx_dummy;
	OptionsMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OptionsMenu",fd,43,a3,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptionsMenu_obj::__GetStatic;
	__mClass->mSetStaticField = &OptionsMenu_obj::__SetStatic;
	__mClass->mMarkFunc = OptionsMenu_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OptionsMenu_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsMenu_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionsMenu_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

