ChLayout(1);
BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(I can't wait to tell Onari-sensei.
He'll be happy for sure!)");
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
ChOpen(11,40,0,0,0,-1,-1,0,0);
VoicePlay("D031100900_11_000");
MsgDisp("Onari","Congratulations.
How does it feel?");
MsgDisp("主人公","I'm so happy!
It's all thanks to you, Onari-sensei.");
ChEye(11,3);
ChMouth(11,3);
ChMotion(11,3);
VoicePlay("D031100900_11_010");
MsgDisp("Onari","I'm happy too.");
MsgDisp("主人公","So, about your exam—");
