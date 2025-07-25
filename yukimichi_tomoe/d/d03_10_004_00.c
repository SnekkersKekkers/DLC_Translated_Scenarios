ChLayout(1);
BGOpen("ho210",0);
ScrFadeIn(0);
MsgDisp("主人公","Phew...
It would be such a waste to let the day
end like this.");
MsgDisp("主人公","...Come to think of it, where is the Tomoe
Dojo?
Okay, let's go look for it!");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("ex330",0);
ScrFadeIn(0);
MsgDisp("主人公","Judo Training, Tomoe Dojo....
Found it!");
SEPlay("EV_SE_798");
MsgDisp("","(BAAAN!)");
MsgDisp("主人公","(Ah, that sound....
It sounds like someone's practicing
inside!)");
MsgClose();
ScrFadeOut(0);
VoicePlay("D031000400_10_000");
MsgDisp("Tomoe","ORYAAAH～！");
SEPlay("EV_SE_798");
SEWait();
VoicePlay("D031000400_10_010");
MsgDisp("Tomoe","DARYAAAH!");
SEPlay("EV_SE_798");
SEWait();
MsgDisp("主人公","(That's seriously impressive...
I really want Tomoe-san to come to
practice after all.)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ScrFadeIn(0);
VoicePlay("D031000400_10_020");
MsgDisp("Tomoe","Visiting the dojo?");
MsgDisp("主人公","∋");
MsgClose();
BGMPlay("BGM_C10_TOMOE_A",0.01);
ChOpen(10,37,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Tomoe-san!
Uhm, sorry for peeping...");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,4);
VoicePlay("D031000400_10_030");
MsgDisp("Tomoe","It doesn't really bother me.
Why did you come, though?");
MsgDisp("主人公","I want Tomoe-san to come practice with us!");
ChEye(10,0);
ChMouth(10,3);
ChMotion(10,0);
ChEyeOpenLevel(10,8);
VoicePlay("D031000400_10_040");
MsgDisp("Tomoe","You're pretty determined.
And you pulled off a clean Ippon the other
day, too.");
MsgDisp("主人公","You saw it!
So maybe you could give me advice...?");
ChEye(10,0);
ChMouth(10,4);
ChMotion(10,0);
ChEyeOpenLevel(10,6);
VoicePlay("D031000400_10_050");
MsgDisp("Tomoe","Why?");
MsgDisp("主人公","Ugh...");
ChEye(10,4);
ChMouth(10,4);
ChMotion(10,4);
ChEyeOpenLevel(10,0);
VoicePlay("D031000400_10_060");
MsgDisp("Tomoe","You know, why don't you try getting
stronger on your own?");
MsgDisp("主人公","So you're saying if I win more matches,
you'll come help us train?");
ChEye(10,1);
ChMouth(10,0);
ChMotion(10,1);
VoicePlay("D031000400_10_070");
MsgDisp("Tomoe","Sure, if you can manage to win.
Alright, I'm going back to my training.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0.1,0.5);
BGMStop();
ChClose(10);
MsgDisp("主人公","(Tomoe-san watched my game.
He even praised me a bit today...)");
MsgSel("Let's keep winning!","I can't keep winning forever...");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","(Okay!
Let's keep winning so Tomoe-san will come
back to practice!)");
    MsgDisp("主人公","(...I wonder how long I should keep winning
for, though?)");
    break ;
    case 1:
    MsgDisp("主人公","(It's impossible to keep winning...I'm on
an entirely different level from
Tomoe-san. I'll just do the best I can.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
