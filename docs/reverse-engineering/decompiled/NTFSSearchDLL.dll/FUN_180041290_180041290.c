// Function: FUN_180041290
// Address: 180041290
// Size: 207 bytes


undefined8 FUN_180041290(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int local_18;
  
  if (param_2 < 0x400) {
    uVar1 = 0;
  }
  else {
    for (local_18 = 0;
        (local_18 < (int)(*(ushort *)(param_1 + 6) - 1) &&
        (local_18 < (int)(param_2 + (param_2 >> 0x1f & 0x1ffU)) >> 9)); local_18 = local_18 + 1) {
      *(undefined2 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 4) + 2 + (longlong)local_18 * 2) =
           *(undefined2 *)(param_1 + -2 + (longlong)((local_18 + 1) * 0x200));
      *(undefined2 *)(param_1 + -2 + (longlong)((local_18 + 1) * 0x200)) =
           *(undefined2 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 4));
    }
    uVar1 = 1;
  }
  return uVar1;
}

