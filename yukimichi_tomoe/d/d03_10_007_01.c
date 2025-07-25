ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
MsgDisp("主人公","(I didn't practice enough...
I couldn't keep winning.)");
MsgClose();
BGMPlay("BGM_C10_TOMOE_A",0.01);
ChOpen(10,37,0,0,4,8,#1,0,0);
VoicePlay("D031000701_10_000");
MsgDisp("Tomoe","You did better than I thought you would.");
MsgDisp("主人公","Tomoe-san...");
ChEye(10,0);
ChMouth(10,4);
ChMotion(10,4);
ChEyeOpenLevel(10,0);
VoicePlay("D031000701_10_010");
MsgDisp("Tomoe","But like I thought, in the end you should
just stick to doing judo in a way that
suits you. Bye.");
MsgClose();
SEPlay("EV_SE_690");
BGMStop();
ChClose(10);
MsgDisp("主人公","(It's not worth it to push myself...
Tomoe-san is just on a different level.
Yep, let's go at our own pace.)");
MsgClose();
ScrFadeOut(0);
