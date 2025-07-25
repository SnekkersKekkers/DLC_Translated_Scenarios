ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
MsgDisp("主人公","(Phew.
I won the final match before the
Inter-High...)");
MsgClose();
BGMPlay("BGM_C10_TOMOE_A",0.01);
ChOpen(10,37,1,1,4,#1,#1,0,0);
VoicePlay("D031001300_10_000");
MsgDisp("Tomoe","You were pretty strong today.
Before we forget that feeling, let's go to
the dojo.");
MsgDisp("主人公","Y-Yes!");
MsgClose();
SEPlay("EV_SE_690");
ChClose(10);
MsgDisp("主人公","(Tomoe-chan...
Will he quit judo after he wins?
I want to ask.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_798");
SEWait();
MsgDisp("主人公","One, Two, One, Two!");
VoicePlay("D031001300_10_010");
MsgDisp("Tomoe","Okay, we're done with the practice throws!");
MsgDisp("主人公","Yeah. Ah, uhm! Tomoe-chan∈ Are you going
to quit judo if you win?");
SEPlay("EV_SE_594",0,0.8);
MsgDisp("","(Gatan)");
VoicePlay("D031001300_10_020");
MsgDisp("Tomoe","Who's that...?");
VoicePlay("D031001300_10_030");
MsgDisp("Tomoe","Ugh...
You-chan, let's talk outside.");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex330",0);
BGMPlay("BGM_C10_TOMOE_B",0.01);
ScrFadeIn(0);
MsgClose();
ChOpen(10,37,0,1,4,0,#1,0,0);
MsgDisp("主人公","What was that sound earlier...?");
ChEye(10,1);
ChMouth(10,4);
ChMotion(10,0);
VoicePlay("D031001300_10_040");
MsgDisp("Tomoe","My dad, my grandpa, my brother....
Everyone, basically.");
MsgDisp("主人公","Ehh?
I should have said hello.");
ChEye(10,1);
ChMouth(10,4);
ChMotion(10,5);
VoicePlay("D031001300_10_050");
MsgDisp("Tomoe","Don't. It's okay. I got permission to use
the dojo, so they're weird for spying on
me.");
MsgDisp("主人公","Spying?
So you're really planning on quitting judo
if you win?");
ChEye(10,0);
ChMouth(10,4);
ChMotion(10,0);
VoicePlay("D031001300_10_060");
MsgDisp("Tomoe","Eh...");
MsgDisp("主人公","It's all for your dream of being a fashion
designer...");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,4);
ChCheek(10,10);
VoicePlay("D031001300_10_070");
MsgDisp("Tomoe","...You-chan.
You're kind, aren't you?
I'm sorry.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(10,0,30);
ChLayout(0);
MsgClose();
Wait(5,0);
ChOpen(10,37,0,0,0,#1,#1,10,0,0,30);
VoicePlay("D031001300_10_080");
MsgDisp("Tomoe","I won't quit. I'm going to win and
experience the world with you. We're going
for the very top.");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,0);
VoicePlay("D031001300_10_090");
MsgDisp("Tomoe","And it's not because I was born into this
family.
This is my choice.");
ChEye(10,3);
ChMouth(10,3);
ChMotion(10,3);
ChEyeOpenLevel(10,0);
VoicePlay("D031001300_10_100");
MsgDisp("Tomoe","I'll save fashion for later.");
MsgDisp("主人公","Tomoe-chan...
Thank you for telling me.");
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgClose();
ChLayout(1);
