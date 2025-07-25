MsgDisp("主人公","(The finals are next.
Agh, I'm so nervous...
I wonder how Tomoe's match is going?)");
MsgClose();
SEPlay("EV_SE_801");
SEWait();
BGMPlay("BGM_C10_TOMOE_A",0.01);
ChOpen(10,37,3,0,5,#1,#1,0,0);
VoicePlay("D031001400_10_010");
MsgDisp("Tomoe","You-chan!
It's over!");
MsgDisp("主人公","Ah, Tomoe-chan!
How'd it go?");
ChEye(10,3);
ChMouth(10,3);
ChMotion(10,4);
ChEyeOpenLevel(10,0);
VoicePlay("D031001400_10_020");
MsgDisp("Tomoe","I won.");
MsgDisp("主人公","Amazing!
Congratulations∈");
MsgClose();
ChClose(10,0,30);
ChLayout(0);
MsgClose();
SEPlay("EV_SE_692",0,0.5);
ChOpen(10,37,0,0,0,#1,#1,0,0,0,30);
VoicePlay("D031001400_10_030");
MsgDisp("Tomoe","Yeah.
You-chan can win too.
Because You-chan is both cute and strong.");
MsgDisp("主人公","Hehe!
But that describes you, Tomoe-chan?");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,1);
ChEyeOpenLevel(10,8);
VoicePlay("D031001400_10_040");
MsgDisp("Tomoe","Doesn't it describe both of us?
That's why I'm not nervous at all.");
MsgDisp("主人公","Yeah!");
MsgClose();
SEPlay("EV_SE_690");
BGMStop();
ChClose(10);
SEStop("EV_SE_690",1);
ChLayout(1);
