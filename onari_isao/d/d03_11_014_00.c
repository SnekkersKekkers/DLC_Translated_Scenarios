ChLayout(1);
BGOpen("sc500",1);
ScrFadeIn(0);
MsgDisp("主人公","(Oh, right.
Let me head over to Yotakado today.
Maybe I'll get to see Onari-sensei!)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
EnvAutoSet(0);
BGOpen("ex360",1);
EnvPlay("SE_ENV_BG_SC131_CW1",0.5);
ScrFadeIn(0);
MsgClose();
VoicePlay("D031101400_33_000");
MsgDisp("Yotakado B","Just as I thought, you came back.
I told you — you can't fight destiny.");
VoicePlay("D031101400_39_010");
MsgDisp("Yotakado C","Oh, it's the transfer girl.
Come over here before Success shows up.");
MsgDisp("主人公","Huh?");
MsgDisp("主人公","(Oh, that's what Onari-sensei said.
\"Don't run away,
just step right in\"...)");
VoicePlay("D031101400_39_020");
MsgDisp("Yotakado C","Don't be scared, don't be scared.");
MsgDisp("主人公","(Okay, here goes...)");
MsgSel("Take me to the staff room","Actually, I'm a little scared...");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Sure, then take me to the staff room.");
    VoicePlay("D031101400_33_030");
    MsgDisp("Yotakado B","Ah, that's an unlucky direction.
It's the demon gate.");
    MsgClose();
    SEWait();
    BGMPlay("BGM_C11_ONARI_A",0.01);
    ChOpen(11,40,0,3,3,#1,#1,0,0);
    VoicePlay("D031101400_11_000");
    MsgDisp("Onari","Ha, she wins.
You guys lose.");
    MsgDisp("主人公","Onari-sensei!");
    MsgClose();
    ChClose(11,0,30);
    ChLayout(0);
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(11,40,3,0,0,#1,#1,0,0);
    VoicePlay("D031101400_11_010");
    MsgDisp("Onari","Well done.");
    MsgClose();
    ScrFadeOut(0);
    SEPlay("EV_SE_682",0,0.5);
    MsgDisp("","(pat pat)");
    ScrFadeIn(0);
    MsgDisp("主人公","(Oh...
Onari-sensei just patted me on the head...)");
    VoicePlay("D031101400_33_040");
    MsgDisp("Yotakado B","Hey, Success.
Should you really be doing that
at the school gate? Let's go.");
    VoicePlay("D031101400_39_050");
    MsgDisp("Yotakado C","Ugh, honestly.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_MANY",0,0.4);
    BGOpen("ex361",1);
    ChEye(11,0);
    ChMouth(11,0);
    ChMotion(11,4);
    VoicePlay("D031101400_11_020");
    MsgDisp("Onari","Ha, first time they've ever told me off.
Kind of refreshing.");
    MsgDisp("主人公","Hehe.");
    ChEye(11,0);
    ChMouth(11,0);
    ChMotion(11,0);
    VoicePlay("D031101400_11_030");
    MsgDisp("Onari","Heh...
So, shall we go study?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(11);
    MsgDisp("主人公","(That was a bit of a surprise, but...
Onari-sensei's hand was warm...
I'm glad I was brave!)");
    break ;
    case 1:
    MsgDisp("主人公","(Actually, I'm a little scared...)");
    VoicePlay("D031101400_34_060");
    MsgDisp("Yotakado A","That's Success's girlfriend.");
    MsgClose();
    SEWait();
    BGMPlay("BGM_C11_ONARI_A",0.01);
    ChOpen(11,40,4,1,3,#1,#1,0,0);
    VoicePlay("D031101400_11_040");
    MsgDisp("Onari","You got a problem with my girlfriend?");
    MsgDisp("主人公","Girlfriend∋");
    MsgClose();
    ChClose(11,0,30);
    ChLayout(0);
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(11,40,3,0,0,#1,#1,0,0);
    VoicePlay("D031101400_11_050");
    MsgDisp("Onari","Heh. You held your ground.");
    MsgClose();
    ScrFadeOut(0);
    SEPlay("EV_SE_682",0,0.5);
    MsgDisp("","(pat pat)");
    MsgDisp("主人公","(Oh...
Onari-sensei just patted me on the head...)");
    ScrFadeIn(0);
    VoicePlay("D031101400_34_070");
    MsgDisp("Yotakado A","Should a teacher really be doing that
at the school gate...?");
    VoicePlay("D031101400_39_080");
    MsgDisp("Yotakado C","Ugh, honestly.
Let's go.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_MANY",0,0.4);
    BGOpen("ex361",1);
    ChEye(11,0);
    ChMouth(11,0);
    ChMotion(11,4);
    VoicePlay("D031101400_11_060");
    MsgDisp("Onari","Might be the first time he's ever told me
off.
Kind of refreshing.");
    MsgDisp("主人公","Hehe.");
    ChEye(11,0);
    ChMouth(11,0);
    ChMotion(11,0);
    VoicePlay("D031101400_11_070");
    MsgDisp("Onari","Well then, shall we go study.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(11);
    MsgDisp("主人公","(Haah... my heart was pounding.
But what was that... \"girlfriend\"...
Onari-sensei really does say surprising things sometimes)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
MsgClose();
ScrFadeOut(0);
ChLayout(1);
