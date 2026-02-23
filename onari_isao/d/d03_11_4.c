if (PlPrmGet(9)==0){
    Call("d/d03_11_004_00");
    if (MsgSelRsltGet()==0){
        }
    else {
        ChPrmSet(11,9,0);
        }
    }
else {
    Call("d/d03_11_004_01");
    ChPrmSet(11,9,0);
    }
