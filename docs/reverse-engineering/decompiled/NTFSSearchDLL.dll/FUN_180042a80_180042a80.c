// Function: FUN_180042a80
// Address: 180042a80
// Size: 1114 bytes


longlong * FUN_180042a80(int *param_1,int param_2,longlong param_3,int param_4,longlong *param_5)

{
  longlong *plVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  longlong lVar6;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  int *piVar7;
  uint local_a8;
  uint local_a4;
  void *local_98;
  longlong *local_90;
  uint local_88;
  undefined8 *local_70;
  longlong local_68;
  undefined8 *local_60;
  longlong *local_58;
  longlong *local_50;
  void *local_48;
  void *local_40;
  longlong *local_38;
  undefined8 *local_30;
  void *local_28;
  longlong *local_20;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_90 = (longlong *)0x0;
  if ((param_1 == (int *)0x0) || (uVar5 = FUN_180041bb0(param_1,param_2), (int)uVar5 == 0)) {
    return (longlong *)0x0;
  }
  FUN_180041a20((longlong)param_1,param_2);
  bVar2 = FUN_1800419e0((longlong)param_1);
  if (((int)CONCAT71(extraout_var,bVar2) != 0) &&
     (lVar6 = FUN_180041850((longlong)param_1,0x20,0), lVar6 != 0)) {
    local_a4 = 0;
    bVar2 = FUN_180045400(lVar6);
    if ((int)CONCAT71(extraout_var_00,bVar2) == 0) {
      FUN_180045480(lVar6);
      local_68 = FUN_180043b40(lVar6);
      iVar4 = FUN_180043b00(lVar6);
      if (local_68 == 0) {
        return (longlong *)0x0;
      }
      local_a8 = 0;
      if (0 < iVar4) {
        uVar5 = FUN_180045260(lVar6);
        local_a4 = (uint)uVar5;
        uVar5 = FUN_180045240(lVar6);
        local_a8 = (uint)uVar5;
      }
      if ((local_a4 == 0) || (local_a8 < local_a4)) {
        return (longlong *)0x0;
      }
      local_98 = (void *)thunk_FUN_18002be40((ulonglong)local_a8);
      local_48 = local_98;
      memset(local_98,0,(ulonglong)local_a8);
      iVar4 = FUN_1800420d0(local_68,iVar4,(longlong)local_98,local_a8,param_3,param_4,param_5);
      if (iVar4 == 0) {
        local_40 = local_98;
        free(local_98);
        return (longlong *)0x0;
      }
    }
    else {
      local_a4 = FUN_180045320(lVar6);
      uVar3 = FUN_180045350(lVar6);
      local_98 = (void *)(lVar6 + (ulonglong)uVar3);
    }
    local_60 = (undefined8 *)thunk_FUN_18002be40(0x10);
    if (local_60 == (undefined8 *)0x0) {
      local_58 = (longlong *)0x0;
    }
    else {
      local_58 = FUN_180003bb0(local_60);
    }
    plVar1 = local_58;
    local_38 = local_58;
    local_90 = local_58;
    local_70 = (undefined8 *)0x0;
    local_88 = 0;
    while (((local_88 < local_a4 &&
            (piVar7 = (int *)((longlong)local_98 + (ulonglong)local_88), *piVar7 != 0)) &&
           ((short)piVar7[1] != 0))) {
      uVar5 = FUN_180042520(plVar1,*(ulonglong *)(piVar7 + 4) & 0xffffffffffff);
      if ((int)uVar5 == 0) {
        local_70 = (undefined8 *)thunk_FUN_18002be40(0x10);
        local_70[1] = *(ulonglong *)(piVar7 + 4) & 0xffffffffffff;
        *local_70 = 0xffffffffffffffff;
        local_30 = local_70;
        FUN_180003b20(plVar1,&local_70);
      }
      local_88 = local_88 + (int)(short)piVar7[1];
    }
    bVar2 = FUN_180045400(lVar6);
    if (((int)CONCAT71(extraout_var_01,bVar2) == 0) && (local_98 != (void *)0x0)) {
      local_28 = local_98;
      free(local_98);
    }
  }
  FUN_180041290((longlong)param_1,param_2);
  if (local_90 == (longlong *)0x0) {
    local_90 = (longlong *)0x0;
  }
  else {
    bVar2 = FUN_180020500((longlong)local_90);
    if (bVar2) {
      FUN_180003c80(local_90);
      local_20 = local_90;
      local_50 = local_90;
      if (local_90 != (longlong *)0x0) {
        FUN_180002f00(local_90,1);
      }
      local_90 = (longlong *)0x0;
    }
  }
  return local_90;
}

