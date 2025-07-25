ChLayout(1);
BGOpen("sc614",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yes!
Another day, another good training
session!)");
MsgClose();
BGMPlay("BGM_C37_OSAKO_A",0.01);
ChOpen(37,254,0,0,0,#1,#1,0,0);
VoicePlay("D031001600_37_000");
MsgDisp("Osako","You're really going at it～
Are you by yourself?");
MsgDisp("主人公","Ah, Osako-sensei.
Yes.");
ChEye(37,0);
ChMouth(37,0);
ChEyeOpenLevel(37,0);
VoicePlay("D031001600_37_010");
MsgDisp("Osako","When I see someone like you who practices
all on their own, I think of Fujiyama.");
MsgDisp("主人公","Fujiyama-senpai...
That person's name is on the dojo card,
right?");
BGMStop(3);
ChEye(37,1);
ChMouth(37,0);
VoicePlay("D031001600_37_020");
MsgDisp("Osako","The \"Arashi\" and \"Junpei\" you see over
there refer to Fujiyama Arashi and Niina
Junpei. The two of them were responsible
for the formation of the Haba High Judo
Club.");
MsgDisp("主人公","That's what those names mean...
I didn't know.");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031001600_37_030");
MsgDisp("Osako","It's a history that we don't really tell
our members.
This club was Fujiyama's dream.");
MsgDisp("主人公","I see.");
ChEye(37,0);
ChMouth(37,0);
ChEyeOpenLevel(37,0);
VoicePlay("D031001600_37_040");
MsgDisp("Osako","The two of them must have heard the news
that you and Tomoe won the championship.
I'm sure they'll be overjoyed.");
SEPlay("EV_SE_597",0.3,0.3);
Wait(50,0);
SEPlay("EV_SE_804",0,0.8);
Wait(50,0);
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031001600_37_050");
MsgDisp("Osako","Ooh.
Their dojo cards made a sound.
Maybe they're laughing?");
ChEye(37,0);
ChMouth(37,0);
ChEyeOpenLevel(37,8);
VoicePlay("D031001600_37_060");
MsgDisp("Osako","Tomoe is also working hard as a high
school student. You should try hard too
until the very end.");
MsgDisp("主人公","OSSU!");
MsgClose();
SEPlay("EV_SE_690");
BGMStop();
ChClose(37);
MsgDisp("主人公","(I'll work hard to live up to my senpai's
expectations, and keep up with
Tomoe-chan!)");
MsgClose();
ScrFadeOut(0);
