// Function: FUN_180005bc0
// Address: 180005bc0
// Size: 811 bytes


void FUN_180005bc0(longlong *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong *puVar7;
  undefined7 extraout_var;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  void *pvVar13;
  undefined8 *puVar14;
  void *pvVar15;
  undefined8 *puVar16;
  ulonglong *local_res8;
  longlong local_res20;
  ulonglong local_c0;
  undefined8 *local_b8;
  longlong local_a8 [10];
  ulonglong local_58 [4];
  
  puVar9 = (undefined8 *)0x0;
  if (((((longlong *)*param_1 != (longlong *)0x0) && (param_2 != 0)) &&
      (*(int *)(param_2 + 0xc) != 0)) && (0x3ff < (ulonglong)(param_3[1] - *param_3))) {
    (**(code **)(*(longlong *)*param_1 + 0x28))();
    puVar7 = FUN_180006010(local_58,param_3);
    pvVar15 = (void *)*puVar7;
    puVar14 = puVar9;
    puVar16 = (undefined8 *)0xffffffff;
    local_res8 = puVar7;
    if ((void *)puVar7[1] != pvVar15) {
      do {
        iVar5 = FUN_180041170((int *)((longlong)pvVar15 + (longlong)puVar14));
        pvVar15 = (void *)*puVar7;
        puVar16 = puVar14;
        if (iVar5 != 0) break;
        puVar14 = puVar14 + 0x80;
        puVar16 = (undefined8 *)0xffffffff;
      } while (puVar14 < (undefined8 *)(puVar7[1] - (longlong)pvVar15));
    }
    if (pvVar15 != (void *)0x0) {
      pvVar13 = pvVar15;
      if ((0xfff < puVar7[2] - (longlong)pvVar15) &&
         (pvVar13 = *(void **)((longlong)pvVar15 - 8),
         0x1f < (ulonglong)((longlong)pvVar15 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar13);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    if (puVar16 != (undefined8 *)0xffffffff) {
      lVar11 = *param_3;
      iVar5 = FUN_180041170((int *)(lVar11 + (longlong)puVar16));
      if (iVar5 != 0) {
        FUN_1800431d0(local_a8,(int *)(lVar11 + (longlong)puVar16),0x400,0,(longlong *)*param_1,
                      (undefined8 *)0x0);
        iVar6 = (**(code **)(*(longlong *)*param_1 + 0x28))();
        iVar5 = *(int *)(param_2 + 0xc);
        bVar4 = FUN_180043030(local_a8);
        if (((int)CONCAT71(extraout_var,bVar4) == 0) ||
           (plVar8 = FUN_180006db0(0,local_a8,(ulonglong)(uint)(iVar6 * iVar5),&local_c0,0x200),
           plVar8 == (longlong *)0x0)) {
          FUN_180043170(local_a8);
        }
        else {
          if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
            if ((ushort *)plVar8[9] != (ushort *)0x0) {
              puVar9 = FUN_180033aa0((ushort *)plVar8[9]);
            }
          }
          else {
            puVar9 = (undefined8 *)(*(code *)((undefined **)*plVar8)[0xf])(plVar8);
          }
          local_b8 = puVar9;
          if (puVar9 != (undefined8 *)0x0) {
            plVar10 = FUN_1800340b0((longlong)puVar9);
            if (plVar10 != (longlong *)0x0) {
              uVar12 = (ulonglong)*(uint *)(param_2 + 0xc);
              local_res8 = (ulonglong *)(plVar10[1] * uVar12);
              local_res20 = *plVar10 * uVar12 + *(longlong *)(param_2 + 0x10);
              plVar10 = *(longlong **)(param_2 + 0x168);
              plVar2 = (longlong *)plVar10[1];
              lVar11 = FUN_180006400(uVar12,plVar10,plVar2,&local_res20,&local_res8);
              if (*(longlong *)(param_2 + 0x170) == 0x7fffffffffffffe) {
                std::_Xlength_error("list<T> too long");
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              *(longlong *)(param_2 + 0x170) = *(longlong *)(param_2 + 0x170) + 1;
              plVar10[1] = lVar11;
              *plVar2 = lVar11;
            }
            (**(code **)*puVar9)(puVar9,1);
          }
          FUN_180043170(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar8 + 0x138))(plVar8,1);
          }
        }
      }
    }
  }
  pvVar15 = (void *)*param_3;
  if (pvVar15 != (void *)0x0) {
    pvVar13 = pvVar15;
    if ((0xfff < (ulonglong)(param_3[2] - (longlong)pvVar15)) &&
       (pvVar13 = *(void **)((longlong)pvVar15 + -8),
       0x1f < (ulonglong)((longlong)pvVar15 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar13);
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
  }
  return;
}

