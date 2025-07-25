MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc624",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...
I didn't win.
I can't look Tomoe-chan in the eye.)");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(37,254,0,0,0,#1,#1,0,0);
VoicePlay("D031001401_37_010");
MsgDisp("Osako","Good work.
Did you try your best?");
MsgDisp("主人公","...No.
I should have practiced more...");
VoicePlay("D031001401_37_020");
ChEye(37,0);
ChMouth(37,0);
ChEyeOpenLevel(37,8);
MsgDisp("Osako","Since you feel that way, become stronger.
The judo path continues on.");
MsgDisp("主人公","Yes...
Uhm, Tomoe-chan?");
VoicePlay("D031001401_37_030");
ChEye(37,0);
ChMouth(37,0);
ChEyeOpenLevel(37,0);
MsgDisp("Osako","He won by a landslide.
He's going to dominate the world at this
rate.");
VoicePlay("D031001401_37_040");
ChEye(37,0);
ChMouth(37,0);
MsgDisp("Osako","But you are your own person.
You did great too.
You tried your best.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(37);
MsgDisp("主人公","(Right...
Tomoe-chan is on a different level.)");
MsgDisp("主人公","(From now on, I'll try my best in other
ways...!)");
MsgClose();
ScrFadeOut(0);
