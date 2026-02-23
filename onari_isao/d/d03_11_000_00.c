ChLayout(1);
BGOpen("sc100",0);
ScrFadeIn(0);
MsgDisp("主人公","(It's already May but I haven't joined any clubs yet...Maybe I should try something?)");
MsgSel("But what should I choose...","I'll figure it out on my own!");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","(But what should I choose...)");
    MsgClose();
    ScrFadeOut(0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ex000",1);
    ScrFadeIn(0);
    MsgDisp("主人公","(Phew...The day is already over, huh?)");
    VoicePlay("D031100000_11_000");
    MsgDisp("？大成","You were born to suceed! ...No, that's not quite right.");
    MsgDisp("主人公","(...Huh?)");
    VoicePlay("D031100000_11_010");
    MsgDisp("？大成","Even failure can lead to GREAT SUCCESS! ...Something like that, maybe?");
    MsgDisp("主人公","(Great Success...? What is he talking about...?)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    BGMPlay("BGM_C11_ONARI_I",0.01);
    ChOpen(11,254,2,0,4,7,-1,0,0);
    VoicePlay("D031100000_11_020");
    MsgDisp("？大成","Let's go with that.");
    MsgDisp("主人公","∋");
    ChEye(11,0);
    ChMouth(11,4);
    ChMotion(11,0);
    VoicePlay("D031100000_11_030");
    MsgDisp("？大成","Hm? Huh...A Habataki High student?");
    MsgDisp("主人公","Eh....Ah, yes. You're right.");
    ChEye(11,0);
    ChMouth(11,4);
    ChMotion(11,4);
    VoicePlay("D031100000_11_040");
    MsgDisp("？大成","The uniform is a bit different now. I think it was brown back then...");
    ChEye(11,0);
    ChMouth(11,4);
    ChMotion(11,4);
    ChEyeOpenLevel(11,7);
    VoicePlay("D031100000_11_050");
    MsgDisp("？大成","Maybe it's just my imagination.");
    MsgClose();
    SEPlay("EV_SE_626");
    BGMStop();
    ChClose(11);
    MsgDisp("主人公","Ah, uhm...");
    MsgDisp("主人公","(...He left. I guess he's a Haba High alumni. What a strange person. What was that \"GREAT SUCCESS\" thing about...?)");
    break ;
    case 1:
    MsgDisp("主人公","(Yeah, I only have one high school life! I need to think carefully about my club and decide!)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
