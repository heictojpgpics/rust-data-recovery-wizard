// Function: FUN_180046060
// Address: 180046060
// Size: 122 bytes


undefined8 FUN_180046060(longlong param_1,int *param_2,undefined4 *param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_1800460e0(param_1);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar1 = FUN_180045350(param_1);
      *param_2 = *(int *)(lVar2 + 0x10) + 0x10 + (uint)uVar1;
      *param_3 = *(undefined4 *)(lVar2 + 0x14);
      uVar3 = 1;
    }
  }
  return uVar3;
}

