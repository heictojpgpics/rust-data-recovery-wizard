// Function: FUN_180045e90
// Address: 180045e90
// Size: 444 bytes


ulonglong FUN_180045e90(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  longlong lVar7;
  uint local_44;
  ulonglong local_30;
  
  uVar5 = FUN_180045480((longlong)param_1);
  FUN_180045320((longlong)param_1);
  uVar6 = FUN_1800454a0(param_1,uVar5);
  if (((int)uVar6 != 0) && (uVar6 = FUN_180045df0((longlong)param_1), (int)uVar6 != 0)) {
    uVar4 = FUN_180045350((longlong)param_1);
    iVar1 = *(int *)((longlong)param_1 + (ulonglong)uVar4 + 0x10);
    iVar2 = *(int *)((longlong)param_1 + (ulonglong)uVar4 + 0x14);
    local_44 = 0;
    local_30 = 0xffffffffffffffff;
    while( true ) {
      if (iVar2 - 0x10U <= local_44) {
        return local_30;
      }
      lVar7 = (longlong)param_1 + (ulonglong)local_44 + (ulonglong)(uVar4 + 0x10 + iVar1);
      if (*(short *)(lVar7 + 8) == 0) {
        return local_30;
      }
      if (*(short *)(lVar7 + 0xc) == 2) {
        return local_30;
      }
      if (*(short *)(lVar7 + 0xc) != 1) {
        if (*(char *)(lVar7 + 0x50) == '\0') {
          return local_30;
        }
        bVar3 = FUN_180045b50(lVar7);
        if ((int)CONCAT71(extraout_var,bVar3) == 0) {
          return local_30;
        }
      }
      if (local_30 == 0xffffffffffffffff) {
        local_30 = *(ulonglong *)(lVar7 + 0x10) & 0xffffffffffff;
      }
      if ((*(ulonglong *)(lVar7 + 0x10) & 0xffffffffffff) != local_30) break;
      local_44 = local_44 + *(ushort *)(lVar7 + 8);
    }
  }
  return 0xffffffffffffffff;
}

