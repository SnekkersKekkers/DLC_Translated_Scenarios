ChLayout(1);
BGOpen("sc301",0);
ScrFadeIn(0);
MsgDisp("主人公","(Okay, I'll try my best in judo today
too!)");
VoicePlay("D031000100_10_000");
MsgDisp("Tomoe?","Ah...
You.
You're in the Judo Club, right?");
MsgDisp("主人公","Eh?
Yes.");
MsgClose();
BGMPlay("BGM_C10_TOMOE_A",0.01);
ChOpen(10,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah!
Tomoe-san∈");
ChEye(10,0);
ChMouth(10,4);
ChMotion(10,0);
VoicePlay("D031000100_10_010");
MsgDisp("Tomoe","Hmm?");
MsgDisp("主人公","Ehhh∋
You're a guy∋");
ChEye(10,3);
ChMouth(10,3);
ChMotion(10,3);
VoicePlay("D031000100_10_020");
MsgDisp("Tomoe","Hahaha!");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,0);
VoicePlay("D031000100_10_030");
MsgDisp("Tomoe","Yeah, a guy.
Did you think I was a girl?");
MsgDisp("主人公","Yeah.
Sorry...");
ChEye(10,3);
ChMouth(10,3);
ChMotion(10,3);
ChEyeOpenLevel(10,0);
VoicePlay("D031000100_10_040");
MsgDisp("Tomoe","It's fine.
I don't think you had any ill intentions.");
MsgDisp("主人公","Eh?");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,4);
VoicePlay("D031000100_10_050");
MsgDisp("Tomoe","Sometimes there are people who say I look
weak.
Like that senpai from last time.");
MsgDisp("主人公","You threw that senior!
I was so surprised.");
ChEye(10,1);
ChMouth(10,4);
ChMotion(10,1);
VoicePlay("D031000100_10_060");
MsgDisp("Tomoe","I really can't stand people who act so
high and mighty.");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,0);
VoicePlay("D031000100_10_070");
MsgDisp("Tomoe","So that was a greeting.");
MsgDisp("主人公","I-I see. You were really amazing, though.
I hope I can become strong like Tomoe-san
someday.");
ChEye(10,1);
ChMouth(10,4);
ChMotion(10,1);
VoicePlay("D031000100_10_080");
MsgDisp("Tomoe","Oh yeah?
That's impossible.
It won't happen.");
MsgDisp("主人公","∋");
ChEye(10,1);
ChMouth(10,1);
ChMotion(10,1);
VoicePlay("D031000100_10_090");
MsgDisp("Tomoe","Don't just say you want to be like me.
Do you have any idea how hard I've
practiced?");
MsgDisp("主人公","Ah...sorry.
I didn't mean it like that.");
ChClose(10,0,30);
SEPlay("EV_SE_544");
ChLayout(0);
MsgClose();
ChOpen(10,254,0,1,1,#1,#1,0,0,0,30);
VoicePlay("D031000100_10_100");
MsgDisp("Tomoe","I don't know what you're trying to prove,
but only say stuff like that after you've
gotten stronger. That's how I do it.");
MsgDisp("主人公","Even if you say that, I...");
ChEye(10,1);
ChMouth(10,0);
ChMotion(10,4);
VoicePlay("D031000100_10_110");
MsgDisp("Tomoe","Oh, did that make you mad?
Hmm...maybe you can get stronger, then.
Just looking cute is kind of boring.");
ChEye(10,0);
ChMouth(10,0);
ChMotion(10,0);
VoicePlay("D031000100_10_120");
MsgDisp("Tomoe","Ah, here.
Give this to Osako-san.");
SEPlay("EV_SE_592");
SEWait();
MsgDisp("主人公","A club leave form...?");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
MsgClose();
ChClose(10);
MsgDisp("主人公","(Ah, he left...
If I become better at Judo, I wonder if
I'll get to talk to Tomoe-san again?)");
MsgDisp("主人公","(Okay, from now on, I can't lose!
Whether it's during practice or in a
match!)");
MsgClose();
ScrFadeOut(0);
ChLayout(1);
