// Function: FUN_18000d1d0
// Address: 18000d1d0
// Size: 799 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_18000d1d0(longlong param_1,int *param_2,uint param_3,longlong param_4,longlong param_5,
             longlong param_6,char param_7)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined7 extraout_var;
  undefined8 uVar7;
  longlong *plVar8;
  undefined7 extraout_var_00;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong local_b8;
  undefined4 local_b0 [2];
  longlong *local_a8;
  ulonglong uStack_a0;
  longlong *local_98;
  ulonglong uStack_90;
  undefined1 local_88;
  undefined2 local_86;
  undefined8 local_80;
  longlong local_78 [10];
  
  local_80 = 0xfffffffffffffffe;
  uVar10 = 0xffffffffffffffff;
  uVar6 = FUN_180034b20(param_2,param_3);
  if (((int)uVar6 == 0) &&
     (bVar2 = FUN_180041970((longlong)param_2), (int)CONCAT71(extraout_var,bVar2) == 0)) {
    plVar8 = (longlong *)0x0;
    local_b0[0] = 0;
    local_a8 = _DAT_180073280;
    uStack_a0 = _UNK_180073288;
    local_98 = _DAT_180073280;
    uStack_90 = _UNK_180073288;
    local_88 = 0;
    local_86 = 0xffff;
    uVar7 = FUN_1800078a0(local_b0,param_2,param_3,param_4,0);
    if ((int)uVar7 != 0) {
      if ((param_6 != 0) && (param_5 != 0)) {
        uVar10 = FUN_180036ee0(param_4,param_6,*(longlong *)(param_5 + 0x10),
                               *(uint *)(param_5 + 0xc));
      }
      plVar9 = (longlong *)(param_6 + 8);
      if (param_6 == 0) {
        plVar9 = plVar8;
      }
      if ((uVar10 == 0xffffffffffffffff) && (uVar10 = uStack_90, uStack_90 == 0xffffffffffffffff)) {
        uVar10 = *(ulonglong *)(param_1 + 0x7a0);
      }
      uStack_90 = uVar10;
      if ((plVar9 != (longlong *)0x0) && (param_5 != 0)) {
        plVar8 = FUN_180042ef0(param_2,param_3,param_4,*(int *)(param_5 + 0xc),
                               *(longlong *)(param_5 + 0x10),*(longlong **)(param_1 + 0xb8),plVar9,2
                              );
      }
      FUN_1800431d0(local_78,param_2,(ulonglong)param_3,param_4,*(longlong **)(param_1 + 0xb8),
                    plVar8);
      local_b8 = 0xffffffffffffffff;
      uVar11 = 0;
      if (param_5 != 0) {
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
        uVar11 = iVar5 * *(int *)(param_5 + 0xc);
      }
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
      bVar2 = FUN_180043030(local_78);
      if (((int)CONCAT71(extraout_var_00,bVar2) == 0) ||
         (plVar9 = FUN_180006db0(param_4,local_78,(ulonglong)uVar11,&local_b8,iVar5),
         plVar9 == (longlong *)0x0)) {
        if (plVar8 != (longlong *)0x0) {
          FUN_180003c80(plVar8);
          FUN_180002f00(plVar8,1);
        }
        plVar8 = (longlong *)0x0;
      }
      else {
        if (param_5 != 0) {
          FUN_180007270(plVar9,(ulonglong)*(uint *)(param_5 + 0xc));
        }
        plVar9[10] = (longlong)plVar8;
        if ((uStack_a0 == 0xffffffffffffffff) && (local_b8 != 0xffffffffffffffff)) {
          uStack_a0 = local_b8;
        }
        uVar6 = uStack_a0;
        plVar8 = FUN_180031070();
        if (plVar8 == (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x138))(plVar9,1);
        }
        else {
          plVar8[0xb] = param_4;
          plVar8[6] = (longlong)plVar9;
          if ((undefined **)*plVar9 == CNTFSFileProperties::vftable) {
            uVar4 = *(ushort *)((longlong)plVar9 + 0x23);
          }
          else {
            uVar4 = (*(code *)((undefined **)*plVar9)[7])(plVar9);
          }
          if ((uVar4 & 0x400) != 0) {
            uVar10 = 0xffffffffffffff9c;
          }
          plVar8[10] = uVar10;
          plVar8[9] = uVar6;
        }
        if ((param_7 != '\0') && (cVar3 = FUN_180031960(plVar8), cVar3 != '\0')) {
          FUN_18000f760(param_1,local_78,param_4);
        }
      }
      FUN_180043170(local_78);
    }
    if (local_98 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_98 + 0x138))(local_98,1);
      }
    }
  }
  else {
    plVar8 = (longlong *)0x0;
  }
  return plVar8;
}

