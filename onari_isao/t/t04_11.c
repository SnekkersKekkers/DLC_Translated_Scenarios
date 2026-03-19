Call("t/t02_11_400_00");
if (OmakeChk()==1){
    switch (EndingOpenPtnGet(33)){
        case 0:
        Call("t/t02_11_400_20");
        break ;
        case 2:
        Call("t/t02_11_400_30");
        break ;
        }
    }
else {
    GlWorkSet(0,1);
    Call("t/t02_11_400_10");
    int  var0 =MsgSelRsltGet();
    if ( var0 ==0){
        Call("t/t02_11_400_20");
        EndingOpen(33,0);
        }
    else if ( var0 ==1){
        Call("t/t02_11_400_30");
        EndingOpen(33,2);
        }
    Call("t/t10_11");
    }
