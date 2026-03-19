ChLayout(1);
BGOpen("sc310",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm on class duty today, so I need to go to
the staff room to pick up the class journal)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_DOOR_024");
SEWait();
MsgDisp("主人公","Excuse me.");
SEPlay("EV_SE_DOOR_019");
BGOpen("sc360",0);
Wait(35,0);
ScrFadeIn(0);
MsgDisp("主人公","(Huh... is that――)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(37,254,0,0,0,#1,#1,0,0);
VoicePlay("D031101200_37_000");
MsgDisp("Osako","Hey! Long time no see.");
MsgDisp("主人公","Osako-sensei, hello.
Do you have business with the high school?");
ChEye(37,1);
ChMouth(37,0);
VoicePlay("D031101200_37_010");
MsgDisp("Osako","Hey hey! Just a little.
More importantly, looks like
you've been working hard at studying.");
MsgDisp("主人公","Yes.
But how did you know, Osako-sensei...?");
ChEye(37,1);
ChMouth(37,0);
ChEyeOpenLevel(37,8);
VoicePlay("D031101200_37_020");
MsgDisp("Osako","Heh heh.
Hey, over here.");
VoicePlay("D031101200_11_000");
MsgDisp("Onari?","Hey.");
MsgDisp("主人公","!");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChPosition(37,1);
MsgClose();
SEWait();
ChOpen(11,254,4,0,4,#1,#1,0,2);
MsgDisp("主人公","Onari-sensei∋");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031101200_11_010");
MsgDisp("Onari","I got my posting, so I came to say hello.");
ChEye(37,0);
ChMouth(37,0);
ChEyeOpenLevel(37,8);
VoicePlay("D031101200_37_030");
MsgDisp("Osako","Ha, you're a whole year behind everyone else.
Always at your own pace —
I love it.");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,4);
VoicePlay("D031101200_11_020");
MsgDisp("Onari","That time was good for me, though.
...Right?");
MsgDisp("主人公","Oh... yes!");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031101200_37_040");
MsgDisp("Osako","Sounds like someone had quite the youth~.");
MsgDisp("主人公","My youth?");
ChEye(37,1);
ChMouth(37,0);
VoicePlay("D031101200_37_050");
MsgDisp("Osako","Yes indeed, sweet and bittersweet youth.");
SEPlay("EV_SE_587",0,0.6);
SEWait();
ChEye(37,2);
ChMouth(37,0);
VoicePlay("D031101200_37_060");
MsgDisp("Osako","Ah, s-sorry about that.");
MsgDisp("主人公","Hehe.
Congratulations, Onari-sensei!");
ChEye(11,3);
ChMouth(11,0);
ChMotion(11,1);
ChEyeOpenLevel(11,0);
VoicePlay("D031101200_11_030");
MsgDisp("Onari","Thanks.
Well, I'm going to go greet the principal and
vice principal.");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031101200_11_040");
MsgDisp("Onari","Excuse me, Osako-sensei.");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031101200_37_070");
MsgDisp("Osako","Sure, see ya. Good luck!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(11);
ChPosition(37,0);
MsgDisp("主人公","(Yes!
I get to be in Onari-sensei's class again...)");
ChEye(37,0);
ChMouth(37,0);
ChEyeOpenLevel(37,8);
VoicePlay("D031101200_37_080");
MsgDisp("Osako","That guy's changed.
Was that thanks to you?");
MsgDisp("主人公","Oh, I don't think I had anything to do with
it.");
ChEye(37,0);
ChMouth(37,0);
ChEyeOpenLevel(37,0);
VoicePlay("D031101200_37_090");
MsgDisp("Osako","No, it's something a teacher couldn't do.
...Thank you.");
MsgDisp("主人公","Osako-sensei...");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031101200_37_100");
MsgDisp("Osako","Oh, that's right!
Why don't you become a teacher too?");
MsgDisp("主人公","What?");
ChEye(37,1);
ChMouth(37,0);
VoicePlay("D031101200_37_110");
MsgDisp("Osako","Think about it~.
Career guidance is coming up soon, right?");
MsgDisp("主人公","(Me... a teacher?)");
MsgSel("Aim for an elite university and become a teacher!","That's probably impossible for me...");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Alright! I'll work hard to get into an elite
university like Onari-sensei and become
a teacher here at Habataki!");
    ChEye(37,0);
    ChMouth(37,0);
    VoicePlay("D031101200_37_120");
    MsgDisp("Osako","Hahaha!
Now that's the spirit.
Go for it~!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(37);
    VoicePlay("D031101200_37_130");
    MsgDisp("Osako","Oh, Onari's posting isn't at Habataki, by the
way~.
It's Yotakado.");
    MsgDisp("主人公","Huh?
...Yotakado?");
    VoicePlay("D031101200_37_140");
    MsgDisp("Osako","That's right. Yotakado Technical High School.");
    MsgClose();
    ScrFadeOut(0);
    MsgDisp("主人公","(Ehhhh∋
Onari-sensei's posting isn't at Habataki...
I wonder where Yotakado High School even is?)");
    break ;
    case 1:
    MsgDisp("主人公","Become a teacher...
I don't think that's possible for me.");
    ChEye(37,1);
    ChMouth(37,0);
    VoicePlay("D031101200_37_150");
    MsgDisp("Osako","It's not up to anyone else to decide
what's possible for you~.");
    MsgDisp("主人公","...Yes.");
    ChEye(37,0);
    ChMouth(37,0);
    VoicePlay("D031101200_37_160");
    MsgDisp("Osako","You and Onari are a lot alike, you know.
Take your time, think it through, and decide
when you're ready. See ya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(37);
    MsgDisp("主人公","Oh, is Onari-sensei being posted to the high
school?");
    VoicePlay("D031101200_37_170");
    MsgDisp("Osako","Hmm?
Onari's posting isn't at Habataki~.
It's Yotakado High School.");
    MsgDisp("主人公","Yotakado?");
    VoicePlay("D031101200_37_180");
    MsgDisp("Osako","That's right. Yotakado Technical High School.");
    MsgClose();
    ScrFadeOut(0);
    MsgDisp("主人公","(So it's not Habataki... That means
I won't get to see Onari-sensei anymore.
It's lonely, but I guess it can't be helped...)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
