ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
MsgDisp("主人公","(Save all my strength for the movement...
Yes, that felt right!)");
MsgDisp("主人公","(I wonder if Tomoe-san left already...)");
MsgClose();
BGMPlay("BGM_C37_OSAKO_A",0.01);
ChOpen(37,254,0,1,0,#1,#1,0,0);
VoicePlay("D031000600_37_000");
MsgDisp("Osako","(OSSU!
That last Ippon was amazing.)");
MsgDisp("主人公","Thank you.
I feel like I'm starting to understand how
to much force to use!");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031000600_37_010");
MsgDisp("Osako","Hey, Tomoe!");
MsgDisp("主人公","Eh?");
ChPosition(37,1);
SEPlay("EV_SE_693");
SEWait();
MsgClose();
ChOpen(10,254,4,0,4,#1,#1,0,2);
VoicePlay("D031000600_10_000");
MsgDisp("Tomoe","Osako-san, what's up?");
ChEye(37,0);
ChMouth(37,0);
ChEyeOpenLevel(37,8);
VoicePlay("D031000600_37_020");
MsgDisp("Osako","Hehe.
Did you watch the girls' match?
What did you think?");
ChEye(10,1);
ChMouth(10,0);
ChMotion(10,1);
VoicePlay("D031000600_10_010");
MsgDisp("Tomoe","Ehh....
Not so bad.
That's all.");
MsgClose();
SEPlay("EV_SE_690");
ChClose(10);
ChEye(37,2);
ChMouth(37,0);
ChPosition(37,0);
VoicePlay("D031000600_37_030");
MsgDisp("Osako","Exactly that.");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031000600_37_040");
MsgDisp("Osako","I'm glad the final match of the year was
able to inspire him a bit.");
MsgDisp("主人公","Yes!");
ChEye(37,1);
ChMouth(37,0);
VoicePlay("D031000600_37_050");
MsgDisp("Osako","Starting in his second year, it looks like
Tomoe might start coming to club practice
more.");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031000600_37_060");
MsgDisp("Osako","Okay!
Everyone, it's time to go home!");
VoicePlay("D031000600_38_000");
MsgDisp("Club Members","OSSU!");
MsgDisp("主人公","(If Tomoe-san comes to practice, I'm sure
he'll help us train...
Okay, let's keep winning!)");
BGMStop();
MsgClose();
ScrFadeOut(0);
