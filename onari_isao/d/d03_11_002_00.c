ChLayout(1);
BGOpen("ex000",1);
ScrFadeIn(0);
MsgDisp("主人公","(Hmm, another day come and gone...)");
VoicePlay("D031100200_11_000");
MsgDisp("Onari?","I will wake up early.
I will wake up early?
I will wake up early!");
MsgDisp("主人公","(That voice...)");
MsgDisp("主人公","Onari-san?");
MsgClose();
BGMPlay("BGM_C11_ONARI_A",0.01);
ChOpen(11,254,0,0,4,#1,#1,0,0);
VoicePlay("D031100200_11_010");
MsgDisp("Onari","Hey.");
MsgDisp("主人公","Hello.
What are you doing out here?");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,2);
VoicePlay("D031100200_11_020");
MsgDisp("Onari","Practicing for my next class.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,4);
VoicePlay("D031100200_11_030");
MsgDisp("Onari","Oh, come to think of it,
I ran into you here before, didn't I?");
MsgDisp("主人公","Yes.
So that time, you were practicing your
self-introduction, right?");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,2);
ChEyeOpenLevel(11,0);
VoicePlay("D031100200_11_040");
MsgDisp("Onari","Yeah, I'm not great at talking, it seems.
So I practice.");
MsgDisp("主人公","I see...
But what's with the \"I will wake up early\"
thing... Trying not to oversleep?");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,5);
VoicePlay("D031100200_11_050");
MsgDisp("Onari","That's a surprise for the next class.
If I spoil it, you won't be able to enjoy it.");
ChEye(11,1);
ChMouth(11,4);
ChMotion(11,1);
VoicePlay("D031100200_11_060");
MsgDisp("Onari","I have to make the next one a Great Success.");
MsgDisp("主人公","Your self-introduction was really fun, you
know.
I'm looking forward to the next class, too.");
ChEye(11,1);
ChMouth(11,4);
ChMotion(11,2);
VoicePlay("D031100200_11_070");
MsgDisp("Onari","Glad to hear that.
But still, I realized I just can't talk the
way Osako-san does.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(11);
MsgDisp("主人公","(He left... Osako-san is that energetic
teacher from the middle school, right? He and
Onari-san are definitely different types...)");
MsgClose();
ScrFadeOut(0);
