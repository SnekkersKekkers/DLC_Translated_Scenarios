ChLayout(1);
BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(Sigh...
I couldn't live up to Onari-sensei's expectations.
I can't even face him...)");
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
VoicePlay("D031101111_11_000");
MsgDisp("Onari","Hey.");
MsgDisp("主人公","Onari-sensei...
Even though you helped me study so much, I
totally bombed my finals.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
VoicePlay("D031101111_11_010");
MsgDisp("Onari","It's my teaching that's the problem.
You worked so hard at it—if it didn't stick,
that's on me.");
MsgDisp("主人公","No, it's my fault...");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,2);
VoicePlay("D031101111_11_020");
MsgDisp("Onari","Haah...");
ChEye(11,1);
ChMouth(11,1);
ChMotion(11,0);
VoicePlay("D031101111_11_030");
MsgDisp("Onari","I'm furious at myself for making you say
that.
I just want to punch me...");
MsgDisp("主人公","What?");
ChEye(11,1);
ChMouth(11,4);
ChMotion(11,4);
ChEyeOpenLevel(11,0);
VoicePlay("D031101111_11_040");
MsgDisp("Onari","I'm just not cut out to be a teacher.
I passed the exam, but I'm done here.");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031101111_11_050");
MsgDisp("Onari","It was a pretty useless cram school, but
I gained the ability to think things through.
Thank you. See you around.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(11);
MsgDisp("主人公","(If only I had studied harder
and gotten better grades, Onari-sensei might've had
more confidence in himself...)");
MsgClose();
ScrFadeOut(0);
