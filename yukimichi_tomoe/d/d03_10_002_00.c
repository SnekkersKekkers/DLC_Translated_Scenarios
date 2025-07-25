ChLayout(1);
BGOpen("sc602",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yep, I had another good training session
today!)");
VoicePlay("D031000200_48_000");
MsgDisp("Club Member","Tomoe-chan hasn't come to practice once
since then.");
MsgDisp("主人公","Tomoe...chan?");
VoicePlay("D031000200_48_010");
MsgDisp("Club Member","Yeah.
Because he's cute, right?");
MsgDisp("主人公","Hehe, true.
I wonder how long his absence will last?");
MsgClose();
SEPlay("EV_SE_693");
SEWait();
BGMPlay("BGM_C37_OSAKO_A",0.01);
ChOpen(37,254,0,0,0,#1,#1,0,0);
VoicePlay("D031000200_37_000");
MsgDisp("Osako","Ossu! Everyone's already at it, huh?
Summer break club activities, that's what
youth is all about～!");
VoicePlay("D031000200_38_000");
MsgDisp("Club Members","OSSU!");
ChEye(37,0);
ChMouth(37,0);
ChEyeOpenLevel(37,7);
VoicePlay("D031000200_37_010");
MsgDisp("Osako","That Tomoe guy...not here again today,
huh?");
MsgDisp("主人公","Huh, isn't he on leave today?");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031000200_37_020");
MsgDisp("Osako","Yeah. The leave form you brought me just
said that he's taking a week off in order
to participate in the tournament～");
MsgDisp("主人公","Ehh?
A week?
But it's already been...");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031000200_37_030");
MsgDisp("Osako","It's been a while.
He's probably training hard at the Tomoe
Dojo.");
MsgDisp("主人公","The Tomoe Dojo...?");
ChEye(37,0);
ChMouth(37,0);
ChEyeOpenLevel(37,7);
VoicePlay("D031000200_37_040");
MsgDisp("Osako","Yeah.
I was also a student there.");
MsgDisp("主人公","Eh, Osako-sensei too?");
ChEye(37,2);
ChMouth(37,0);
ChEyeOpenLevel(37,0);
VoicePlay("D031000200_37_050");
MsgDisp("Osako","Yeah, it was a long time ago.
But when my old master asks me to look
after Tomoe, I can't refuse.");
VoicePlay("D031000200_42_030");
MsgDisp("President","Because of this, Osako-sensei always comes
here to guide us.
I guess we should be grateful to Tomoe.");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031000200_37_060");
MsgDisp("Osako","Don't flatter me.
Come on, show me your training～!");
VoicePlay("D031000200_38_010");
MsgDisp("Club Members","OSSU!");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031000200_37_070");
MsgDisp("Osako","Oh, right.
Could I ask you for a favor?");
MsgDisp("主人公","Sure.
What is it?");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031000200_37_080");
MsgDisp("Osako","Tomoe will come to the match in September.
When you see him, can you please ask him
to come back to club practice?");
MsgClose();
SEPlay("EV_SE_690");
BGMStop();
ChClose(37);
MsgDisp("主人公","(He wants me to ask Tomoe-san...)");
MsgSel("Okay, I'll give it a try!","No, even if I asked he wouldn't...");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","(Okay.
Let's try asking him at the next practice
match!)");
    MsgDisp("主人公","(But if I don't win the match, I don't
think he'll listen to what I have to
say...I have to work hard!)");
    break ;
    case 1:
    MsgDisp("主人公","(No, I don't think he would listen to
me...
I should give up.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
