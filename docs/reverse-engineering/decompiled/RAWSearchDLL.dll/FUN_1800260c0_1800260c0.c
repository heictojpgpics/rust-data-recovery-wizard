// Function: FUN_1800260c0
// Address: 1800260c0
// Size: 502 bytes


ulonglong FUN_1800260c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong param_5)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  int iVar12;
  byte *pbVar13;
  longlong lVar14;
  
  iVar2 = *(int *)(param_1 + 0x40);
  uVar11 = (ulonglong)iVar2;
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar7 = *(longlong *)(param_1 + 0x20);
  uVar6 = lVar3 + uVar11;
  lVar14 = param_4 - uVar6;
  do {
    if ((lVar7 < param_3) || (lVar14 <= lVar7)) {
      return uVar6 & 0xffffffffffffff00;
    }
    iVar8 = 8;
    pbVar13 = (byte *)((lVar7 - param_5) + param_2);
    pbVar10 = pbVar13 + lVar3 + -0x10;
    do {
      if (*(longlong *)pbVar10 != 0) goto LAB_1800261b8;
      uVar6 = (ulonglong)iVar8;
      iVar8 = iVar8 + 8;
      pbVar10 = pbVar10 + uVar6;
    } while (iVar8 < 0x18);
    iVar8 = (int)lVar3 + -0x10;
    iVar12 = 0;
    if (0 < iVar8) {
      pbVar10 = pbVar13;
      do {
        if ((pbVar10 != (byte *)0x0) && (iVar2 < 9)) {
          pbVar1 = pbVar10 + uVar11;
          uVar9 = 0;
          uVar6 = uVar11;
          if ((pbVar1 != (byte *)0x0) &&
             ((pbVar10 < pbVar1 && (uVar5 = 0, pbVar4 = pbVar10, (longlong)uVar11 < 9)))) {
            for (; uVar9 = uVar5, pbVar4 != pbVar1; pbVar4 = pbVar4 + 1) {
              uVar6 = (ulonglong)*pbVar4;
              uVar5 = uVar9 << 8 | (ulonglong)*pbVar4;
            }
          }
          if (uVar9 == *(ulonglong *)(param_1 + 0x38)) {
            if (iVar12 != -1) {
              *(undefined1 *)(param_1 + 8) = 1;
              lVar7 = (longlong)iVar12 + uVar11 + *(longlong *)(param_1 + 0x20);
              *(longlong *)(param_1 + 0x18) = lVar7;
              return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
            }
            break;
          }
        }
        pbVar10 = pbVar10 + 1;
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar8);
    }
    if (*(char *)(param_1 + 0x44) == '\0') {
      *(undefined1 *)(param_1 + 8) = 1;
      *(longlong *)(param_1 + 0x18) = lVar3 + *(longlong *)(param_1 + 0x20);
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x20) >> 8),1);
    }
LAB_1800261b8:
    lVar7 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x28) < lVar7) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined8 *)(param_1 + 0x18) = 0;
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
    pbVar13 = pbVar13 + lVar3 + -0x10;
    iVar8 = 0;
    do {
      if ((pbVar13 != (byte *)0x0) && (iVar2 < 9)) {
        pbVar10 = pbVar13 + uVar11;
        uVar6 = 0;
        if ((pbVar10 != (byte *)0x0) &&
           ((pbVar13 < pbVar10 && (uVar9 = 0, pbVar1 = pbVar13, (longlong)uVar11 < 9)))) {
          for (; uVar6 = uVar9, pbVar1 != pbVar10; pbVar1 = pbVar1 + 1) {
            uVar9 = uVar6 << 8 | (ulonglong)*pbVar1;
          }
        }
        if (uVar6 == *(ulonglong *)(param_1 + 0x38)) {
          if (iVar8 != -1) {
            *(undefined1 *)(param_1 + 8) = 1;
            *(ulonglong *)(param_1 + 0x18) = (longlong)iVar8 + -0x10 + lVar3 + uVar11 + lVar7;
            return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
          }
          break;
        }
      }
      pbVar13 = pbVar13 + 1;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x10);
    lVar7 = lVar7 + lVar3;
    *(longlong *)(param_1 + 0x20) = lVar7;
  } while( true );
}

