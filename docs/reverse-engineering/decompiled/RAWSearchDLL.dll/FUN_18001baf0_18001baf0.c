// Function: FUN_18001baf0
// Address: 18001baf0
// Size: 511 bytes


undefined8
FUN_18001baf0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  byte bVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  bVar2 = false;
  uVar12 = 0;
  if (*(char *)(param_1 + 0x124) == '\0') {
    lVar11 = *(longlong *)(param_1 + 0x118);
    while( true ) {
      if ((lVar11 < param_3) || (param_4 <= lVar11 + 0x10)) goto LAB_18001bc58;
      pbVar10 = (byte *)((lVar11 - param_5) + param_2);
      pbVar7 = pbVar10 + 4;
      uVar3 = uVar12;
      if ((pbVar10 != (byte *)0x0) &&
         ((pbVar7 != (byte *)0x0 && (uVar3 = 0, uVar9 = uVar12, pbVar6 = pbVar10, pbVar10 < pbVar7))
         )) {
        do {
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          uVar3 = uVar9 << 8 | (ulonglong)bVar1;
          uVar9 = uVar3;
        } while (pbVar6 != pbVar7);
      }
      pbVar6 = pbVar10 + 8;
      uVar9 = uVar12;
      if (((pbVar7 != (byte *)0x0) && (pbVar6 != (byte *)0x0)) &&
         (uVar9 = 0, uVar8 = uVar12, pbVar7 < pbVar6)) {
        do {
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          uVar9 = uVar8 << 8 | (ulonglong)bVar1;
          uVar8 = uVar9;
        } while (pbVar7 != pbVar6);
      }
      iVar5 = *(int *)(param_1 + 0x120);
      if (iVar5 < 3) {
        *(int *)(param_1 + 0x120) = iVar5 + 1;
      }
      else {
        iVar5 = 2;
      }
      if (uVar9 != *(ulonglong *)(&DAT_180067fe0 + (longlong)iVar5 * 8)) break;
      if (uVar3 == 0) {
        *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + 4;
        *(undefined1 *)(param_1 + 0x124) = 1;
        goto LAB_18001bc58;
      }
      if (uVar3 == 1) {
        uVar3 = uVar12;
        if (((pbVar6 != (byte *)0x0) && (pbVar10 != (byte *)0xfffffffffffffff0)) &&
           (uVar3 = 0, uVar9 = uVar12, pbVar6 < pbVar10 + 0x10)) {
          do {
            bVar1 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            uVar3 = uVar9 << 8 | (ulonglong)bVar1;
            uVar9 = uVar3;
          } while (pbVar6 != pbVar10 + 0x10);
        }
      }
      lVar11 = *(longlong *)(param_1 + 0x118) + uVar3;
      *(longlong *)(param_1 + 0x118) = lVar11;
    }
    bVar2 = true;
  }
LAB_18001bc58:
  lVar11 = *(longlong *)(param_1 + 0x118);
  if (lVar11 < 0x1f400000) {
    if ((*(char *)(param_1 + 0x124) != '\0') && (uVar3 = uVar12, param_3 <= lVar11)) {
      do {
        iVar5 = (int)uVar3;
        if (param_4 <= lVar11) break;
        uVar3 = (ulonglong)(iVar5 + 1);
        if (*(char *)((lVar11 - param_5) + param_2) != '\0') {
          uVar3 = uVar12;
        }
        iVar5 = (int)uVar3;
        if (0xf < iVar5) goto LAB_18001bcb9;
        lVar11 = lVar11 + 1;
        *(longlong *)(param_1 + 0x118) = lVar11;
      } while (param_3 <= lVar11);
      if (0xf < iVar5) {
LAB_18001bcb9:
        *(longlong *)(param_1 + 0x10) = lVar11 + -0xf;
        return 1;
      }
    }
    if (bVar2) {
      *(longlong *)(param_1 + 0x10) = lVar11;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar4 = 1;
  }
  return uVar4;
}

