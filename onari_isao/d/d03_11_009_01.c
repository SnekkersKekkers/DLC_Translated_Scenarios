MsgDisp("主人公","(Sigh...
I couldn't keep my promise to Onari-sensei...
But I should still tell him.)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex340",0);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
BGMPlay("BGM_C11_ONARI_A",0.01);
ChOpen(11,40,4,0,4,#1,#1,0,0);
VoicePlay("D031100901_11_000");
MsgDisp("Onari","That's on my teaching, not you.
You worked hard.");
MsgDisp("主人公","But I didn't reach my goal...");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031100901_11_010");
MsgDisp("Onari","Thanks to you, I realized that I can at least
be the spark that gets someone going.");
MsgDisp("主人公","So, about your exam—");
