ChLayout(1);
BGOpen("ho210",1);
ScrFadeIn(0);
MsgDisp("主人公","(No studying today.
It's a fireworks date with Onari-sensei!)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf700",2);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_628");
Wait(30,0);
ChOpen(11,255,1,0,3,-1,-1,0,0);
VoicePlay("D031101600_11_000");
MsgDisp("Onari","What do you want?
I'm fine with anything.");
MsgDisp("主人公","Hehe, ice cream?");
ChEye(11,3);
ChMouth(11,3);
ChMotion(11,0);
ChEyeOpenLevel(11,0);
VoicePlay("D031101600_11_010");
MsgDisp("Onari","This place does shaved ice.
I'm getting all the syrups.
You?");
MsgDisp("主人公","All of them?!");
MsgClose();
SEPlay("EV_SE_672");
ChClose(11);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgDisp("主人公","(Is Onari-sensei really
getting all the syrups?)");
VoicePlay("D031101600_11_020");
MsgDisp("Onari","Extra sauce on mine!");
MsgDisp("主人公","(Huh? Sauce on shaved ice?∋
That's a bit much...)");
SEPlay("EV_SE_672");
MsgClose();
ScrFadeOut(0);
SEWait();
Wait(30,0);
StlOpen("ev_11_03");
StlEye(11,0);
StlMouth(11,0);
BGMPlay("BGM_C11_ONARI_A",0.01);
SEPlay("EV_SE_604",0.5,0.2);
ScrFadeIn(0);
VoicePlay("D031101600_11_030");
MsgDisp("Onari","Extra sauce with a fried egg on top,
sorry for the wait~.");
VoicePlay("D031101600_45_000");
MsgDisp("Female Customer","Here you go, one Rich.");
StlEye(11,1);
StlMouth(11,0);
MsgDisp("主人公","O-Onari-sensei?∋
What are you doing?");
StlEye(11,1,0);
StlMouth(11,0);
StlEyeOpenLevel(11,5,1);
VoicePlay("D031101600_11_040");
MsgDisp("Onari","An old friend asked me to watch the stall for
a bit.");
SEPlay("EV_SE_671",0,0.9);
Wait(90,1);
VoicePlay("D031101600_39_010");
MsgDisp("Festival Vendor","You're a lifesaver!
Thanks. ...Hey, wait!
You put way too much sauce on that!");
StlEye(11,0,0);
StlMouth(11,0);
StlEyeOpenLevel(11,5,1);
VoicePlay("D031101600_11_050");
MsgDisp("Onari","Stronger flavor is always better.");
SEStop("EV_SE_604",2);
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
ScrFadeIn(0);
MsgClose();
ChOpen(11,255,2,0,4,-1,-1,0,0);
SEPlay("EV_SE_022",0,0.5);
Wait(30,0);
MsgDisp("主人公","Oh, the fireworks are starting――");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,4);
VoicePlay("D031101600_11_060");
MsgDisp("Onari","Let's go.
Yakisoba while we watch.");
MsgDisp("主人公","Yes!
I can't wait for the fireworks.
Or for your yakisoba, Onari-sensei.");
ChEye(11,0);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031101600_11_070");
MsgDisp("Onari","Come on.");
MsgClose();
SEPlay("EV_SE_504");
SEWait();
SEPlay("EV_SE_767");
BGMStop();
ChClose(11);
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("主人公","(I'm holding hands with Onari-sensei...
I'm a little embarrassed...)");
MsgClose();
BGOpen("wf720",2);
ScrFadeIn(0);
EfctOpen(10);
Wait(1980,1);
MsgClose();
ScrFadeOut(0);
EfctClose();
BGOpen("wf710",2);
ScrFadeIn(0);
MsgClose();
ChOpen(11,255,2,0,4,-1,-1,0,0);
VoicePlay("D031101600_11_080");
MsgDisp("Onari","And that's the last one...");
MsgDisp("主人公","They were beautiful...");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,4);
VoicePlay("D031101600_11_090");
MsgDisp("Onari","Funny, the yakisoba felt a little spicy.");
MsgDisp("主人公","Well, you did put on a lot of sauce.");
ChEye(11,0);
ChMouth(11,4);
ChMotion(11,0);
VoicePlay("D031101600_11_100");
MsgDisp("Onari","I don't mind spicy. I don't mind cold either.
So I guess it's just
how I'm feeling right now.");
MsgDisp("主人公","How you're feeling... right now?");
ChEye(11,1);
ChMouth(11,4);
ChMotion(11,0);
ChEyeOpenLevel(11,0);
VoicePlay("D031101600_11_110");
MsgDisp("Onari","Yeah. Today's the last day.");
MsgDisp("主人公","The last day?");
ChEye(11,1);
ChMouth(11,4);
ChMotion(11,0);
VoicePlay("D031101600_11_120");
MsgDisp("Onari","The way you are now, you could aim
higher than any top university.
But I don't have what it takes to get you there.");
MsgDisp("主人公","What...?");
ChEye(11,1);
ChMouth(11,4);
ChMotion(11,5);
ChEyeOpenLevel(11,0);
VoicePlay("D031101600_11_130");
MsgDisp("Onari","The cram school isn't lifting you up —
it's holding you back.");
ChEye(11,1);
ChMouth(11,4);
ChMotion(11,5);
VoicePlay("D031101600_11_140");
MsgDisp("Onari","So this is the end.");
MsgDisp("主人公","...........");
ChEye(11,1);
ChMouth(11,0);
ChMotion(11,0);
VoicePlay("D031101600_11_150");
MsgDisp("Onari","Studying with you is what made me
believe I could be a teacher.
But you need to go higher than I can take you.");
MsgDisp("主人公","But...");
ChEye(11,1);
ChMouth(11,0);
ChMotion(11,4);
VoicePlay("D031101600_11_160");
MsgDisp("Onari","Besides, there are people who need me.
A whole lot of them.
They need me to be their teacher.");
MsgDisp("主人公","The students at Yotakado...?");
ChEye(11,1);
ChMouth(11,0);
ChMotion(11,3);
VoicePlay("D031101600_11_170");
MsgDisp("Onari","Right.
The cram school needs to be for them.
Take care.");
MsgClose();
SEPlay("EV_SE_626");
ChClose(11);
MsgDisp("主人公","(Onari-sensei is a teacher at Yotakado, so I
shouldn't have kept him all to myself.
But... will I ever see him again...?)");
MsgClose();
ScrFadeOut(0);
