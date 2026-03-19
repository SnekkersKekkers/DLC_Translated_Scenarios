MsgClear();
MsgSel("I love you too, Onari-sensei","You're important to me too, Onari-sensei");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
