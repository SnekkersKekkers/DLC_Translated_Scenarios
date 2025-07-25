ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
MsgDisp("主人公","(I lost my last match before
Inter-High...)");
MsgClose();
BGMPlay("BGM_C10_TOMOE_A",0.01);
ChOpen(10,37,1,1,4,#1,#1,0,0);
VoicePlay("D031001301_10_000");
MsgDisp("Tomoe","The people today were pretty strong.
They're just as strong as the opponents in
the Inter-High.");
MsgDisp("主人公","Ah, yeah.
I just needed a bit more and then...");
ChEye(10,1);
ChMouth(10,4);
ChMotion(10,4);
ChEyeOpenLevel(10,8);
VoicePlay("D031001301_10_010");
MsgDisp("Tomoe","A bit?
I didn't see that at all.");
MsgDisp("主人公","Eh...?");
ChEye(10,1);
ChMouth(10,4);
ChMotion(10,2);
ChEyeOpenLevel(10,0);
VoicePlay("D031001301_10_020");
MsgDisp("Tomoe","If you settle like that, you'll never get
any stronger.");
ChEye(10,1);
ChMouth(10,4);
ChMotion(10,0);
VoicePlay("D031001301_10_030");
MsgDisp("Tomoe","You-chan, even though you were new to
judo, you got all caught up in winning or
losing because of me. Sorry...");
MsgDisp("主人公","That kind of thing is...");
ChEye(10,1);
ChMouth(10,4);
ChMotion(10,0);
VoicePlay("D031001301_10_040");
MsgDisp("Tomoe","It's okay.
I guess for you there are things more
important than winning or losing.");
ChEye(10,1);
ChMouth(10,0);
ChMotion(10,1);
VoicePlay("D031001301_10_050");
MsgDisp("Tomoe","You should aim higher.
I'll be waiting for you there.");
MsgDisp("主人公","Y-Yes.");
ChEye(10,3);
ChMouth(10,0);
ChMotion(10,0);
ChEyeOpenLevel(10,0);
VoicePlay("D031001301_10_060");
MsgDisp("Tomoe","You-chan can do it.
Bye.");
MsgClose();
SEPlay("EV_SE_690");
BGMStop();
ChClose(10);
MsgDisp("主人公","(Tomoe-chan and I are too different...
It's just like he said, I should go at my
own pace.)");
MsgClose();
ScrFadeOut(0);
