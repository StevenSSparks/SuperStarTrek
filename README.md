# Super Star Trek
Classic 1970's Star Trek Game in Modern VS2019 Project

## When 
* Released: 09/21/1978
* Fixes: 2002 to 2015
* Visual Studio Setup: 06/08/2021

## Who
* Developers and History: https://en.wikipedia.org/wiki/Star_Trek_(1971_video_game)#Super_Star_Trek
* Fixes 2002 to 2019: Tom Almy
* VS2019: Steve Sparks

## Why
I was in an architecture meeting virtually with co-workers talking about old games, and somebody mentioned the classic Text Star Trek Game. After some searching the site above with discovered. I also found the same in a dox box web emulator. Those web things are cool, but I like something more rustic.

## What
I did not want too rustic because I wanted to customize the game a little using a more modern development tool. The game has a great source base, but you need to tweak the Visual Studio 2019 setup to get the project to build and run. 

## How
I installed the needed C/C++ tools for VS2019. You need
* Desktop Development with C++
* Optional – Universal Windows Platform Development 
I then:
* Created an Empty Project called “SuperStarTrek” and then copied the files from the source into the project ../SuperStarTrek folder. 
* I then added all the files using the right click Add menu
* Put the sst.h file in the headers folder
* Removed some older build details and an outdated makefile
* I moved the documentation to a resource folder 
* Next, I needed to adjust the project properties to stop choking on the older by setting the Following project level properties
  * Properties -> Configuation Properties -> Advanced -> Diable Specific Warnings: 4996
  * Properties -> Configration Proporties -> C/C++ - > Preprocessor Definitions: WINDOWS;%(PreprocessorDefinitions)
  * Properties -> Configuation Properties = Linker -> System -> SubSystem: Console (/SUBSYSTEM:CONSOLE)

###### README FOR SST BY TOM ALMY ######

The Classic Super Star Trek Game

Super Star Trek is quite possibly the best of the "Star Trek" games from the 1970's. Of course, it does not make use of graphics, or even assume a video display, but it still an interesting game to play, particularly for those of us who don't have the reflexes we used to and prefer a more cerebral computer game.

Of course, Star Trek and it's characters are trademarks of Paramount Studios, Inc. And just like the original game, written by Star Trek fans who were also the, back then, rare breed of computer geek, isn't used with permission but with admiration of the show.

This game was written by David Matuszek and Paul Reynolds, with modifications by Don Smith. I've received further information that the black holes, Tholian web, Super Commander, and Emeritus mode were added by Marc Newman. I resurrected the game, rewrote it in C, and fixed many bugs.

In June 2002, I fixed two known bugs and a documentation typo, and created a new Linux version. In June 2004 I fixed a number of bugs involving: 1) parsing invalid numbers, 2) manual phasers when SR scan is damaged and commander is present, 3) time warping into the future, 4) hang when moving klingons in crowded quadrants.

In December 2010, I fixed bugs involving attempting to fire more than 3 torpedoes at once, a typo ("READ ALERT"), and a couple of buffer overflow issues.

In October 2013 I fixed a bug that caused the number of remaining Klingons to be negative when the remaining Klingons and the Enterprise are destroyed in a Super Nova. Typos pointed out by users have been corrected. I added the ability to get the current score (why was that never possible?), and have an optional fix that rotates the scan displays so that the X axis is horizontal. Yes, for some reason the authors of SST had the displays rotated 90 degrees clockwise. Just add -f as the first command line argument. Fixed instance where total casualties would decrease when casualties occur.

In December 2013 I added three new commands -- CLOAK to cloak the Enterprise, CAPTURE to allow Klingons to surrender, and SCORE to show the score in the game. I also fixed many typos in the program dialog and in the documentation.

In June 2015 I fixed some bugs that kept certain counts from being reset when starting a new game.

###### END  ######




