MsgDisp("主人公","(Tomoe-chan is looking forward to shopping
with me!)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc131",1);
MsgClose();
ScrFadeIn(0);
BGMPlay("BGM_C10_TOMOE_A",0.01);
ChOpen(10,254,4,0,0,#1,#1,0,0);
VoicePlay("D031001012_10_000");
MsgDisp("Tomoe","Guess which shop we're going to today.
It's super popular these days.");
MsgDisp("主人公","I have no idea, where is it?
I haven't been keeping up with the
trends...");
ChEye(10,0);
ChMouth(10,4);
ChMotion(10,0);
VoicePlay("D031001012_10_010");
MsgDisp("Tomoe","Huh? Wait a second, You-chan. Are you
maybe just forcing yourself to go out with
me?");
MsgDisp("主人公","Eh?");
ChEye(10,0);
ChMouth(10,4);
ChMotion(10,2);
VoicePlay("D031001012_10_020");
MsgDisp("Tomoe","It was a contract between us but...
I don't want to force you.");
MsgDisp("主人公","I mean, I'm not really forcing myself...");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,1);
VoicePlay("D031001012_10_030");
MsgDisp("Tomoe","Not really, huh? Sorry. It's just a big
misunderstanding. I thought you were 100%
into it too.");
ChEye(10,2);
ChMouth(10,0);
ChMotion(10,2);
ChEyeOpenLevel(10,0);
VoicePlay("D031001012_10_040");
MsgDisp("Tomoe","I don't compromise when it comes to judo
or fashion.");
MsgDisp("主人公","Tomoe-chan...?");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,0);
VoicePlay("D031001012_10_050");
MsgDisp("Tomoe","I have somewhere I need to go.
Byebye!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(10);
MsgDisp("主人公","(He left...
I should have paid more attention to
what's trending...)");
MsgDisp("主人公","(Maybe I'm just out of Tomoe-chan's
league...
From now on I'll just stick to judo.)");
MsgClose();
ScrFadeOut(0);
