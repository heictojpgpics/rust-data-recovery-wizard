// Function: FUN_1800359e0
// Address: 1800359e0
// Size: 862 bytes


undefined8
FUN_1800359e0(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,longlong param_5,
             longlong param_6)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ushort uVar12;
  char *pcVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  lVar1 = *(longlong *)(param_1 + 0x138);
  uVar10 = (ulonglong)(int)param_4;
  bVar2 = false;
  bVar3 = false;
  if (lVar1 == 0) {
    lVar9 = 0;
  }
  else {
    uVar6 = *(ulonglong *)(param_1 + 8);
    uVar4 = (param_6 - param_5) / 2;
    lVar9 = lVar1;
    if (((longlong)((uVar6 - uVar6 % uVar4) + uVar4) <= param_3) && (param_5 < (longlong)uVar6)) {
      lVar9 = lVar1 - uVar10 * uVar4;
    }
  }
  lVar8 = 2;
  pcVar13 = (char *)(lVar9 + 2);
  if (pcVar13 != (char *)0x0) {
    if (*pcVar13 == -1) {
      cVar7 = *(char *)(lVar9 + 3);
      lVar16 = 2;
      lVar9 = 0;
      do {
        lVar14 = lVar9 + 1;
        if (0x4fff < lVar9) break;
        lVar11 = (longlong)(int)uVar10;
        lVar9 = lVar11 * param_3;
        lVar15 = lVar11 * param_6;
        if (lVar15 < lVar9 + 6 + lVar16) {
          return 0;
        }
        switch(cVar7) {
        case -0x40:
        case -0x3f:
        case -0x3e:
        case -0x3d:
        case -0x3b:
        case -0x3a:
        case -0x39:
        case -0x37:
        case -0x36:
        case -0x35:
        case -0x33:
        case -0x32:
        case -0x31:
          uVar12 = *(ushort *)(pcVar13 + 2) << 8 | *(ushort *)(pcVar13 + 2) >> 8;
          if (lVar1 == 0) {
            return 0;
          }
          uVar10 = *(ulonglong *)(param_1 + 8);
          uVar6 = (param_6 - param_5) / 2;
          lVar5 = lVar1;
          if (((longlong)((uVar10 - uVar10 % uVar6) + uVar6) <= param_3) &&
             (param_5 < (longlong)uVar10)) {
            lVar5 = lVar1 - lVar11 * uVar6;
          }
          if (lVar5 == 0) {
            return 0;
          }
          lVar16 = lVar16 + 4 + lVar8;
          if (lVar15 < lVar9 + 6 + lVar16) {
            return 0;
          }
          if ((*(char *)(lVar5 + 4 + lVar8) != '\b') || (*(char *)(lVar5 + 9 + lVar8) != '\x03'))
          goto LAB_180035d08;
          bVar3 = true;
          break;
        default:
          uVar12 = *(ushort *)(pcVar13 + 2) << 8 | *(ushort *)(pcVar13 + 2) >> 8;
          break;
        case -0x26:
          if (!bVar3) {
            return 0;
          }
          uVar12 = *(ushort *)(pcVar13 + 2) << 8 | *(ushort *)(pcVar13 + 2) >> 8;
          lVar5 = FUN_180035970(param_1,param_3,param_4,param_5,param_6);
          if (lVar5 == 0) {
            return 0;
          }
          lVar16 = lVar16 + 4 + lVar8;
          if (lVar15 < lVar9 + 6 + lVar16) {
            return 0;
          }
          if (*(char *)(lVar8 + 4 + lVar5) != '\x03') {
            return 0;
          }
          bVar2 = true;
          break;
        case -1:
          uVar12 = 0;
        }
        lVar8 = lVar8 + (ulonglong)uVar12 + 2;
        lVar16 = lVar16 + lVar8;
        if (lVar15 < lVar9 + 6 + lVar16) {
          return 0;
        }
        if (lVar1 == 0) {
          return 0;
        }
        uVar10 = *(ulonglong *)(param_1 + 8);
        uVar6 = (param_6 - param_5) / 2;
        lVar9 = lVar1;
        if (((longlong)((uVar10 - uVar10 % uVar6) + uVar6) <= param_3) &&
           (param_5 < (longlong)uVar10)) {
          lVar9 = lVar1 - lVar11 * uVar6;
        }
        if (lVar9 == 0) {
          return 0;
        }
        pcVar13 = (char *)(lVar9 + lVar8);
        uVar10 = (ulonglong)param_4;
        cVar7 = pcVar13[1];
        lVar9 = lVar14;
      } while (!bVar2);
      *(longlong *)(param_1 + 0xd8) = lVar8;
      if (lVar14 != 0x5000) {
        return 1;
      }
    }
    else {
LAB_180035d08:
      *(undefined4 *)(param_1 + 0x148) = 0;
    }
  }
  return 0;
}

