ChLayout(1);
BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_787");
SEWait();
MsgDisp("主人公","(Oh, a message from the Haba-Cha editorial
team.)");
MsgDisp("主人公","(\"A Midwinter Ice Cream Eating Contest
is being held on the Habataki shopping street.
Please come cover it\"... it says.)");
MsgDisp("主人公","(It's only until noon...
Okay, I'd better hurry!)");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ne100",0);
ScrFadeIn(0);
MsgDisp("主人公","(Aww...
It looks like the ice cream eating contest
already ended...)");
VoicePlay("D031100500_36_000");
MsgDisp("Staff","Oh, you're from Haba-Cha?");
MsgDisp("主人公","Yes.
Sorry I'm late...!");
VoicePlay("D031100500_36_010");
MsgDisp("Staff","No worries.
A college student won by a landslide, so it
ended earlier than planned.");
VoicePlay("D031100500_36_020");
MsgDisp("Staff","We were hoping for reactions like
\"It's so cold!\" and \"Brain freeze!\"
but he just plowed through it like it was nothing.");
MsgDisp("主人公","Wow, sounds like quite the competitor.");
VoicePlay("D031100500_36_030");
MsgDisp("Staff","Make the article sound exciting, okay?
-- Oh, he's still over there!
Hey, champ! Someone's here to interview you!");
MsgDisp("主人公","Huh...");
MsgClose();
ScrFadeOut(0);
StlOpen("ev_11_02");
StlEye(11,0,0);
StlMouth(11,0);
StlEyeOpenLevel(11,0,1);
BGMPlay("BGM_C11_ONARI_A",0.01);
ScrFadeIn(0);
MsgDisp("主人公","(Oh, it's Onari-san∋
He looks pretty different now∋)");
StlEye(11,1);
StlMouth(11,1);
VoicePlay("D031100500_11_000");
MsgDisp("Onari","Hm?
Oh, hey.
Long time no see.");
MsgDisp("主人公","Oh, hi.
Um... are you still eating ice cream?");
StlEye(11,0);
StlMouth(11,1);
VoicePlay("D031100500_11_010");
MsgDisp("Onari","Yeah.
This convenience store exclusive chocolate
mint is really good.");
MsgDisp("主人公","You just won an ice cream eating contest,
right?
Is your stomach okay?");
StlEye(11,0,0);
StlMouth(11,1);
StlEyeOpenLevel(11,5,1);
VoicePlay("D031100500_11_020");
MsgDisp("Onari","My belt's a little tight, maybe?");
StlEye(11,1);
StlMouth(11,1);
MsgDisp("主人公","I-I mean, doesn't your stomach hurt?");
StlEye(11,1,0);
StlMouth(11,1);
StlEyeOpenLevel(11,5,1);
VoicePlay("D031100500_11_030");
MsgDisp("Onari","Nah, stuff like that doesn't bother me.
I'm kind of numb to it, I guess.");
MsgDisp("主人公","I see...");
MsgDisp("主人公","(Hehe.
Talking to him, he really hasn't changed at
all.)");
MsgClose();
ScrFadeOut(0);
StlClose();
BGOpen("ex350",0);
BGMVol(0.5,2);
ScrFadeIn(0);
MsgClose();
ChOpen(11,255,0,0,4,-1,-1,0,0);
MsgDisp("主人公","I work part-time for Haba-Cha, and I'd like to
interview you about today's contest,
Onari-san... Would that be okay?");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,4);
VoicePlay("D031100500_11_040");
MsgDisp("Onari","Oh, a magazine interview?
Sure, why not.");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ne100",1);
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
ScrFadeIn(0);
MsgDisp("主人公","...Well, I think that about covers it.
Thank you so much!");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
VoicePlay("D031100500_11_050");
MsgDisp("Onari","I'm sure the shopping street folks mentioned
it too, but make it sound like a good time,
okay?");
MsgDisp("主人公","Huh?");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,2);
ChEyeOpenLevel(11,8);
VoicePlay("D031100500_11_060");
MsgDisp("Onari","Things never get exciting when I'm involved.
It was the same at Haba High, right?");
MsgDisp("主人公","I don't think that's true at all...");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
VoicePlay("D031100500_11_070");
MsgDisp("Onari","You said something like that to me before,
too...");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,4);
VoicePlay("D031100500_11_080");
MsgDisp("Onari","Oh, here -- a little reunion gift.
It's a convenience store original ice cream.
Chocolate mint flavor.");
SEPlay("EV_SE_717");
SEWait();
MsgDisp("主人公","Oh, thank you!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(11);
MsgDisp("主人公","(...He's gone.)");
MsgDisp("主人公","(Oh! Come to think of it...
I wonder if Onari-san has been assigned a school yet?)");
MsgSel("I'd love it if he came to Habataki","It's really none of my business...");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","(If he got assigned to Habataki, that'd be
great...
I'd love to take Onari-san's classes again!)");
    break ;
    case 1:
    MsgDisp("主人公","(Well, wherever Onari-san gets assigned,
it's really none of my business...)");
    break ;
    default ;
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
