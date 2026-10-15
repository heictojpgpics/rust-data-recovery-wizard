// Function: FUN_180039dc0
// Address: 180039dc0
// Size: 649 bytes


ulonglong FUN_180039dc0(longlong param_1,ulonglong param_2,int param_3,longlong param_4,
                       longlong param_5,ulonglong param_6,uint *param_7)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined3 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  
  lVar17 = 0;
  lVar15 = (longlong)param_3;
  uVar3 = *(uint *)(param_6 + 8);
  uVar2 = *(ushort *)(param_6 + 2);
  uVar4 = *(uint *)(param_6 + 4);
  iVar5 = *(int *)(param_6 + 0xc);
  uVar9 = param_6;
  uVar16 = uVar3;
  param_6._0_4_ = uVar4;
  while( true ) {
    uVar12 = (uint)uVar2;
    if ((iVar5 == 0) || (0x200 < uVar4)) break;
    uVar7 = uVar3;
    if (4 < uVar12 * uVar4) {
      uVar14 = *(ulonglong *)(param_1 + 8);
      uVar9 = (ulonglong)uVar16;
      if (((param_5 - uVar14) * lVar15 <= uVar9) ||
         (lVar13 = *(longlong *)(param_1 + 0x178), lVar13 == 0)) break;
      uVar8 = (param_5 - param_4) / 2;
      uVar9 = uVar14 / uVar8;
      if ((longlong)((uVar14 - uVar14 % uVar8) + uVar8) <= (longlong)param_2) {
        if ((longlong)uVar14 <= param_4) break;
        lVar13 = lVar13 - lVar15 * uVar8;
      }
      if (lVar13 == 0) break;
      puVar11 = (undefined1 *)((ulonglong)uVar3 + lVar17 + lVar13);
      if (*(char *)(param_1 + 0x110) == '\0') {
        uVar6 = CONCAT21(CONCAT11(*puVar11,puVar11[1]),puVar11[2]);
        uVar1 = puVar11[3];
      }
      else {
        uVar6 = *(undefined3 *)(puVar11 + 1);
        uVar1 = *puVar11;
      }
      uVar16 = uVar16 + uVar12;
      lVar17 = lVar17 + (int)uVar12;
      uVar7 = CONCAT31(uVar6,uVar1);
    }
    *param_7 = uVar7;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    uVar12 = *param_7;
    uVar14 = (ulonglong)uVar12;
    if (*(longlong *)(param_1 + 0x138) < (longlong)uVar14) {
      *(ulonglong *)(param_1 + 0x138) = uVar14;
    }
    uVar8 = *(ulonglong *)(param_1 + 8);
    uVar9 = (param_5 - uVar8) * lVar15;
    if ((((longlong)uVar9 <= (longlong)uVar14) || (uVar12 == 1)) ||
       (lVar13 = *(longlong *)(param_1 + 0x178), lVar13 == 0)) break;
    uVar10 = (param_5 - param_4) / 2;
    uVar9 = param_2;
    if ((longlong)((uVar8 - uVar8 % uVar10) + uVar10) <= (longlong)param_2) {
      if ((longlong)uVar8 <= param_4) break;
      lVar13 = lVar13 - lVar15 * uVar10;
    }
    if (lVar13 == 0) break;
    uVar9 = FUN_180038730(param_1,(undefined1 *)(uVar14 + lVar13),param_3,param_2,param_4,param_5);
    param_6._0_4_ = (uint)param_6 - 1;
    if ((uint)param_6 == 0) {
      uVar3 = *param_7;
      if ((*(longlong *)(param_1 + 0x130) == 0) ||
         (*(longlong *)(param_1 + 0x130) < (longlong)(ulonglong)uVar3)) {
        *(ulonglong *)(param_1 + 0x130) = (ulonglong)uVar3;
      }
      uVar9 = FUN_180039030(param_1,uVar3);
      return uVar9;
    }
  }
  *(undefined4 *)(param_1 + 0x128) = 1;
  return uVar9;
}

