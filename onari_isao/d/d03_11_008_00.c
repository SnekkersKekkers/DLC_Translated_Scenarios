ChLayout(1);
BGOpen("sc500",1);
ScrFadeIn(0);
MsgDisp("主人公","(The finals are almost here.
Time to study at Onari-sensei's convenience
store cram school again today!)");
MsgClose();
ScrFadeOut(0);
BGOpen("ex340",0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
MsgClose();
ChOpen(11,40,0,0,4,-1,-1,0,0);
VoicePlay("D031100800_11_000");
MsgDisp("Onari","You couldn't solve that problem last time.");
MsgDisp("主人公","That's because you taught me the trick to it.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,4);
VoicePlay("D031100800_11_010");
MsgDisp("Onari","At this rate, think you can place in the top
of your class?");
MsgDisp("主人公","Yes.
Um...
How is your studying going?");
MsgClose();
ScrFadeOut(0);
ChClose(11,0,0);
StlOpen("ev_11_05");
StlEye(11,0);
StlMouth(11,0);
BGMPlay("BGM_C11_ONARI_A",0.01);
ScrFadeIn(0);
VoicePlay("D031100800_11_020");
MsgDisp("Onari","The studying part is fine.
I passed it last year too.
I think I'm even exempt from it this time...");
MsgDisp("主人公","That's amazing.");
StlEye(11,0,0);
StlMouth(11,0);
StlEyeOpenLevel(11,0,1);
VoicePlay("D031100800_11_030");
MsgDisp("Onari","It's not amazing.
I failed the interview portion.
It's a problem with who I am as a person.");
MsgDisp("主人公","O-Oh, is that what happened...?");
StlEye(11,0,0);
StlMouth(11,0);
StlEyeOpenLevel(11,5,1);
VoicePlay("D031100800_11_040");
MsgDisp("Onari","So studying more won't help, and
even if I practice for the interview and pass—");
MsgDisp("主人公","?");
StlEye(11,2);
StlMouth(11,0);
VoicePlay("D031100800_11_050");
MsgDisp("Onari","...Until I entered Haba High and had
Osako-sensei as my homeroom teacher,
I had no motivation and was pretty rough around the edges.");
MsgDisp("主人公","Rough around the edges...");
StlEye(11,2,0);
StlMouth(11,0);
StlEyeOpenLevel(11,5,1);
VoicePlay("D031100800_11_060");
MsgDisp("Onari","But Osako-sensei was incredible.
He set me straight without ever laying a hand
on me.");
MsgDisp("主人公","Lay a... Wait, what∋");
StlEye(11,2);
StlMouth(11,2);
VoicePlay("D031100800_11_070");
MsgDisp("Onari","Oh, sorry.
I used to be kind of a rough kid.");
StlEye(11,0);
StlMouth(11,2);
VoicePlay("D031100800_11_080");
MsgDisp("Onari","But the interview examiners
can probably tell that kind of thing right away.");
MsgDisp("主人公","Onari-sensei...");
StlEye(11,0,0);
StlMouth(11,2);
StlEyeOpenLevel(11,5,1);
VoicePlay("D031100800_11_090");
MsgDisp("Onari","Osako-sensei treated someone like me with a
smile every single day.
He was the first person who ever did that.");
StlEye(11,2);
StlMouth(11,2);
VoicePlay("D031100800_11_100");
MsgDisp("Onari","I started to like school and studying.
So I thought maybe I could be like Osako-sensei
and help students who were like me.");
MsgDisp("主人公","So that's why...");
StlEye(11,0,0);
StlMouth(11,0);
StlEyeOpenLevel(11,5,1);
VoicePlay("D031100800_11_110");
MsgDisp("Onari","...But I was wrong.
I realized it for the first time during
student teaching.");
StlEye(11,0,0);
StlMouth(11,0);
StlEyeOpenLevel(11,0,1);
VoicePlay("D031100800_11_120");
MsgDisp("Onari","There aren't any kids like me at Haba High now.
And unlike Osako-sensei,
I can't make everyone smile like he does.");
MsgDisp("主人公","I had a lot of fun, though.");
StlEye(11,2);
StlMouth(11,1);
VoicePlay("D031100800_11_130");
MsgDisp("Onari","...Huh?
You said that seeing me made you want to try
harder yourself, right?");
MsgDisp("主人公","Yes. Thanks to you, Onari-sensei,
I even set the goal of ranking at the top of my class on finals.
Studying is actually fun for me now.");
StlEye(11,2);
StlMouth(11,0);
VoicePlay("D031100800_11_140");
MsgDisp("Onari","I see.
I told you before, though.
I'm not a teacher anymore.");
MsgDisp("主人公","But you teach me here,
so you're a teacher to me.");
StlEye(11,2,0);
StlMouth(11,2);
StlEyeOpenLevel(11,5,1);
VoicePlay("D031100800_11_150");
MsgDisp("Onari","...You're funny, you know that?
If I really did inspire you to throw yourself
into something, that makes me happy.");
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("主人公","(Yeah...!
I'll study hard for Onari-sensei's sake too.
Top of the class, here I come!)");
BGMStop();
MsgClose();
