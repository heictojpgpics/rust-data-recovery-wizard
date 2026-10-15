// Function: FUN_180043910
// Address: 180043910
// Size: 90 bytes


undefined8 FUN_180043910(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_18;
  
  lVar1 = FUN_180045260(param_1);
  if (lVar1 < 1) {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_180043970(param_1);
    if (lVar2 < 1) {
      uVar3 = 0;
    }
    else {
      local_18 = (int)lVar2;
      uVar3 = FUN_18002e2b0(lVar1,local_18);
    }
  }
  return uVar3;
}

