// Function: FUN_180029710
// Address: 180029710
// Size: 1680 bytes


void FUN_180029710(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined **ppuVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  char *pcVar15;
  ushort uVar16;
  uint uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *plVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 auStackY_118 [32];
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  char *local_c0;
  ulonglong local_b8;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined8 local_90 [2];
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_a8 = 0xfffffffffffffffe;
  local_40 = DAT_180086010 ^ (ulonglong)auStackY_118;
  bVar4 = false;
  bVar5 = true;
  plVar14 = (longlong *)param_2[4];
  local_c8 = param_1;
  if (plVar14 != (longlong *)0x0) {
    lVar24 = plVar14[0xb];
    local_d0 = lVar24;
    if ((undefined **)*plVar14 == CNTFSFileProperties::vftable) {
      pcVar15 = *(char **)((longlong)plVar14 + 0x11);
      ppuVar10 = CNTFSFileProperties::vftable;
    }
    else {
      pcVar15 = (char *)(*(code *)((undefined **)*plVar14)[2])(plVar14);
      ppuVar10 = (undefined **)*plVar14;
    }
    local_c0 = pcVar15;
    if (ppuVar10 == CNTFSFileProperties::vftable) {
      bVar7 = (byte)*(undefined2 *)((longlong)plVar14 + 0x23);
    }
    else {
      bVar7 = (*(code *)ppuVar10[7])(plVar14);
    }
    if (((bVar7 >> 4 & 1) != 0) && (pcVar15 != (char *)0x0)) {
      if ((undefined **)*plVar14 == CNTFSFileProperties::vftable) {
        uVar16 = *(ushort *)(plVar14 + 0xd) - 1;
        if ((*(byte *)((longlong)plVar14 + 0x72) & 8) == 0) {
          uVar16 = *(ushort *)(plVar14 + 0xd);
        }
        uVar25 = plVar14[0xb] << 0x10 | (ulonglong)uVar16;
      }
      else {
        uVar25 = (*(code *)((undefined **)*plVar14)[0x1e])(plVar14);
      }
      param_3 = *(longlong **)(local_c8 + 0x60);
      plVar18 = (longlong *)param_3[1];
      plVar11 = plVar18;
      plVar20 = param_3;
      local_d8 = param_3;
      if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
        do {
          if (plVar11[4] < lVar24) {
            plVar12 = (longlong *)plVar11[2];
          }
          else {
            plVar12 = (longlong *)*plVar11;
            plVar20 = plVar11;
          }
          plVar11 = plVar12;
        } while (*(char *)((longlong)plVar12 + 0x19) == '\0');
        do {
          if (lVar24 < plVar18[4]) {
            plVar11 = (longlong *)*plVar18;
            local_d8 = plVar18;
          }
          else {
            plVar11 = (longlong *)plVar18[2];
          }
          plVar18 = plVar11;
        } while (*(char *)((longlong)plVar11 + 0x19) == '\0');
      }
      local_b8 = uVar25;
      puVar13 = (undefined8 *)(**(code **)(*plVar14 + 0x58))(plVar14,&local_e0);
      uVar1 = *puVar13;
      puVar13 = (undefined8 *)(**(code **)(*plVar14 + 0x50))(plVar14,local_b0);
      uVar22 = (uint)((ulonglong)uVar1 >> 0x20);
      uVar8 = (uint)((ulonglong)*puVar13 >> 0x20);
      uVar17 = (uint)*puVar13;
      uVar21 = (uint)uVar1;
      if ((uVar8 == uVar22) && (uVar17 == uVar21)) {
        local_e0 = 0;
      }
      else if (uVar22 < uVar8) {
        local_e0 = 1;
      }
      else if ((uVar8 != uVar22) || (local_e0 = 1, uVar17 <= uVar21)) {
        local_e0 = -1;
      }
      lVar24 = local_d0;
      if (plVar20 != local_d8) {
        do {
          plVar18 = (longlong *)plVar20[9];
          if (plVar18 != (longlong *)0x0) {
            if ((undefined **)*plVar18 == CNTFSFileProperties::vftable) {
              bVar7 = (byte)*(undefined2 *)((longlong)plVar18 + 0x23);
            }
            else {
              bVar7 = (*(code *)((undefined **)*plVar18)[7])(plVar18);
            }
            if ((bVar7 >> 4 & 1) == 0) goto LAB_180029bc1;
            if ((undefined **)*plVar18 == CNTFSFileProperties::vftable) {
              uVar16 = *(ushort *)(plVar18 + 0xd) - 1;
              if ((*(byte *)((longlong)plVar18 + 0x72) & 8) == 0) {
                uVar16 = *(ushort *)(plVar18 + 0xd);
              }
              uVar19 = plVar18[0xb] << 0x10 | (ulonglong)uVar16;
            }
            else {
              uVar19 = (*(code *)((undefined **)*plVar18)[0x1e])(plVar18);
            }
            if ((uVar19 != uVar25) || (param_2[5] != plVar20[10])) {
              plVar18 = (longlong *)plVar20[2];
              if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
                cVar6 = *(char *)(*plVar18 + 0x19);
                plVar20 = plVar18;
                plVar18 = (longlong *)*plVar18;
                while (cVar6 == '\0') {
                  cVar6 = *(char *)(*plVar18 + 0x19);
                  plVar20 = plVar18;
                  plVar18 = (longlong *)*plVar18;
                }
              }
              else {
                cVar6 = *(char *)(plVar20[1] + 0x19);
                plVar11 = (longlong *)plVar20[1];
                plVar18 = plVar20;
                while ((plVar20 = plVar11, cVar6 == '\0' && (plVar18 == (longlong *)plVar20[2]))) {
                  cVar6 = *(char *)(plVar20[1] + 0x19);
                  plVar11 = (longlong *)plVar20[1];
                  plVar18 = plVar20;
                }
              }
              goto LAB_180029c0f;
            }
            puVar13 = (undefined8 *)(**(code **)(*plVar18 + 0x50))(plVar18,local_b0);
            uVar1 = *puVar13;
            puVar13 = (undefined8 *)(**(code **)(*plVar14 + 0x50))(plVar14,local_a0);
            uVar22 = (uint)((ulonglong)uVar1 >> 0x20);
            uVar8 = (uint)((ulonglong)*puVar13 >> 0x20);
            uVar17 = (uint)*puVar13;
            uVar21 = (uint)uVar1;
            if ((uVar8 == uVar22) && (uVar17 == uVar21)) {
              iVar23 = 0;
            }
            else if (uVar22 < uVar8) {
              iVar23 = 1;
            }
            else if ((uVar8 != uVar22) || (iVar23 = 1, uVar17 <= uVar21)) {
              iVar23 = -1;
            }
            puVar13 = (undefined8 *)(**(code **)(*plVar18 + 0x58))(plVar18,local_98);
            uVar1 = *puVar13;
            puVar13 = (undefined8 *)(**(code **)(*plVar14 + 0x58))(plVar14,local_90);
            uVar21 = (uint)((ulonglong)uVar1 >> 0x20);
            uVar8 = (uint)((ulonglong)*puVar13 >> 0x20);
            uVar17 = (uint)*puVar13;
            uVar22 = (uint)uVar1;
            if ((uVar8 == uVar21) && (uVar17 == uVar22)) {
              iVar9 = 0;
            }
            else if (uVar21 < uVar8) {
              iVar9 = 1;
            }
            else if ((uVar8 != uVar21) || (iVar9 = 1, uVar17 <= uVar22)) {
              iVar9 = -1;
            }
            if (((iVar23 < 1) && ((iVar23 != 0 || (iVar9 != 0)))) &&
               ((local_e0 == 0 || ((iVar23 != 0 || (iVar9 < 1)))))) {
              bVar5 = false;
              plVar18 = (longlong *)plVar20[2];
              if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
                cVar6 = *(char *)(*plVar18 + 0x19);
                plVar20 = plVar18;
                plVar18 = (longlong *)*plVar18;
                while (cVar6 == '\0') {
                  cVar6 = *(char *)(*plVar18 + 0x19);
                  plVar20 = plVar18;
                  plVar18 = (longlong *)*plVar18;
                }
              }
              else {
                cVar6 = *(char *)(plVar20[1] + 0x19);
                plVar11 = (longlong *)plVar20[1];
                plVar18 = plVar20;
                while ((plVar20 = plVar11, cVar6 == '\0' && (plVar18 == (longlong *)plVar20[2]))) {
                  cVar6 = *(char *)(plVar20[1] + 0x19);
                  plVar11 = (longlong *)plVar20[1];
                  plVar18 = plVar20;
                }
              }
              goto LAB_180029c0f;
            }
            lVar24 = plVar20[10];
            lVar2 = param_2[5];
            if ((undefined **)*plVar18 == CNTFSFileProperties::vftable) {
              pcVar15 = *(char **)((longlong)plVar18 + 0x11);
            }
            else {
              pcVar15 = (char *)(*(code *)((undefined **)*plVar18)[2])(plVar18);
            }
            if ((pcVar15 == (char *)0x0) ||
               (((*local_c0 == '$' && (*pcVar15 != '$')) && (lVar2 < lVar24)))) {
LAB_180029af1:
              bVar3 = true;
            }
            else {
              FUN_180003be0(&local_80,local_c0);
              bVar4 = true;
              cVar6 = FUN_1800445e0(&local_80);
              if (cVar6 != '\0') goto LAB_180029af1;
              bVar3 = false;
            }
            if (bVar4) {
              bVar4 = false;
              FUN_1800025f0(&local_80);
            }
            if (bVar3) {
              plVar18 = (longlong *)plVar20[2];
              if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
                cVar6 = *(char *)(*plVar18 + 0x19);
                plVar20 = plVar18;
                plVar18 = (longlong *)*plVar18;
                while (cVar6 == '\0') {
                  cVar6 = *(char *)(*plVar18 + 0x19);
                  plVar20 = plVar18;
                  plVar18 = (longlong *)*plVar18;
                }
              }
              else {
                cVar6 = *(char *)(plVar20[1] + 0x19);
                plVar11 = (longlong *)plVar20[1];
                plVar18 = plVar20;
                while ((plVar20 = plVar11, cVar6 == '\0' && (plVar18 == (longlong *)plVar20[2]))) {
                  cVar6 = *(char *)(plVar20[1] + 0x19);
                  plVar11 = (longlong *)plVar20[1];
                  plVar18 = plVar20;
                }
              }
              goto LAB_180029c0f;
            }
            (**(code **)(*plVar18 + 0x138))(plVar18,1);
            if (*(char *)(plVar20[2] + 0x19) == '\0') {
              plVar14 = *(longlong **)plVar20[2];
              cVar6 = *(char *)((longlong)plVar14 + 0x19);
              while (cVar6 == '\0') {
                plVar14 = (longlong *)*plVar14;
                cVar6 = *(char *)((longlong)plVar14 + 0x19);
              }
            }
            else {
              cVar6 = *(char *)(plVar20[1] + 0x19);
              plVar18 = (longlong *)plVar20[1];
              plVar14 = plVar20;
              while ((plVar11 = plVar18, cVar6 == '\0' && (plVar14 == (longlong *)plVar11[2]))) {
                cVar6 = *(char *)(plVar11[1] + 0x19);
                plVar18 = (longlong *)plVar11[1];
                plVar14 = plVar11;
              }
            }
            plVar14 = FUN_180012020((longlong *)(local_c8 + 0x60),plVar20);
            free(plVar14);
            lVar24 = local_d0;
            goto LAB_180029cae;
          }
LAB_180029bc1:
          plVar18 = (longlong *)plVar20[2];
          if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
            cVar6 = *(char *)(*plVar18 + 0x19);
            plVar20 = plVar18;
            plVar18 = (longlong *)*plVar18;
            while (cVar6 == '\0') {
              cVar6 = *(char *)(*plVar18 + 0x19);
              plVar20 = plVar18;
              plVar18 = (longlong *)*plVar18;
            }
          }
          else {
            cVar6 = *(char *)(plVar20[1] + 0x19);
            plVar11 = (longlong *)plVar20[1];
            plVar18 = plVar20;
            while ((plVar20 = plVar11, cVar6 == '\0' && (plVar18 == (longlong *)plVar20[2]))) {
              cVar6 = *(char *)(plVar20[1] + 0x19);
              plVar11 = (longlong *)plVar20[1];
              plVar18 = plVar20;
            }
          }
LAB_180029c0f:
          uVar25 = local_b8;
        } while (plVar20 != local_d8);
        lVar24 = local_d0;
        if (!bVar5) goto LAB_180029d20;
      }
    }
LAB_180029cae:
    lVar2 = local_c8;
    local_78 = *param_2;
    uStack_70 = param_2[1];
    local_68 = param_2[2];
    uStack_60 = param_2[3];
    local_58 = param_2[4];
    uStack_50 = param_2[5];
    local_48 = param_2[6];
    local_80 = lVar24;
    plVar14 = (longlong *)FUN_18002b3d0((undefined8 *)(local_c8 + 0x60),(longlong)&local_80);
    FUN_18002b440((longlong *)(lVar2 + 0x60),local_90,param_3,plVar14 + 4,plVar14);
  }
LAB_180029d20:
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_118);
  return;
}

