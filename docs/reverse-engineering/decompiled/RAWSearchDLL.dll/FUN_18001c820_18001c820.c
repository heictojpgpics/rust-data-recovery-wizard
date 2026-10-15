// Function: FUN_18001c820
// Address: 18001c820
// Size: 576 bytes


bool FUN_18001c820(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  byte bVar1;
  bool bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  
  bVar2 = false;
  if ((*(char *)(param_1 + 0x124) == '\0') &&
     (lVar5 = *(longlong *)(param_1 + 0x118), param_3 <= lVar5)) {
    do {
      uVar8 = 0;
      if (param_4 <= lVar5 + 0x10) break;
      pbVar9 = (byte *)((lVar5 - param_5) + param_2);
      pbVar4 = pbVar9 + 4;
      pbVar6 = pbVar9;
      uVar7 = uVar8;
      if (((pbVar9 != (byte *)0x0) && (pbVar4 != (byte *)0x0)) && (pbVar9 < pbVar4)) {
        do {
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          uVar7 = uVar7 << 8 | (ulonglong)bVar1;
        } while (pbVar6 != pbVar4);
      }
      pbVar10 = pbVar9 + 8;
      if (((pbVar4 != (byte *)0x0) && (pbVar10 != (byte *)0x0)) && (pbVar4 < pbVar10)) {
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          uVar8 = uVar8 << 8 | (ulonglong)bVar1;
        } while (pbVar4 != pbVar10);
      }
      if ((*(char *)(param_1 + 0x126) != '\0') &&
         (uVar3 = FUN_18001ca60(param_1,pbVar6,0), uVar8 != uVar3)) {
        bVar2 = true;
        goto LAB_18001c9a3;
      }
      uVar3 = 0;
      if ((((uVar7 == 1) && (uVar7 = uVar3, pbVar10 != (byte *)0x0)) &&
          (pbVar9 != (byte *)0xfffffffffffffff0)) && (pbVar10 < pbVar9 + 0x10)) {
        do {
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          uVar7 = uVar3 << 8 | (ulonglong)bVar1;
          uVar3 = uVar7;
        } while (pbVar10 != pbVar9 + 0x10);
      }
      if (uVar7 == 0) {
        *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + 4;
        bVar2 = false;
        *(undefined1 *)(param_1 + 0x124) = 1;
        goto LAB_18001c9a3;
      }
      if ((longlong)uVar7 < 0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        return true;
      }
      *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + uVar7;
      uVar7 = FUN_18001ca60(param_1,pbVar6,0);
      if (uVar8 == uVar7) {
        *(undefined1 *)(param_1 + 0x126) = 1;
      }
      lVar5 = *(longlong *)(param_1 + 0x118);
    } while (param_3 <= lVar5);
    bVar2 = false;
  }
LAB_18001c9a3:
  if (*(char *)(param_1 + 0x124) != '\0') {
    lVar5 = *(longlong *)(param_1 + 0x118);
    iVar11 = 0;
    while ((param_3 <= lVar5 && (lVar5 < param_4))) {
      if (0x1f3fffff < lVar5) {
        return true;
      }
      iVar11 = iVar11 + 1;
      if (*(char *)((lVar5 - param_5) + param_2) != '\0') {
        iVar11 = 0;
      }
      if ((0xf < iVar11) && (*(char *)(param_1 + 0x125) == '\0')) {
        *(undefined1 *)(param_1 + 0x125) = 1;
        *(longlong *)(param_1 + 0x10) = lVar5 + -0xf;
      }
      if (*(short *)((lVar5 - param_5) + param_2) == DAT_180067ff8) {
        *(longlong *)(param_1 + 0x10) = lVar5 + 2;
        return true;
      }
      lVar5 = lVar5 + 1;
      *(longlong *)(param_1 + 0x118) = lVar5;
    }
  }
  if (bVar2) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x118);
  }
  return bVar2;
}

