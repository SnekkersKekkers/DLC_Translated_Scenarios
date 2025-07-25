MsgDisp("主人公","(Ah...
Tomoe-chan, do you want to go shopping
again today...?)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc131",1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C10_TOMOE_A",0.01);
ChOpen(10,254,4,0,0,#1,#1,0,0);
VoicePlay("D031000912_10_000");
MsgDisp("Tomoe","Guess where we're going today.
It's a place that's super trendy right
now.");
MsgDisp("主人公","I have no idea, where is it?
I haven't been keeping up with the
trends...");
ChEye(10,0);
ChMouth(10,4);
ChMotion(10,0);
VoicePlay("D031000912_10_010");
MsgDisp("Tomoe","Huh?
Is You-chan maybe...are you actually
uninterested in fashion?");
MsgDisp("主人公","Eh?");
ChEye(10,0);
ChMouth(10,4);
ChMotion(10,2);
VoicePlay("D031000912_10_020");
MsgDisp("Tomoe","Our contract, remember. I don't want you
to do anything out of your comfort zone.
We'd both be wasting our time.");
MsgDisp("主人公","Y-Yeah.
Sorry.");
ChEye(10,0);
ChMouth(10,3);
ChMotion(10,3);
VoicePlay("D031000912_10_030");
MsgDisp("Tomoe","That's not good, you know.
Fashion is fun and makes you sparkle.");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,0);
VoicePlay("D031000912_10_040");
MsgDisp("Tomoe","Alright, I have somewhere to go then.
Byebye!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(10);
MsgDisp("主人公","(He left...I guess I broke our contract. I
should have paid more attention to what's
trending...)");
MsgClose();
ScrFadeOut(0);
