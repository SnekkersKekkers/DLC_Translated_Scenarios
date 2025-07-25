ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
MsgDisp("主人公","(Phew...
Maybe I'll pack up early today and go
shopping before I go home.)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
MsgDisp("主人公","...Eh?");
MsgClose();
BGOpen("ex330",0);
ScrFadeIn(0);
MsgDisp("主人公","(The Tomoe Dojo...! Why did I come here?
Even though I was thinking of going to the
Shopping District...)");
SEPlay("EV_SE_798",0.2,0.4);
SEWait();
MsgDisp("主人公","(Is someone practicing...?)");
VoicePlay("D031001800_10_000");
MsgDisp("Tomoe?","ORYAAH～!");
SEPlay("EV_SE_798",0.2,0.5);
SEWait();
MsgDisp("主人公","(Ehh∋
That voice just now, could it be...)");
VoicePlay("D031001800_10_010");
MsgDisp("Tomoe?","DARYAA!");
SEPlay("EV_SE_798",0.2,0.5);
SEWait();
MsgDisp("主人公","Tomoe-chan∋");
MsgClose();
SEPlay("EV_SE_DOOR_018");
SEWait();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
MsgClose();
BGMPlay("BGM_C10_TOMOE_B",0.01,0.5);
ChOpen(10,37,5,5,5,#1,#1,0,0);
VoicePlay("D031001800_10_020");
MsgDisp("Tomoe","...You-chan∋
What's up?");
MsgDisp("主人公","I should be asking Tomoe-chan that.
You're back...?");
ChEye(10,3);
ChMouth(10,3);
ChMotion(10,3);
VoicePlay("D031001800_10_030");
MsgDisp("Tomoe","Yeah! I just got back. When I saw the dojo
I felt like moving around a bit.");
MsgDisp("主人公","I see...
That surprised me.");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,4);
VoicePlay("D031001800_10_040");
MsgDisp("Tomoe","My strategy was a failure.
I was thinking to surprise you.
How did you know?");
MsgDisp("主人公","I was going to go shopping but my feet
took me here instead, weird.
But I'm happy to see you.");
ChEye(10,0);
ChMouth(10,4);
ChMotion(10,4);
VoicePlay("D031001800_10_050");
MsgDisp("Tomoe","Y-Yeah.
You-chan, you've still been coming to the
dojo...");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0.1,0.5);
BGMStop(1);
ChClose(10);
MsgDisp("主人公","Eh, yes.");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
Wait(40,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_10_04");
StlEye(10,1);
StlMouth(10,1);
BGMPlay("BGM_C10_TOMOE_A",0.01);
ScrFadeIn(0);
VoicePlay("D031001800_10_060");
MsgDisp("Tomoe","Not enough...");
MsgDisp("主人公","HYAA!");
SEPlay("EV_SE_565",0.1,0.5);
SEWait();
StlEye(10,1);
StlMouth(10,0);
VoicePlay("D031001800_10_070");
MsgDisp("Tomoe","Phew...");
MsgDisp("主人公","There!");
SEPlay("EV_SE_554");
SEWait();
StlEye(10,1);
StlMouth(10,1);
VoicePlay("D031001800_10_080");
MsgDisp("Tomoe","I-Is that so?");
MsgDisp("主人公","One more time!");
SEPlay("EV_SE_623",0);
SEWait();
MsgDisp("主人公","(Amazing...He doesn't move at all. Like I
thought, Tomoe-chan is really strong...)");
MsgDisp("主人公","This is it!");
SEPlay("EV_SE_565",0,0.5,0.2);
SEPlay("EV_SE_623",0,0.5,0.2);
BGMPlay("BGM_HANYOU_A",0,0.5);
Wait(25,0);
SEPlay("EV_SE_603");
MsgDisp("","(Mugyu)");
StlEye(10,0);
StlMouth(10,0);
VoicePlay("D031001800_10_090");
MsgDisp("Tomoe","Ah...");
MsgDisp("主人公","(Tomoe-chan looks really strong up close.
He really is a man after all...)");
StlEye(10,2);
StlMouth(10,2);
VoicePlay("D031001800_10_100");
MsgDisp("Tomoe","You-chan is soft and smells good...");
MsgDisp("主人公","Eh...∋");
StlEye(10,0);
StlMouth(10,0);
VoicePlay("D031001800_10_110");
MsgDisp("Tomoe","Ahhh!
What am I saying right now!?");
MsgDisp("主人公","Y-Yeah.
Uhm, Tomoe...kun?");
StlEye(10,0);
StlMouth(10,0);
VoicePlay("D031001800_10_120");
MsgDisp("Tomoe","Eh...?");
MsgDisp("主人公","You're a strong man, after all...");
StlEye(10,0);
StlMouth(10,0);
StlEyeOpenLevel(10,5);
VoicePlay("D031001800_10_130");
MsgDisp("Tomoe","You-chan...?");
MsgDisp("主人公","Tomoe-kun...?");
SEPlay("EV_SE_512",0,0.4,1);
BGMStop(2);
MsgClose();
ScrFadeOut(0);
StlClose();
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(10,37,4,4,4,#1,#1,10,0);
ScrFadeIn(0);
VoicePlay("D031001800_10_140");
MsgDisp("Tomoe","Sorry for saying something strange
earlier.");
MsgDisp("主人公","It's okay.
It was the first time we got to spar
together.");
ChEye(10,4);
ChMouth(10,3);
ChMotion(10,0);
ChCheek(10,0);
VoicePlay("D031001800_10_150");
MsgDisp("Tomoe","You've gotten stronger.");
MsgDisp("主人公","...Yeah.
I guess I can feel the strength of my
opponents now when I spar.");
ChEye(10,3);
ChMouth(10,3);
ChMotion(10,3);
VoicePlay("D031001800_10_160");
MsgDisp("Tomoe","Yeah.
You're a proper judo practitioner now,
You-chan.");
MsgDisp("主人公","You understand me now?");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,4);
VoicePlay("D031001800_10_170");
MsgDisp("Tomoe","Yeah...");
ChEye(10,0);
ChMouth(10,4);
ChMotion(10,4);
VoicePlay("D031001800_10_180");
MsgDisp("Tomoe","You're soft and smell nice...");
MsgDisp("主人公","Eh?");
ChEye(10,3);
ChMouth(10,0);
ChMotion(10,5);
VoicePlay("D031001800_10_190");
MsgDisp("Tomoe","I-It's nothing.
I'll take you home.
Let's go!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0.1,0.5);
BGMStop();
ChClose(10);
MsgDisp("主人公","(Tomoe-kun...?)");
MsgDisp("主人公","...Wait, I'm still in my judo uniform!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
