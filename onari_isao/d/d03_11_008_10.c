ChLayout(1);
BGOpen("sc500",0);
ScrFadeIn(0);
MsgDisp("主人公","(The finals are almost here.
I haven't been going to the cram school much, but...
I wonder if Onari-sensei is there today?)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex340",0);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C11_ONARI_A",0.01);
ChOpen(11,40,0,0,0,-1,-1,0,0);
VoicePlay("D031100810_11_000");
MsgDisp("Onari","Hey.
I assumed we were doing this every day, but I
guess you didn't think the same?");
MsgDisp("主人公","Ugh...
Were you waiting here every day—");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031100810_11_010");
MsgDisp("Onari","I was just eating ice cream
and going home like always.");
MsgDisp("主人公","I'm sorry...");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031100810_11_020");
MsgDisp("Onari","It's fine.
Good luck on your finals.
I need to think things over and decide for myself. See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(11);
MsgDisp("主人公","(He was waiting for me here every day.
I really let him down...
I'll just do my best on the finals on my own...)");
MsgClose();
ScrFadeOut(0);
