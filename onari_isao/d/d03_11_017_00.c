ChLayout(1);
BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm satisfied with my grades.
I'd love to tell Onari-sensei.
But...)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc500",1);
ScrFadeIn(0);
VoicePlay("D031101700_42_000");
MsgDisp("Boy","Hey, you might not want to go out right now.");
MsgDisp("主人公","Hm?");
VoicePlay("D031101700_42_010");
MsgDisp("Boy","There's someone sketchy hanging around the
school gate.");
VoicePlay("D031101700_44_000");
MsgDisp("Girl","Seriously? That's scary.");
MsgDisp("主人公","Scary and sketchy...
Could it be――");
MsgClose();
ScrFadeOut(0);
BGOpen("sc130",1);
Wait(40);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(34,254,0,0,1,-1,-1,0,0);
VoicePlay("D031101700_34_030");
MsgDisp("Yotakado A","Found you.
Success's HP won't recover.");
MsgDisp("主人公","Nora!
Is something wrong with Onari-sensei?");
ChEye(34,1);
ChMouth(34,1);
VoicePlay("D031101700_34_040");
MsgDisp("Yotakado A","Near death.
Get him some chocolate mint ice cream, stat.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(34);
MsgDisp("主人公","(Onari-sensei...!)");
SEPlay("EV_SE_FOOT_RUN_COME_TWO");
SEWait();
VoicePlay("D031101700_42_050");
MsgDisp("Boy","Whoa, she actually scared them off.");
VoicePlay("D031101700_44_010");
MsgDisp("Girl","You okay?");
MsgDisp("主人公","Y-yeah.
I really have to go!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex350",0);
ScrFadeIn(0);
MsgDisp("主人公","Hah... hah...");
VoicePlay("D031101700_11_000");
MsgDisp("Onari?","You...");
MsgDisp("主人公","Onari-sensei!
Are you okay?");
MsgClose();
BGMPlay("BGM_C11_ONARI_A",0.01);
ChOpen(11,40,0,0,4,-1,-1,0,0);
VoicePlay("D031101700_11_010");
MsgDisp("Onari","Are you okay?");
MsgDisp("主人公","Nora came to find me and said
something was wrong with you...");
ChEye(11,1);
ChMouth(11,4);
ChMotion(11,4);
VoicePlay("D031101700_11_020");
MsgDisp("Onari","!
That kid...");
ChEye(11,1);
ChMouth(11,4);
ChMotion(11,0);
VoicePlay("D031101700_11_030");
MsgDisp("Onari","He told me he wanted to study,
so I should come here.");
MsgDisp("主人公","What?
...But then, that part about Onari-sensei
being unwell――");
ChEye(11,2);
ChMouth(11,4);
ChMotion(11,4);
VoicePlay("D031101700_11_040");
MsgDisp("Onari","I guess I was down enough
that it worried him.");
ChEye(11,2);
ChMouth(11,4);
ChMotion(11,5);
ChEyeOpenLevel(11,0);
VoicePlay("D031101700_11_050");
MsgDisp("Onari","I ended things on my own, got all depressed,
and now my student's worried about me.
How pathetic...");
MsgDisp("主人公","You've been down?");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031101700_11_060");
MsgDisp("Onari","Yeah, apparently.
All because our cram school ended.");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,3);
VoicePlay("D031101700_11_070");
MsgDisp("Onari","But I got to see you.
So I just need some chocolate mint to be back
to full HP, right?");
MsgDisp("主人公","Hehe.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,4);
VoicePlay("D031101700_11_080");
MsgDisp("Onari","Oh, how's the studying going?");
MsgDisp("主人公","I got my end-of-term results today —
I did really well――");
MsgClose();
ChClose(11);
ChLayout(0);
SEPlay("EV_SE_544");
ChOpen(11,40,0,0,0,-1,-1,0,0);
Wait(60);
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_682",0,0.6);
MsgDisp("","(pat pat)");
MsgDisp("主人公","(Onari-sensei...)");
ScrFadeIn(0);
ChEye(11,3);
ChMouth(11,0);
ChMotion(11,0);
ChEyeOpenLevel(11,0);
VoicePlay("D031101700_11_090");
MsgDisp("Onari","Well done.");
MsgDisp("主人公","I...
I wanted to tell you.
And then Nora showed up.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,4);
VoicePlay("D031101700_11_100");
MsgDisp("Onari","He actually pulled that off.
I hope he didn't cause a scene at your
school.");
MsgDisp("主人公","It's fine, really.
There's nothing to worry about.");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031101700_11_110");
MsgDisp("Onari","Is that so.
If they're starting to change, I'm glad.");
MsgDisp("主人公","Hehe!");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,4);
ChEyeOpenLevel(11,0);
VoicePlay("D031101700_11_120");
MsgDisp("Onari","I'm already back to full.
Didn't even need the chocolate mint...");
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgDisp("主人公","(Seeing Onari-sensei again after so long
seems to have calmed me down too...
I think I can make it all the way to exams now!)");
MsgClose();
ScrFadeOut(0);
ChLayout(1);
