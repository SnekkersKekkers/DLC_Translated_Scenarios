ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yes!
I was able to properly counter my
opponent's moves!)");
MsgClose();
BGMPlay("BGM_C10_TOMOE_A",0.01);
ChOpen(10,37,0,0,0,#1,#1,0,0);
VoicePlay("D031000500_10_000");
MsgDisp("Tomoe","Hmm.");
MsgDisp("主人公","Ah, Tomoe-san!");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,4);
VoicePlay("D031000500_10_010");
MsgDisp("Tomoe","You really won.");
MsgDisp("主人公","! Does that mean—");
ChEye(10,1);
ChMouth(10,0);
ChMotion(10,1);
VoicePlay("D031000500_10_020");
MsgDisp("Tomoe","I said I'd come watch if you kept winning,
didn't I?");
MsgClose();
SEPlay("EV_SE_690");
BGMStop();
ChClose(10);
MsgDisp("主人公","(Ugh, he left...)");
MsgClose();
SEPlay("EV_SE_693");
SEWait();
BGMPlay("BGM_C37_OSAKO_A",0.01);
ChOpen(37,254,0,0,0,#1,#1,0,0);
VoicePlay("D031000500_37_000");
MsgDisp("Osako","OSSU!
It's pretty rare for Tomoe to watch one of
the girl's matches, to be fair.");
MsgDisp("主人公","Ah, Osako-sensei.
What do you mean by that?");
ChEye(37,1);
ChMouth(37,0);
VoicePlay("D031000500_37_010");
MsgDisp("Osako","That's the power of youth～!");
VoicePlay("D031000500_38_000");
MsgDisp("Club Members","OSSU!");
MsgDisp("主人公","Huh?
Youth?
And when did everyone suddenly—∋");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031000500_37_020");
MsgDisp("Osako","Hahaha! I'll leave Tomoe to you. Everyone,
let's get ready to pack it up for today!");
VoicePlay("D031000500_38_010");
MsgDisp("Club Members","OSSU!");
MsgClose();
SEPlay("EV_SE_690");
BGMStop();
ChClose(37);
MsgDisp("主人公","(They're leaving Tomoe-san to me...?
Anyway, I just need to keep winning!
Let's do our best!)");
MsgClose();
ScrFadeOut(0);
