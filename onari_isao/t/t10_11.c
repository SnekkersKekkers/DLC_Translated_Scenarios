if (GlWorkGet(0)==1){
    Call("t/t03_11_000_00");
    Call("t/t03_11_000_11");
    Call("t/t03_11_000_31");
    RunStaffRoll(1);
    Call("t/t04_11_010_00");
    }
else {
    Call("t/t03_11_000_01");
    Call("t/t11_00");
    Call("t/t03_11_000_32");
    RunStaffRoll(0);
    }
