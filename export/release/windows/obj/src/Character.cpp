#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ae240c01d039da8e_10_new,"Character","new",0x74bf54fb,"Character.new","Character.hx",10,0xf073a2d5)
static const int _hx_array_data_e3a4bb89_2[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,
};
static const int _hx_array_data_e3a4bb89_3[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_4[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_5[] = {
	(int)0,(int)1,(int)2,(int)3,
};
static const int _hx_array_data_e3a4bb89_6[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,
};
static const int _hx_array_data_e3a4bb89_7[] = {
	(int)0,
};
static const int _hx_array_data_e3a4bb89_8[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_9[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_10[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,
};
static const int _hx_array_data_e3a4bb89_11[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_12[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_13[] = {
	(int)0,(int)1,(int)2,(int)3,
};
static const int _hx_array_data_e3a4bb89_14[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,
};
static const int _hx_array_data_e3a4bb89_15[] = {
	(int)2,
};
static const int _hx_array_data_e3a4bb89_16[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_17[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_18[] = {
	(int)0,(int)2,(int)6,
};
static const int _hx_array_data_e3a4bb89_19[] = {
	(int)8,(int)10,(int)12,(int)14,
};
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_560_update,"Character","update",0x0e18944e,"Character.update","Character.hx",560,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_596_dance,"Character","dance",0xde4da48e,"Character.dance","Character.hx",596,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_657_playAnim,"Character","playAnim",0xed2bd3aa,"Character.playAnim","Character.hx",657,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_688_addOffset,"Character","addOffset",0x6dc9376f,"Character.addOffset","Character.hx",688,0xf073a2d5)

void Character_obj::__construct(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            		 ::Dynamic isPlayer = __o_isPlayer;
            		if (::hx::IsNull(__o_isPlayer)) isPlayer = false;
            	HX_GC_STACKFRAME(&_hx_pos_ae240c01d039da8e_10_new)
HXLINE( 589)		this->danced = false;
HXLINE(  18)		this->holdTimer = ((Float)0);
HXLINE(  16)		this->curCharacter = HX_("bf",c4,55,00,00);
HXLINE(  15)		this->isPlayer = false;
HXLINE(  13)		this->debugMode = false;
HXLINE(  22)		super::__construct(x,y,null());
HXLINE(  24)		this->animOffsets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  25)		this->curCharacter = character;
HXLINE(  26)		this->isPlayer = ( (bool)(isPlayer) );
HXLINE(  28)		 ::flixel::graphics::frames::FlxAtlasFrames tex;
HXLINE(  29)		this->set_antialiasing(true);
HXLINE(  31)		::String _hx_switch_0 = this->curCharacter;
            		if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE( 270)			::String library = null();
HXDLIN( 270)			::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/BOYFRIEND",65,2c,9c,1b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 270)			 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/BOYFRIEND",65,2c,9c,1b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 271)			this->set_frames(tex1);
HXLINE( 272)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE( 273)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE( 274)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE( 275)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE( 276)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE( 277)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS",8f,08,36,ae),24,false,null(),null());
HXLINE( 278)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS",e3,ba,cf,a7),24,false,null(),null());
HXLINE( 279)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS",f2,0c,cd,25),24,false,null(),null());
HXLINE( 280)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS",a8,a0,05,a9),24,false,null(),null());
HXLINE( 281)			this->animation->addByPrefix(HX_("hey",dc,42,4f,00),HX_("BF HEY",60,1e,f8,c6),24,false,null(),null());
HXLINE( 283)			this->animation->addByPrefix(HX_("firstDeath",e4,d8,fc,14),HX_("BF dies",0f,cb,bf,64),24,false,null(),null());
HXLINE( 284)			this->animation->addByPrefix(HX_("deathLoop",b8,0b,79,2e),HX_("BF Dead Loop",04,f4,36,2f),24,true,null(),null());
HXLINE( 285)			this->animation->addByPrefix(HX_("deathConfirm",2c,44,2b,12),HX_("BF Dead confirm",80,6b,f9,23),24,false,null(),null());
HXLINE( 287)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("BF idle shaking",53,d0,da,8d),24,null(),null(),null());
HXLINE( 289)			this->addOffset(HX_("idle",14,a7,b3,45),-5,null());
HXLINE( 290)			this->addOffset(HX_("singUP",6a,52,21,b9),-29,27);
HXLINE( 291)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-38,-7);
HXLINE( 292)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),12,-6);
HXLINE( 293)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-10,-50);
HXLINE( 294)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-29,27);
HXLINE( 295)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-30,21);
HXLINE( 296)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),12,24);
HXLINE( 297)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),-11,-19);
HXLINE( 298)			this->addOffset(HX_("hey",dc,42,4f,00),7,4);
HXLINE( 299)			this->addOffset(HX_("firstDeath",e4,d8,fc,14),37,11);
HXLINE( 300)			this->addOffset(HX_("deathLoop",b8,0b,79,2e),37,5);
HXLINE( 301)			this->addOffset(HX_("deathConfirm",2c,44,2b,12),37,69);
HXLINE( 302)			this->addOffset(HX_("scared",20,78,2a,3c),-4,null());
HXLINE( 304)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 306)			this->set_flipX(true);
HXLINE( 269)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-car",cb,95,e2,07)) ){
HXLINE( 337)			::String library = null();
HXDLIN( 337)			::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/bfCar",4b,f2,0a,1e)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 337)			 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/bfCar",4b,f2,0a,1e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 338)			this->set_frames(tex1);
HXLINE( 339)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE( 340)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE( 341)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE( 342)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE( 343)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE( 344)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS",8f,08,36,ae),24,false,null(),null());
HXLINE( 345)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS",e3,ba,cf,a7),24,false,null(),null());
HXLINE( 346)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS",f2,0c,cd,25),24,false,null(),null());
HXLINE( 347)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS",a8,a0,05,a9),24,false,null(),null());
HXLINE( 349)			this->addOffset(HX_("idle",14,a7,b3,45),-5,null());
HXLINE( 350)			this->addOffset(HX_("singUP",6a,52,21,b9),-29,27);
HXLINE( 351)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-38,-7);
HXLINE( 352)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),12,-6);
HXLINE( 353)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-10,-50);
HXLINE( 354)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-29,27);
HXLINE( 355)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-30,21);
HXLINE( 356)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),12,24);
HXLINE( 357)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),-11,-19);
HXLINE( 358)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 360)			this->set_flipX(true);
HXLINE( 336)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-christmas",79,02,f4,24)) ){
HXLINE( 309)			::String library = null();
HXDLIN( 309)			::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/bfChristmas",f9,be,84,ca)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 309)			 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/bfChristmas",f9,be,84,ca)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 310)			this->set_frames(tex1);
HXLINE( 311)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE( 312)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE( 313)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE( 314)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE( 315)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE( 316)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS",8f,08,36,ae),24,false,null(),null());
HXLINE( 317)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS",e3,ba,cf,a7),24,false,null(),null());
HXLINE( 318)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS",f2,0c,cd,25),24,false,null(),null());
HXLINE( 319)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS",a8,a0,05,a9),24,false,null(),null());
HXLINE( 320)			this->animation->addByPrefix(HX_("hey",dc,42,4f,00),HX_("BF HEY",60,1e,f8,c6),24,false,null(),null());
HXLINE( 322)			this->addOffset(HX_("idle",14,a7,b3,45),-5,null());
HXLINE( 323)			this->addOffset(HX_("singUP",6a,52,21,b9),-29,27);
HXLINE( 324)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-38,-7);
HXLINE( 325)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),12,-6);
HXLINE( 326)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-10,-50);
HXLINE( 327)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-29,27);
HXLINE( 328)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-30,21);
HXLINE( 329)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),12,24);
HXLINE( 330)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),-11,-19);
HXLINE( 331)			this->addOffset(HX_("hey",dc,42,4f,00),7,4);
HXLINE( 333)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 335)			this->set_flipX(true);
HXLINE( 308)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-pixel",fd,03,90,37)) ){
HXLINE( 362)			::String library = null();
HXDLIN( 362)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/bfPixel",7d,80,e8,6d)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 362)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/bfPixel",7d,80,e8,6d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 363)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF IDLE",f0,de,ca,52),24,false,null(),null());
HXLINE( 364)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF UP NOTE",7b,9d,4e,d3),24,false,null(),null());
HXLINE( 365)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF LEFT NOTE",4f,b9,34,d9),24,false,null(),null());
HXLINE( 366)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF RIGHT NOTE",b2,df,15,96),24,false,null(),null());
HXLINE( 367)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF DOWN NOTE",14,9f,6a,da),24,false,null(),null());
HXLINE( 368)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF UP MISS",85,d8,a0,d2),24,false,null(),null());
HXLINE( 369)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF LEFT MISS",59,f4,86,d8),24,false,null(),null());
HXLINE( 370)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF RIGHT MISS",bc,1a,68,95),24,false,null(),null());
HXLINE( 371)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF DOWN MISS",1e,da,bc,d9),24,false,null(),null());
HXLINE( 373)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 374)			this->addOffset(HX_("singUP",6a,52,21,b9),null(),null());
HXLINE( 375)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),null(),null());
HXLINE( 376)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),null(),null());
HXLINE( 377)			this->addOffset(HX_("singDOWN",31,2a,ad,36),null(),null());
HXLINE( 378)			this->addOffset(HX_("singUPmiss",66,22,08,8a),null(),null());
HXLINE( 379)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),null(),null());
HXLINE( 380)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),null(),null());
HXLINE( 381)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),null(),null());
HXLINE( 383)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 384)			this->updateHitbox();
HXLINE( 386)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 388)			this->set_width((this->get_width() - ( (Float)(100) )));
HXLINE( 389)			this->set_height((this->get_height() - ( (Float)(100) )));
HXLINE( 391)			this->set_antialiasing(false);
HXLINE( 393)			this->set_flipX(true);
HXLINE( 361)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-pixel-dead",34,d0,3d,c4)) ){
HXLINE( 395)			::String library = null();
HXDLIN( 395)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/bfPixelsDEAD",fa,66,1f,36)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 395)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/bfPixelsDEAD",fa,66,1f,36)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 396)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF Dies pixel",d5,56,ac,77),24,false,null(),null());
HXLINE( 397)			this->animation->addByPrefix(HX_("firstDeath",e4,d8,fc,14),HX_("BF Dies pixel",d5,56,ac,77),24,false,null(),null());
HXLINE( 398)			this->animation->addByPrefix(HX_("deathLoop",b8,0b,79,2e),HX_("Retry Loop",5c,76,15,41),24,true,null(),null());
HXLINE( 399)			this->animation->addByPrefix(HX_("deathConfirm",2c,44,2b,12),HX_("RETRY CONFIRM",08,8c,5f,fd),24,false,null(),null());
HXLINE( 400)			this->animation->play(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE( 402)			this->addOffset(HX_("firstDeath",e4,d8,fc,14),null(),null());
HXLINE( 403)			this->addOffset(HX_("deathLoop",b8,0b,79,2e),-37,null());
HXLINE( 404)			this->addOffset(HX_("deathConfirm",2c,44,2b,12),-37,null());
HXLINE( 405)			this->playAnim(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE( 407)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 408)			this->updateHitbox();
HXLINE( 409)			this->set_antialiasing(false);
HXLINE( 410)			this->set_flipX(true);
HXLINE( 394)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("dad",47,36,4c,00)) ){
HXLINE( 127)			::String library = null();
HXDLIN( 127)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/DADDY_DEAREST",4c,60,28,2b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 127)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/DADDY_DEAREST",4c,60,28,2b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 128)			this->set_frames(tex);
HXLINE( 129)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Dad idle dance",80,2a,95,5c),24,null(),null(),null());
HXLINE( 130)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Dad Sing Note UP",91,e8,1d,0c),24,null(),null(),null());
HXLINE( 131)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Dad Sing Note RIGHT",46,eb,bc,9e),24,null(),null(),null());
HXLINE( 132)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Dad Sing Note DOWN",18,d8,98,b2),24,null(),null(),null());
HXLINE( 133)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Dad Sing Note LEFT",bd,e7,da,b7),24,null(),null(),null());
HXLINE( 135)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 136)			this->addOffset(HX_("singUP",6a,52,21,b9),-6,50);
HXLINE( 137)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),0,27);
HXLINE( 138)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-10,10);
HXLINE( 139)			this->addOffset(HX_("singDOWN",31,2a,ad,36),0,-30);
HXLINE( 141)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 125)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ){
HXLINE(  35)			::String library = null();
HXDLIN(  35)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/GF_assets",fe,40,c5,18)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  35)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/GF_assets",fe,40,c5,18)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  36)			this->set_frames(tex);
HXLINE(  37)			this->animation->addByPrefix(HX_("cheer",8d,9a,b6,45),HX_("GF Cheer",ac,b5,2b,e0),24,false,null(),null());
HXLINE(  38)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("GF left note",6a,dd,c6,b9),24,false,null(),null());
HXLINE(  39)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("GF Right Note",57,7f,86,75),24,false,null(),null());
HXLINE(  40)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("GF Up Note",d6,e4,46,60),24,false,null(),null());
HXLINE(  41)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("GF Down Note",2f,cf,a8,47),24,false,null(),null());
HXLINE(  42)			this->animation->addByIndices(HX_("sad",16,98,57,00),HX_("gf sad",95,c1,1f,ff),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_2,13),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  43)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_3,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  44)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_4,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  45)			this->animation->addByIndices(HX_("hairBlow",b4,c9,39,c9),HX_("GF Dancing Beat Hair blowing",4b,14,4a,db),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_5,4),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  46)			this->animation->addByIndices(HX_("hairFall",bd,48,d6,cb),HX_("GF Dancing Beat Hair Landing",52,45,8f,42),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_6,12),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  47)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("GF FEAR",91,45,bb,20),24,null(),null(),null());
HXLINE(  49)			this->addOffset(HX_("cheer",8d,9a,b6,45),null(),null());
HXLINE(  50)			this->addOffset(HX_("sad",16,98,57,00),-2,-2);
HXLINE(  51)			this->addOffset(HX_("danceLeft",da,cc,f9,df),0,-9);
HXLINE(  52)			this->addOffset(HX_("danceRight",a9,7f,a6,91),0,-9);
HXLINE(  54)			this->addOffset(HX_("singUP",6a,52,21,b9),0,4);
HXLINE(  55)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),0,-20);
HXLINE(  56)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),0,-19);
HXLINE(  57)			this->addOffset(HX_("singDOWN",31,2a,ad,36),0,-20);
HXLINE(  58)			this->addOffset(HX_("hairBlow",b4,c9,39,c9),45,-8);
HXLINE(  59)			this->addOffset(HX_("hairFall",bd,48,d6,cb),0,-9);
HXLINE(  61)			this->addOffset(HX_("scared",20,78,2a,3c),-2,-17);
HXLINE(  63)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE(  33)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf-car",a6,63,ab,07)) ){
HXLINE(  97)			::String library = null();
HXDLIN(  97)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/gfCar",d0,d8,0b,ff)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  97)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/gfCar",d0,d8,0b,ff)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  98)			this->set_frames(tex);
HXLINE(  99)			this->animation->addByIndices(HX_("singUP",6a,52,21,b9),HX_("GF Dancing Beat Hair blowing CAR",9f,79,4b,90),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_7,1),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 100)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF Dancing Beat Hair blowing CAR",9f,79,4b,90),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_8,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 101)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF Dancing Beat Hair blowing CAR",9f,79,4b,90),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_9,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 104)			this->addOffset(HX_("danceLeft",da,cc,f9,df),0,null());
HXLINE( 105)			this->addOffset(HX_("danceRight",a9,7f,a6,91),0,null());
HXLINE( 107)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE(  96)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf-christmas",94,26,b1,6d)) ){
HXLINE(  66)			::String library = null();
HXDLIN(  66)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/gfChristmas",3e,d7,dc,4e)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  66)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/gfChristmas",3e,d7,dc,4e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  67)			this->set_frames(tex);
HXLINE(  68)			this->animation->addByPrefix(HX_("cheer",8d,9a,b6,45),HX_("GF Cheer",ac,b5,2b,e0),24,false,null(),null());
HXLINE(  69)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("GF left note",6a,dd,c6,b9),24,false,null(),null());
HXLINE(  70)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("GF Right Note",57,7f,86,75),24,false,null(),null());
HXLINE(  71)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("GF Up Note",d6,e4,46,60),24,false,null(),null());
HXLINE(  72)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("GF Down Note",2f,cf,a8,47),24,false,null(),null());
HXLINE(  73)			this->animation->addByIndices(HX_("sad",16,98,57,00),HX_("gf sad",95,c1,1f,ff),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_10,13),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  74)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_11,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  75)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_12,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  76)			this->animation->addByIndices(HX_("hairBlow",b4,c9,39,c9),HX_("GF Dancing Beat Hair blowing",4b,14,4a,db),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_13,4),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  77)			this->animation->addByIndices(HX_("hairFall",bd,48,d6,cb),HX_("GF Dancing Beat Hair Landing",52,45,8f,42),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_14,12),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  78)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("GF FEAR",91,45,bb,20),24,null(),null(),null());
HXLINE(  80)			this->addOffset(HX_("cheer",8d,9a,b6,45),null(),null());
HXLINE(  81)			this->addOffset(HX_("sad",16,98,57,00),-2,-2);
HXLINE(  82)			this->addOffset(HX_("danceLeft",da,cc,f9,df),0,-9);
HXLINE(  83)			this->addOffset(HX_("danceRight",a9,7f,a6,91),0,-9);
HXLINE(  85)			this->addOffset(HX_("singUP",6a,52,21,b9),0,4);
HXLINE(  86)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),0,-20);
HXLINE(  87)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),0,-19);
HXLINE(  88)			this->addOffset(HX_("singDOWN",31,2a,ad,36),0,-20);
HXLINE(  89)			this->addOffset(HX_("hairBlow",b4,c9,39,c9),45,-8);
HXLINE(  90)			this->addOffset(HX_("hairFall",bd,48,d6,cb),0,-9);
HXLINE(  92)			this->addOffset(HX_("scared",20,78,2a,3c),-2,-17);
HXLINE(  94)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE(  65)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf-pixel",98,3e,8c,55)) ){
HXLINE( 110)			::String library = null();
HXDLIN( 110)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/gfPixel",42,d2,d3,3d)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 110)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/gfPixel",42,d2,d3,3d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 111)			this->set_frames(tex);
HXLINE( 112)			this->animation->addByIndices(HX_("singUP",6a,52,21,b9),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_15,1),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 113)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_16,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 114)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_17,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 116)			this->addOffset(HX_("danceLeft",da,cc,f9,df),0,null());
HXLINE( 117)			this->addOffset(HX_("danceRight",a9,7f,a6,91),0,null());
HXLINE( 119)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE( 121)			Float _hx_tmp = this->get_width();
HXDLIN( 121)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::PlayState_obj::daPixelZoom)),null());
HXLINE( 122)			this->updateHitbox();
HXLINE( 123)			this->set_antialiasing(false);
HXLINE( 109)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mom",cb,16,53,00)) ){
HXLINE( 162)			::String library = null();
HXDLIN( 162)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/Mom_Assets",7c,1f,31,b7)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 162)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/Mom_Assets",7c,1f,31,b7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 163)			this->set_frames(tex);
HXLINE( 165)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Mom Idle",c9,88,40,6e),24,false,null(),null());
HXLINE( 166)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Mom Up Pose",c1,4d,e9,52),24,false,null(),null());
HXLINE( 167)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("MOM DOWN POSE",1a,4b,70,b3),24,false,null(),null());
HXLINE( 168)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Mom Left Pose",55,8d,76,2a),24,false,null(),null());
HXLINE( 171)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Mom Pose Left",81,c8,c4,cc),24,false,null(),null());
HXLINE( 173)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 174)			this->addOffset(HX_("singUP",6a,52,21,b9),14,71);
HXLINE( 175)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),10,-60);
HXLINE( 176)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),250,-23);
HXLINE( 177)			this->addOffset(HX_("singDOWN",31,2a,ad,36),20,-160);
HXLINE( 179)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 161)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mom-car",52,e6,f7,f6)) ){
HXLINE( 182)			::String library = null();
HXDLIN( 182)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/momCar",0e,64,bd,db)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 182)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/momCar",0e,64,bd,db)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 183)			this->set_frames(tex);
HXLINE( 185)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Mom Idle",c9,88,40,6e),24,false,null(),null());
HXLINE( 186)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Mom Up Pose",c1,4d,e9,52),24,false,null(),null());
HXLINE( 187)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("MOM DOWN POSE",1a,4b,70,b3),24,false,null(),null());
HXLINE( 188)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Mom Left Pose",55,8d,76,2a),24,false,null(),null());
HXLINE( 191)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Mom Pose Left",81,c8,c4,cc),24,false,null(),null());
HXLINE( 193)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 194)			this->addOffset(HX_("singUP",6a,52,21,b9),14,71);
HXLINE( 195)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),10,-60);
HXLINE( 196)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),250,-23);
HXLINE( 197)			this->addOffset(HX_("singDOWN",31,2a,ad,36),20,-160);
HXLINE( 199)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 181)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("monster",1a,54,b0,b8)) ){
HXLINE( 201)			::String library = null();
HXDLIN( 201)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/Monster_Assets",8d,70,88,43)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 201)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/Monster_Assets",8d,70,88,43)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 202)			this->set_frames(tex);
HXLINE( 203)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("monster idle",da,c4,6c,db),24,false,null(),null());
HXLINE( 204)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("monster up note",d1,99,1b,31),24,false,null(),null());
HXLINE( 205)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("monster down",28,16,27,d8),24,false,null(),null());
HXLINE( 206)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Monster left note",05,1b,dc,68),24,false,null(),null());
HXLINE( 207)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Monster Right note",3c,fd,2d,0e),24,false,null(),null());
HXLINE( 209)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 210)			this->addOffset(HX_("singUP",6a,52,21,b9),-20,50);
HXLINE( 211)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-51,null());
HXLINE( 212)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-30,null());
HXLINE( 213)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-30,-40);
HXLINE( 214)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 200)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("monster-christmas",4f,88,85,27)) ){
HXLINE( 216)			::String library = null();
HXDLIN( 216)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/monsterChristmas",4d,4c,ad,fb)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 216)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/monsterChristmas",4d,4c,ad,fb)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 217)			this->set_frames(tex);
HXLINE( 218)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("monster idle",da,c4,6c,db),24,false,null(),null());
HXLINE( 219)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("monster up note",d1,99,1b,31),24,false,null(),null());
HXLINE( 220)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("monster down",28,16,27,d8),24,false,null(),null());
HXLINE( 221)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Monster left note",05,1b,dc,68),24,false,null(),null());
HXLINE( 222)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Monster Right note",3c,fd,2d,0e),24,false,null(),null());
HXLINE( 224)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 225)			this->addOffset(HX_("singUP",6a,52,21,b9),-20,50);
HXLINE( 226)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-51,null());
HXLINE( 227)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-30,null());
HXLINE( 228)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-40,-94);
HXLINE( 229)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 215)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("parents-christmas",fe,94,c5,32)) ){
HXLINE( 474)			::String library = null();
HXDLIN( 474)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/mom_dad_christmas_assets",91,39,44,07)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 474)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/mom_dad_christmas_assets",91,39,44,07)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 475)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Parent Christmas Idle",c8,04,64,10),24,false,null(),null());
HXLINE( 476)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Parent Up Note Dad",88,99,f7,ad),24,false,null(),null());
HXLINE( 477)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Parent Down Note Dad",21,a5,93,34),24,false,null(),null());
HXLINE( 478)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Parent Left Note Dad",dc,f8,16,c4),24,false,null(),null());
HXLINE( 479)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Parent Right Note Dad",13,46,28,52),24,false,null(),null());
HXLINE( 481)			this->animation->addByPrefix(HX_("singUP-alt",86,62,b4,5f),HX_("Parent Up Note Mom",0c,7a,fe,ad),24,false,null(),null());
HXLINE( 483)			this->animation->addByPrefix(HX_("singDOWN-alt",cd,29,35,ba),HX_("Parent Down Note Mom",a5,85,9a,34),24,false,null(),null());
HXLINE( 484)			this->animation->addByPrefix(HX_("singLEFT-alt",f2,6f,48,8c),HX_("Parent Left Note Mom",60,d9,1d,c4),24,false,null(),null());
HXLINE( 485)			this->animation->addByPrefix(HX_("singRIGHT-alt",a9,0c,12,b9),HX_("Parent Right Note Mom",97,26,2f,52),24,false,null(),null());
HXLINE( 487)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 488)			this->addOffset(HX_("singUP",6a,52,21,b9),-47,24);
HXLINE( 489)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-1,-23);
HXLINE( 490)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-30,16);
HXLINE( 491)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-31,-29);
HXLINE( 492)			this->addOffset(HX_("singUP-alt",86,62,b4,5f),-47,24);
HXLINE( 493)			this->addOffset(HX_("singRIGHT-alt",a9,0c,12,b9),-1,-24);
HXLINE( 494)			this->addOffset(HX_("singLEFT-alt",f2,6f,48,8c),-30,15);
HXLINE( 495)			this->addOffset(HX_("singDOWN-alt",cd,29,35,ba),-30,-27);
HXLINE( 497)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 473)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("pico",e5,e8,57,4a)) ){
HXLINE( 231)			::String library = null();
HXDLIN( 231)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/Pico_FNF_assetss",da,a0,90,17)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 231)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/Pico_FNF_assetss",da,a0,90,17)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 232)			this->set_frames(tex);
HXLINE( 233)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Pico Idle Dance",62,48,dd,f6),24,null(),null(),null());
HXLINE( 234)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("pico Up note0",34,b3,8f,aa),24,false,null(),null());
HXLINE( 235)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Pico Down Note0",fb,e0,7b,fc),24,false,null(),null());
HXLINE( 236)			if (( (bool)(isPlayer) )) {
HXLINE( 238)				this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Pico NOTE LEFT0",d6,ba,ae,63),24,false,null(),null());
HXLINE( 239)				this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Pico Note Right0",a7,9f,6f,99),24,false,null(),null());
HXLINE( 240)				this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("Pico Note Right Miss",33,36,e2,57),24,false,null(),null());
HXLINE( 241)				this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("Pico NOTE LEFT miss",c2,e8,46,a4),24,false,null(),null());
            			}
            			else {
HXLINE( 246)				this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Pico Note Right0",a7,9f,6f,99),24,false,null(),null());
HXLINE( 247)				this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Pico NOTE LEFT0",d6,ba,ae,63),24,false,null(),null());
HXLINE( 248)				this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("Pico NOTE LEFT miss",c2,e8,46,a4),24,false,null(),null());
HXLINE( 249)				this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("Pico Note Right Miss",33,36,e2,57),24,false,null(),null());
            			}
HXLINE( 252)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("pico Up note miss",20,68,ae,5a),24,null(),null(),null());
HXLINE( 253)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("Pico Down Note MISS",67,4d,33,9a),24,null(),null(),null());
HXLINE( 255)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 256)			this->addOffset(HX_("singUP",6a,52,21,b9),-29,27);
HXLINE( 257)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-68,-7);
HXLINE( 258)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),65,9);
HXLINE( 259)			this->addOffset(HX_("singDOWN",31,2a,ad,36),200,-70);
HXLINE( 260)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-19,67);
HXLINE( 261)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-60,41);
HXLINE( 262)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),62,64);
HXLINE( 263)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),210,-28);
HXLINE( 265)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 267)			this->set_flipX(true);
HXLINE( 230)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE( 413)			::String library = null();
HXDLIN( 413)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/senpai",41,1d,ab,80)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 413)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/senpai",41,1d,ab,80)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 414)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Senpai Idle",78,62,c5,a9),24,false,null(),null());
HXLINE( 415)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("SENPAI UP NOTE",f3,26,c1,c4),24,false,null(),null());
HXLINE( 416)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("SENPAI LEFT NOTE",c7,90,76,f3),24,false,null(),null());
HXLINE( 417)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("SENPAI RIGHT NOTE",3a,91,70,75),24,false,null(),null());
HXLINE( 418)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("SENPAI DOWN NOTE",8c,76,ac,f4),24,false,null(),null());
HXLINE( 420)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 421)			this->addOffset(HX_("singUP",6a,52,21,b9),5,37);
HXLINE( 422)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),null(),null());
HXLINE( 423)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),40,null());
HXLINE( 424)			this->addOffset(HX_("singDOWN",31,2a,ad,36),14,null());
HXLINE( 426)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 428)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 429)			this->updateHitbox();
HXLINE( 431)			this->set_antialiasing(false);
HXLINE( 412)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("senpai-angry",10,7a,b8,25)) ){
HXLINE( 433)			::String library = null();
HXDLIN( 433)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/senpai",41,1d,ab,80)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 433)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/senpai",41,1d,ab,80)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 434)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Angry Senpai Idle",d9,cc,b4,52),24,false,null(),null());
HXLINE( 435)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Angry Senpai UP NOTE",52,97,34,df),24,false,null(),null());
HXLINE( 436)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Angry Senpai LEFT NOTE",e6,16,ee,25),24,false,null(),null());
HXLINE( 437)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Angry Senpai RIGHT NOTE",3b,66,8e,6b),24,false,null(),null());
HXLINE( 438)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Angry Senpai DOWN NOTE",ab,fc,23,27),24,false,null(),null());
HXLINE( 440)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 441)			this->addOffset(HX_("singUP",6a,52,21,b9),5,37);
HXLINE( 442)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),null(),null());
HXLINE( 443)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),40,null());
HXLINE( 444)			this->addOffset(HX_("singDOWN",31,2a,ad,36),14,null());
HXLINE( 445)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 447)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 448)			this->updateHitbox();
HXLINE( 450)			this->set_antialiasing(false);
HXLINE( 432)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("spirit",31,bb,a9,bd)) ){
HXLINE( 453)			::String library = null();
HXDLIN( 453)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/spirit",36,f9,c6,d2)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 453)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/spirit",36,f9,c6,d2)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 454)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("idle spirit_",02,2f,37,04),24,false,null(),null());
HXLINE( 455)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("up_",a4,29,59,00),24,false,null(),null());
HXLINE( 456)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("right_",03,55,26,4e),24,false,null(),null());
HXLINE( 457)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("left_",78,fe,56,72),24,false,null(),null());
HXLINE( 458)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("spirit down_",8e,9f,fa,ae),24,false,null(),null());
HXLINE( 460)			this->addOffset(HX_("idle",14,a7,b3,45),-220,-280);
HXLINE( 461)			this->addOffset(HX_("singUP",6a,52,21,b9),-220,-240);
HXLINE( 462)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-220,-280);
HXLINE( 463)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-200,-280);
HXLINE( 464)			this->addOffset(HX_("singDOWN",31,2a,ad,36),170,110);
HXLINE( 466)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 467)			this->updateHitbox();
HXLINE( 469)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 471)			this->set_antialiasing(false);
HXLINE( 452)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("spooky",eb,bd,9e,c1)) ){
HXLINE( 143)			::String library = null();
HXDLIN( 143)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/spooky_kids_assets",06,73,ba,96)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 143)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/spooky_kids_assets",06,73,ba,96)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 144)			this->set_frames(tex);
HXLINE( 145)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("spooky UP NOTE",a2,20,d8,ff),24,false,null(),null());
HXLINE( 146)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("spooky DOWN note",fb,b1,f7,73),24,false,null(),null());
HXLINE( 147)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("note sing left",ca,f9,5d,8a),24,false,null(),null());
HXLINE( 148)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("spooky sing right",60,bf,ae,3b),24,false,null(),null());
HXLINE( 149)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("spooky dance idle",36,a7,32,19),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_18,3),HX_("",00,00,00,00),12,false,null(),null());
HXLINE( 150)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("spooky dance idle",36,a7,32,19),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_19,4),HX_("",00,00,00,00),12,false,null(),null());
HXLINE( 152)			this->addOffset(HX_("danceLeft",da,cc,f9,df),null(),null());
HXLINE( 153)			this->addOffset(HX_("danceRight",a9,7f,a6,91),null(),null());
HXLINE( 155)			this->addOffset(HX_("singUP",6a,52,21,b9),-20,26);
HXLINE( 156)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-130,-14);
HXLINE( 157)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),130,-10);
HXLINE( 158)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-50,-130);
HXLINE( 160)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE( 142)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("tai",5c,5a,58,00)) ){
HXLINE( 499)			::String library = null();
HXDLIN( 499)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/TAI_ASSETS",eb,b3,af,84)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 499)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/TAI_ASSETS",eb,b3,af,84)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 500)			this->set_frames(tex);
HXLINE( 501)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Idle",34,d3,8c,30),24,null(),null(),null());
HXLINE( 502)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Sing Up",8c,bf,2f,11),24,null(),null(),null());
HXLINE( 503)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Sing Right",4b,c7,f5,73),24,null(),null(),null());
HXLINE( 504)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Sing Down",d3,bf,0a,81),24,null(),null(),null());
HXLINE( 505)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Sing Left",78,cf,4c,86),24,null(),null(),null());
HXLINE( 508)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 509)			this->addOffset(HX_("singUP",6a,52,21,b9),-6,50);
HXLINE( 510)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),0,27);
HXLINE( 511)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-10,10);
HXLINE( 512)			this->addOffset(HX_("singDOWN",31,2a,ad,36),0,-30);
HXLINE( 514)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 498)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("tai-demon",fa,69,05,25)) ){
HXLINE( 516)			::String library = null();
HXDLIN( 516)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/TAI_DEMON",63,03,2d,23)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 516)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/TAI_DEMON",63,03,2d,23)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 517)			this->set_frames(tex);
HXLINE( 518)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Idle",34,d3,8c,30),24,null(),null(),null());
HXLINE( 519)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Sing Up",8c,bf,2f,11),24,null(),null(),null());
HXLINE( 520)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Sing Right",4b,c7,f5,73),24,null(),null(),null());
HXLINE( 521)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Sing Down",d3,bf,0a,81),24,null(),null(),null());
HXLINE( 522)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Sing Left",78,cf,4c,86),24,null(),null(),null());
HXLINE( 525)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 526)			this->addOffset(HX_("singUP",6a,52,21,b9),-6,50);
HXLINE( 527)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),0,27);
HXLINE( 528)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-10,10);
HXLINE( 529)			this->addOffset(HX_("singDOWN",31,2a,ad,36),0,-30);
HXLINE( 531)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 515)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE( 534)		this->dance();
HXLINE( 536)		if (( (bool)(isPlayer) )) {
HXLINE( 538)			this->set_flipX(!(this->flipX));
HXLINE( 541)			if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("bf",c4,55,00,00)))) {
HXLINE( 544)				::Array< int > oldRight = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHT",0d,6f,70,ac))) )->frames;
HXLINE( 545)				( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHT",0d,6f,70,ac))) )->frames = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFT",d6,39,ef,3b))) )->frames;
HXLINE( 546)				( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFT",d6,39,ef,3b))) )->frames = oldRight;
HXLINE( 549)				if (::hx::IsNotNull( this->animation->_animations->get(HX_("singRIGHTmiss",89,cc,65,e3)) )) {
HXLINE( 551)					::Array< int > oldMiss = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHTmiss",89,cc,65,e3))) )->frames;
HXLINE( 552)					( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHTmiss",89,cc,65,e3))) )->frames = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFTmiss",d2,2f,9c,b6))) )->frames;
HXLINE( 553)					( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFTmiss",d2,2f,9c,b6))) )->frames = oldMiss;
            				}
            			}
            		}
            	}

Dynamic Character_obj::__CreateEmpty() { return new Character_obj; }

void *Character_obj::_hx_vtable = 0;

Dynamic Character_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Character_obj > _hx_result = new Character_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Character_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x55af02e5) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x55af02e5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Character_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_560_update)
HXLINE( 561)		if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("bf",c4,55,00,00)))) {
HXLINE( 563)			if (::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("sing",4f,96,53,4c))) {
HXLINE( 565)				 ::Character _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 565)				_hx_tmp->holdTimer = (_hx_tmp->holdTimer + elapsed);
            			}
HXLINE( 568)			Float dadVar = ( (Float)(4) );
HXLINE( 570)			if ((this->curCharacter == HX_("dad",47,36,4c,00))) {
HXLINE( 571)				dadVar = ((Float)6.1);
            			}
HXLINE( 572)			if ((this->holdTimer >= ((::Conductor_obj::stepCrochet * dadVar) * ((Float)0.001)))) {
HXLINE( 574)				this->dance();
HXLINE( 575)				this->holdTimer = ( (Float)(0) );
            			}
            		}
HXLINE( 579)		if ((this->curCharacter == HX_("gf",1f,5a,00,00))) {
HXLINE( 582)			bool _hx_tmp;
HXDLIN( 582)			if ((this->animation->_curAnim->name == HX_("hairFall",bd,48,d6,cb))) {
HXLINE( 582)				_hx_tmp = this->animation->_curAnim->finished;
            			}
            			else {
HXLINE( 582)				_hx_tmp = false;
            			}
HXDLIN( 582)			if (_hx_tmp) {
HXLINE( 583)				this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            			}
            		}
HXLINE( 586)		this->super::update(elapsed);
            	}


void Character_obj::dance(){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_596_dance)
HXDLIN( 596)		if (!(this->debugMode)) {
HXLINE( 598)			::String _hx_switch_0 = this->curCharacter;
            			if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ){
HXLINE( 601)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("hair",22,27,08,45)))) {
HXLINE( 603)					this->danced = !(this->danced);
HXLINE( 605)					if (this->danced) {
HXLINE( 606)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 608)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
HXLINE( 601)				goto _hx_goto_21;
            			}
            			if (  (_hx_switch_0==HX_("gf-car",a6,63,ab,07)) ){
HXLINE( 623)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("hair",22,27,08,45)))) {
HXLINE( 625)					this->danced = !(this->danced);
HXLINE( 627)					if (this->danced) {
HXLINE( 628)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 630)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
HXLINE( 623)				goto _hx_goto_21;
            			}
            			if (  (_hx_switch_0==HX_("gf-christmas",94,26,b1,6d)) ){
HXLINE( 612)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("hair",22,27,08,45)))) {
HXLINE( 614)					this->danced = !(this->danced);
HXLINE( 616)					if (this->danced) {
HXLINE( 617)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 619)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
HXLINE( 612)				goto _hx_goto_21;
            			}
            			if (  (_hx_switch_0==HX_("gf-pixel",98,3e,8c,55)) ){
HXLINE( 633)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("hair",22,27,08,45)))) {
HXLINE( 635)					this->danced = !(this->danced);
HXLINE( 637)					if (this->danced) {
HXLINE( 638)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 640)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
HXLINE( 633)				goto _hx_goto_21;
            			}
            			if (  (_hx_switch_0==HX_("spooky",eb,bd,9e,c1)) ){
HXLINE( 644)				this->danced = !(this->danced);
HXLINE( 646)				if (this->danced) {
HXLINE( 647)					this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            				}
            				else {
HXLINE( 649)					this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            				}
HXLINE( 643)				goto _hx_goto_21;
            			}
            			/* default */{
HXLINE( 651)				this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
            			_hx_goto_21:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,dance,(void))

void Character_obj::playAnim(::String AnimName,::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Reversed,::hx::Null< int >  __o_Frame){
            		bool Force = __o_Force.Default(false);
            		bool Reversed = __o_Reversed.Default(false);
            		int Frame = __o_Frame.Default(0);
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_657_playAnim)
HXLINE( 658)		this->animation->play(AnimName,Force,Reversed,Frame);
HXLINE( 660)		::cpp::VirtualArray daOffset = ( (::cpp::VirtualArray)(this->animOffsets->get(AnimName)) );
HXLINE( 661)		if (this->animOffsets->exists(AnimName)) {
HXLINE( 663)			this->offset->set(daOffset->__get(0),daOffset->__get(1));
            		}
            		else {
HXLINE( 666)			this->offset->set(0,0);
            		}
HXLINE( 668)		if ((this->curCharacter == HX_("gf",1f,5a,00,00))) {
HXLINE( 670)			if ((AnimName == HX_("singLEFT",d6,39,ef,3b))) {
HXLINE( 672)				this->danced = true;
            			}
            			else {
HXLINE( 674)				if ((AnimName == HX_("singRIGHT",0d,6f,70,ac))) {
HXLINE( 676)					this->danced = false;
            				}
            			}
HXLINE( 679)			bool _hx_tmp;
HXDLIN( 679)			if ((AnimName != HX_("singUP",6a,52,21,b9))) {
HXLINE( 679)				_hx_tmp = (AnimName == HX_("singDOWN",31,2a,ad,36));
            			}
            			else {
HXLINE( 679)				_hx_tmp = true;
            			}
HXDLIN( 679)			if (_hx_tmp) {
HXLINE( 681)				this->danced = !(this->danced);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Character_obj,playAnim,(void))

void Character_obj::addOffset(::String name,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_688_addOffset)
HXDLIN( 688)		::cpp::VirtualArray v = ::Array_obj< Float >::__new(2)->init(0,x)->init(1,y);
HXDLIN( 688)		this->animOffsets->set(name,v);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Character_obj,addOffset,(void))


::hx::ObjectPtr< Character_obj > Character_obj::__new(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	::hx::ObjectPtr< Character_obj > __this = new Character_obj();
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

::hx::ObjectPtr< Character_obj > Character_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	Character_obj *__this = (Character_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Character_obj), true, "Character"));
	*(void **)__this = Character_obj::_hx_vtable;
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

Character_obj::Character_obj()
{
}

void Character_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Character);
	HX_MARK_MEMBER_NAME(animOffsets,"animOffsets");
	HX_MARK_MEMBER_NAME(debugMode,"debugMode");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(holdTimer,"holdTimer");
	HX_MARK_MEMBER_NAME(danced,"danced");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Character_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animOffsets,"animOffsets");
	HX_VISIT_MEMBER_NAME(debugMode,"debugMode");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(holdTimer,"holdTimer");
	HX_VISIT_MEMBER_NAME(danced,"danced");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Character_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dance") ) { return ::hx::Val( dance_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"danced") ) { return ::hx::Val( danced ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { return ::hx::Val( debugMode ); }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { return ::hx::Val( holdTimer ); }
		if (HX_FIELD_EQ(inName,"addOffset") ) { return ::hx::Val( addOffset_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { return ::hx::Val( animOffsets ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Character_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"danced") ) { danced=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { debugMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { holdTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { animOffsets=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Character_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animOffsets",6f,ff,7a,f8));
	outFields->push(HX_("debugMode",56,77,ac,2b));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("holdTimer",06,82,13,a9));
	outFields->push(HX_("danced",d1,49,8f,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Character_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Character_obj,animOffsets),HX_("animOffsets",6f,ff,7a,f8)},
	{::hx::fsBool,(int)offsetof(Character_obj,debugMode),HX_("debugMode",56,77,ac,2b)},
	{::hx::fsBool,(int)offsetof(Character_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsString,(int)offsetof(Character_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsFloat,(int)offsetof(Character_obj,holdTimer),HX_("holdTimer",06,82,13,a9)},
	{::hx::fsBool,(int)offsetof(Character_obj,danced),HX_("danced",d1,49,8f,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Character_obj_sStaticStorageInfo = 0;
#endif

static ::String Character_obj_sMemberFields[] = {
	HX_("animOffsets",6f,ff,7a,f8),
	HX_("debugMode",56,77,ac,2b),
	HX_("isPlayer",eb,86,22,90),
	HX_("curCharacter",09,86,7c,d7),
	HX_("holdTimer",06,82,13,a9),
	HX_("update",09,86,05,87),
	HX_("danced",d1,49,8f,1e),
	HX_("dance",33,83,83,d4),
	HX_("playAnim",25,ea,84,30),
	HX_("addOffset",94,cc,63,18),
	::String(null()) };

::hx::Class Character_obj::__mClass;

void Character_obj::__register()
{
	Character_obj _hx_dummy;
	Character_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Character",89,bb,a4,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Character_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Character_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Character_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Character_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

