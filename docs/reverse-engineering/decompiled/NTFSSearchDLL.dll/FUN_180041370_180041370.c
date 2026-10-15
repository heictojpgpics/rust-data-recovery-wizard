// Function: FUN_180041370
// Address: 180041370
// Size: 318 bytes


undefined8 FUN_180041370(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_28;
  
  uVar1 = FUN_1800416d0(param_1);
  local_28 = (uint)uVar1;
  FUN_180041670(param_1);
  while( true ) {
    if ((0x3f7 < local_28) || (*(int *)(param_1 + (ulonglong)local_28) == -1)) {
      return 1;
    }
    uVar3 = FUN_1800454a0((undefined4 *)(param_1 + (ulonglong)local_28),param_2 - local_28);
    if ((int)uVar3 == 0) {
      return 0;
    }
    iVar2 = FUN_180045290((undefined4 *)(param_1 + (ulonglong)local_28));
    if ((iVar2 == 0x30) &&
       (uVar3 = FUN_1800434f0((undefined4 *)(param_1 + (ulonglong)local_28),param_2 - local_28),
       (int)uVar3 == 0)) break;
    iVar2 = FUN_180045480(param_1 + (ulonglong)local_28);
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = FUN_180045480(param_1 + (ulonglong)local_28);
    local_28 = local_28 + iVar2;
  }
  return 0;
}

