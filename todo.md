1. Go to /source/StoryMenuState.hx and type in the song similar to this:

        ```haxe


            var weekData:Array<Dynamic> = [
                ['Tutorial'],
                ['Type in your Week Name Here'],
            ];
            var curDifficulty:Int = 1;

            public static var weekUnlocked:Array<Bool> = [true];

            var weekCharacters:Array<Dynamic> = [
                ['', 'bf', 'gf'],
                ['type in your character here'],
            ];

            var weekNames:Array<String> = [
                "",
                "TYPE IN YOUR WEEK NAME IN CAPITAL HERE",
            ];


        ```

2. Go to /assets/preload/data and edit characterList.txt, freeplaySonglist.txt and stageList.txt. characterList.txt and stageList.txt should be pretty straightforward, but freeplaySonglist.txt should be typed something like this:
        ```txt
            bf
            dad
            gf
            spooky
            pico
            mom
            mom-car
            bf-car
            parents-christmas
            monster-christmas
            bf-christmas
            gf-christmas
            monster
            bf-pixel
            senpai
            senpai-angry
            spirit
            your-new-character-or-characters-here
        ```

3. Go to /source/Character.hx and add a character, like so, in around line 497:

        ```haxe
            case 'character name here':
				// Character ANIMATION LOADING CODE
				tex = Paths.getSparrowAtlas('characters/Character_Name_assets');
				frames = tex;
				animation.addByPrefix('idle', 'Character idle dance', 24);
				animation.addByPrefix('singUP', 'Character Sing Note UP', 24);
				animation.addByPrefix('singRIGHT', 'Character Sing Note RIGHT', 24);
				animation.addByPrefix('singDOWN', 'Character Sing Note DOWN', 24);
				animation.addByPrefix('singLEFT', 'Character Sing Note LEFT', 24);

				addOffset('idle');
				addOffset("singUP", -6, 50);
				addOffset("singRIGHT", 0, 27);
				addOffset("singLEFT", -10, 10);
				addOffset("singDOWN", 0, -30);

				playAnim('idle');
        ```

4. Go to introText.txt and change the words. Type it in similar to this:
        ```txt
            First line--Second Line
        ```

5. Go to /source/HealthIcon.hx and add something like so:

        ```haxe
            
        ```