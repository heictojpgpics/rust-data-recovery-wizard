// Function: FUN_180040d70
// Address: 180040d70
// Size: 201 bytes


undefined8 FUN_180040d70(longlong *param_1,wchar_t *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined7 extraout_var;
  longlong lVar3;
  undefined8 uVar4;
  
  bVar1 = FUN_180041c50(param_1);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_180041b70(param_1,0x10,0);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = FUN_180044f60(lVar3);
      bVar1 = false;
      if (((uVar2 & 4) != 0) && ((uVar2 & 2) != 0)) {
        bVar1 = true;
      }
      if (bVar1) {
        lVar3 = FUN_180041b70(param_1,0x30,0);
        if (lVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_180043580(lVar3,param_2);
          if ((int)uVar4 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

