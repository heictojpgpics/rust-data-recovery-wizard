// Function: FUN_1800467a0
// Address: 1800467a0
// Size: 158 bytes


undefined8 FUN_1800467a0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int local_18;
  
  if (*(short *)(param_2 + 6) == 9) {
    if (*(short *)(param_2 + 4) == 0x28) {
      for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
        if (*(short *)(param_2 + (ulonglong)*(ushort *)(param_2 + 4)) !=
            *(short *)(param_2 + -2 + (longlong)((local_18 + 1) * 0x200))) {
          return 0;
        }
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

