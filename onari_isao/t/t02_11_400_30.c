ChEyeOpenLevel(11,-1);
ChCheek(11,0);
MsgDisp("主人公","You're important to me too, Onari-sensei.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
VoicePlay("T021140030_11_000");
MsgDisp("Onari","I'm important to you?");
MsgDisp("主人公","Yes.
I was able to throw myself into studying,
and――");
MsgDisp("主人公","I even got to know the students at Yotakado.
None of it would have happened without you,
Onari-sensei.");
ChEye(11,4);
ChMouth(11,0);
ChMotion(11,4);
ChCheek(11,5);
VoicePlay("T021140030_11_010");
MsgDisp("Onari","You always say things like that.");
ChMouth(11,4);
ChMotion(11,0);
ChCheek(11,0);
VoicePlay("T021140030_11_020");
MsgDisp("Onari","If you think I'm important, then maybe I can
learn to value myself a little too.");
MsgDisp("主人公","Please do.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,4);
VoicePlay("T021140030_11_030");
MsgDisp("Onari","Actually, after the sky lounge,
I noticed something else.");
ChEye(11,4);
ChMouth(11,0);
ChMotion(11,0);
ChCheek(11,5);
VoicePlay("T021140030_11_040");
MsgDisp("Onari","Ice cream on a cold day
actually makes you cold.");
MsgDisp("主人公","Hehe!
Now, no more eating too much chocolate mint
ice cream, okay?");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(11,0,0);
Wait(120,0);
StlOpen("ev_11_06");
ScrFadeIn(0);
VoicePlay("T021140030_11_050");
MsgDisp("Onari","Alright.
I'll listen when it's you telling me.");
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
VoicePlay("T021140030_11_060");
MsgDisp("Onari","Hmm...
This is better than chocolate mint.");
Wait(120,0);
MsgClear();
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
