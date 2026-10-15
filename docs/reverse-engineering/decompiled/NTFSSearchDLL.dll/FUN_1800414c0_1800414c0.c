// Function: FUN_1800414c0
// Address: 1800414c0
// Size: 210 bytes


int FUN_1800414c0(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint local_18;
  int local_10;
  
  uVar1 = FUN_1800416d0(param_1);
  local_18 = (uint)uVar1;
  FUN_180041670(param_1);
  local_10 = 0;
  while( true ) {
    if (0x3f7 < local_18) {
      return local_10;
    }
    iVar2 = FUN_180045290((undefined4 *)(param_1 + (ulonglong)local_18));
    if (param_2 == iVar2) {
      local_10 = local_10 + 1;
    }
    iVar2 = FUN_180045480(param_1 + (ulonglong)local_18);
    if (iVar2 == 0) {
      return local_10;
    }
    uVar3 = FUN_180045480(param_1 + (ulonglong)local_18);
    if (0x3ff < uVar3) {
      return local_10;
    }
    if (uVar3 == 0) break;
    local_18 = local_18 + uVar3;
  }
  return local_10;
}

