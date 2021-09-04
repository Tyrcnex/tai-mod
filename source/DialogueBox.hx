package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.text.FlxTypeText;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.group.FlxSpriteGroup;
import flixel.input.FlxKeyManager;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;

using StringTools;

class DialogueBox extends FlxSpriteGroup
{
	var box:FlxSprite;

	var curCharacter:String = '';

	var dialogue:Alphabet;
	var dialogueList:Array<String> = [];

	// SECOND DIALOGUE FOR THE PIXEL SHIT INSTEAD???
	var swagDialogue:FlxTypeText;

	var dropText:FlxText;

	public var finishThing:Void->Void;

	var portraitLeft:FlxSprite;
	var portraitRight:FlxSprite;
	var portraitLeftTAI:FlxSprite;
	var portraitLeftTAIANNOY:FlxSprite;
	var portraitLeftTAIRAGE:FlxSprite;
	var portraitLeftTAIDEMON:FlxSprite;
	var portraitLeftTAICHEER:FlxSprite;

	var portraitRightBF:FlxSprite;
	var portraitRightGF:FlxSprite;
	var portraitRightGFOH:FlxSprite;
	var portraitRightGFANNOY:FlxSprite;

	var daPortraits:Array<FlxSprite> = [];

	var handSelect:FlxSprite;
	var bgFade:FlxSprite;

	public function new(talkingRight:Bool = true, ?dialogueList:Array<String>)
	{
		super();

		switch (PlayState.SONG.song.toLowerCase())
		{
			case 'senpai':
				FlxG.sound.playMusic(Paths.music('Lunchbox'), 0);
				FlxG.sound.music.fadeIn(1, 0, 0.8);
			case 'thorns':
				FlxG.sound.playMusic(Paths.music('LunchboxScary'), 0);
				FlxG.sound.music.fadeIn(1, 0, 0.8);
		}

		bgFade = new FlxSprite(-200, -200).makeGraphic(Std.int(FlxG.width * 1.3), Std.int(FlxG.height * 1.3), 0xFFB3DFd8);
		bgFade.scrollFactor.set();
		bgFade.alpha = 0;
		add(bgFade);

		new FlxTimer().start(0.83, function(tmr:FlxTimer)
		{
			bgFade.alpha += (1 / 5) * 0.7;
			if (bgFade.alpha > 0.7)
				bgFade.alpha = 0.7;
		}, 5);

		box = new FlxSprite(-20, 45);
		
		var hasDialog = false;
		switch (PlayState.SONG.song.toLowerCase())
		{
			case 'senpai':
				hasDialog = true;
				box.frames = Paths.getSparrowAtlas('weeb/pixelUI/dialogueBox-pixel');
				box.animation.addByPrefix('normalOpen', 'Text Box Appear', 24, false);
				box.animation.addByIndices('normal', 'Text Box Appear', [4], "", 24);
			case 'roses':
				hasDialog = true;
				FlxG.sound.play(Paths.sound('ANGRY_TEXT_BOX'));

				box.frames = Paths.getSparrowAtlas('weeb/pixelUI/dialogueBox-senpaiMad');
				box.animation.addByPrefix('normalOpen', 'SENPAI ANGRY IMPACT SPEECH', 24, false);
				box.animation.addByIndices('normal', 'SENPAI ANGRY IMPACT SPEECH', [4], "", 24);

			case 'thorns':
				hasDialog = true;
				box.frames = Paths.getSparrowAtlas('weeb/pixelUI/dialogueBox-evil');
				box.animation.addByPrefix('normalOpen', 'Spirit Textbox spawn', 24, false);
				box.animation.addByIndices('normal', 'Spirit Textbox spawn', [11], "", 24);

				var face:FlxSprite = new FlxSprite(320, 170).loadGraphic(Paths.image('weeb/spiritFaceForward'));
				face.setGraphicSize(Std.int(face.width * 6));
				add(face);

			case 'shift' | 'brave' | 'loss':
				hasDialog = true;
				box.frames = Paths.getSparrowAtlas('speech_bubble_talking');
				box.animation.addByPrefix('normalOpen', 'Speech Bubble Normal Open', 24, false);
				box.animation.addByPrefix('normal', 'speech bubble normal', 24, true);
				box.width = 230;
				box.height = 230;
				box.x = -100;
				box.y = 375;
		}

		this.dialogueList = dialogueList;
		
		if (!hasDialog)
			return;
		
		var prefix:String = "tai/dialogue/Dialog icons/";

		portraitLeft = new FlxSprite(box.x + 100, box.y + 100);
		portraitLeft.frames = Paths.getSparrowAtlas('weeb/senpaiPortrait');
		portraitLeft.animation.addByPrefix('enter', 'Senpai Portrait Enter', 24, false);
		portraitLeft.setGraphicSize(Std.int(portraitLeft.width * PlayState.daPixelZoom * 0.9));
		portraitLeft.updateHitbox();
		portraitLeft.scrollFactor.set();
		add(portraitLeft);
		portraitLeft.visible = false;

		portraitRight = new FlxSprite(0, 40);
		portraitRight.frames = Paths.getSparrowAtlas('weeb/bfPortrait');
		portraitRight.animation.addByPrefix('enter', 'Boyfriend portrait enter', 24, false);
		portraitRight.setGraphicSize(Std.int(portraitRight.width * PlayState.daPixelZoom * 0.9));
		portraitRight.updateHitbox();
		portraitRight.scrollFactor.set();
		add(portraitRight);
		portraitRight.visible = false;

			portraitLeftTAI = new FlxSprite(box.x + 200, box.y - 300).loadGraphic(Paths.image(prefix + 'taiPortrait'));
			portraitLeftTAI.updateHitbox();
			portraitLeftTAI.scrollFactor.set();
			daPortraits.push(portraitLeftTAI);
			add(portraitLeftTAI);
			portraitLeftTAI.visible = false;

			portraitLeftTAIANNOY = new FlxSprite(box.x + 200, box.y - 300).loadGraphic(Paths.image(prefix + 'taiPortraitAnnoy'));
			portraitLeftTAIANNOY.updateHitbox();
			portraitLeftTAIANNOY.scrollFactor.set();
			daPortraits.push(portraitLeftTAIANNOY);
			add(portraitLeftTAIANNOY);
			portraitLeftTAIANNOY.visible = false;

			portraitLeftTAIRAGE = new FlxSprite(box.x + 200, box.y - 300).loadGraphic(Paths.image(prefix + 'taiPortraitRage'));
			portraitLeftTAIRAGE.updateHitbox();
			portraitLeftTAIRAGE.scrollFactor.set();
			daPortraits.push(portraitLeftTAIRAGE);
			add(portraitLeftTAIRAGE);
			portraitLeftTAIRAGE.visible = false;

			portraitLeftTAICHEER = new FlxSprite(box.x + 200, box.y - 300).loadGraphic(Paths.image(prefix + 'taiPortraitRage'));
			portraitLeftTAICHEER.updateHitbox();
			portraitLeftTAICHEER.scrollFactor.set();
			daPortraits.push(portraitLeftTAICHEER);
			add(portraitLeftTAICHEER);
			portraitLeftTAICHEER.visible = false;

			portraitLeftTAIDEMON = new FlxSprite(box.x + 200, box.y - 300).loadGraphic(Paths.image(prefix + 'taiDemonPortrait'));
			portraitLeftTAIDEMON.updateHitbox();
			portraitLeftTAIDEMON.scrollFactor.set();
			daPortraits.push(portraitLeftTAIDEMON);
			add(portraitLeftTAIDEMON);
			portraitLeftTAIDEMON.visible = false;
			
			portraitRightBF = new FlxSprite(box.x + 720, box.y - 300).loadGraphic(Paths.image(prefix + 'bfCartoon'));
			portraitRightBF.updateHitbox();
			portraitRightBF.scrollFactor.set();
			daPortraits.push(portraitRightBF);
			add(portraitRightBF);
			portraitRightBF.visible = false;

			portraitRightGF = new FlxSprite(box.x + 720, box.y - 240).loadGraphic(Paths.image(prefix + 'gfPortrait'));
			portraitRightGF.updateHitbox();
			portraitRightGF.scrollFactor.set();
			daPortraits.push(portraitRightGF);
			add(portraitRightGF);
			portraitRightGF.visible = false;

			portraitRightGFOH = new FlxSprite(box.x + 720, box.y - 240).loadGraphic(Paths.image(prefix + 'gfPortraitOh'));
			portraitRightGFOH.updateHitbox();
			portraitRightGFOH.scrollFactor.set();
			daPortraits.push(portraitRightGFOH);
			add(portraitRightGFOH);
			portraitRightGFOH.visible = false;

			portraitRightGFANNOY = new FlxSprite(box.x + 720, box.y - 240).loadGraphic(Paths.image(prefix + 'gfPortraitAnnoy'));
			portraitRightGFANNOY.updateHitbox();
			portraitRightGFANNOY.scrollFactor.set();
			daPortraits.push(portraitRightGFANNOY);
			add(portraitRightGFANNOY);
			portraitRightGFANNOY.visible = false;
		
		box.animation.play('normalOpen');
		box.setGraphicSize(Std.int(box.width * PlayState.daPixelZoom * 0.9));
		box.updateHitbox();
		add(box);

		box.screenCenter(X);
		portraitLeft.screenCenter(X);

		handSelect = new FlxSprite(FlxG.width * 0.9, FlxG.height * 0.9).loadGraphic(Paths.image('weeb/pixelUI/hand_textbox'));
		add(handSelect);


		if (!talkingRight)
		{
			// box.flipX = true;
		}

		dropText = new FlxText(242, 502, Std.int(FlxG.width * 0.6), "", 32);
		dropText.font = 'Pixel Arial 11 Bold';
		dropText.color = 0xFFD89494;
		add(dropText);

		swagDialogue = new FlxTypeText(240, 500, Std.int(FlxG.width * 0.6), "", 32);
		swagDialogue.font = 'Pixel Arial 11 Bold';
		swagDialogue.color = 0xFF3F2021;
		swagDialogue.sounds = [FlxG.sound.load(Paths.sound('pixelText'), 0.6)];
		add(swagDialogue);

		dialogue = new Alphabet(0, 80, "", false, true);
		// dialogue.x = 90;
		// add(dialogue);
	}

	var dialogueOpened:Bool = false;
	var dialogueStarted:Bool = false;

	override function update(elapsed:Float)
	{
		// HARD CODING CUZ IM STUPDI
		if (PlayState.SONG.song.toLowerCase() == 'roses')
			portraitLeft.visible = false;
		if (PlayState.SONG.song.toLowerCase() == 'thorns')
		{
			portraitLeft.color = FlxColor.BLACK;
			swagDialogue.color = FlxColor.WHITE;
			dropText.color = FlxColor.BLACK;
		}

		dropText.text = swagDialogue.text;

		if (box.animation.curAnim != null)
		{
			if (box.animation.curAnim.name == 'normalOpen' && box.animation.curAnim.finished)
			{
				box.animation.play('normal');
				dialogueOpened = true;
			}
		}

		if (dialogueOpened && !dialogueStarted)
		{
			startDialogue();
			dialogueStarted = true;
		}

		if (FlxG.keys.justPressed.ANY  && dialogueStarted == true)
		{
			remove(dialogue);
				
			FlxG.sound.play(Paths.sound('clickText'), 0.8);

			if (dialogueList[1] == null && dialogueList[0] != null)
			{
				if (!isEnding)
				{
					isEnding = true;

					if (PlayState.SONG.song.toLowerCase() == 'senpai' || PlayState.SONG.song.toLowerCase() == 'thorns' || PlayState.SONG.song.toLowerCase() == 'shift' || PlayState.SONG.song.toLowerCase() == 'brave' || PlayState.SONG.song.toLowerCase() == 'loss')
						FlxG.sound.music.fadeOut(2.2, 0);

					new FlxTimer().start(0.2, function(tmr:FlxTimer)
					{
						box.alpha -= 1 / 5;
						bgFade.alpha -= 1 / 5 * 0.7;
						portraitLeft.visible = false;
						portraitRight.visible = false;
						swagDialogue.alpha -= 1 / 5;
						dropText.alpha = swagDialogue.alpha;
					}, 5);

					new FlxTimer().start(1.2, function(tmr:FlxTimer)
					{
						finishThing();
						kill();
					});
				}
			}
			else
			{
				dialogueList.remove(dialogueList[0]);
				startDialogue();
			}
		}
		
		super.update(elapsed);
	}
	
	function hidePortraits():Void
		{
			portraitLeft.visible = false;
			portraitRight.visible = false;
			for (shit in daPortraits)
			{
				shit.visible = false;
			}
		}
	

	var isEnding:Bool = false;

	function startDialogue():Void
	{
		cleanDialog();
		// var theDialog:Alphabet = new Alphabet(0, 70, dialogueList[0], false, true);
		// dialogue = theDialog;
		// add(theDialog);

		// swagDialogue.text = ;
		swagDialogue.resetText(dialogueList[0]);
		swagDialogue.start(0.04, true);

		switch (curCharacter)
		{
			case 'dad':
				hidePortraits();
				portraitLeft.visible = true;
				portraitLeft.animation.play('enter');
				box.flipX = true;
			case 'bf':
				hidePortraits();
				portraitRightBF.visible = true;
				portraitRightBF.animation.play('enter');
				box.flipX = false;
			case 'gf':
				hidePortraits();
				portraitRightGF.visible = true;
				portraitRightGF.animation.play('enter');
				box.flipX = false;
			case 'gf-annoy':
				hidePortraits();
				portraitRightGFANNOY.visible = true;
				portraitRightGFANNOY.animation.play('enter');
				box.flipX = false;
			case 'gf-oh':
				hidePortraits();
				portraitRightGFOH.visible = true;
				portraitRightGFOH.animation.play('enter');
				box.flipX = false;
			case 'tai':
				hidePortraits();
				portraitLeftTAI.visible = true;
				box.flipX = true;
			case 'tai-annoyed':
				hidePortraits();
				portraitLeftTAIANNOY.visible = true;
				box.flipX = true;
			case 'tai-rage':
				hidePortraits();
				portraitLeftTAIRAGE.visible = true;
				box.flipX = true;
			case 'tai-cheer':
				hidePortraits();
				portraitLeftTAICHEER.visible = true;
				box.flipX = true;
			case 'tai-demon':
				hidePortraits();
				portraitLeftTAIDEMON.visible = true;
				box.flipX = true;
		}
	}

	function cleanDialog():Void
	{
		var splitName:Array<String> = dialogueList[0].split(":");
		curCharacter = splitName[1];
		dialogueList[0] = dialogueList[0].substr(splitName[1].length + 2).trim();
	}
}
