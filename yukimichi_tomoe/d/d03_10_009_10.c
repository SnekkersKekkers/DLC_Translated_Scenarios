ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yay!
I was able to lure my opponent in
perfectly!)");
BGMPlay("BGM_C10_TOMOE_A",0.01);
MsgClose();
ChOpen(10,37,0,0,0,#1,#1,0,0);
VoicePlay("D031000910_10_000");
MsgDisp("Tomoe","You had them in a good spot.");
MsgDisp("主人公","Yeah!
I did it just like you told me to!");
ChEye(10,1);
ChMouth(10,0);
ChMotion(10,4);
VoicePlay("D031000910_10_010");
MsgDisp("Tomoe","First you lure them into a vulnerable
position.
Then you show them your true strength.");
MsgDisp("主人公","OSSU!");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,1);
VoicePlay("D031000910_10_020");
MsgDisp("Tomoe","Bye!");
MsgClose();
SEPlay("EV_SE_690");
BGMStop();
ChClose(10);
