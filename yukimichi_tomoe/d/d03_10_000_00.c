ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
VoicePlay("D031000000_10_000");
MsgDisp("Tomoe","HRAAAH∈");
SEPlay("EV_SE_798",0,0.8);
ScrQuake(2);
MsgDisp("主人公","!");
VoicePlay("D031000000_33_000");
MsgDisp("Club Member A","Oww...");
MsgClose();
ScrFadeOut(0);
BGMPlay("BGM_C10_TOMOE_I",0.01);
StlOpen("ev_10_02");
StlEye(10,0);
StlMouth(10,0);
StlEyeOpenLevel(10,5,1);
ScrFadeIn(0);
VoicePlay("D031000000_34_010");
MsgDisp("Club Member B","Amazing...
Did that freshman just throw that senior?");
StlEye(10,0);
StlMouth(10,0);
VoicePlay("D031000000_42_020");
MsgDisp("President","Oy, Tomoe.
Don't bully the seniors.");
StlEye(10,0);
StlMouth(10,0);
StlEyeOpenLevel(10,0);
VoicePlay("D031000000_39_030");
MsgDisp("Club Member C","Ah! That's Tomoe. Back in middle school,
that person was ranked first throughout
the country. I guess they came to
Habataki.");
MsgDisp("主人公","(So her name is \"Tomoe\"...
She just threw that guy so easily,
amazing...)");
StlEye(10,1);
StlMouth(10,0);
VoicePlay("D031000000_10_010");
MsgDisp("Tomoe","They said I seemed weak, so I wanted to
show them just how true that is.");
VoicePlay("D031000000_40_040");
MsgDisp("Club Member D","Ugh...");
StlEye(10,1);
StlMouth(10,0);
StlEyeOpenLevel(10,0);
VoicePlay("D031000000_10_020");
MsgDisp("Tomoe","Sigh...And I was looking forward to seeing
what kind of people are in Osako's Haba
High Judo Club.");
VoicePlay("D031000000_37_000");
MsgDisp("Osako?","Hey!
You guys～!");
MsgDisp("主人公","∋");
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
ScrFadeIn(0);
MsgClose();
ChOpen(10,37,0,0,0,0,#1,0,1);
ChOpen(37,254,0,0,0,#1,#1,0,2);
VoicePlay("D031000000_38_000");
MsgDisp("Club Members","Osako-sensei, OSSU!");
MsgDisp("主人公","(Eh, that's a teacher∋ I thought he was a
middle school teacher...That's
Osako-sensei, the Judo Club advisor.)");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031000000_37_010");
MsgDisp("Osako","Don't just go ahead and start your youth
without me around～！");
ChEye(10,1);
ChMouth(10,4);
ChMotion(10,1);
VoicePlay("D031000000_10_030");
MsgDisp("Tomoe","Youth?
Osako-san, like I thought, maybe it's best
I just stick to training in my home dojo.");
MsgClose();
SEPlay("EV_SE_799");
BGMStop();
ChClose(10);
ChEye(37,0);
ChMouth(37,1);
VoicePlay("D031000000_37_020");
MsgDisp("Osako","Ah, wait!");
ChEye(37,2);
ChMouth(37,2);
ChEyeOpenLevel(37,0);
ChPosition(37,0);
VoicePlay("D031000000_37_030");
MsgDisp("Osako","...Can't be helped I guess.
Sorry, President.");
VoicePlay("D031000000_42_060");
MsgDisp("President","I see.
That person is exactly like we heard.");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031000000_37_040");
MsgDisp("Osako","Tomoe's grandfather was my teacher.
The head instructor of the Tomoe Dojo.");
ChEye(37,0);
ChMouth(37,0);
ChEyeOpenLevel(37,8);
VoicePlay("D031000000_37_050");
MsgDisp("Osako","Even though Tomoe doesn't attend club
practice often, Tomoe's really strong.
I hope we can learn something from them.");
VoicePlay("D031000000_42_070");
MsgDisp("Club Member","OSSU!");
VoicePlay("D031000000_38_010");
MsgDisp("Club Members","OSSU!");
MsgDisp("主人公","(Tomoe-san seems like an incredible
person...)");
MsgSel("I want to be like Tomoe!","I think I'll go at my own pace...");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","(If I'm going to be as strong as Tomoe-san
one day, I have to try my best!)");
    break ;
    case 1:
    MsgDisp("主人公","(...I'm a beginner so I don't have much to
learn from Tomoe right now. I'll just do
my best my own way.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
