ChLayout(1);
BGOpen("sc310",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'll stop by that convenience store on my way home.
I've been going there a bunch, but I still
haven't managed to run into Onari-san...)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex350",0);
ScrFadeIn(0);
MsgDisp("主人公","(He's not here today either～...
Maybe bumping into him by chance is just
impossible.)");
MsgDisp("主人公","(...Onari-san's favorite chocolate mint ice
cream was really good, though.
I'll grab one before I head home.)");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_088");
BGOpen("ex340",0);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C11_ONARI_A",0.01);
ChOpen(11,255,4,0,4,-1,-1,0,0);
VoicePlay("D031100700_11_000");
MsgDisp("Onari","Hey.");
MsgDisp("主人公","Onari-san∈");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
ChEyeOpenLevel(11,8);
VoicePlay("D031100700_11_010");
MsgDisp("Onari","I'm not a teacher anymore, you know.");
MsgDisp("主人公","Oh, I'm sorry...");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,2);
ChEyeOpenLevel(11,8);
VoicePlay("D031100700_11_020");
MsgDisp("Onari","Wait, you already knew?
That I failed the exam.");
MsgDisp("主人公","Um, yes.
Osako-san told me.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
ChEyeOpenLevel(11,0);
VoicePlay("D031100700_11_030");
MsgDisp("Onari","Well, that saves me the explanation.
So yeah, I'm not a teacher.");
MsgDisp("主人公","(Onari-san seems a little different again...)");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
ChEyeOpenLevel(11,8);
MsgDisp("主人公","Um, what about the next exam?");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,2);
ChEyeOpenLevel(11,8);
VoicePlay("D031100700_11_040");
MsgDisp("Onari","Nah.
Even if I became a teacher, I wouldn't be
helping anyone.");
MsgDisp("主人公","Why do you say that?");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
VoicePlay("D031100700_11_050");
MsgDisp("Onari","Hm?");
MsgDisp("主人公","Seeing you work so hard, Onari-san...
it made me want to try harder too.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,2);
VoicePlay("D031100700_11_060");
MsgDisp("Onari","Huh, really?
How come?");
MsgDisp("主人公","I think it's because...
I kept seeing you in the park, practicing
your introductions and lessons so earnestly...");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,4);
VoicePlay("D031100700_11_070");
MsgDisp("Onari","And watching me made you work harder at
something?");
MsgDisp("主人公","Well...
Not yet, really...");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031100700_11_080");
MsgDisp("Onari","I see. Heh, well, thanks anyway.
I'm glad someone like you was there.
The student teaching alone was worth it.");
MsgDisp("主人公","(What do I do...
At this rate, Onari-san might give up on
becoming a teacher for good.)");
MsgSel("I'll study hard too. So please...","But there's nothing I can say...");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","I'll work really hard at studying too.
So please, Onari-san, don't give up on the
teaching exam.");
    ChEye(11,0);
    ChMouth(11,0);
    ChMotion(11,1);
    VoicePlay("D031100700_11_090");
    MsgDisp("Onari","Okay, deal.
Then how about we open up a convenience store
cram school?");
    MsgDisp("主人公","...Huh?");
    ChEye(11,0);
    ChMouth(11,0);
    ChMotion(11,0);
    VoicePlay("D031100700_11_100");
    MsgDisp("Onari","I practice my teaching.
You aim for the top of your class on the next
finals.");
    ChEye(11,0);
    ChMouth(11,0);
    ChMotion(11,3);
    VoicePlay("D031100700_11_110");
    MsgDisp("Onari","If you make it to the top,
then maybe my teaching isn't so bad after all.");
    MsgDisp("主人公","Then you won't give up on the teaching exam?");
    ChEye(11,0);
    ChMouth(11,4);
    ChMotion(11,2);
    VoicePlay("D031100700_11_120");
    MsgDisp("Onari","Depends on your final exam results.
The next one's in July, right?");
    MsgDisp("主人公","Yes.");
    ChEye(11,3);
    ChMouth(11,0);
    ChMotion(11,1);
    ChEyeOpenLevel(11,0);
    VoicePlay("D031100700_11_130");
    MsgDisp("Onari","Then let's do it over there, with ice cream.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(11);
    MsgDisp("主人公","(All right!
Onari-san's convenience store cram school --
here I come!)");
    break ;
    case 1:
    MsgDisp("主人公","............");
    ChEye(11,0);
    ChMouth(11,0);
    ChMotion(11,3);
    VoicePlay("D031100700_11_140");
    MsgDisp("Onari","It's okay.
No need to rush -- you'll find something worth working hard for.
See you around.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(11);
    MsgDisp("主人公","(Yeah, I should focus on myself first.
I need to find something I can pour my heart
into...)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
