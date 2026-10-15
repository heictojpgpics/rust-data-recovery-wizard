// Function: FUN_180041c50
// Address: 180041c50
// Size: 36 bytes


undefined8 FUN_180041c50(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((0x1ff < uVar1) && (*(uint *)(param_2 + 4) <= uVar1)) {
    *(ulonglong *)(param_3 + 0x10) = (ulonglong)uVar1;
    *(undefined4 *)(param_3 + 0x18) = 0x20;
    return 1;
  }
  return 0;
}

