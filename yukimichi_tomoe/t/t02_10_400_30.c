ChEyeOpenLevel(10,#1);
ChCheek(10,0);
MsgDisp("主人公","I think I love you too...");
ChEye(10,3);
ChMouth(10,4);
ChMotion(10,4);
VoicePlay("T021040030_10_000");
MsgDisp("Tomoe","Uhm...
You-chan?");
MsgDisp("主人公","When I sparred with you for the first
time, I realized that Tomoe-kun is really
a man...");
ChEye(10,0);
ChMouth(10,3);
ChMotion(10,0);
VoicePlay("T021040030_10_010");
MsgDisp("Tomoe","Haha, so you're the same as me?");
MsgDisp("主人公","Hehe, yes.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(10,0,0);
Wait(120,0);
StlOpen("ev_10_06");
ScrFadeIn(0);
VoicePlay("T021040030_10_020");
MsgDisp("Tomoe","Shall we confirm it then?");
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
