ChLayout(1);
BGOpen("sc500",1);
ScrFadeIn(0);
MsgDisp("主人公","(Come to think of it...I didn't go to
Onari-sensei's cram school over summer.
Maybe I should stop by on my way home?)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ne100",1);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(34,254,0,1,1,#1,#1,0,0);
VoicePlay("D031101010_34_000");
MsgDisp("Man","Our party is dissolved.");
MsgDisp("主人公","Huh∋
Y-You're—");
ChEye(34,0);
ChMouth(34,1);
VoicePlay("D031101010_34_010");
MsgDisp("Man","It's not cool to keep someone waiting too
long.
He asked me to give you this.");
MsgClose();
SEPlay("EV_SE_662");
SEWait();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(34);
MsgDisp("主人公","(It says...\"I'm taking the exam. But I won't 
pass. So I can't help you study anymore.
See you. Onari\")");
MsgDisp("主人公","(He waited for me all summer break...
I feel awful about what I did.
From now on, I have to study alone...)");
MsgClose();
ScrFadeOut(0);
