// Function: FUN_180041850
// Address: 180041850
// Size: 233 bytes


longlong FUN_180041850(longlong param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint local_18;
  int local_14;
  
  uVar1 = FUN_1800416d0(param_1);
  local_18 = (uint)uVar1;
  FUN_180041670(param_1);
  local_14 = 0;
  while( true ) {
    if ((0x3f7 < local_18) || (*(int *)(param_1 + (ulonglong)local_18) == -1)) {
      return 0;
    }
    iVar2 = FUN_180045290((undefined4 *)(param_1 + (ulonglong)local_18));
    if (param_2 == iVar2) {
      if (local_14 == param_3) {
        return param_1 + (ulonglong)local_18;
      }
      local_14 = local_14 + 1;
    }
    iVar2 = FUN_180045480(param_1 + (ulonglong)local_18);
    if (iVar2 == 0) break;
    iVar2 = FUN_180045480(param_1 + (ulonglong)local_18);
    local_18 = local_18 + iVar2;
  }
  return 0;
}

