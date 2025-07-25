ChLayout(1);
BGOpen("sc100",0);
ScrFadeIn(0);
MsgDisp("主人公","(Let's quit the judo club...)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc602",0);
MsgClose();
ChOpen(37,254,0,0,2,#1,#1,0,0);
BGMPlay("BGM_C37_OSAKO_A",0.01);
ScrFadeIn(0);
VoicePlay("D031010000_37_000");
MsgDisp("Osako","Hey.
You've still got a long way to go.
The path of judo is a long one, you know?");
MsgDisp("主人公","I'm strong...?");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031010000_37_010");
MsgDisp("Osako","That's right!
Is it really okay to quit?");
MsgSel("I'll continue after all.","I want to quit.");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(37,1);
    ChMouth(37,0);
    VoicePlay("D031010000_37_020");
    MsgDisp("Osako","It's as I said.
You should do your best～");
    MsgDisp("主人公","Yes...!");
    MsgDisp("主人公","(Yeah, let's continue with the Judo Club a
bit longer!)");
    break ;
    case 1:
    ChEye(37,0);
    ChMouth(37,0);
    ChEyeOpenLevel(37,0);
    VoicePlay("D031010000_37_030");
    MsgDisp("Osako","Right, you're choosing another path.
That's also youth.
I'm rooting for you.");
    MsgDisp("主人公","Yes, thank you very much.");
    MsgDisp("","(I left the judo club.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
