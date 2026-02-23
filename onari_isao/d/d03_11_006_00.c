ChLayout(1);
BGOpen("sc512",0);
ScrFadeIn(0);
MsgDisp("主人公","（ん？
あそこにいるの――）");
MsgClose();
BGMPlay("BGM_C37_OSAKO_A",0.01);
ChOpen(37,254,0,0,0,-1,-1,0,0);
VoicePlay("D031100600_37_000");
MsgDisp("大迫","オッス！
久しぶりだなぁ。");
MsgDisp("主人公","大迫先生、こんにちは！
大成先生と一緒に、
学食でお会いした時以来ですね。");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031100600_37_010");
MsgDisp("大迫","そうだったな。
おまえに報告だ。");
MsgDisp("主人公","はい。");
ChEye(37,2);
ChMouth(37,0);
VoicePlay("D031100600_37_020");
MsgDisp("大迫","大成、残念だが教員採用試験に失敗したぁ。");
MsgDisp("主人公","ええっ∋
大成先生、先生になれなかったんですか？");
ChEye(37,0);
ChMouth(37,0);
VoicePlay("D031100600_37_030");
MsgDisp("大迫","ああ、１２月頃に連絡があった。
だが、まだチャンスはある。
あいつなら面白い教師になれるはずだ。");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(37);
MsgDisp("主人公","（１２月ってことは、
アイスの大会の時はもう……
少し雰囲気が違って見えたのは、そのせい？）");
MsgDisp("主人公","（……大成先生にもう一度会って
話したいな……）");
MsgSel("あのコンビニに行ってみよう！","偶然会えるはずないよね……");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","（あのコンビニ行ってみよう。
大成先生、あのコンビニのアイス好きみたいだし
会えるかも知れないよね！）");
    break ;
    case 1:
    MsgDisp("主人公","（でも、偶然に会えるはずないよね……
諦めるしかないな）");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
