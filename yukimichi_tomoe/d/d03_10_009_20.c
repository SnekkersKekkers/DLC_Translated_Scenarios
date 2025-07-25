ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
MsgDisp("主人公","(Ugh...
Tomoe was here watching our practice
matches, but I lost...)");
MsgClose();
BGMPlay("BGM_C10_TOMOE_A",0.01);
ChOpen(10,254,0,1,4,0,#1,0,0);
MsgDisp("主人公","Ah, Tomoe-chan...");
ChEye(10,1);
ChMouth(10,4);
ChMotion(10,1);
VoicePlay("D031000920_10_000");
MsgDisp("Tomoe","I only came here to watch the practice
matches because of you.
Maybe my expectations were too high?");
ChEye(10,1);
ChMouth(10,4);
ChMotion(10,4);
VoicePlay("D031000920_10_010");
MsgDisp("Tomoe","Talking about fashion might get irritating
when you don't even know the basics of
judo. Bye, I guess.");
MsgClose();
SEPlay("EV_SE_690");
BGMStop();
ChClose(10);
MsgDisp("主人公","(He was only here because of me...I guess
I got too complacent when he started
coming to practice. It's impossible to
live up to his standards...)");
MsgClose();
ScrFadeOut(0);
