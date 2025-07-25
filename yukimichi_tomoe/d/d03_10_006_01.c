ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
MsgDisp("主人公","(Ahh...I lost. I didn't practice enough at
all. I wonder if Tomoe-san is
disappointed...)");
MsgClose();
BGMPlay("BGM_C10_TOMOE_A",0.01);
ChOpen(10,37,0,0,4,8,#1,0,0);
VoicePlay("D031000601_10_000");
MsgDisp("Tomoe","You lost, huh?");
MsgDisp("主人公","Ah, Tomoe-san...");
ChEye(10,0);
ChMouth(10,4);
ChMotion(10,4);
ChEyeOpenLevel(10,0);
VoicePlay("D031000601_10_010");
MsgDisp("Tomoe","You should practice judo at your own pace.
That'd be better for you.");
MsgClose();
SEPlay("EV_SE_690");
BGMStop();
ChClose(10);
MsgDisp("主人公","(Ugh...Tomoe-san's just on a different
level from me. I'll keep going on my
own...)");
MsgClose();
ScrFadeOut(0);
