VoicePlay("D031100902_47_000");
MsgDisp("Customer","Stop following me.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,2);
VoicePlay("D031100902_34_010");
MsgDisp("Man?","I'm not following you.");
MsgDisp("主人公","(Hm?
What's going on...?)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(11);
MsgDisp("主人公","Wait, Onari-sensei∋");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
Wait(20,0);
MsgClose();
ScrFadeOut(0);
BGOpen("ex350",0);
Wait(40);
ScrFadeIn(0);
MsgClose();
ChOpen(34,254,0,0,0,#1,#1,0,0);
VoicePlay("D031100902_47_010");
MsgDisp("Customer","You've been following me since the station!");
ChEye(34,0);
ChMouth(34,0);
VoicePlay("D031100902_34_030");
MsgDisp("Man","This is my base camp.
I'm just making my rounds.");
VoicePlay("D031100902_47_020");
MsgDisp("Customer","Huh? What are you even talking about?");
ChPosition(34,1);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(11,40,4,1,3,#1,#1,0,2);
VoicePlay("D031100902_11_000");
MsgDisp("Onari","Sorry about that.
This guy's a friend of ours.
Hey, don't cause trouble!");
ChEye(34,1);
ChMouth(34,1);
VoicePlay("D031100902_34_050");
MsgDisp("Man","I'm more of a solo player, though...");
VoicePlay("D031100902_47_030");
MsgDisp("Customer","Is he really your friend?");
MsgDisp("主人公","Uhh... Oh, yes.");
VoicePlay("D031100902_47_040");
MsgDisp("Customer","Is that so?
I guess he wasn't following me then.
Just don't talk to me again.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
VoicePlay("D031100902_11_010");
MsgDisp("Onari","A solo player, huh?
You're always on your own.");
SEStop("EV_SE_FOOT_WALK_AWAY_ALONE",2);
ChEye(34,0);
ChMouth(34,0);
VoicePlay("D031100902_34_080");
MsgDisp("Man","Unaffiliated with any party...");
MsgDisp("主人公","Um... Do you two know each other?");
ChEye(11,0);
ChMouth(11,3);
ChMotion(11,4);
VoicePlay("D031100902_11_020");
MsgDisp("Onari","He's always over there eating custom ice
cream combos.");
ChEye(34,0);
ChMouth(34,0);
VoicePlay("D031100902_34_090");
MsgDisp("Man","The chocolate mint here
gives you a full HP recovery.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(34);
ChPosition(11,0);
MsgDisp("主人公","Whew.
That startled me...");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031100902_11_030");
MsgDisp("Onari","If he likes the chocolate mint here,
he's a good guy.");
MsgDisp("主人公","So he has the same taste as you,
Onari-sensei?");
ChEye(11,1);
ChMouth(11,3);
ChMotion(11,3);
VoicePlay("D031100902_11_040");
MsgDisp("Onari","The chocolate mint here is justice.");
ChEye(11,1);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031100902_11_050");
MsgDisp("Onari","Also, I'm going to take the certification
exam.
A promise is a promise.");
MsgDisp("主人公","I'm so glad...!
I'll keep studying hard too.
Can we keep the cram school going?");
ChEye(11,1);
ChMouth(11,0);
ChMotion(11,3);
VoicePlay("D031100902_11_060");
MsgDisp("Onari","Sure.
The cram school continues until next finals.
The exam results come out in December anyway.");
MsgDisp("主人公","Oh, really?
Well then, I'm counting on you again!");
BGMStop();
MsgClose();
ScrFadeOut(0);
