// Function: FUN_180038020
// Address: 180038020
// Size: 923 bytes


undefined8 FUN_180038020(undefined8 *param_1,void *param_2,uint *param_3)

{
  undefined **ppuVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  longlong *plVar11;
  uint uVar12;
  size_t _Size;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *local_res8;
  void *local_res10;
  uint *local_res18;
  longlong local_res20;
  ulonglong in_stack_ffffffffffffff88;
  longlong local_60;
  void *local_58;
  
  uVar15 = param_1[3];
  uVar16 = 0;
  bVar2 = false;
  *param_3 = 0;
  uVar14 = 0x400;
  if ((longlong)uVar15 < 0x400) {
    uVar14 = uVar15 & 0xffffffff;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1[1] + 0x30) + 0x78))();
  local_res8 = plVar9;
  iVar5 = (**(code **)(*plVar9 + 8))(plVar9);
  uVar12 = (uint)uVar14;
  if (iVar5 == 0) {
    lVar10 = (longlong)(int)uVar12 / (longlong)*(int *)(param_1 + 2);
    local_res20 = lVar10;
    plVar11 = FUN_1800340b0((longlong)plVar9);
    uVar15 = uVar16;
    uVar17 = uVar16;
    while (((plVar11 != (longlong *)0x0 && ((longlong)uVar16 <= lVar10)) && (0 < (int)uVar14))) {
      do {
        if ((longlong)(plVar11[1] + uVar16) <= (longlong)uVar17) break;
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
        iVar5 = (**(code **)(*(longlong *)*param_1 + 8))
                          ((longlong *)*param_1,param_1[5],
                           ((uVar17 - uVar16) + *plVar11) *
                           (longlong)*(int *)((longlong)param_1 + 0x14) + param_1[4],
                           (longlong)*(int *)((longlong)param_1 + 0x14),in_stack_ffffffffffffff88);
        if (iVar5 == 0) {
          return 0;
        }
        iVar13 = (int)uVar14;
        iVar7 = (int)((longlong)uVar15 % (longlong)*(int *)(param_1 + 2));
        iVar8 = *(int *)(param_1 + 2) - iVar7;
        iVar5 = iVar13;
        if (iVar8 <= iVar13) {
          iVar5 = iVar8;
        }
        _Size = (size_t)iVar5;
        memcpy(local_res10,(void *)((longlong)iVar7 + param_1[5]),_Size);
        uVar15 = uVar15 + _Size;
        local_res10 = (void *)((longlong)local_res10 + _Size);
        uVar14 = (ulonglong)(uint)(iVar13 - iVar5);
        uVar17 = uVar17 + 1;
        *local_res18 = *local_res18 + iVar5;
      } while (0 < iVar13 - iVar5);
      plVar9 = local_res8;
      uVar16 = uVar16 + plVar11[1];
      plVar11 = (longlong *)FUN_180034150((longlong)local_res8);
      lVar10 = local_res20;
    }
    (**(code **)*plVar9)(plVar9,1);
    if (*local_res18 == 0) {
      return 0;
    }
  }
  else {
    if (((*(longlong **)(param_1[1] + 0x30) == (longlong *)0x0) ||
        (ppuVar1 = (undefined **)**(longlong **)(param_1[1] + 0x30),
        ppuVar1 == CNTFSFileProperties::vftable)) ||
       (iVar5 = (*(code *)ppuVar1[0x14])(), iVar5 != 6)) {
      (**(code **)*plVar9)(plVar9,1);
      local_res20 = CONCAT44(local_res20._4_4_,*(int *)(param_1 + 2) << 3);
      local_58 = (void *)param_1[5];
      plVar9 = FUN_18003df30((longlong *)param_1[1],(longlong *)*param_1);
      if (plVar9 == (longlong *)0x0) {
        return 0;
      }
      local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
      local_60 = 0;
      uVar15 = uVar16;
      do {
        uVar6 = (uint)uVar15;
        uVar15 = (ulonglong)(uVar6 + 1);
        lVar10 = FUN_1800430b0(plVar9,0x80,uVar6,(int *)&local_res8,&local_60);
        if (lVar10 == 0) goto LAB_1800381af;
        bVar3 = FUN_180045440(lVar10);
      } while ((int)CONCAT71(extraout_var,bVar3) != 0);
      if ((lVar10 != 0) &&
         (bVar3 = FUN_180045400(lVar10), (int)CONCAT71(extraout_var_00,bVar3) != 0)) {
        uVar4 = FUN_180045350(lVar10);
        uVar6 = FUN_180045320(lVar10);
        if (uVar6 <= (uint)local_res20) {
          memcpy(local_58,(void *)((ulonglong)uVar4 + lVar10),(ulonglong)uVar6);
          uVar16 = (ulonglong)uVar6;
          bVar2 = true;
        }
      }
LAB_1800381af:
      FUN_180043170(plVar9);
      free(plVar9);
      if (!bVar2) {
        return 0;
      }
      if (uVar16 != 0) {
        if ((longlong)uVar16 <= (longlong)(int)uVar12) {
          uVar12 = (uint)uVar16;
        }
        memcpy(param_2,(void *)param_1[5],(longlong)(int)uVar12);
        *local_res18 = uVar12;
        return 1;
      }
      return 0;
    }
    plVar11 = FUN_1800340b0((longlong)plVar9);
    if (plVar11 != (longlong *)0x0) {
      iVar5 = (**(code **)(*(longlong *)*param_1 + 8))
                        ((longlong *)*param_1,param_1[5],
                         *plVar11 * (longlong)*(int *)((longlong)param_1 + 0x14),
                         (longlong)*(int *)((longlong)param_1 + 0x14),
                         in_stack_ffffffffffffff88 & 0xffffffffffffff00);
      if (iVar5 == 0) {
        return 0;
      }
      iVar7 = (**(code **)(*(longlong *)*param_1 + 0x28))();
      iVar5 = *(int *)((longlong)param_1 + 0x14);
      iVar8 = (**(code **)(*plVar9 + 0x10))(plVar9);
      uVar12 = iVar7 * iVar5 - iVar8;
      if (0x200 < uVar12) {
        uVar12 = 0x200;
      }
      lVar10 = *plVar9;
      *param_3 = uVar12;
      uVar6 = (**(code **)(lVar10 + 0x10))(plVar9);
      memmove(param_2,(void *)((ulonglong)uVar6 + param_1[5]),(longlong)(int)uVar12);
    }
    (**(code **)*plVar9)(plVar9,1);
  }
  return 1;
}

