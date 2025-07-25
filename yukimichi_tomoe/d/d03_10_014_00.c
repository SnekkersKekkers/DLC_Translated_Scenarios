ChLayout(1);
BGOpen("sc623",0);
BGMPlay("BGM_CLUB_IVENT",0.01);
ScrFadeIn(0);
MsgDisp("主人公","(The day is finally here.
I've done what I can.)");
MsgClose();
ChOpen(37,254,0,1,0,#1,#1,0,0);
VoicePlay("D031001400_37_000");
MsgDisp("Osako","(OSSU!
You look like you're in great shape.
Let's finish this∈)");
VoicePlay("D031001400_38_000");
MsgDisp("Club Members","OSSU!");
MsgDisp("主人公","OSSU!");
MsgClose();
ChClose(37);
ChLayout(0);
MsgClose();
SEPlay("EV_SE_544",0.1);
ChOpen(10,37,0,3,0,0,#1,0,0);
VoicePlay("D031001400_10_000");
MsgDisp("Tomoe","You-chan, are you ready to win and take on
the world?");
MsgDisp("主人公","Hehe, yes!");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(10,0,0);
ChLayout(1);
MsgClose();
ScrFadeOut(0);
