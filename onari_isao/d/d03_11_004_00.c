ChLayout(1);
BGOpen("ex080",0);
ScrFadeIn(0);
MsgDisp("主人公","(Today I'm having lunch in the cafeteria.)");
VoicePlay("D031100400_44_000");
MsgDisp("Girl A","Hey, what should we get?");
MsgDisp("主人公","Hmm, everything looks so good,
it's hard to decide.");
VoicePlay("D031100400_45_000");
MsgDisp("Girl B","That's amazing!
Onari-sensei!");
VoicePlay("D031100400_42_020");
MsgDisp("Boy","You can do it, both of you!");
MsgDisp("主人公","?");
MsgClose();
ScrFadeOut(0);
StlOpen("ev_11_04");
StlEye(11,0);
StlMouth(11,0);
StlEye(37,0);
StlMouth(37,0);
BGMPlay("BGM_C11_ONARI_A",0.01);
ScrFadeIn(0);
MsgDisp("主人公","(That's...
Onari-sensei and Osako-san∋)");
StlEye(37,0);
StlMouth(37,0);
VoicePlay("D031100400_37_000");
MsgDisp("Osako","Not bad, Onari〜
You're not even breaking a sweat, are you?");
StlEye(11,0);
StlMouth(11,1);
VoicePlay("D031100400_11_000");
MsgDisp("Onari","That was some delicious mapo tofu.");
StlEye(37,1);
StlMouth(37,0);
VoicePlay("D031100400_42_030");
MsgDisp("Boy","Even the regular ultra-spicy mapo is brutal,
and that was ten times the heat?");
MsgDisp("主人公","What?!
Ten times the spiciness∋");
VoicePlay("D031100400_44_010");
MsgDisp("Girl A","That's seriously insane, Onari-sensei.");
StlEye(11,1,0);
StlMouth(11,0);
StlEyeOpenLevel(11,5,1);
VoicePlay("D031100400_11_010");
MsgDisp("Onari","Am I... insane?");
StlEye(37,0,0);
StlMouth(37,0);
StlEyeOpenLevel(37,0,1);
VoicePlay("D031100400_37_010");
MsgDisp("Osako","Oh yeah, you always were.
And it's not just spice, you're a huge eater,
too.");
MsgDisp("主人公","(Onari-sensei loves spicy food and eats a
ton. That's kind of unexpected...)");
StlEye(11,0);
StlMouth(11,0);
VoicePlay("D031100400_11_020");
MsgDisp("Onari","I just never feel full, that's all.");
MsgClose();
ScrFadeOut(0);
StlClose();
BGOpen("ex090",0);
ChLayout(3);
MsgClose();
ChOpen(37,254,0,0,0,#1,#1,0,2,0,30);
ChOpen(11,254,4,0,4,0,#1,0,1,0,30);
BGMVol(0.5,2);
ScrFadeIn(0);
MsgDisp("主人公","Onari-sensei, is your stomach okay?");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
VoicePlay("D031100400_11_030");
MsgDisp("Onari","Yeah.
Why?");
ChEye(37,2);
ChMouth(37,0);
VoicePlay("D031100400_37_020");
MsgDisp("Osako","Hee, hoo...
I can't keep up with you.
The heat is coming back to haunt me.");
VoicePlay("D031100400_42_050");
MsgDisp("Boy","Hahaha!
Your face is all red, little teach.");
VoicePlay("D031100400_44_020");
MsgDisp("Girl A","Hehe, kinda cute, maybe?");
ChEye(37,1);
ChMouth(37,0);
VoicePlay("D031100400_37_030");
MsgDisp("Osako","Hey, you brats!
I may be small, but I pack a punch!
A BIG punch〜!");
SEPlay("EV_SE_621");
Wait(30,0);
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(37);
VoicePlay("D031100400_37_040");
MsgDisp("Osako","Excuse me!
Can I get some water?!");
VoicePlay("D031100400_44_030");
MsgDisp("Girl A","Are you okay〜?
The water's over there.");
VoicePlay("D031100400_42_080");
MsgDisp("Boy","Hahaha!");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,2);
ChEyeOpenLevel(11,7);
VoicePlay("D031100400_11_040");
MsgDisp("Onari","...I really can't compete with him.");
MsgDisp("主人公","Huh?");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,4);
VoicePlay("D031100400_11_050");
MsgDisp("Onari","That thing Osako-san says— \"I may be small,
but I pack a big punch.\" I tried copying it
for my self-introduction.");
MsgDisp("主人公","Oh...
\"Even failure can lead to Great Success\"?");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,3);
ChEyeOpenLevel(11,0);
VoicePlay("D031100400_11_060");
MsgDisp("Onari","Yeah.
I even won the spicy food challenge.
But in the end, everyone flocks to Osako-san.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
VoicePlay("D031100400_11_070");
MsgDisp("Onari","?
...Wait, shouldn't you be with your friends?");
MsgDisp("主人公","Huh?
Well, I...");
MsgSel("I have more fun with you, Onari-sensei.","My friends are waiting, so I should go.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","I have more fun with you, Onari-sensei.");
    ChEye(11,0);
    ChMouth(11,0);
    ChMotion(11,4);
    VoicePlay("D031100400_11_080");
    MsgDisp("Onari","Huh. It was only two weeks, but it really
helped having someone like you around.
Thank you.");
    MsgClose();
    SEPlay("EV_SE_713");
    Wait(30,0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(11);
    MsgDisp("主人公","(Oh, right... the practicum is almost over.
I hope Onari-sensei gets assigned to
Habataki.)");
    break ;
    case 1:
    MsgDisp("主人公","My friends are over there, so excuse me.");
    ChEye(11,0);
    ChMouth(11,0);
    ChMotion(11,4);
    VoicePlay("D031100400_11_090");
    MsgDisp("Onari","I see. It was only two weeks, but it really
helped having someone like you around.
Thank you.");
    MsgClose();
    SEPlay("EV_SE_713");
    Wait(30,0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(11);
    MsgDisp("主人公","(Onari-sensei's practicum is ending...
It went by so fast.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
ChLayout(1);
