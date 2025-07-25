ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
MsgDisp("主人公","(Tomoe-san came to watch us practice again
today!)");
MsgClose();
BGMPlay("BGM_C37_OSAKO_A",0.01);
ChOpen(37,254,0,1,0,#1,#1,0,0);
VoicePlay("D031000800_37_000");
MsgDisp("Osako","Alright!
Great work, everyone.");
ChEye(37,1);
ChMouth(37,0);
VoicePlay("D031000800_37_010");
MsgDisp("Osako","Hey, Tomoe.
How's training been going at the dojo
lately?");
ChPosition(37,1);
MsgClose();
SEPlay("EV_SE_692");
ChOpen(10,37,0,1,4,#1,#1,0,2);
VoicePlay("D031000800_10_000");
MsgDisp("Tomoe","It doesn't matter where you do it.
Training is training.");
MsgClose();
SEPlay("EV_SE_690");
ChClose(10);
ChEye(37,2);
ChMouth(37,0);
ChPosition(37,0);
VoicePlay("D031000800_37_020");
MsgDisp("Osako","My bad, my bad.
Come out again sometime.");
MsgDisp("主人公","Hehe.");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031000800_37_030");
MsgDisp("Osako","Did you say something?
I was also asked to do something about
him, so you saved me.");
MsgClose();
SEPlay("EV_SE_690");
BGMStop();
ChClose(37);
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc131",1);
ScrFadeIn(0);
VoicePlay("D031000800_48_000");
MsgDisp("Member","Huh?
Over there.
Is that Tomoe-chan?");
MsgDisp("主人公","Eh?");
VoicePlay("D031000800_48_010");
MsgDisp("Member","In casual clothes he really looks like a
cute girl.
Okay, byebye!");
MsgDisp("主人公","Yeah, see you later!");
MsgDisp("主人公","(I wonder if Tomoe-san is waiting for
someone...?)");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
MsgClose();
BGMPlay("BGM_C10_TOMOE_A",0.01);
ChOpen(10,255,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Tomoe-san.
Did you change your clothes?");
ChEye(10,1);
ChMouth(10,4);
ChMotion(10,1);
VoicePlay("D031000800_10_010");
MsgDisp("Tomoe","Huh?
Did you forget our agreement?
I watched you guys practice properly.");
MsgDisp("主人公","Eh...
Do you maybe mean, right now?");
ChEye(10,1);
ChMouth(10,0);
ChMotion(10,4);
VoicePlay("D031000800_10_020");
MsgDisp("Tomoe","Yeah.
It's difficult to go there in a boy's
uniform.");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(10,0,0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp710",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
SEPlay("EV_SE_652");
ScrFadeIn(0);
MsgDisp("主人公","This shop is really really cute, isn't it?");
MsgClose();
ChOpen(10,255,0,0,0,#1,#1,0,0);
VoicePlay("D031000800_10_030");
MsgDisp("Tomoe","Yeah, but it's not only cute.
It also feels powerful and confident.");
ChEye(10,3);
ChMouth(10,3);
ChMotion(10,3);
VoicePlay("D031000800_10_040");
MsgDisp("Tomoe","Look at the display over there.
That looks more strong than cute to me.");
MsgDisp("主人公","Cute and strong...
Hehe, that sounds just like Tomoe-san.");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,3);
VoicePlay("D031000800_10_050");
MsgDisp("Tomoe","Hmm...
That makes me kinda happy.");
ChEye(10,0);
ChMouth(10,3);
ChMotion(10,5);
VoicePlay("D031000800_10_060");
MsgDisp("Tomoe","Ah, look!
Over here!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(10);
MsgDisp("主人公","(Tomoe-san looks like he's having fun!)");
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp100",1);
ScrFadeIn(0);
MsgClose();
ChOpen(10,255,4,0,0,#1,#1,10,0);
VoicePlay("D031000800_10_070");
MsgDisp("Tomoe","Thank you...for toda-");
ChEye(10,1);
ChMouth(10,4);
ChMotion(10,5);
VoicePlay("D031000800_10_080");
MsgDisp("Tomoe","Well, it's just part of our contract.");
MsgDisp("主人公","Hehe, yeah.
But you know, I didn't expect Tomoe-san to
be so knowledgeable about fashion.");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,0);
ChCheek(10,0);
VoicePlay("D031000800_10_090");
MsgDisp("Tomoe","I like it.
You can look at clothes, wear them, design
them...");
MsgDisp("主人公","Ehh, do you design clothes too?");
BGMStop(0.5);
VoicePlay("D031000800_33_020");
MsgDisp("Guy?","Just like it was predicted.
You two were foretold by the prophecy.");
MsgDisp("主人公","...?");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChPosition(10,1);
MsgClose();
SEWait();
BGMPlay("BGM_HANYOU_C",0.01);
ChOpen(33,254,0,0,0,#1,#1,0,2);
VoicePlay("D031000800_33_030");
MsgDisp("Guy","Meeting a cute pair in the Shopping
District.
This was foretold long ago.");
MsgDisp("主人公","Tomoe-san...");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,1);
ChEyeOpenLevel(10,7);
VoicePlay("D031000800_10_100");
MsgDisp("Tomoe","He's calling you cute, right?");
ChEye(33,0);
ChMouth(33,0);
ChEyeOpenLevel(33,8);
VoicePlay("D031000800_33_040");
MsgDisp("Guy","No, it's both of you.
Both Tomoe-chan and You-chan are cute.");
ChEye(10,0);
ChMouth(10,3);
ChMotion(10,3);
VoicePlay("D031000800_10_110");
MsgDisp("Tomoe","You-chan?
Interesting choice of words.");
ChEye(33,1);
ChMouth(33,0);
VoicePlay("D031000800_33_050");
MsgDisp("Guy","Isn't it? Let's go together then. There's
something I'd like to show the two of you.");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,1);
ChEyeOpenLevel(10,8);
VoicePlay("D031000800_10_120");
MsgDisp("Tomoe","But you're seriously a fashion don't...
Let's go.");
ChEye(33,2);
ChMouth(33,2);
MsgDisp("主人公","Ah!");
MsgClose();
SEPlay("EV_SE_504");
SEWait();
SEPlay("EV_SE_FOOT_RUN_AWAY_TWO");
ChClose(10);
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(33,0,0);
BGOpen("fp000",1);
VoicePlay("D031000800_33_060");
MsgDisp("Guy","Ahh!
Wait～!");
MsgClose();
Wait(50,0);
SEPlay("EV_SE_FOOT_RUN_COME_TWO");
ScrFadeIn(0);
MsgClose();
SEWait();
ChOpen(10,255,4,0,0,#1,#1,0,0);
VoicePlay("D031000800_10_130");
MsgDisp("Tomoe","...Haa, that was interesting.");
MsgDisp("主人公","Hehe, yeah.
It surprised me a bit, though.
He thought Tomoe-san was a girl, huh?");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,0);
VoicePlay("D031000800_10_140");
MsgDisp("Tomoe","You thought so too at first.");
ChEye(10,0);
ChMouth(10,3);
ChMotion(10,4);
VoicePlay("D031000800_10_150");
MsgDisp("Tomoe","Ah, right. It's fine to call me
\"Tomoe-chan\". That's what girls would call
each other, right?");
MsgDisp("主人公","Y-Yes!
Tomoe-chan.");
ChEye(10,0);
ChMouth(10,4);
ChMotion(10,2);
VoicePlay("D031000800_10_160");
MsgDisp("Tomoe","Uhm...then...
I'll call you You-chan?");
MsgDisp("主人公","Ehhh?
That's what the person from before called
me—");
ChEye(10,3);
ChMouth(10,3);
ChMotion(10,3);
ChEyeOpenLevel(10,0);
VoicePlay("D031000800_10_170");
MsgDisp("Tomoe","Yeah.
His fashion sense was terrible but I liked
You-chan.");
MsgDisp("主人公","Hehe!");
ChEye(10,0);
ChMouth(10,3);
ChMotion(10,0);
VoicePlay("D031000800_10_180");
MsgDisp("Tomoe","See You-chan later then.
I'm going to go train.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(10);
MsgDisp("主人公","Yeah, see you later, Tomoe-chan!");
MsgDisp("主人公","(Today was fun!
I got to talk more about fashion with
Tomoe-chan...)");
MsgSel("Let's try to be stylish!","Style isn't that important to me...");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","(I need to keep on top of the trends if I
want to have fun shopping with
Tomoe-chan!)");
    break ;
    case 1:
    MsgDisp("主人公","(Hmm...
I guess I'm fine with just judo.
Sorry, Tomoe-chan.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
