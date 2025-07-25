ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
MsgDisp("主人公","(Hmm...
I lost.
I guess I didn't practice enough...)");
MsgClose();
BGMPlay("BGM_C10_TOMOE_A",0.01);
ChOpen(10,254,2,0,4,#1,#1,0,0);
MsgDisp("主人公","Ah, Tomoe-san...");
ChEye(10,0);
ChMouth(10,4);
ChMotion(10,0);
VoicePlay("D031000301_10_000");
MsgDisp("Tomoe","Hmm?
What?");
MsgDisp("主人公","Uhm...
It's nothing.");
ChEye(10,0);
ChMouth(10,4);
ChMotion(10,1);
ChEyeOpenLevel(10,7);
VoicePlay("D031000301_10_010");
MsgDisp("Tomoe","Ah, okay.");
MsgClose();
SEPlay("EV_SE_690");
BGMStop();
ChClose(10);
MsgDisp("主人公","(Sigh...There's no point in me telling
Tomoe-san he should come to club
activities like this...)");
MsgClose();
ScrFadeOut(0);
