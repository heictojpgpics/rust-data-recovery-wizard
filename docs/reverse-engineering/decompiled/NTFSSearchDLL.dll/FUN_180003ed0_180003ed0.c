// Function: FUN_180003ed0
// Address: 180003ed0
// Size: 1150 bytes


void FUN_180003ed0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  int *_Memory;
  ulonglong uVar11;
  longlong lVar12;
  uint in_stack_ffffffffffffff08;
  int *local_e8;
  longlong lStack_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *plStack_c8;
  int *local_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88 [2];
  longlong local_78 [2];
  undefined8 local_68;
  longlong *local_60;
  ulonglong *local_58;
  ulonglong local_50 [3];
  
  if (param_2 == 0) {
    return;
  }
  local_68 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 200) < 1) {
    return;
  }
  uVar11 = *(longlong *)(param_2 + 0x10) + *(longlong *)(param_2 + 200);
  local_e8 = (int *)0x0;
  lStack_e0 = 0;
  piVar10 = (int *)0x0;
  local_d8 = 0;
  local_c0 = (int *)0x0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    uVar4 = (**(code **)(*(longlong *)*param_1 + 0x28))();
    lVar12 = 0x14;
    if (0x3ff < uVar4) {
      lVar12 = 10;
    }
    lVar6 = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((longlong)(lVar12 + uVar11) < lVar6) {
      iVar5 = (**(code **)(*(longlong *)*param_1 + 0x28))();
      uVar4 = iVar5 * (int)lVar12;
      if (0x1ff < uVar4) {
        FUN_1800061a0((longlong *)&local_e8,(ulonglong)uVar4,param_3);
        iVar5 = (**(code **)(*(longlong *)*param_1 + 8))
                          ((longlong *)*param_1,local_e8,uVar11,lVar12,
                           in_stack_ffffffffffffff08 & 0xffffff00);
        if (iVar5 != 0) {
          local_d0 = 0;
          plStack_c8 = (longlong *)0x0;
          if ((((ulonglong)(lStack_e0 - (longlong)local_e8) < 0x800) ||
              (iVar5 = FUN_1800411d0(local_e8), iVar5 == 0)) ||
             (iVar5 = FUN_1800411a0(local_e8 + 0x100), iVar5 == 0)) {
            bVar3 = FUN_180004c00(param_1,(longlong *)&local_e8,*(uint *)(param_2 + 0xc),
                                  *(longlong *)(param_2 + 0x10),3,&local_c0);
            piVar10 = local_c0;
            if ((bVar3) && (0x3ff < (ulonglong)(lStack_b8 - (longlong)local_c0))) {
              FUN_180041cf0(local_78,local_c0,(int)lStack_e0 - (int)local_e8,0);
              puVar8 = (ulonglong *)FUN_180007460(local_78,uVar11,(longlong *)*param_1,'\0');
              if (puVar8 != (ulonglong *)0x0) {
                *puVar8 = uVar11;
                local_98 = 0;
                plStack_90 = (longlong *)0x0;
                puVar9 = &local_98;
                FUN_1800064a0(puVar9,puVar8);
                plStack_c8 = plStack_90;
                local_d0 = local_98;
                local_98 = 0;
                local_60 = plStack_90;
                plStack_90 = (longlong *)0x0;
                plVar7 = *(longlong **)(param_2 + 0x158);
                plVar1 = (longlong *)plVar7[1];
                lVar12 = FUN_1800063a0(puVar9,plVar7,plVar1,&local_d0);
                if (*(longlong *)(param_2 + 0x160) == 0x7fffffffffffffe) {
                  std::_Xlength_error("list<T> too long");
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                *(longlong *)(param_2 + 0x160) = *(longlong *)(param_2 + 0x160) + 1;
                plVar7[1] = lVar12;
                *plVar1 = lVar12;
                *(undefined1 *)(param_2 + 0xf2) = 1;
                *(undefined1 *)(param_2 + 0x7d) = 1;
                *(undefined8 *)(param_2 + 0x68) = 0x50;
              }
              plVar7 = local_78;
              goto LAB_180004201;
            }
          }
          else {
            FUN_180041cf0(local_88,local_e8,(int)lStack_e0 - (int)local_e8,0);
            plVar7 = FUN_180007460(local_88,uVar11,(longlong *)*param_1,'\0');
            if (plVar7 != (longlong *)0x0) {
              local_a8 = 0;
              plStack_a0 = (longlong *)0x0;
              puVar9 = &local_a8;
              FUN_1800064a0(puVar9,plVar7);
              plStack_c8 = plStack_a0;
              local_d0 = local_a8;
              local_a8 = 0;
              plStack_a0 = (longlong *)0x0;
              plVar7 = *(longlong **)(param_2 + 0x158);
              plVar1 = (longlong *)plVar7[1];
              lVar12 = FUN_1800063a0(puVar9,plVar7,plVar1,&local_d0);
              if (*(longlong *)(param_2 + 0x160) == 0x7fffffffffffffe) {
                std::_Xlength_error("list<T> too long");
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              *(longlong *)(param_2 + 0x160) = *(longlong *)(param_2 + 0x160) + 1;
              plVar7[1] = lVar12;
              *plVar1 = lVar12;
              *(undefined1 *)(param_2 + 0xf2) = 1;
              *(undefined1 *)(param_2 + 0x7d) = 1;
              *(undefined8 *)(param_2 + 0x68) = 0x50;
            }
            plVar7 = local_88;
LAB_180004201:
            FUN_180041c70(plVar7);
          }
          local_58 = local_50;
          puVar8 = FUN_180006010(local_50,(longlong *)&local_e8);
          FUN_180005bc0(param_1,param_2,(longlong *)puVar8);
          plVar7 = plStack_c8;
          if (plStack_c8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_c8 + 1;
            lVar12 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            piVar10 = local_c0;
            if ((int)lVar12 == 1) {
              (**(code **)*plStack_c8)(plStack_c8);
              LOCK();
              piVar10 = (int *)((longlong)plVar7 + 0xc);
              iVar5 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              piVar10 = local_c0;
              if (iVar5 == 1) {
                (**(code **)(*plStack_c8 + 8))();
                piVar10 = local_c0;
              }
            }
          }
          if (piVar10 != (int *)0x0) {
            _Memory = piVar10;
            if ((0xfff < (ulonglong)(lStack_b0 - (longlong)piVar10)) &&
               (_Memory = *(int **)(piVar10 + -2),
               0x1f < (ulonglong)((longlong)piVar10 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(_Memory);
            local_c0 = (int *)0x0;
            lStack_b8 = 0;
            lStack_b0 = 0;
          }
          if (local_e8 == (int *)0x0) {
            return;
          }
          piVar10 = local_e8;
          if ((0xfff < (ulonglong)(local_d8 - (longlong)local_e8)) &&
             (piVar10 = *(int **)(local_e8 + -2),
             0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)*(int **)(local_e8 + -2))))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          goto LAB_180004324;
        }
      }
    }
  }
  if (local_e8 == (int *)0x0) {
    return;
  }
  piVar10 = local_e8;
  if ((0xfff < (ulonglong)(local_d8 - (longlong)local_e8)) &&
     (piVar10 = *(int **)(local_e8 + -2),
     0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)piVar10)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
LAB_180004324:
  free(piVar10);
  return;
}

