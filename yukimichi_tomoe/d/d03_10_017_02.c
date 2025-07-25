ChLayout(1);
BGOpen("sc310",0);
ScrFadeIn(0);
MsgDisp("主人公","(Should I eat curry for lunch today?)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex080",0);
MsgDisp("主人公","(Huh?
Over there is...)");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChOpen(37,254,0,0,0,#1,#1,0,0);
BGMPlay("BGM_C37_OSAKO_A",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Osako-sensei!
What's up?
You're in the high school cafeteria.");
ChEye(37,2);
ChMouth(37,0);
ChEyeOpenLevel(37,0);
VoicePlay("D031001702_37_000");
MsgDisp("Osako","You found me, huh...");
MsgDisp("主人公","Eh?");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031001702_37_010");
MsgDisp("Osako","I couldn't forget the curry I ate with you
guys.
Keep it a secret, okay?～");
VoicePlay("D031001702_42_000");
MsgDisp("Male Student","What's a secret?");
VoicePlay("D031001702_44_000");
MsgDisp("School Girl","Even though he's a teacher, he looks like
he's in middle school.
It's kind of cute.");
MsgDisp("主人公","Hehe!
It seems like everyone already saw you?");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031001702_37_020");
MsgDisp("Osako","I'll just eat curry and leave～
Want to join me?");
SEPlay("EV_SE_753");
SEWait();
MsgDisp("主人公","Ah, a message from Tomoe-chan. 
\"The food here is good but I miss eating at
Haba High's cafeteria.\"");
ChEye(37,0);
ChMouth(37,0);
ChEyeOpenLevel(37,8);
VoicePlay("D031001702_37_030");
MsgDisp("Osako","That's some amazing timing.
Is he secretly back and watching us from
somewhere?");
ChEye(37,1);
ChMouth(37,0);
VoicePlay("D031001702_37_040");
MsgDisp("Osako","Okay!
Today we'll have a extra large serving in
his memory!");
MsgDisp("主人公","Hehe, yes!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(37);
MsgDisp("主人公","(It would make me really happy if
Tomoe-chan were back...)");
MsgClose();
ScrFadeOut(0);
