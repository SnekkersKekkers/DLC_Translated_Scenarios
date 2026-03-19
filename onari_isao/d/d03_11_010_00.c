ChLayout(1);
BGOpen("ex340",0);
ScrFadeIn(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgDisp("主人公","(I wonder what's up with Onari-sensei?
It's the usual time, but he's not here...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(34,254,0,0,1,#1,#1,0,0);
VoicePlay("D031101000_34_000");
MsgDisp("Man","Success isn't here today?");
MsgDisp("主人公","Huh? S-Success...?");
ChEye(34,0);
ChMouth(34,2);
VoicePlay("D031101000_34_010");
MsgDisp("Man","Yeah, pretty good handle, right?
I came up with it.");
MsgDisp("主人公","Don't tell me... Great Success?");
ChEye(34,0);
ChMouth(34,0);
VoicePlay("D031101000_34_020");
MsgDisp("Man","Oh, that got a laugh...");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
ChPosition(34,1);
MsgClose();
SEWait();
BGMPlay("BGM_C11_ONARI_A",0.01);
ChOpen(11,40,0,0,4,#1,#1,0,2);
VoicePlay("D031101000_11_000");
MsgDisp("Onari","Hey, sorry to keep you waiting.
What's this, two students today?");
ChEye(34,1);
ChMouth(34,0);
VoicePlay("D031101000_34_030");
MsgDisp("Man","I've got plans after this, so I'm heading
out.
Later, Success.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(34);
ChPosition(11,0);
ChEye(11,3);
ChMouth(11,3);
ChMotion(11,4);
VoicePlay("D031101000_11_010");
MsgDisp("Onari","...Success?
Is that supposed to be me?
That guy's a riot.");
MsgDisp("主人公","Hehe, yeah.");
ChEye(11,3);
ChMouth(11,0);
ChMotion(11,0);
ChEyeOpenLevel(11,0);
VoicePlay("D031101000_11_020");
MsgDisp("Onari","He asked my name the other day,
so I told him.");
MsgDisp("主人公","Oh...
Did you do that self-introduction of yours?");
ChEye(11,1);
ChMouth(11,0);
ChMotion(11,3);
VoicePlay("D031101000_11_030");
MsgDisp("Onari","I did.
He didn't laugh at all, but then he went and
put his own spin on it.");
MsgDisp("主人公","Hehe!
So you two are good friends?");
ChEye(11,1);
ChMouth(11,0);
ChMotion(11,3);
VoicePlay("D031101000_11_040");
MsgDisp("Onari","The friend I mentioned at the start actually
became real.");
MsgDisp("主人公","That's amazing. You became friends with
someone you just met. He seems to really
like you too, Onari-sensei.");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031101000_11_050");
MsgDisp("Onari","Really? That makes me happy.
You said \"too,\" so that means you do
as well, right?");
MsgDisp("主人公","Huh∋");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,4);
VoicePlay("D031101000_11_060");
MsgDisp("Onari","You said it yourself and you're that
surprised?");
MsgDisp("主人公","Um, yes. So...
I think you should become a teacher,
Onari-sensei.");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031101000_11_070");
MsgDisp("Onari","I see.
Then how about after our lesson, we try
practicing for the interview?");
MsgDisp("主人公","Let's do it!");
BGMStop();
MsgClose();
ScrFadeOut(0);
