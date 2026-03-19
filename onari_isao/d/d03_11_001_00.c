ChLayout(1);
BGOpen("sc300",0);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_019");
SEWait();
VoicePlay("D031100100_07_000");
MsgDisp("Mikage","Hey, mornin'.");
VoicePlay("D031100100_38_000");
MsgDisp("Students","Good morning!");
MsgDisp("主人公","Good morning.");
MsgClose();
ScrFadeOut(0);
BGOpen("sc320",0);
Wait(40);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoicePlay("D031100100_07_010");
MsgDisp("Mikage","...Today I've got a surprise for you.
We're getting teaching interns.");
VoicePlay("D031100100_38_010");
MsgDisp("Students","Yay!
What are they like?");
VoicePlay("D031100100_42_020");
MsgDisp("Boy A","Is it a lady teacher?");
VoicePlay("D031100100_44_000");
MsgDisp("Girl A","I hope it's a cute guy～.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
ChEyeOpenLevel(7,8);
VoicePlay("D031100100_07_020");
MsgDisp("Mikage","Which will it be?
A fresh-faced college student who's――");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("D031100100_07_030");
MsgDisp("Mikage","Oops, my job ends here.
I'll leave the rest to the supervising
teacher, Osako-san from the middle school.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("D031100100_07_040");
MsgDisp("Mikage","So sit tight and behave, got it?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(7);
SEPlay("EV_SE_DOOR_019");
Wait(15,0);
MsgClose();
ScrFadeOut(0);
SEWait();
BGOpen("sc300",0);
Wait(40);
ScrFadeIn(0);
MsgDisp("主人公","(A teaching intern...
A college student training to be a teacher.
I wonder what they'll be like?)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
VoicePlay("D031100100_37_000");
MsgDisp("Osako?","Mikage's class is...
Oh, here it is～!");
SEPlay("EV_SE_DOOR_019");
SEWait();
SEPlay("EV_SE_566",1,0.2);
SEPlay("EV_SE_860",1,0.7);
VoicePlay("D031100100_45_000");
MsgDisp("Girl B","Huh? There's two of them?");
VoicePlay("D031100100_41_050");
MsgDisp("Boy B","Are they really teaching interns?");
VoicePlay("D031100100_44_010");
MsgDisp("Girl A","They don't really look like college
students...");
VoicePlay("D031100100_45_010");
MsgDisp("Girl B","Yeah... more like middle schoolers?");
SEStop("EV_SE_566",0.3);
SEStop("EV_SE_860",0.3);
MsgClose();
ScrFadeOut(0);
BGOpen("sc320",0);
Wait(40);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
BGMPlay("BGM_C11_ONARI_A",0.01);
ChOpen(37,254,0,1,1,#1,#1,0,2,0,30);
ChOpen(11,254,0,0,4,7,#1,0,1,0,30);
VoicePlay("D031100100_37_010");
MsgDisp("Osako?","Hey now!
Who're you calling a middle schooler～?");
MsgDisp("主人公","(Huh? That person on the left...
That's the guy from the park
the other day, right?)");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031100100_37_020");
MsgDisp("Osako?","Ossu∈
I'm Osako, a Haba High middle school teacher.
The teaching intern is this guy right here.");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031100100_37_030");
MsgDisp("Osako","Starting today, he'll be teaching in the
high school for two weeks. He's a Haba High
alum, so he's technically your senior.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,4);
ChEyeOpenLevel(11,7);
ChMouthOpenLevel(11,0);
VoicePlay("D031100100_11_000");
MsgDisp("Onari?","............");
ChEye(37,0);
ChMouth(37,2);
VoicePlay("D031100100_37_040");
MsgDisp("Osako","Hey, you alright?");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
VoicePlay("D031100100_11_010");
MsgDisp("Onari?","Oh, yes. I'm Great Success.");
MsgDisp("主人公","(Great Success?
I knew it, it's him!)");
VoicePlay("D031100100_42_080");
MsgDisp("Boy A","What's \"Great Success\" mean?");
ChEye(37,0);
ChMouth(37,0);
ChEyeOpenLevel(37,8);
VoicePlay("D031100100_37_050");
MsgDisp("Osako","Hahah.
Same as always, doing things at your own
pace.");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031100100_37_060");
MsgDisp("Osako","Well, do your best.
And you guys, take care of him～.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(37);
ChPosition(11,0);
VoicePlay("D031100100_42_090");
MsgDisp("Boy A","Ah, the short teacher left.");
VoicePlay("D031100100_41_100");
MsgDisp("Boy B","And the intern is totally frozen, isn't he?");
VoicePlay("D031100100_44_020");
MsgDisp("Girl A","Yeah.
But he's kind of cute, maybe?");
MsgDisp("主人公","(He's not saying anything at all...
Is he gonna be okay...?)");
SEPlay("EV_SE_515",0,0.6);
Wait(30,0);
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,4);
VoicePlay("D031100100_11_020");
MsgDisp("Onari?","Ah......");
MsgClose();
BGMVol(0.5,2);
ChClose(11);
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_067");
SEWait();
BGOpen("sc322",0);
ScrFadeIn(0);
MsgClose();
ChOpen(11,254,3,0,4,#1,#1,0,0);
VoicePlay("D031100100_42_120");
MsgDisp("Boy A","...Great Success?");
VoicePlay("D031100100_41_130");
MsgDisp("Boy B","Sir, what's been so \"Great Success\" this
whole time?");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
VoicePlay("D031100100_11_030");
MsgDisp("Onari","It's read as \"Great Success.\"
It's my name...");
SEPlay("EV_SE_788",0.2,0.5);
SEPlay("EV_SE_GAYA_007",0.01,0.25);
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,1);
VoicePlay("D031100100_11_040");
MsgDisp("Onari","Even failure can lead to GREAT SUCCESS!
A 100% success rate!
I'm Onari... Great Success.");
SEPlay("EV_SE_GAYA_017",0,0.8);
MsgDisp("主人公","(...Oh! The \"Great Success\" thing
he was saying in the park ―
it was practice for his self-introduction!)");
VoicePlay("D031100100_42_140");
MsgDisp("Boy A","Is that your go-to bit, sir?");
VoicePlay("D031100100_41_150");
MsgDisp("Boy B","Hmm, it kinda fell flat, though.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,2);
VoicePlay("D031100100_11_050");
MsgDisp("Onari","Really...
Maybe I should've gone with this one instead?
Great Failure.");
VoicePlay("D031100100_42_160");
MsgDisp("Boy A","You're already failing right out the gate!");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031100100_11_060");
MsgDisp("Onari","Yeah, you've got a point.");
SEPlay("EV_SE_GAYA_022");
VoicePlay("D031100100_41_170");
MsgDisp("Boy B","See, that's no good either.
You gotta sell it with more energy～.");
MsgDisp("主人公","(Hehe.
He's a little unusual, but he seems like a
kind teacher.)");
SEStop("EV_SE_GAYA_022",2);
MsgDisp("主人公","(What would I rate Onari-san's
self-introduction...?)");
MsgSel("Yep, Great Success!","Hmm, maybe a failure?");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","(Yeah, it was funny, so it's definitely a
\"Great Success\"!
After all, he practiced so hard for it.)");
    break ;
    case 1:
    MsgDisp("主人公","(Hmm...
It didn't really land, so maybe it was a
failure?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
