// Function: FUN_1800380e0
// Address: 1800380e0
// Size: 1613 bytes


void FUN_1800380e0(longlong param_1,longlong *param_2,int param_3,ulonglong param_4,
                  longlong *param_5)

{
  undefined3 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *_Dst;
  bool bVar12;
  undefined1 auStackY_1d8 [32];
  undefined1 local_198 [8];
  longlong *local_190;
  undefined8 local_188;
  undefined8 local_180;
  int local_178;
  undefined4 local_170;
  undefined1 local_16c;
  char local_168 [272];
  ulonglong local_58;
  
  local_58 = DAT_18008f028 ^ (ulonglong)auStackY_1d8;
  lVar11 = (longlong)param_3;
  uVar7 = *(ulonglong *)(param_1 + 8);
  if (param_4 == uVar7) {
    *(int *)(param_1 + 0x234) = param_3;
    lVar10 = param_5[1];
    lVar3 = *param_5;
    local_170 = 0x554949;
    local_16c = 0;
    if ((int)*param_2 == 0x554949) {
      *(undefined4 *)(param_1 + 0x18) = 0x56;
      *(undefined4 *)(param_1 + 0x180) = 1;
      goto LAB_1800386fa;
    }
    if ((*param_2 == s_FUJIFILMCCD_RAW_18006c318._0_8_) &&
       (param_2[1] == s_FUJIFILMCCD_RAW_18006c318._8_8_)) goto LAB_1800386fa;
    *(longlong **)(param_1 + 0x178) = param_2;
    bVar12 = (short)*param_2 == 0x4949;
    *(bool *)(param_1 + 0x110) = bVar12;
    if (bVar12) {
      uVar1 = *(undefined3 *)((longlong)param_2 + 5);
      uVar9 = *(undefined1 *)((longlong)param_2 + 4);
    }
    else {
      uVar1 = CONCAT21(CONCAT11(*(undefined1 *)((longlong)param_2 + 4),
                                *(undefined1 *)((longlong)param_2 + 5)),
                       *(undefined1 *)((longlong)param_2 + 6));
      uVar9 = *(undefined1 *)((longlong)param_2 + 7);
    }
    uVar8 = (ulonglong)CONCAT31(uVar1,uVar9);
    *(ulonglong *)(param_1 + 0x130) = uVar8;
    if ((longlong)uVar8 <= lVar11) {
      *(ulonglong *)(param_1 + 0x148) = ((param_4 - uVar7) + 1) * lVar11 + uVar8;
      FUN_180038730(param_1,(undefined1 *)(uVar8 + (longlong)param_2),
                    param_3 - CONCAT31(uVar1,uVar9),param_4,lVar3,lVar10);
      iVar2 = *(int *)(param_1 + 0x128);
      goto joined_r0x00018003836a;
    }
    *(ulonglong *)(param_1 + 0x138) = uVar8;
    if (0x400000 < uVar8) goto LAB_1800386fa;
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x130);
    if ((lVar10 != 0) && (param_4 - uVar7 == lVar10 / lVar11)) {
      *(longlong *)(param_1 + 0x148) = lVar10;
      FUN_180038730(param_1,(undefined1 *)(lVar10 % lVar11 + (longlong)param_2),param_3,param_4,
                    *param_5,param_5[1]);
      lVar3 = *(longlong *)(param_1 + 0x130);
      iVar2 = 0;
      if (lVar3 != 0) {
        while ((param_4 - *(longlong *)(param_1 + 8) == lVar3 / lVar11 && (iVar2 < 0x400))) {
          *(longlong *)(param_1 + 0x148) = lVar3;
          FUN_180038730(param_1,(undefined1 *)(lVar3 % lVar11 + (longlong)param_2),param_3,param_4,
                        *param_5,param_5[1]);
          lVar3 = *(longlong *)(param_1 + 0x130);
          if ((*(longlong *)(param_1 + 0x138) < lVar3) && (*(int *)(param_1 + 0x1f0) != 0)) {
            *(longlong *)(param_1 + 0x138) = lVar3;
          }
          if ((*(int *)(param_1 + 0x128) != 0) || (iVar2 = iVar2 + 1, lVar3 == 0)) break;
        }
        if ((lVar3 != 0) && (lVar3 < lVar10)) goto LAB_1800386fa;
      }
      iVar2 = *(int *)(param_1 + 0x128);
joined_r0x00018003836a:
      if (iVar2 != 0) goto LAB_1800386fa;
    }
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1800390c0(param_1,(longlong)param_2,param_4,*param_5,param_5[1]);
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_180039270(param_1,(longlong)param_2,param_4);
  }
  if (*(int *)(param_1 + 0x128) == 0) {
    lVar10 = *(longlong *)(param_1 + 0x138);
    lVar3 = *(longlong *)(param_1 + 0x118);
    if (((lVar10 < lVar3) && (lVar3 < 0xc800000)) && (*(int *)(param_1 + 0x230) == 0)) {
      *(longlong *)(param_1 + 0x138) = lVar3;
      lVar10 = lVar3;
    }
    bVar12 = false;
    if (((0x1f < *(int *)((longlong)param_5 + 0x14)) &&
        (lVar3 = ((param_4 - *(longlong *)(param_1 + 8)) + 1) * lVar11,
        lVar3 - lVar10 != 0 && lVar10 <= lVar3)) ||
       ((*(int *)((longlong)param_5 + 0x14) < 0x10 &&
        ((lVar10 <= (longlong)(((param_4 - *(longlong *)(param_1 + 8)) + 1) * lVar11) &&
         (0xa00000 < lVar10)))))) {
      memset(local_168,0,0x104);
      plVar6 = (longlong *)(param_1 + 0x1c8);
      if (*(longlong *)(param_1 + 0x1b8) == 0) {
        if (0xf < *(ulonglong *)(param_1 + 0x1e0)) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar9 = 0x30;
        snprintf(local_168,0x104,"%s_%lld-%lld_",plVar6);
      }
      else {
        plVar6 = (longlong *)(param_1 + 0x1a8);
        if (0xf < *(ulonglong *)(param_1 + 0x1c0)) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar9 = 0x40;
        snprintf(local_168,0x104,"%s_%s_%lld-%lld_",plVar6);
      }
      uVar7 = 0xffffffffffffffff;
      do {
        uVar8 = uVar7 + 1;
        lVar10 = uVar7 + 1;
        uVar7 = uVar8;
      } while (local_168[lVar10] != '\0');
      puVar4 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
      if ((ulonglong)puVar4[3] < uVar8) {
        FUN_1800086f0(param_1 + 0x20,uVar8,uVar9,local_168);
      }
      else {
        _Dst = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          _Dst = (undefined8 *)*puVar4;
        }
        puVar4[2] = uVar8;
        memmove(_Dst,local_168,uVar8);
        local_198[0] = 0;
        FUN_180001300((undefined1 *)((longlong)_Dst + uVar8),local_198);
      }
      lVar10 = *(longlong *)(param_1 + 0x138);
      lVar3 = param_4 - *(longlong *)(param_1 + 8);
      if (lVar10 < 0x100000) {
        *(longlong *)(param_1 + 0x10) = lVar11 * lVar3;
        if ((lVar10 / lVar11 != lVar3) || (*(int *)(param_1 + 0x18) == 0x40)) {
          lVar10 = (lVar3 + 1) * lVar11;
        }
        *(longlong *)(param_1 + 0x10) = lVar10;
      }
      else {
        *(longlong *)(param_1 + 0x10) = lVar10;
        local_198[0] = 0xff;
        for (plVar6 = (longlong *)
                      ((longlong)param_2 + (lVar11 - *(int *)((longlong)param_5 + 0x14)));
            param_2 <= plVar6; plVar6 = (longlong *)((longlong)plVar6 + -1)) {
          if (((char)*plVar6 == -1) && (*(char *)((longlong)plVar6 + 1) == -0x27)) {
            iVar2 = ((int)plVar6 - (int)param_2) + 2;
            if ((0 < iVar2) && (0xa00000 < (ulonglong)((lVar3 + 1) * lVar11 - lVar10))) {
              *(ulonglong *)(param_1 + 0x10) =
                   (param_4 - *(longlong *)(param_1 + 8)) * lVar11 + (longlong)iVar2;
            }
            break;
          }
        }
      }
      if (*(int *)(param_1 + 0x188) != 0) {
        if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x240)) {
          *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x240);
        }
        if ((*(int *)(param_1 + 0x188) != 0) && (0x12c00000 < *(ulonglong *)(param_1 + 0x10))) {
          *(undefined8 *)(param_1 + 0x10) = 0;
        }
      }
      bVar12 = true;
      if (*(int *)(param_1 + 0x18) == 0x9a) {
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
    uVar7 = *(ulonglong *)(param_1 + 0x10);
    if (uVar7 != 0) {
      local_190 = *(longlong **)(param_1 + 0xe8);
      local_188 = *(undefined8 *)(param_1 + 8);
      local_180 = 0xffffffffffffffff;
      if (local_190 == (longlong *)0x0) {
        local_178 = 0x200;
      }
      else if ((undefined **)*local_190 == CRawFileCellTestStorageDevice::vftable) {
        local_178 = *(int *)((longlong)local_190 + 0xc);
        if (local_178 < 1) {
          local_178 = 0x200;
        }
      }
      else {
        local_178 = (*(code *)((undefined **)*local_190)[5])(local_190);
        uVar7 = *(ulonglong *)(param_1 + 0x10);
      }
      local_178 = local_178 << 7;
      puVar5 = (undefined4 *)FUN_180042930((longlong *)&local_190,uVar7);
      uVar7 = *(ulonglong *)(param_1 + 0x10);
      if (((uVar7 != 0) && (puVar5 != (undefined4 *)0x0)) &&
         ((iVar2 = FUN_180042a60(puVar5,*(char *)(param_1 + 0x110)), iVar2 == -0x270025 ||
          (iVar2 == -0x240028)))) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        uVar7 = 0;
      }
    }
    if (((bVar12) && (*(int *)(param_1 + 0x18) == 0x9d)) && (0x6400000 < uVar7)) {
      *(undefined4 *)(param_1 + 0x18) = 99;
    }
  }
LAB_1800386fa:
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_1d8);
  return;
}

