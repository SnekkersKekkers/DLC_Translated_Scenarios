ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
MsgDisp("主人公","(Ahh...That was a complete failure. I
wonder if Tomoe-san is disappointed in
me...)");
BGMPlay("BGM_C10_TOMOE_A",0.01);
MsgClose();
ChOpen(10,37,1,1,0,#1,#1,0,0);
VoicePlay("D031000501_10_000");
MsgDisp("Tomoe","Yeah, that's pretty much what I expected.");
MsgDisp("主人公","Ah, Tomoe-san!");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,0);
ChEyeOpenLevel(10,8);
VoicePlay("D031000501_10_010");
MsgDisp("Tomoe","What?
I have nothing to say to you.");
MsgClose();
SEPlay("EV_SE_690");
BGMStop();
ChClose(10);
MsgDisp("主人公","(Ugh...I said I'd keep winning but I let
him down. Tomoe-san's just in another
league. I won't talk to him anymore...)");
MsgClose();
ScrFadeOut(0);
