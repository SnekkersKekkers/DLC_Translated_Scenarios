ChLayout(1);
BGOpen("sc310",0);
ScrFadeIn(0);
MsgDisp("主人公","(Next class is Onari-sensei's Modern
Japanese. He was practicing in the park,
so this should be fun!)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgClose();
ScrFadeOut(0);
BGOpen("sc300",0);
Wait(40);
ScrFadeIn(0);
VoicePlay("D031100300_11_000");
MsgDisp("Onari","...As you can see, language changes 
with the times.");
VoicePlay("D031100300_11_010");
MsgDisp("Onari","A familiar example: question marks and
exclamation marks.
They didn't exist in the old days.");
MsgClose();
ScrFadeOut(0);
BGOpen("sc322",0);
Wait(40);
SEPlay("EV_SE_067");
MsgClose();
ChOpen(11,254,0,0,4,#1,#1,0,0);
SEWait();
BGMPlay("BGM_C11_ONARI_A",0.01);
ScrFadeIn(0);
VoicePlay("D031100300_42_000");
MsgDisp("Boy A","It says Onari Isao, right?
We already know your name!");
SEPlay("EV_SE_GAYA_016",0.01,0.5);
SEPlay("EV_SE_788",0.1,0.6);
VoicePlay("D031100300_38_000");
MsgDisp("Students","Hahahah!");
ChEye(11,1);
ChMouth(11,0);
ChMotion(11,4);
VoicePlay("D031100300_11_020");
MsgDisp("Onari","But what about like this?");
ChClose(11);
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_067");
SEWait();
BGOpen("sc323",0);
ScrFadeIn(0);
VoicePlay("D031100300_42_020");
MsgDisp("Boy A","Great Success!");
VoicePlay("D031100300_41_030");
MsgDisp("Boy B","Yeah, that's definitely Great Success!");
MsgClose();
ChOpen(11,254,3,1,3,#1,#1,0,0);
VoicePlay("D031100300_11_030");
MsgDisp("Onari","With an exclamation mark, it's much clearer.");
SEPlay("EV_SE_GAYA_023");
SEPlay("EV_SE_788",0.1,0.6);
VoicePlay("D031100300_42_040");
MsgDisp("Boy A","Sir, today's lesson was barely a success,
though?");
VoicePlay("D031100300_38_010");
MsgDisp("Students","Hahaha!");
MsgDisp("主人公","(Yep, that was totally a Great Success!)");
SEStop("EV_SE_GAYA_023",1);
SEStop("EV_SE_788",1);
BGMStop();
MsgClose();
ScrFadeOut(0);
