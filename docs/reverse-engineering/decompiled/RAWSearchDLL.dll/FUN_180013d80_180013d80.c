// Function: FUN_180013d80
// Address: 180013d80
// Size: 573 bytes


undefined8
FUN_180013d80(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong *param_5)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  char local_48 [8];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong uVar14;
  
  if (((param_2 == 0) || (param_3 < 0x200)) || (param_4 < 0)) {
    DAT_18008f040 = 1;
    return 0;
  }
  uVar12 = 0;
  uVar10 = (ulonglong)param_3;
  DAT_18008f040 = 0;
  *(ulonglong *)(param_1 + 0x110) = ((param_4 - *(longlong *)(param_1 + 8)) + 1) * uVar10;
  uVar5 = *(ulonglong *)(param_1 + 0x118);
  uVar11 = ((param_5[1] - param_4) + -1) * uVar10;
  local_30 = (param_4 - *param_5) * uVar10;
  uVar14 = uVar12;
  local_40 = uVar10;
  local_38 = uVar11;
  while( true ) {
    uVar7 = 0;
    uVar9 = *(ulonglong *)(param_1 + 0x110);
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
    if (uVar9 <= uVar5) {
      return 1;
    }
    if (local_30 < uVar9 - uVar5) {
      DAT_18008f040 = 1;
      return 0;
    }
    if (uVar9 <= uVar5) {
      return 1;
    }
    if ((ulonglong)param_5[1] < *(longlong *)(param_1 + 8) + 1 + uVar5 / uVar10) {
      return 1;
    }
    if (uVar11 <= uVar12 + 0x3f4) {
      DAT_18008f040 = 1;
      return 0;
    }
    lVar6 = (uVar5 - (param_4 - *(longlong *)(param_1 + 8)) * uVar10) + param_2;
    if (lVar6 == 0) {
      DAT_18008f040 = 1;
      return 0;
    }
    if (*(int *)(lVar6 + 0x101) != s_ustar_1800674d0._0_4_) {
      DAT_18008f040 = 1;
      return 0;
    }
    if (*(char *)(lVar6 + 0x105) != s_ustar_1800674d0[4]) break;
    lVar4 = uVar5 + 0x200;
    *(longlong *)(param_1 + 0x118) = lVar4;
    uVar9 = uVar7;
    if (lVar6 + 0x7c != 0) {
      local_48[0] = '\0';
      local_48[1] = '\0';
      bVar8 = 0x1e;
      do {
        local_48[0] = *(undefined1 *)(uVar7 + lVar6 + 0x7c);
        lVar2 = atol(local_48);
        uVar7 = uVar7 + 1;
        bVar1 = bVar8 & 0x1f;
        bVar8 = bVar8 - 3;
        uVar9 = (ulonglong)(uint)((int)uVar9 + (lVar2 << bVar1));
      } while ((longlong)uVar7 < 0xc);
      lVar4 = *(longlong *)(param_1 + 0x118);
      uVar10 = local_40;
      uVar11 = local_38;
    }
    uVar5 = lVar4 + uVar9;
    iVar3 = (int)(uVar9 >> 9);
    *(ulonglong *)(param_1 + 0x118) = uVar5;
    if ((uVar9 & 0x1ff) != 0) {
      iVar3 = iVar3 + 1;
    }
    uVar12 = uVar12 + 0x200 + (longlong)(iVar3 << 9);
    if ((uVar5 & 0x1ff) != 0) {
      uVar5 = (uVar5 & 0xfffffffffffffe00) + 0x200;
      *(ulonglong *)(param_1 + 0x118) = uVar5;
    }
    if (0x400 < (int)uVar13) {
      DAT_18008f040 = 1;
      return 0;
    }
  }
  DAT_18008f040 = 1;
  return 0;
}

