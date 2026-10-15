// Function: FUN_1800411f0
// Address: 1800411f0
// Size: 140 bytes


undefined8 FUN_1800411f0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int local_18;
  
  if (param_2 < 0x400) {
    uVar1 = 0;
  }
  else {
    for (local_18 = 0; (local_18 < (int)(*(ushort *)(param_1 + 6) - 1) && (local_18 < 2));
        local_18 = local_18 + 1) {
      if (*(short *)(param_1 + (ulonglong)*(ushort *)(param_1 + 4)) !=
          *(short *)(param_1 + -2 + (longlong)((local_18 + 1) * 0x200))) {
        return 0;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

