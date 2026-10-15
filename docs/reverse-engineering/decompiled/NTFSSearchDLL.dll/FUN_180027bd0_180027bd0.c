// Function: FUN_180027bd0
// Address: 180027bd0
// Size: 1454 bytes


undefined8 FUN_180027bd0(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  longlong lVar5;
  undefined8 uVar6;
  undefined7 extraout_var_01;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined7 extraout_var_02;
  undefined *puVar10;
  undefined7 extraout_var_03;
  longlong lVar11;
  longlong *plVar12;
  longlong *local_res20;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48 [2];
  longlong *local_38;
  longlong *local_30;
  
  local_50 = 0xfffffffffffffffe;
  bVar3 = FUN_180041c50(param_3);
  if (((((int)CONCAT71(extraout_var,bVar3) == 0) && (*param_1 != 0)) &&
      ((longlong)(param_2 - param_1[3]) < 0x11)) && ((param_2 - param_1[3] & 1) != 0)) {
    return 0;
  }
  bVar3 = FUN_180041c50(param_3);
  plVar9 = (longlong *)0x0;
  if ((((int)CONCAT71(extraout_var_00,bVar3) == 0) || (iVar4 = FUN_180040f20(param_3), iVar4 == -1))
     || ((*param_1 == 0 ||
         ((0x10 < (longlong)(param_2 - param_1[3]) ||
          ((int)((longlong)(param_2 - param_1[3]) / 2) != iVar4)))))) {
    if (((longlong *)*param_1 != (longlong *)0x0) &&
       (((param_1[1] != 0 ||
         (FUN_180028780((longlong)param_1,(longlong *)*param_1), param_1[1] != 0)) &&
        (*param_1 != 0)))) {
      local_58 = (longlong *)FUN_18002be40(0x10);
      local_res20 = plVar9;
      if (local_58 != (longlong *)0x0) {
        lVar11 = param_1[1];
        *local_58 = *param_1;
        local_58[1] = lVar11;
        local_res20 = local_58;
      }
      if (local_res20 != (longlong *)0x0) {
        plVar8 = param_1;
        FUN_180028430((longlong)param_1,local_res20);
        plVar12 = (longlong *)param_1[9];
        lVar11 = *plVar12;
        local_58 = *(longlong **)(lVar11 + 8);
        lVar5 = FUN_1800143b0(plVar8,lVar11,(longlong)local_58,&local_res20);
        if (plVar12[1] == 0xaaaaaaaaaaaaaa9) {
          std::_Xlength_error("list<T> too long");
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return uVar6;
        }
        plVar12[1] = plVar12[1] + 1;
        *(longlong *)(lVar11 + 8) = lVar5;
        *local_58 = lVar5;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = -1;
    param_1[4] = -1;
  }
  bVar3 = FUN_180041c50(param_3);
  if (((int)CONCAT71(extraout_var_01,bVar3) != 0) && (iVar4 = FUN_180041050(param_3), iVar4 != 0)) {
    param_1[3] = param_2;
  }
  iVar4 = FUN_180041050(param_3);
  if (iVar4 == 0) {
    iVar4 = FUN_180041020(param_3);
    if (iVar4 == 0) {
      puVar10 = FUN_18002c550();
      if (((*(int *)(puVar10 + 0x54) != 0) && (iVar4 = FUN_180040ff0(param_3), iVar4 != 0)) &&
         (bVar3 = FUN_180041c50(param_3), (int)CONCAT71(extraout_var_03,bVar3) != 0)) {
        FUN_180040cb0((longlong *)local_48);
        local_res20 = (longlong *)0x0;
        uVar6 = FUN_180044bd0(param_3,(longlong)local_48,1,&local_res20);
        if ((((int)uVar6 == 0) || ((longlong)local_res20 < 1)) ||
           (lVar11 = FUN_18003fd70(local_48), plVar9 = local_res20, lVar11 < 1)) {
          ~_String_alloc<>((longlong *)local_48);
        }
        else {
          ~_String_alloc<>((longlong *)local_48);
          param_1[4] = (longlong)plVar9 * 8;
        }
      }
      return 1;
    }
    if (499999 < *(ulonglong *)(param_1[6] + 8)) {
      return 0;
    }
    plVar8 = (longlong *)FUN_18002be40(0x28);
    plVar12 = plVar9;
    local_48[0] = plVar8;
    if (plVar8 != (longlong *)0x0) {
      local_58 = plVar8;
      FUN_180040cb0(plVar8 + 1);
      *(undefined2 *)(plVar8 + 4) = 0;
      plVar12 = plVar8;
    }
    if (plVar12 != (longlong *)0x0) {
      bVar3 = FUN_180044da0(param_3,(undefined2 *)(plVar12 + 4));
      if (((int)CONCAT71(extraout_var_02,bVar3) != 0) &&
         (plVar8 = plVar12, uVar6 = FUN_180039e30(plVar12,param_3,param_2), (int)uVar6 != 0)) {
        plVar9 = (longlong *)param_1[6];
        lVar11 = *plVar9;
        plVar1 = *(longlong **)(lVar11 + 8);
        local_res20 = plVar12;
        lVar5 = FUN_1800143b0(plVar8,lVar11,(longlong)plVar1,&local_res20);
        if (plVar9[1] != 0xaaaaaaaaaaaaaa9) {
          plVar9[1] = plVar9[1] + 1;
          *(longlong *)(lVar11 + 8) = lVar5;
          *plVar1 = lVar5;
          param_1[1] = (longlong)local_res20;
          return 1;
        }
        std::_Xlength_error("list<T> too long");
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      FUN_180013c70(plVar12);
    }
    local_res20 = (longlong *)0x0;
    if ((((longlong *)*param_1 == (longlong *)0x0) ||
        ((param_1[1] == 0 &&
         (FUN_180028780((longlong)param_1,(longlong *)*param_1), param_1[1] == 0)))) ||
       (*param_1 == 0)) goto LAB_180027e5b;
    local_48[0] = (longlong *)FUN_18002be40(0x10);
    if (local_48[0] != (longlong *)0x0) {
      lVar11 = param_1[1];
      *local_48[0] = *param_1;
      local_48[0][1] = lVar11;
      plVar9 = local_48[0];
    }
    if (plVar9 == (longlong *)0x0) goto LAB_180027e5b;
    plVar8 = param_1;
    local_58 = plVar9;
    FUN_180028430((longlong)param_1,plVar9);
    plVar9 = (longlong *)param_1[9];
    lVar11 = *plVar9;
    plVar12 = *(longlong **)(lVar11 + 8);
    lVar7 = FUN_1800143b0(plVar8,lVar11,(longlong)plVar12,&local_58);
    lVar5 = plVar9[1];
    if (lVar5 == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
  }
  else {
    if (499999 < *(ulonglong *)(param_1[5] + 8)) {
      return 0;
    }
    local_res20 = FUN_180007460(param_3,param_2,(longlong *)param_1[0xc],'\0');
    if (local_res20 != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[5];
      lVar11 = *plVar12;
      plVar8 = *(longlong **)(lVar11 + 8);
      lVar5 = FUN_1800143b0(param_3,lVar11,(longlong)plVar8,&local_res20);
      if (plVar12[1] == 0xaaaaaaaaaaaaaa9) {
        std::_Xlength_error("list<T> too long");
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      plVar12[1] = plVar12[1] + 1;
      *(longlong *)(lVar11 + 8) = lVar5;
      *plVar8 = lVar5;
      plVar12 = (longlong *)0x78;
      plVar8 = (longlong *)FUN_18002be40(0x78);
      local_48[0] = plVar8;
      if (plVar8 != (longlong *)0x0) {
        plVar9 = (longlong *)FUN_18001b7b0((undefined1 *)plVar8);
        plVar12 = plVar8;
      }
      local_38 = local_res20;
      plVar8 = (longlong *)param_1[10];
      lVar11 = *plVar8;
      plVar1 = *(longlong **)(lVar11 + 8);
      local_30 = plVar9;
      lVar5 = FUN_18001b150(plVar12,lVar11,(longlong)plVar1,&local_38);
      if (plVar8[1] != 0x7fffffffffffffe) {
        plVar8[1] = plVar8[1] + 1;
        *(longlong *)(lVar11 + 8) = lVar5;
        *plVar1 = lVar5;
        *param_1 = (longlong)local_res20;
        return 1;
      }
      std::_Xlength_error("list<T> too long");
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    if (((longlong *)*param_1 == (longlong *)0x0) ||
       (((param_1[1] == 0 &&
         (FUN_180028780((longlong)param_1,(longlong *)*param_1), param_1[1] == 0)) ||
        (*param_1 == 0)))) goto LAB_180027e5b;
    local_48[0] = (longlong *)FUN_18002be40(0x10);
    if (local_48[0] != (longlong *)0x0) {
      lVar11 = param_1[1];
      *local_48[0] = *param_1;
      local_48[0][1] = lVar11;
      plVar9 = local_48[0];
    }
    if (plVar9 == (longlong *)0x0) goto LAB_180027e5b;
    plVar8 = param_1;
    local_58 = plVar9;
    FUN_180028430((longlong)param_1,plVar9);
    plVar9 = (longlong *)param_1[9];
    lVar11 = *plVar9;
    plVar12 = *(longlong **)(lVar11 + 8);
    lVar7 = FUN_1800143b0(plVar8,lVar11,(longlong)plVar12,&local_58);
    lVar5 = plVar9[1];
    if (lVar5 == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
  }
  plVar9[1] = lVar5 + 1;
  *(longlong *)(lVar11 + 8) = lVar7;
  *plVar12 = lVar7;
LAB_180027e5b:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = -1;
  param_1[4] = -1;
  return 0;
}

