ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
MsgDisp("主人公","(Sigh...
I didn't practice enough.
I can't look Tomoe-chan in the eye.)");
MsgClose();
BGMPlay("BGM_C10_TOMOE_A",0.01);
ChOpen(10,37,0,1,4,#1,#1,0,0);
VoicePlay("D031001101_10_000");
MsgDisp("Tomoe","You-chan is definitely getting stronger.
But at that pace it's impossible for you
to win the Inter-High.");
MsgDisp("主人公","Tomoe-chan, I...");
ChEye(10,1);
ChMouth(10,4);
ChMotion(10,2);
ChEyeOpenLevel(10,0);
VoicePlay("D031001101_10_010");
MsgDisp("Tomoe","I want You-chan to do judo at her own
pace.
Don't keep forcing yourself.");
MsgClose();
SEPlay("EV_SE_690");
BGMStop();
ChClose(10);
MsgDisp("主人公","(At the pace I'm going, I'm only causing
trouble for Tomoe-chan...
I'll just do it my own way.)");
MsgClose();
ScrFadeOut(0);
