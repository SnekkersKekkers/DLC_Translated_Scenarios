ChLayout(1);
BGOpen("sc512",0);
ScrFadeIn(0);
MsgDisp("主人公","(Hm?
Is that someone I know over there...)");
MsgClose();
BGMPlay("BGM_C37_OSAKO_A",0.01);
ChOpen(37,254,0,0,0,#1,#1,0,0);
VoicePlay("D031100600_37_000");
MsgDisp("Osako","Ossu!
Long time no see～");
MsgDisp("主人公","Osako-sensei, hello!
It's been a while since I ran into you and
Onari-sensei at the cafeteria.");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031100600_37_010");
MsgDisp("Osako","That's right.
I've got some news for you.");
MsgDisp("主人公","What's up?");
ChEye(37,2);
ChMouth(37,0);
VoicePlay("D031100600_37_020");
MsgDisp("Osako","Onari— hate to say it, but he failed the
teaching certification exam.");
MsgDisp("主人公","What∋
Onari-sensei didn't pass?");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031100600_37_030");
MsgDisp("Osako","Yeah, he got the results back in December.
But he's still got another shot.
A guy like him would make a great teacher.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(37);
MsgDisp("主人公","(If it was back in December, then during the
ice cream contest he already knew...
Is that why he seemed a little off?)");
MsgDisp("主人公","(...I want to see Onari-sensei again
and talk to him...)");
MsgSel("I should check that convenience store!","There's no way I'd just run into him...");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","(I'll swing by that convenience store.
Onari-sensei seems to love the ice cream
there, so maybe I'll run into him!)");
    break ;
    case 1:
    MsgDisp("主人公","(But there's no way I'd just run into him...
I should probably give up.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
