// Function: FUN_180040ea0
// Address: 180040ea0
// Size: 113 bytes


undefined8 FUN_180040ea0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_180040f20(param_1);
  if (iVar1 == -1) {
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_180041b70(param_1,0x10,0);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = FUN_180044f60(lVar3);
      if (((uVar2 & 4) == 0) || ((uVar2 & 2) == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

