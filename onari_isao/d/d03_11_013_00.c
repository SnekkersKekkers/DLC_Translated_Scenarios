ChLayout(1);
BGOpen("sc500",1);
ScrFadeIn(0);
MsgDisp("主人公","(I should go tell Onari-sensei
that I put down an elite university
for my career guidance and that I want to be a teacher!)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
MsgDisp("主人公","(Let's see... it's over there, right...?)");
MsgClose();
BGOpen("ex360",1);
ScrFadeIn(0);
MsgDisp("主人公","(So this is Yotakado Technical High School.
It has a kind of... unapproachable feel...
Maybe I should just go home)");
VoicePlay("D031101300_39_000");
MsgDisp("Yotakado C","Aw, you're leaving already?
Why don't you come over here?");
MsgDisp("主人公","What!");
VoicePlay("D031101300_33_010");
MsgDisp("Yotakado B","That's right.
To cross through this gate — that is your
destiny.");
MsgDisp("主人公","I-I'm sorry!
I must have the wrong place∈");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ScrFadeOut(0);
SEWait();
VoicePlay("D031101300_34_020");
MsgDisp("Yotakado A","Hey, that's Success's girlfriend.");
SEPlay("EV_SE_544",0,0.5);
MsgDisp("主人公","(Huh... \"Success\"?)");
MsgClose();
StlOpen("ev_11_01");
StlEye(11,0);
StlMouth(11,0);
BGMPlay("BGM_C11_ONARI_B",0.01);
ScrFadeIn(0);
VoicePlay("D031101300_11_000");
MsgDisp("Onari","Hey.
Did you come to meet me?");
MsgDisp("主人公","Y-yes.
I have something to report to you,
Onari-sensei...");
VoicePlay("D031101300_39_030");
MsgDisp("Yotakado C","Sensei?
Is she a transfer student?");
VoicePlay("D031101300_33_040");
MsgDisp("Yotakado B","Come on over.
You can't fight destiny.");
MsgDisp("主人公","Ugh...
What do I do, Onari-sensei...?");
VoicePlay("D031101300_11_010");
MsgDisp("Onari","You change your destiny through studying.
You guys should come too.
Remedial lessons at the convenience store.");
VoicePlay("D031101300_39_050");
MsgDisp("Yotakado C","As if.");
VoicePlay("D031101300_33_060");
MsgDisp("Yotakado B","I can't fight destiny.");
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
BGOpen("ex361",1);
MsgClose();
ChOpen(11,40,0,1,4,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("D031101300_11_020");
MsgDisp("Onari","Sorry about that. You okay?");
MsgDisp("主人公","Y-yes.
It was a bit of a surprise, but...");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,4);
VoicePlay("D031101300_11_030");
MsgDisp("Onari","They're not bad guys, those two.
Whether they're good guys is another
question.");
MsgDisp("主人公","Hehe.
They call you 'Success,' Onari-sensei?");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031101300_11_040");
MsgDisp("Onari","Yeah, when I introduced myself in class,
that Nora guy was sitting in the back.");
MsgDisp("主人公","That guy with the sunglasses was
actually a student at Yotakado...?");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,2);
VoicePlay("D031101300_11_050");
MsgDisp("Onari","Yep.
The kids here are all kind of the same.
I think I can actually be useful to them.");
MsgDisp("主人公","Onari-sensei.
I want to get into an elite university and
become a teacher, just like you!");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
VoicePlay("D031101300_11_060");
MsgDisp("Onari","You already put it in your career guidance
form?");
MsgDisp("主人公","Yes.");
ChEye(11,3);
ChMouth(11,3);
ChMotion(11,3);
VoicePlay("D031101300_11_070");
MsgDisp("Onari","Of course you'll make it.
And when you do, come teach at our school.");
MsgDisp("主人公","What∋
But...");
ChEye(11,3);
ChMouth(11,3);
ChMotion(11,0);
ChEyeOpenLevel(11,0);
VoicePlay("D031101300_11_080");
MsgDisp("Onari","Ha, you'll be fine.
Don't run away, just step right in.
Come on.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(11);
MsgDisp("主人公","(Alright!
I'm going to keep studying hard at the cram
school!)");
MsgClose();
ScrFadeOut(0);
