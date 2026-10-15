// Function: FUN_180026940
// Address: 180026940
// Size: 570 bytes


undefined4 FUN_180026940(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 uVar16;
  uint uVar17;
  bool bVar18;
  undefined4 uVar15;
  
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = uVar14;
  if (param_2 != 0) {
    iVar8 = 5;
    uVar16 = uVar15;
    if (((byte)(*(char *)(param_2 + 3) - 3U) < 0x12) && (8 < *(uint *)(param_2 + 4))) {
      bVar3 = *(byte *)(param_2 + 8);
      uVar4 = (uint)(bVar3 >> 3);
      uVar16 = uVar14;
      if (1 < uVar4) {
        uVar4 = uVar4 - 1;
        uVar17 = 0;
        uVar10 = (ulonglong)uVar4;
        uVar11 = (ulonglong)uVar4;
        pbVar13 = (byte *)(param_2 + 8);
        do {
          bVar18 = iVar8 != 7;
          iVar5 = iVar8 + 1;
          iVar8 = 0;
          if (bVar18) {
            iVar8 = iVar5;
          }
          pbVar6 = pbVar13 + 1;
          if (bVar18) {
            pbVar6 = pbVar13;
          }
          bVar2 = 7 - (char)iVar8;
          uVar17 = *pbVar6 >> (bVar2 & 0x1f) & 1 | uVar17 * 2;
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar6;
        } while (uVar11 != 0);
        uVar4 = -uVar17;
        if ((bVar3 & 4) == 0) {
          uVar4 = uVar17;
        }
        uVar17 = 0;
        uVar11 = uVar10;
        do {
          bVar18 = iVar8 != 7;
          iVar5 = iVar8 + 1;
          iVar8 = 0;
          if (bVar18) {
            iVar8 = iVar5;
          }
          pbVar7 = pbVar13 + 1;
          if (bVar18) {
            pbVar7 = pbVar13;
          }
          bVar3 = 7 - (char)iVar8;
          uVar17 = *pbVar7 >> (bVar3 & 0x1f) & 1 | uVar17 * 2;
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar7;
        } while (uVar11 != 0);
        uVar12 = 0;
        uVar1 = -uVar17;
        if ((*pbVar6 >> (bVar2 & 0x1f) & 1) == 0) {
          uVar1 = uVar17;
        }
        uVar11 = uVar10;
        do {
          bVar18 = iVar8 != 7;
          iVar5 = iVar8 + 1;
          iVar8 = 0;
          if (bVar18) {
            iVar8 = iVar5;
          }
          pbVar6 = pbVar13 + 1;
          if (bVar18) {
            pbVar6 = pbVar13;
          }
          bVar2 = 7 - (char)iVar8;
          uVar12 = *pbVar6 >> (bVar2 & 0x1f) & 1 | uVar12 * 2;
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar6;
        } while (uVar11 != 0);
        uVar9 = 0;
        uVar17 = -uVar12;
        if ((*pbVar7 >> (bVar3 & 0x1f) & 1) == 0) {
          uVar17 = uVar12;
        }
        do {
          bVar18 = iVar8 != 7;
          iVar5 = iVar8 + 1;
          iVar8 = 0;
          if (bVar18) {
            iVar8 = iVar5;
          }
          pbVar7 = pbVar13 + 1;
          if (bVar18) {
            pbVar7 = pbVar13;
          }
          uVar9 = *pbVar7 >> (7U - (char)iVar8 & 0x1f) & 1 | uVar9 * 2;
          uVar10 = uVar10 - 1;
          pbVar13 = pbVar7;
        } while (uVar10 != 0);
        uVar12 = -uVar9;
        if ((*pbVar6 >> (bVar2 & 0x1f) & 1) == 0) {
          uVar12 = uVar9;
        }
        if (((((int)uVar4 < (int)uVar1) && (uVar16 = uVar15, (int)uVar17 < (int)uVar12)) &&
            (0 < (int)uVar1)) &&
           (((0 < (int)uVar12 && (-1 < (int)uVar4)) && (uVar16 = 0, -1 < (int)uVar17)))) {
          uVar16 = 1;
        }
      }
    }
  }
  return uVar16;
}

