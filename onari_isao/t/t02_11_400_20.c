ChEyeOpenLevel(11,#1);
ChCheek(11,0);
MsgDisp("主人公","I love you too, Onari-sensei.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
VoicePlay("T021140020_11_000");
MsgDisp("Onari","You...?");
MsgDisp("主人公","Yes.
Knowing how you feel makes me so happy...");
MsgDisp("主人公","The time I spent with you
was truly wonderful.
That's why... I love you.");
ChEye(11,2);
ChMouth(11,4);
ChMotion(11,4);
VoicePlay("T021140020_11_010");
MsgDisp("Onari","You love me too...?
If that's true, then maybe I can take care of
myself too.");
MsgDisp("主人公","Hehe, I'll hold you to that.");
ChEye(11,4);
ChMouth(11,0);
ChMotion(11,3);
VoicePlay("T021140020_11_020");
MsgDisp("Onari","I'll do my best.");
ChEye(11,4);
ChMouth(11,3);
ChMotion(11,0);
VoicePlay("T021140020_11_030");
MsgDisp("Onari","You know, lately spicy food has actually been
tasting spicy...");
MsgDisp("主人公","That's how it should be.
No more overdoing it, okay?");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(11,0,0);
Wait(120,0);
StlOpen("ev_11_06");
ScrFadeIn(0);
VoicePlay("T021140020_11_040");
MsgDisp("Onari","Alright.
I'll listen when it's you telling me.");
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
VoicePlay("T021140020_11_050");
MsgDisp("Onari","But this is sweet, right?
So it's okay to do it a lot.");
Wait(120,0);
MsgClear();
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
