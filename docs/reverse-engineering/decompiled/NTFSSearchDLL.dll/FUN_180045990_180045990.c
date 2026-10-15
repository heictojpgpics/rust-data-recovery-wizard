// Function: FUN_180045990
// Address: 180045990
// Size: 431 bytes


undefined8 FUN_180045990(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  longlong lVar6;
  uint local_38;
  int local_34;
  
  local_38 = FUN_180045690(param_1);
  iVar3 = FUN_1800456c0(param_1);
  if (param_2 < local_38) {
    uVar5 = 0;
  }
  else if ((param_1 + (ulonglong)local_38 == 0) || ((int)param_2 <= (int)(local_38 + 0x54))) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + (ulonglong)local_38 + 0x10);
    local_34 = 0;
    do {
      iVar4 = FUN_180045690(param_1);
      if (((uint)(iVar3 + iVar4) <= local_38) ||
         (lVar6 = param_1 + (ulonglong)local_38, (*(ushort *)(lVar6 + 0xc) & 2) != 0)) break;
      if (*(short *)(lVar6 + 0xc) != 1) {
        if (*(short *)(lVar6 + 8) == 0) break;
        bVar2 = FUN_180045b50(lVar6);
        if ((int)CONCAT71(extraout_var,bVar2) == 0) {
          return 0;
        }
        if (((uVar1 & 0xffffffffffff) != (*(ulonglong *)(lVar6 + 0x10) & 0xffffffffffff)) ||
           (uVar1 >> 0x30 != *(ulonglong *)(lVar6 + 0x10) >> 0x30)) {
          return 0;
        }
      }
      local_38 = local_38 + *(ushort *)(lVar6 + 8);
      bVar2 = local_34 < 0x1f5;
      local_34 = local_34 + 1;
    } while (bVar2);
    uVar5 = 1;
  }
  return uVar5;
}

