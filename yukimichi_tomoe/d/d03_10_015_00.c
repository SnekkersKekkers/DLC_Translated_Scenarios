ChLayout(1);
BGOpen("sc310",0);
SEPlay("EV_SE_802");
ScrFadeIn(0);
Wait(90,0);
VoicePlay("D031001500_47_000");
MsgDisp("Broadcast","Attention to all students. Yukimichi
Tomoe, a third-year student of the Judo
Club, has been selected to play for the
National Team.");
SEPlay("EV_SE_841",0,0.8);
VoicePlay("D031001500_42_010");
MsgDisp("Male Student A","Eh, that's amazing!");
SEStop("EV_SE_841",2);
VoicePlay("D031001500_47_010");
MsgDisp("Broadcast","He will travel around Europe and compete
with university students and adults.");
VoicePlay("D031001500_41_030");
SEPlay("EV_SE_842",0,0.7);
MsgDisp("Male Student B","Around Europe!?");
MsgDisp("主人公","(Amazing...!
Tomoe-chan, I'm so glad!)");
SEStop("EV_SE_842",1);
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc130",1);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(10,254,0,0,4,#1,#1,0,0);
MsgDisp("主人公","Ah, Tomoe-chan!
I heard the announcement.
Congratulations!");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,4);
VoicePlay("D031001500_10_000");
MsgDisp("Tomoe","Yeah.
I came to school this morning and asked
for permission.");
ChEye(10,3);
ChMouth(10,0);
ChMotion(10,0);
ChEyeOpenLevel(10,0);
VoicePlay("D031001500_10_010");
MsgDisp("Tomoe","Hey, let's go outside for a moment.");
MsgDisp("主人公","Hm?
Okay.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
ChClose(10,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_10_05");
StlEye(10,0);
StlMouth(10,0);
BGMPlay("BGM_C10_TOMOE_B",0.01);
ScrFadeIn(0);
VoicePlay("D031001500_10_020");
MsgDisp("Tomoe","You-chan, congratulations on winning the
Inter-High!
Cheers!");
MsgDisp("主人公","Tomoe-chan, congratulations on being
selected for the National Team!
Cheers!");
SEPlay("EV_SE_803",0,1);
SEWait();
Wait(10,1);
StlEye(10,2);
StlMouth(10,2);
VoicePlay("D031001500_10_030");
MsgDisp("Tomoe","...Hey, You-chan.");
MsgDisp("主人公","What?");
StlEye(10,2);
StlMouth(10,0);
VoicePlay("D031001500_10_040");
MsgDisp("Tomoe","Is it okay that I'm leaving first?");
MsgDisp("主人公","Yeah, of course.");
StlEye(10,2);
StlMouth(10,0);
StlEyeOpenLevel(10,0);
VoicePlay("D031001500_10_050");
MsgDisp("Tomoe","Yeah...");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
StlClose();
BGOpen("wf200",1);
MsgClose();
ChOpen(10,254,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("D031001500_10_060");
MsgDisp("Tomoe","Sorry, I already told them I would go.");
MsgDisp("主人公","No, it's fine.
I'll be practicing hard so we can go
together one day.");
MsgDisp("主人公","So...
Please go.");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,4);
VoicePlay("D031001500_10_070");
MsgDisp("Tomoe","Yes, I'm going.
Byebye!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
BGMStop(1);
ChClose(10);
SEStop("EV_SE_FOOT_RUN_AWAY_ALONE",0.1);
VoicePlay("D031001500_10_080");
MsgDisp("Tomoe","Ah!
Please give Osako-san my club leave form!");
MsgDisp("主人公","Well, you're already retired so you don't
need it～");
VoicePlay("D031001500_10_090");
MsgDisp("Tomoe","Haha, right!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgDisp("主人公","(Tomoe-chan...
He left...)");
MsgDisp("主人公","(Okay. I've retired too but I still need
to continue practicing properly! So
Tomoe-chan and I can see the world
together!)");
SEStop("EV_SE_FOOT_RUN_AWAY_ALONE",0.1);
MsgClose();
ScrFadeOut(0);
