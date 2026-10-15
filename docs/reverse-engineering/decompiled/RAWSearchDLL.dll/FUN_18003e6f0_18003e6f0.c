// Function: FUN_18003e6f0
// Address: 18003e6f0
// Size: 767 bytes


undefined8
FUN_18003e6f0(longlong param_1,longlong param_2,uint param_3,longlong param_4,longlong *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  ushort uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int *piVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined4 local_68;
  ulonglong uVar12;
  
  uVar14 = (ulonglong)(int)param_3;
  if (((param_2 != 0) && (0x1ff < (int)param_3)) && (-1 < param_4)) {
    lVar9 = param_4 - *(longlong *)(param_1 + 8);
    uVar17 = uVar14 * lVar9;
    if (uVar17 < (ulonglong)(*(longlong *)(param_1 + 0x128) * 0x14)) {
      uVar19 = 0;
      uVar23 = (lVar9 + 1) * uVar14;
      *(ulonglong *)(param_1 + 0x120) = uVar23;
      lVar16 = param_5[1];
      lVar9 = *param_5;
      lVar7 = lVar16 - param_4;
      uVar12 = uVar19;
      uVar21 = uVar19;
      uVar22 = uVar19;
      while( true ) {
        uVar4 = *(ulonglong *)(param_1 + 0x110);
        iVar20 = (int)uVar21;
        uVar21 = (ulonglong)(iVar20 + 1);
        if (uVar23 < uVar4 || uVar23 - uVar4 == 0) {
          return 1;
        }
        if ((param_4 - lVar9) * uVar14 < uVar23 - uVar4) {
          return 0;
        }
        if (uVar23 <= uVar4) {
          return 1;
        }
        if (*(int *)(param_1 + 0x11c) == 0) {
          uVar10 = uVar4 % uVar14;
        }
        else {
          *(undefined4 *)(param_1 + 0x11c) = 0;
          lVar16 = param_5[1];
          uVar10 = uVar4 - uVar17;
        }
        piVar18 = (int *)(param_2 + uVar10);
        if ((lVar16 - *(longlong *)(param_1 + 8)) * uVar14 < uVar4 + 10) break;
        uVar11 = 0;
        if ((lVar7 + -1) * uVar14 <= uVar22 + 0x200) {
          return 0;
        }
        uVar10 = uVar19;
        if (piVar18 == (int *)0x0) {
          return 0;
        }
        while (*piVar18 != *(int *)(&PTR_DAT_18006caa0)[uVar10]) {
          uVar10 = uVar10 + 1;
          if (5 < (longlong)uVar10) {
            return 0;
          }
        }
        iVar1 = piVar18[1];
        uVar13 = uVar11;
        if (iVar1 != 0) {
          uVar8 = (ushort)((uint)iVar1 >> 0x10);
          uVar13 = CONCAT22((ushort)iVar1 << 8 | (ushort)iVar1 >> 8,uVar8 << 8 | uVar8 >> 8);
        }
        uVar15 = 0;
        if ((uVar10 == 5) && (uVar15 = uVar11, (short)piVar18[2] == 0)) {
          iVar2 = piVar18[4];
          if (iVar2 == 0) {
            local_68._1_1_ = (undefined1)((uint)iVar1 >> 8);
            local_68._2_1_ = (undefined1)((uint)iVar1 >> 0x10);
            local_68._3_1_ = (undefined1)iVar1;
            uVar5 = CONCAT11(local_68._3_1_,local_68._1_1_);
            local_68._0_2_ = CONCAT11(local_68._2_1_,(char)((uint)iVar1 >> 0x18));
            local_68 = CONCAT22(uVar5,(undefined2)local_68);
            uVar10 = (ulonglong)local_68;
            if (local_68 != 0) {
              *(ulonglong *)(param_1 + 0x110) = uVar4 + uVar10;
              uVar3 = *(undefined4 *)((longlong)piVar18 + 10);
              local_68._1_1_ = (undefined1)((uint)uVar3 >> 8);
              uVar6 = local_68._1_1_;
              local_68._2_1_ = (undefined1)((uint)uVar3 >> 0x10);
              local_68._0_2_ = CONCAT11(local_68._2_1_,(char)((uint)uVar3 >> 0x18));
              local_68._0_3_ = CONCAT12(uVar6,(undefined2)local_68);
              local_68 = CONCAT13((char)uVar3,(undefined3)local_68);
              *(ulonglong *)(param_1 + 0x110) = (ulonglong)(local_68 * 0xe) + uVar4 + uVar10;
            }
          }
          else {
            local_68._1_1_ = (undefined1)((uint)iVar2 >> 8);
            uVar6 = local_68._1_1_;
            local_68._2_1_ = (undefined1)((uint)iVar2 >> 0x10);
            local_68._0_2_ = CONCAT11(local_68._2_1_,(char)((uint)iVar2 >> 0x18));
            local_68._0_3_ = CONCAT12(uVar6,(undefined2)local_68);
            local_68 = CONCAT13((char)iVar2,(undefined3)local_68);
            if (uVar4 < local_68) {
              *(ulonglong *)(param_1 + 0x110) = (ulonglong)local_68;
              uVar15 = 1;
            }
          }
        }
        if (uVar13 == 0) {
          return 0;
        }
        if (uVar15 == 0) {
          uVar11 = (int)uVar12 + uVar13;
          *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + (ulonglong)uVar13;
          uVar22 = uVar22 + uVar13;
        }
        else {
          uVar11 = *(uint *)(param_1 + 0x110);
        }
        uVar12 = (ulonglong)uVar11;
        lVar16 = param_5[1];
        if ((lVar16 + -1 < (longlong)((ulonglong)uVar13 / (ulonglong)param_3 + param_4)) ||
           (lVar16 + -1 < (longlong)(uVar12 / param_3 + param_4))) break;
        if (99 < iVar20) {
          return 0;
        }
      }
      *(undefined4 *)(param_1 + 0x11c) = 1;
      return 1;
    }
  }
  return 0;
}

