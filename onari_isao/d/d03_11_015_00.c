ChLayout(1);
BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yes!
I can't wait to tell Onari-sensei.
He'll be happy, right!)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex350",0);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
Wait(70,0);
ChOpen(33,254,0,1,0,#1,#1,0,0);
VoicePlay("D031101500_33_000");
MsgDisp("Yotakado B?","We meet again.
This must be karma from a past life.");
MsgDisp("主人公","Umm...");
ChEye(33,0);
ChMouth(33,1);
VoicePlay("D031101500_33_010");
MsgDisp("Yotakado B?","Huh? You don't get it?
The thread of fate connecting us
is way thicker than the one with Success.");
MsgDisp("主人公","Oh! From Yotakado?");
ChPosition(33,1);
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(34,254,0,1,0,#1,#1,0,2);
SEWait();
VoicePlay("D031101500_34_020");
MsgDisp("Yotakado A","She forgot you.");
MsgDisp("主人公","Oh! Nora-san, hi.");
ChEye(34,0);
ChMouth(34,0);
VoicePlay("D031101500_34_030");
MsgDisp("Yotakado A","She remembers me.");
ChEye(33,1);
ChMouth(33,1);
VoicePlay("D031101500_33_040");
MsgDisp("Yotakado B","Shut it.
She'll remember me from today.");
MsgDisp("主人公","Yes.");
ChEye(33,0);
ChMouth(33,0);
VoicePlay("D031101500_33_050");
MsgDisp("Yotakado B","Alright, we're off to find our destiny in the
city.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(33);
MsgDisp("主人公","Finding your destiny...?");
ChEye(34,2);
ChMouth(34,0);
VoicePlay("D031101500_34_060");
MsgDisp("Yotakado A","Picking up girls.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(34);
MsgDisp("主人公",".......");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_088");
BGOpen("ex340",0);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C11_ONARI_A",0.01);
ChOpen(11,40,4,0,4,#1,#1,0,0);
VoicePlay("D031101500_11_000");
MsgDisp("Onari","Hey.");
MsgDisp("主人公","Onari-sensei!
I got results I'm happy with on my finals!");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,3);
VoicePlay("D031101500_11_010");
MsgDisp("Onari","Good.
Keep it up and you'll get into that elite
university.");
MsgDisp("主人公","Yes!
I'm going to get in and become a teacher just
like Onari-sensei...!");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031101500_11_020");
MsgDisp("Onari","You already are one.");
MsgDisp("主人公","Huh?");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,4);
VoicePlay("D031101500_11_030");
MsgDisp("Onari","You were talking with those guys naturally.
You're already the kind of teacher I am.");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031101500_11_040");
MsgDisp("Onari","So become the kind of teacher
that only you can be.");
MsgDisp("主人公","Onari-sensei...
Yes!
Please keep tutoring me today too.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,4);
VoicePlay("D031101500_11_050");
MsgDisp("Onari","Sure.
But can you give me one day off from the cram
school?");
MsgDisp("主人公","Oh... of course.
I'm sorry for always making you come out when
you're so busy.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,2);
VoicePlay("D031101500_11_060");
MsgDisp("Onari","That's not what I mean.
I want to go on a date.");
MsgDisp("主人公","Huh... what∋");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,4);
VoicePlay("D031101500_11_070");
MsgDisp("Onari","I've always loved summer festivals.
What about you?
Come to the fireworks show with me next month.");
MsgDisp("主人公","(Going to the fireworks show with
Onari-sensei...
What do I do∋)");
MsgSel("I'd love to, please!","I don't have time to play during summer break!");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Yes! I'd love to.");
    ChEye(11,0);
    ChMouth(11,0);
    ChMotion(11,0);
    VoicePlay("D031101500_11_080");
    MsgDisp("Onari","Great.
Then let's get some choco mint ice cream and
get started.");
    ChEye(11,0);
    ChMouth(11,3);
    ChMotion(11,1);
    VoicePlay("D031101500_11_090");
    MsgDisp("Onari","King size today.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(11);
    MsgDisp("主人公","(A date with Onari-sensei at the fireworks show...
It's on August 6th this year, right? I can't wait!
I'm going to study extra hard until then!)");
    break ;
    case 1:
    MsgDisp("主人公","I don't have time to play during summer
break.");
    ChEye(11,0);
    ChMouth(11,0);
    ChMotion(11,0);
    VoicePlay("D031101500_11_100");
    MsgDisp("Onari","You're right.
You can go even further.");
    MsgDisp("主人公","...I'm sorry.");
    ChEye(11,0);
    ChMouth(11,0);
    ChMotion(11,2);
    ChEyeOpenLevel(11,0);
    VoicePlay("D031101500_11_110");
    MsgDisp("Onari","I understand wanting to push yourself
until you feel satisfied.");
    MsgDisp("主人公","Yes.");
    ChEye(11,0);
    ChMouth(11,4);
    ChMotion(11,4);
    VoicePlay("D031101500_11_120");
    MsgDisp("Onari","I was actually going to say this at the
fireworks show.
...The cram school has done its job.");
    MsgDisp("主人公","What?");
    ChEye(11,0);
    ChMouth(11,4);
    ChMotion(11,0);
    VoicePlay("D031101500_11_130");
    MsgDisp("Onari","You should be studying at a higher level now.
Teaching you on the side isn't enough
anymore.");
    MsgDisp("主人公","But...");
    ChEye(11,1);
    ChMouth(11,4);
    ChMotion(11,2);
    VoicePlay("D031101500_11_140");
    MsgDisp("Onari","And besides, there are kids who need me all
over the place.
I have to be the one to teach them.");
    MsgDisp("主人公","Onari-sensei...");
    ChEye(11,1);
    ChMouth(11,0);
    ChMotion(11,3);
    VoicePlay("D031101500_11_150");
    MsgDisp("Onari","I need to run the cram school for those guys
now.
You go on ahead.");
    MsgDisp("主人公","...Yes.");
    ChEye(11,0);
    ChMouth(11,0);
    ChMotion(11,2);
    VoicePlay("D031101500_11_160");
    MsgDisp("Onari","I'm going to go round them up.
Who knows if I'll actually get them to the
point of studying, though.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(11);
    MsgDisp("主人公","(Onari-sensei...
You're right — for the sake of the Yotakado students,
I should graduate from the cram school)");
    break ;
    default ;
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
