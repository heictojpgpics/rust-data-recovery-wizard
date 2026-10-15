// Function: FUN_180004c00
// Address: 180004c00
// Size: 955 bytes


bool FUN_180004c00(longlong *param_1,longlong *param_2,uint param_3,longlong param_4,int param_5,
                  int **param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined7 extraout_var;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong *puVar10;
  int *piVar11;
  bool bVar12;
  longlong lVar13;
  undefined4 uVar15;
  ulonglong uVar14;
  int *local_e8;
  int *piStack_e0;
  int *local_d8;
  int *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined8 *local_b8;
  int *local_b0;
  longlong local_a8 [10];
  ulonglong local_58 [4];
  
  local_c8 = 0xfffffffffffffffe;
  if ((longlong *)*param_1 == (longlong *)0x0) {
    return false;
  }
  if (param_3 == 0) {
    return false;
  }
  if ((ulonglong)(param_2[1] - *param_2) < 0x400) {
    return false;
  }
  iVar2 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  if (iVar2 == 0) {
    return false;
  }
  puVar10 = local_58;
  puVar4 = FUN_180006010(puVar10,param_2);
  uVar5 = FUN_1800059f0(puVar10,(longlong *)puVar4,param_5);
  if (uVar5 == 0xffffffff) {
    return false;
  }
  piVar11 = (int *)(*param_2 + uVar5);
  if (param_5 == 0) {
    iVar3 = FUN_180041170(piVar11);
  }
  else {
    if (param_5 != 3) {
      return false;
    }
    iVar3 = FUN_1800411a0(piVar11);
  }
  if (iVar3 == 0) {
    return iVar3 != 0;
  }
  bVar12 = false;
  plVar6 = (longlong *)*param_1;
  FUN_1800431d0(local_a8,piVar11,0x400,0,plVar6,(undefined8 *)0x0);
  uVar15 = (undefined4)((ulonglong)plVar6 >> 0x20);
  iVar3 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  bVar1 = FUN_180043030(local_a8);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
LAB_180004f8b:
    FUN_180043170(local_a8);
    return false;
  }
  uVar14 = CONCAT44(uVar15,0x200);
  uVar5 = (ulonglong)(iVar3 * param_3);
  plVar6 = FUN_180006db0(0,local_a8,uVar5,&local_c0,0x200);
  if (plVar6 == (longlong *)0x0) goto LAB_180004f8b;
  if ((undefined **)*plVar6 == CNTFSFileProperties::vftable) {
    if ((ushort *)plVar6[9] == (ushort *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = FUN_180033aa0((ushort *)plVar6[9]);
    }
  }
  else {
    puVar7 = (undefined8 *)(*(code *)((undefined **)*plVar6)[0xf])(plVar6);
  }
  local_b8 = puVar7;
  if (puVar7 == (undefined8 *)0x0) goto LAB_180004f60;
  plVar8 = FUN_1800340b0((longlong)puVar7);
  bVar1 = bVar12;
  if (plVar8 != (longlong *)0x0) {
    lVar13 = (ulonglong)param_3 * *plVar8 + param_4;
    local_d0 = (int *)0x10;
    if (param_5 == 3) {
      local_d0 = (int *)0x2;
    }
    lVar9 = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((longlong)local_d0 + lVar13 < lVar9) {
      local_e8 = (int *)0x0;
      piStack_e0 = (int *)0x0;
      local_d8 = (int *)0x0;
      FUN_1800061a0((longlong *)&local_e8,(longlong)((int)local_d0 * iVar2),uVar5);
      piVar11 = local_e8;
      iVar3 = (**(code **)(*(longlong *)*param_1 + 8))
                        ((longlong *)*param_1,local_e8,lVar13,local_d0,uVar14 & 0xffffffffffffff00);
      if (iVar3 == 0) {
        bVar1 = false;
        if (local_e8 != (int *)0x0) {
          piVar11 = local_e8;
          bVar1 = bVar12;
          if ((0xfff < (ulonglong)((longlong)local_d8 - (longlong)local_e8)) &&
             (piVar11 = *(int **)(local_e8 + -2),
             0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)*(int **)(local_e8 + -2))))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
LAB_180004f3b:
          free(piVar11);
          local_e8 = (int *)0x0;
          piStack_e0 = (int *)0x0;
          local_d8 = (int *)0x0;
        }
      }
      else {
        if (param_5 == 0) {
          if ((*piVar11 != 0x52545352) ||
             (*(int *)((longlong)(iVar2 * 8) + (longlong)piVar11) != 0x52545352))
          goto LAB_180004efb;
          bVar1 = true;
LAB_180004ea5:
          if ((param_6 != (int **)0x0) && (param_6 != &local_e8)) {
            piVar11 = *param_6;
            *param_6 = local_e8;
            local_d0 = param_6[1];
            param_6[1] = piStack_e0;
            local_b0 = param_6[2];
            param_6[2] = local_d8;
            local_e8 = piVar11;
            piStack_e0 = local_d0;
            local_d8 = local_b0;
          }
        }
        else if (param_5 == 3) {
          iVar2 = FUN_1800411d0(piVar11);
          bVar1 = iVar2 != 0;
          if (bVar1) goto LAB_180004ea5;
        }
        else {
LAB_180004efb:
          bVar1 = false;
        }
        if (local_e8 != (int *)0x0) {
          piVar11 = local_e8;
          if ((0xfff < (ulonglong)((longlong)local_d8 - (longlong)local_e8)) &&
             (piVar11 = *(int **)(local_e8 + -2),
             0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)piVar11)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          goto LAB_180004f3b;
        }
      }
    }
  }
  (**(code **)*puVar7)(puVar7,1);
  bVar12 = bVar1;
LAB_180004f60:
  FUN_180043170(local_a8);
  LOCK();
  piVar11 = (int *)((longlong)plVar6 + 0xc);
  iVar2 = *piVar11;
  *piVar11 = *piVar11 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return bVar12;
  }
  (**(code **)(*plVar6 + 0x138))(plVar6,1);
  return bVar12;
}

