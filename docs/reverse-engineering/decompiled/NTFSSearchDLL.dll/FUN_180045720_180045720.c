// Function: FUN_180045720
// Address: 180045720
// Size: 201 bytes


undefined8 FUN_180045720(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int local_18;
  
  uVar1 = FUN_1800457f0(param_1,param_2);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    for (local_18 = 0; local_18 < (int)(*(ushort *)(param_1 + 6) - 1); local_18 = local_18 + 1) {
      if ((param_2 <= (int)(*(ushort *)(param_1 + 4) + 1 + local_18)) ||
         (param_2 < (local_18 + 1) * 0x200)) {
        return 0;
      }
      *(undefined2 *)(param_1 + -2 + (longlong)((local_18 + 1) * 0x200)) =
           *(undefined2 *)
            (param_1 + (ulonglong)*(ushort *)(param_1 + 4) + 2 + (longlong)local_18 * 2);
    }
    uVar1 = 1;
  }
  return uVar1;
}

