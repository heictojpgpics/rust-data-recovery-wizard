// Function: FUN_180045130
// Address: 180045130
// Size: 121 bytes


undefined8 FUN_180045130(undefined4 *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = *(ushort *)(param_1 + 8);
  uVar2 = param_1[1];
  if (uVar2 < uVar1) {
    uVar4 = 0;
  }
  else {
    iVar3 = FUN_180045290(param_1);
    if ((iVar3 == 0x80) &&
       (uVar4 = FUN_18003ff50((char *)((longlong)param_1 + (ulonglong)uVar1),uVar2 - uVar1),
       (int)uVar4 == 0)) {
      return 0;
    }
    uVar4 = 1;
  }
  return uVar4;
}

