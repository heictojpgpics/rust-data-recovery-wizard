// Function: FUN_1800457f0
// Address: 1800457f0
// Size: 157 bytes


undefined8 FUN_1800457f0(longlong param_1,int param_2)

{
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if ((int)(*(ushort *)(param_1 + 6) - 1) <= local_18) {
      return 1;
    }
    if ((param_2 <= (int)(uint)*(ushort *)(param_1 + 4)) || (param_2 <= (local_18 + 1) * 0x200 + -2)
       ) break;
    if (*(short *)(param_1 + (ulonglong)*(ushort *)(param_1 + 4)) !=
        *(short *)(param_1 + -2 + (longlong)((local_18 + 1) * 0x200))) {
      return 0;
    }
    local_18 = local_18 + 1;
  }
  return 0;
}

