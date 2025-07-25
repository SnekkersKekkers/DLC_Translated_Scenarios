MsgClear();
MsgSel("I love you too!","I think I love you too...");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
