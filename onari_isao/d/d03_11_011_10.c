ChLayout(1);
BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(These are satisfactory results, I think.
...Come to think of it, I wonder how
Onari-sensei's exam went...)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex000",1);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
BGMPlay("BGM_C11_ONARI_A",0.01);
ChOpen(11,255,0,0,4,#1,#1,0,0);
VoicePlay("D031101110_11_000");
MsgDisp("Onari","Hey.");
MsgDisp("主人公","Onari-sensei!
I got satisfactory results on my finals.");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,3);
VoicePlay("D031101110_11_010");
MsgDisp("Onari","Yeah, you don't need the cram school anymore.");
MsgDisp("主人公","Huh?");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031101110_11_020");
MsgDisp("Onari","Thanks to you, I've started to see what kind
of teacher I want to be.");
MsgDisp("主人公","Onari-sensei...");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,4);
VoicePlay("D031101110_11_030");
MsgDisp("Onari","But I'll keep thinking a little longer
about whether I'll actually become one.
That kind of thinking is something I picked up from our time together.");
ChEye(11,3);
ChMouth(11,0);
ChMotion(11,0);
ChEyeOpenLevel(11,0);
VoicePlay("D031101110_11_040");
MsgDisp("Onari","Thank you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(11);
MsgDisp("主人公","(I didn't go to the cram school very often...
Maybe if I'd studied more with Onari-sensei,
he would've felt more positive about it...)");
MsgClose();
ScrFadeOut(0);
