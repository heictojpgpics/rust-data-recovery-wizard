// Function: FUN_1800458a0
// Address: 1800458a0
// Size: 230 bytes


undefined8 FUN_1800458a0(longlong param_1,int param_2)

{
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (((int)(*(ushort *)(param_1 + 6) - 1) <= local_18) || (param_2 <= local_18)) {
      return 1;
    }
    if ((param_2 < (int)(*(ushort *)(param_1 + 4) + 1 + local_18)) ||
       (param_2 <= (local_18 + 1) * 0x200 + -2)) break;
    *(undefined2 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 4) + 2 + (longlong)local_18 * 2) =
         *(undefined2 *)(param_1 + -2 + (longlong)((local_18 + 1) * 0x200));
    *(undefined2 *)(param_1 + -2 + (longlong)((local_18 + 1) * 0x200)) =
         *(undefined2 *)(param_1 + (ulonglong)*(ushort *)(param_1 + 4));
    local_18 = local_18 + 1;
  }
  return 0;
}

