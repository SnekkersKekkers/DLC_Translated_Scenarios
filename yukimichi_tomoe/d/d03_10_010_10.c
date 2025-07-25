ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
MsgDisp("主人公","(I was attacking non-stop today!
I think I'm starting to hold my own!)");
MsgClose();
BGMPlay("BGM_C10_TOMOE_A",0.01);
ChOpen(10,37,0,1,4,#1,#1,0,0);
VoicePlay("D031001010_10_000");
MsgDisp("Tomoe","During a match, you never want to be on
the defensive.");
ChEye(10,3);
ChMouth(10,0);
ChMotion(10,4);
ChEyeOpenLevel(10,0);
VoicePlay("D031001010_10_010");
MsgDisp("Tomoe","You did it, huh?");
MsgDisp("主人公","Thank you!
I feel like I've built up the stamina to
keep attacking!");
ChEye(10,0);
ChMouth(10,3);
ChMotion(10,1);
VoicePlay("D031001010_10_020");
MsgDisp("Tomoe","Yeah, see you later then.");
MsgClose();
SEPlay("EV_SE_690");
BGMStop();
ChClose(10);
MsgClose();
ScrFadeOut(0);
