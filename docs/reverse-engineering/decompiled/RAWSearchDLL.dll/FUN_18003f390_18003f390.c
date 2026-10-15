// Function: FUN_18003f390
// Address: 18003f390
// Size: 1282 bytes


void FUN_18003f390(undefined4 *param_1,longlong **param_2,int param_3,longlong param_4,
                  longlong *param_5)

{
  bool bVar1;
  ushort uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *_Dst;
  undefined1 uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ushort uVar17;
  longlong lVar18;
  undefined1 auStackY_1c8 [32];
  ushort local_198 [4];
  longlong *local_190;
  longlong *local_188;
  longlong local_180;
  undefined8 local_178;
  int local_170;
  undefined8 local_168;
  char local_158 [272];
  ulonglong local_48;
  
  local_168 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_1c8;
  local_190 = param_5;
  if (param_2 != (longlong **)0x0) {
    if (param_4 == *(longlong *)(param_1 + 2)) {
      param_1[0x58] = param_3;
      local_198[0] = *(ushort *)(param_2 + 2);
      uVar6 = *(undefined8 *)((longlong)param_2 + 0x2c);
      uVar2 = (ushort)((ulonglong)uVar6 >> 0x20);
      uVar8 = (ushort)((ulonglong)uVar6 >> 0x30);
      uVar17 = (ushort)((ulonglong)uVar6 >> 0x10);
      uVar11 = 0;
      if ((int)((ulonglong)uVar6 >> 0x20) == 0) {
        uVar11 = (ulonglong)CONCAT22((ushort)uVar6 >> 8,uVar17 << 8 | uVar17 >> 8) << 8;
      }
      else if ((int)uVar6 == 0) {
        uVar11 = (ulonglong)CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar8 << 8 | uVar8 >> 8);
      }
      *(ulonglong *)(param_1 + 0x4a) = uVar11;
      if (uVar11 != 0) {
        *(ulonglong *)(param_1 + 0x4c) = uVar11;
        local_188 = *(longlong **)(param_1 + 0x3a);
        local_178 = 0xffffffffffffffff;
        local_180 = param_4;
        if (local_188 == (longlong *)0x0) {
          local_170 = 0x200;
        }
        else if ((undefined **)*local_188 == CRawFileCellTestStorageDevice::vftable) {
          local_170 = *(int *)((longlong)local_188 + 0xc);
          if (local_170 < 1) {
            local_170 = 0x200;
          }
        }
        else {
          local_170 = (*(code *)((undefined **)*local_188)[5])();
          uVar11 = *(ulonglong *)(param_1 + 0x4a);
        }
        local_170 = local_170 << 7;
        pplVar7 = &local_188;
        plVar3 = (longlong *)FUN_180042930((longlong *)pplVar7,uVar11);
        if (plVar3 == (longlong *)0x0) goto LAB_18003f85a;
        if ((*plVar3 == DAT_1800938d8) && (plVar3[1] == DAT_1800938e0)) {
          uVar11 = FUN_18003f8a0(pplVar7,*(undefined8 *)((longlong)plVar3 + 0x34));
          uVar4 = FUN_18003f8a0(pplVar7,*(undefined8 *)((longlong)plVar3 + 0x3c));
          uVar2 = (ushort)(int)plVar3[3];
          uVar8 = (ushort)((uint)(int)plVar3[3] >> 0x10);
          uVar15 = CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar8 << 8 | uVar8 >> 8);
          if (uVar15 == 0) {
            uVar15 = 0x200;
          }
          if (local_198[0] == 0x68) {
            uVar12 = (ulonglong)*(ushort *)(plVar3 + 2);
          }
          else {
            uVar2 = (ushort)((uint)(int)plVar3[2] >> 0x10);
            uVar12 = (ulonglong)CONCAT22((ushort)(int)plVar3[2] >> 8,uVar2 << 8 | uVar2 >> 8);
          }
          if (uVar15 == 1) {
            lVar18 = 0x11;
            if (local_198[0] != 0x68) {
              lVar18 = 0x14;
            }
            lVar14 = *(longlong *)(param_1 + 0x4a) + lVar18 + uVar12;
          }
          else {
            iVar9 = (int)(uVar11 % (ulonglong)uVar15);
            iVar16 = uVar15 - iVar9;
            if (iVar9 == 0) {
              iVar16 = 0;
            }
            lVar14 = (longlong)iVar16 + (ulonglong)uVar15 + *(longlong *)(param_1 + 0x4a);
            lVar18 = 0x11;
            if (local_198[0] != 0x68) {
              lVar18 = 0x14;
            }
          }
          uVar11 = uVar4 + lVar14 + uVar11;
          *(ulonglong *)(param_1 + 0x4c) = uVar11;
          plVar3 = (longlong *)FUN_180042930((longlong *)&local_188,uVar11);
          if ((*plVar3 == DAT_1800938f0) && (plVar3[1] == DAT_1800938f8)) {
            uVar15 = *(uint *)(plVar3 + 2);
            uVar2 = (ushort)(uVar15 >> 0x10);
            uVar10 = CONCAT22((ushort)uVar15 >> 8,uVar2 << 8 | uVar2 >> 8);
            if (((uVar10 == 0) || (0x200 < uVar10)) &&
               ((uVar10 = uVar15 & 0xffffff, uVar10 == 0 || (0x200 < uVar10)))) {
              uVar10 = *(uint *)((longlong)plVar3 + 0x11);
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            lVar18 = (ulonglong)uVar10 + *(longlong *)(param_1 + 0x4c) + lVar18;
            *(longlong *)(param_1 + 0x4c) = lVar18;
            if (bVar1) {
              *(longlong *)(param_1 + 0x4c) = lVar18 + -2;
            }
            param_1[0x4e] = 1;
          }
        }
      }
    }
    if ((((*param_2 == DAT_1800938b8) && (*(int *)(param_2 + 1) == DAT_1800938c0)) &&
        (*(short *)((longlong)param_2 + 0xc) == DAT_1800938c4)) &&
       (0x2800 < *(ulonglong *)(param_1 + 0x44))) {
      uVar11 = (param_4 - *(longlong *)(param_1 + 2)) * (longlong)param_3;
      *(ulonglong *)(param_1 + 4) = uVar11;
      if ((param_1[0x4e] != 0) || (uVar11 < *(ulonglong *)(param_1 + 0x4c))) {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x4c);
      }
      uVar13 = 4;
      memset(local_158,0,0x104);
      uVar11 = 0xffffffffffffffff;
      do {
        uVar4 = uVar11 + 1;
        lVar18 = uVar11 + 1;
        uVar11 = uVar4;
      } while (local_158[lVar18] != '\0');
    }
    else {
      if ((((ulonglong)(((param_4 - *(longlong *)(param_1 + 2)) + 1) * (longlong)param_3) <
            *(ulonglong *)(param_1 + 0x44)) ||
          (uVar6 = FUN_18003f900(param_1,param_2,param_3,param_4,local_190), (int)uVar6 != 0)) ||
         (uVar11 = *(ulonglong *)(param_1 + 0x44), uVar11 == 0)) goto LAB_18003f85a;
      *(ulonglong *)(param_1 + 4) = uVar11;
      if (*(longlong *)(param_1 + 0x54) != 0) {
        uVar11 = uVar11 - *(longlong *)(param_1 + 0x54);
        *(ulonglong *)(param_1 + 4) = uVar11;
      }
      if ((param_1[0x4e] != 0) || (uVar11 < *(ulonglong *)(param_1 + 0x4c))) {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x4c);
      }
      uVar13 = 4;
      memset(local_158,0,0x104);
      uVar11 = 0xffffffffffffffff;
      do {
        uVar4 = uVar11 + 1;
        lVar18 = uVar11 + 1;
        uVar11 = uVar4;
      } while (local_158[lVar18] != '\0');
    }
    puVar5 = (undefined8 *)FUN_1800016b0(param_1 + 8);
    if ((ulonglong)puVar5[3] < uVar4) {
      FUN_1800086f0((longlong)(param_1 + 8),uVar4,uVar13,local_158);
      param_1[6] = 0x78;
    }
    else {
      _Dst = puVar5;
      if (0xf < (ulonglong)puVar5[3]) {
        _Dst = (undefined8 *)*puVar5;
      }
      puVar5[2] = uVar4;
      memmove(_Dst,local_158,uVar4);
      local_198[0] = local_198[0] & 0xff00;
      FUN_180001300((undefined1 *)((longlong)_Dst + uVar4),(undefined1 *)local_198);
      param_1[6] = 0x78;
    }
  }
LAB_18003f85a:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_1c8);
  return;
}

