// Function: FUN_180045df0
// Address: 180045df0
// Size: 146 bytes


undefined8 FUN_180045df0(longlong param_1)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  bVar1 = FUN_180045400(param_1);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_180045480(param_1);
    uVar3 = FUN_180045320(param_1);
    uVar2 = FUN_180045350(param_1);
    if (uVar3 < *(int *)(param_1 + (ulonglong)uVar2 + 0x14) + 0x10U) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}

