// Function: FUN_180041a20
// Address: 180041a20
// Size: 183 bytes


undefined8 FUN_180041a20(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int local_18;
  
  if (param_2 < 0x400) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1800411f0(param_1,param_2);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      for (local_18 = 0;
          (local_18 < (int)(*(ushort *)(param_1 + 6) - 1) && (local_18 * 0x200 < param_2));
          local_18 = local_18 + 1) {
        *(undefined2 *)(param_1 + -2 + (longlong)((local_18 + 1) * 0x200)) =
             *(undefined2 *)
              (param_1 + (ulonglong)*(ushort *)(param_1 + 4) + 2 + (longlong)local_18 * 2);
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}

