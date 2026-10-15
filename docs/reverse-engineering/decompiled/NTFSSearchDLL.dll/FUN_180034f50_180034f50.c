// Function: FUN_180034f50
// Address: 180034f50
// Size: 1273 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_180034f50(longlong param_1,int *param_2,uint param_3,longlong param_4,longlong *param_5,
             uint param_6,longlong param_7,longlong *param_8,longlong *param_9,char param_10)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  longlong *plVar9;
  undefined7 extraout_var_01;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8 [2];
  undefined8 local_98;
  longlong local_88 [10];
  
  local_98 = 0xfffffffffffffffe;
  lVar15 = -1;
  local_b8 = (longlong *)FUN_18002be40(0x30);
  plVar14 = (longlong *)0x0;
  if (local_b8 == (longlong *)0x0) {
    param_9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)local_b8 = 0;
    local_b8[1] = 0;
    local_b8[2] = -1;
    local_b8[3] = 0;
    local_b8[4] = -1;
    *(undefined1 *)(local_b8 + 5) = 0;
    *(undefined2 *)((longlong)local_b8 + 0x2a) = 0xffff;
    param_9 = local_b8;
  }
  uVar8 = FUN_1800078a0((undefined4 *)param_9,param_2,param_3,param_4,0);
  if ((int)uVar8 == 0) {
LAB_180034fef:
    if (param_9 != (longlong *)0x0) {
      FUN_180002090(param_9);
    }
    return (longlong *)0x0;
  }
  plVar10 = plVar14;
  if (param_8 != (longlong *)0x0) {
    lVar15 = FUN_180036ee0(param_4,*param_8,param_7,param_6);
    lVar13 = *param_8;
    plVar10 = (longlong *)(lVar13 + 0x28);
    bVar4 = FUN_180040b50((longlong)plVar10);
    if ((int)CONCAT71(extraout_var,bVar4) != 0) {
      plVar10 = (longlong *)(lVar13 + 8);
    }
    if ((((plVar10 == (longlong *)0x0) && (lVar13 = *(longlong *)(param_1 + 0x58), lVar13 != 0)) &&
        (*(longlong *)(lVar13 + 0x120) - (longlong)*(longlong **)(lVar13 + 0x118) >> 3 != 0)) &&
       (lVar13 = **(longlong **)(lVar13 + 0x118), lVar13 != 0)) {
      plVar10 = (longlong *)(lVar13 + 0x28);
      bVar4 = FUN_180040b50((longlong)plVar10);
      if ((int)CONCAT71(extraout_var_00,bVar4) != 0) {
        plVar10 = (longlong *)(lVar13 + 8);
      }
    }
  }
  if (0x3ff < (int)param_3) {
    FUN_180041cf0(local_a8,param_2,param_3,0);
    uVar8 = FUN_180040ea0(local_a8);
    FUN_180041c70(local_a8);
    if ((int)uVar8 != 0) goto LAB_180034fef;
  }
  if ((lVar15 != -1) && (param_9[4] == -1)) {
    param_9[4] = lVar15;
  }
  plVar9 = plVar14;
  if (plVar10 != (longlong *)0x0) {
    plVar9 = FUN_180042ef0(param_2,param_3,param_4,param_6,param_7,param_5,plVar10,2);
  }
  FUN_1800431d0(local_88,param_2,(ulonglong)param_3,param_4,param_5,plVar9);
  iVar7 = (**(code **)(*param_5 + 0x28))(param_5);
  bVar4 = FUN_180043030(local_88);
  if (((int)CONCAT71(extraout_var_01,bVar4) != 0) &&
     (plVar10 = FUN_180006db0(param_4,local_88,(ulonglong)(iVar7 * param_6),(ulonglong *)0x0,0x200),
     plVar10 != (longlong *)0x0)) {
    plVar11 = FUN_180031070();
    plVar11[6] = (longlong)plVar10;
    plVar12 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x90))();
    bVar4 = false;
    if ((plVar12 != (longlong *)0x0) &&
       (iVar7 = (**(code **)(*plVar12 + 0x18))(plVar12,plVar11), bVar4 = false, iVar7 == 0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar10 + 0x138))(plVar10,1);
      }
      bVar4 = true;
    }
    plVar11[6] = 0;
    (**(code **)(*plVar11 + 0x30))(plVar11,1);
    if (!bVar4) {
      if ((undefined **)*plVar10 == CNTFSFileProperties::vftable) {
        uVar6 = *(ushort *)((longlong)plVar10 + 0x23);
      }
      else {
        uVar6 = (*(code *)((undefined **)*plVar10)[7])(plVar10);
      }
      if ((uVar6 & 0x400) != 0) {
        param_9[4] = -100;
      }
      FUN_180007270(plVar10,(ulonglong)param_6);
      if ((undefined **)*plVar10 == CNTFSFileProperties::vftable) {
        lVar15 = *(longlong *)((longlong)plVar10 + 0x1b);
      }
      else {
        lVar15 = (*(code *)((undefined **)*plVar10)[3])(plVar10);
      }
      if (lVar15 == 0) {
        if ((undefined **)*plVar10 == CNTFSFileProperties::vftable) {
          uVar6 = *(ushort *)((longlong)plVar10 + 0x23);
        }
        else {
          uVar6 = (*(code *)((undefined **)*plVar10)[7])(plVar10);
        }
        if ((uVar6 & 0x10) == 0) {
          FUN_180011720((longlong *)&local_b8);
          lVar15 = *(longlong *)(param_1 + 0x50);
          plVar11 = (longlong *)*local_b8;
          *local_b8 = (longlong)local_b8;
          local_b8[1] = (longlong)local_b8;
          local_b0 = 0;
          plVar14 = plVar11;
          if (plVar11 != local_b8) {
            do {
              plVar11 = (longlong *)*plVar14;
              free(plVar14);
              plVar14 = plVar11;
            } while (plVar11 != local_b8);
          }
          plVar14 = *(longlong **)(lVar15 + 0x10);
          if ((plVar14 != (longlong *)0x0) &&
             (plVar14 = (longlong *)*plVar14, plVar12 = (longlong *)*plVar14, plVar12 != plVar14)) {
            do {
              plVar14 = local_b8;
              plVar2 = (longlong *)local_b8[1];
              lVar13 = FUN_18001b150(plVar11,(longlong)local_b8,(longlong)plVar2,plVar12 + 2);
              plVar11 = (longlong *)(0x7fffffffffffffe - local_b0);
              if (plVar11 == (longlong *)0x0) {
                std::_Xlength_error("list<T> too long");
                goto LAB_1800353f3;
              }
              local_b0 = local_b0 + 1;
              plVar14[1] = lVar13;
              *plVar2 = lVar13;
              plVar12 = (longlong *)*plVar12;
            } while (plVar12 != (longlong *)**(longlong **)(lVar15 + 0x10));
          }
          plVar14 = (longlong *)*local_b8;
          plVar11 = local_b8;
          if (plVar14 != local_b8) {
            do {
              puVar3 = (undefined8 *)plVar14[3];
              if (((puVar3 != (undefined8 *)0x0) && (*(char *)(puVar3 + 5) != '\0')) &&
                 (cVar5 = FUN_18001e6c0(puVar3,param_2,plVar10,-1,plVar9), plVar11 = local_b8,
                 cVar5 != '\0')) break;
              plVar14 = (longlong *)*plVar14;
            } while (plVar14 != plVar11);
          }
          FUN_1800116b0((longlong *)&local_b8);
        }
      }
      _DAT_180088170 = _DAT_180088170 + 1;
      plVar10[10] = (longlong)plVar9;
      param_9[3] = (longlong)plVar10;
      *(byte *)((longlong)plVar10 + 0x72) = *(byte *)((longlong)plVar10 + 0x72) & 0xdf;
      *(byte *)((longlong)plVar10 + 0x72) = *(byte *)((longlong)plVar10 + 0x72) | param_10 << 5;
      plVar14 = param_9;
      goto LAB_180035403;
    }
  }
LAB_1800353f3:
  if (param_9 != (longlong *)0x0) {
    FUN_180002090(param_9);
  }
LAB_180035403:
  FUN_180043170(local_88);
  return plVar14;
}

