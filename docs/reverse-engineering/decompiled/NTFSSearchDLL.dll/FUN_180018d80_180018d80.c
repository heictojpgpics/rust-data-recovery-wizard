// Function: FUN_180018d80
// Address: 180018d80
// Size: 843 bytes


ulonglong FUN_180018d80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *_Dst;
  undefined7 extraout_var;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  void *pvVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint local_res8 [2];
  uint local_res18 [2];
  longlong *local_res20;
  ulonglong in_stack_ffffffffffffff28;
  void *local_c8;
  void *pvStack_c0;
  longlong lStack_b8;
  undefined2 local_b0 [8];
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_88 [10];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0xffffffffffffffff;
  }
  _Dst = (int *)FUN_18002be40(0x2000);
  memset(_Dst,0,0x2000);
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),_Dst,param_2,2,
             in_stack_ffffffffffffff28 & 0xffffffffffffff00);
  uVar11 = 0xffffffffffffffff;
  lVar5 = 0;
  FUN_1800431d0(local_88,_Dst,0x400,0,*(longlong **)(param_1 + 8),(undefined8 *)0x0);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  iVar1 = *(int *)(param_1 + 0x10);
  bVar2 = FUN_180043030(local_88);
  if (((int)CONCAT71(extraout_var,bVar2) != 0) &&
     (plVar4 = FUN_180006db0(0,local_88,(ulonglong)(uint)(iVar3 * iVar1),(ulonglong *)&local_res20,
                             0x200), plVar4 != (longlong *)0x0)) {
    if ((undefined **)*plVar4 == CNTFSFileProperties::vftable) {
      lVar6 = *(longlong *)((longlong)plVar4 + 0x11);
    }
    else {
      lVar6 = (*(code *)((undefined **)*plVar4)[2])(plVar4);
    }
    if (lVar6 != 0) {
      if ((undefined **)*plVar4 == CNTFSFileProperties::vftable) {
        lVar6 = *(longlong *)((longlong)plVar4 + 0x11);
      }
      else {
        lVar6 = (*(code *)((undefined **)*plVar4)[2])(plVar4);
      }
      do {
        lVar10 = lVar5 + 1;
        if (*(char *)(lVar6 + lVar5) != "$Extend"[lVar5]) goto LAB_18001908f;
        lVar5 = lVar10;
      } while (lVar10 != 8);
      lVar5 = FUN_1800430b0(local_88,0x90,0,(int *)0x0,(longlong *)0x0);
      if (((lVar5 != 0) && (lVar6 = FUN_1800460e0(lVar5), lVar6 != 0)) &&
         (*(char *)(lVar6 + 0x1c) != '\x01')) {
        local_res8[0] = 0;
        local_res18[0] = 0;
        uVar7 = FUN_180046060(lVar5,(int *)local_res8,local_res18);
        if ((int)uVar7 != 0) {
          local_c8 = (void *)0x0;
          pvStack_c0 = (void *)0x0;
          lStack_b8 = 0;
          FUN_180046230((ulonglong)local_res8[0] + lVar5,local_res18[0],(longlong *)&local_c8);
          if (local_c8 == pvStack_c0) {
            if (local_c8 == (void *)0x0) goto LAB_18001908f;
            pvVar9 = local_c8;
            if ((0xfff < (ulonglong)((lStack_b8 - (longlong)local_c8 >> 3) * 8)) &&
               (pvVar9 = *(void **)((longlong)local_c8 + -8),
               0x1f < (ulonglong)
                      ((longlong)local_c8 + (-8 - (longlong)*(void **)((longlong)local_c8 + -8)))))
            {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          else {
            local_res20 = (longlong *)local_b0;
            local_a0 = 0;
            local_98 = 7;
            local_b0[0] = 0;
            FUN_180019ee0((longlong *)local_b0,L"$UsnJrnl",8);
            puVar8 = (ulonglong *)FUN_180046390((longlong)&local_c8,(longlong *)local_b0);
            pvVar9 = local_c8;
            if (puVar8 == (ulonglong *)0x0) {
              if (local_c8 == (void *)0x0) goto LAB_18001908f;
              if ((0xfff < (ulonglong)((lStack_b8 - (longlong)local_c8 >> 3) * 8)) &&
                 (pvVar9 = *(void **)((longlong)local_c8 + -8),
                 0x1f < (ulonglong)
                        ((longlong)local_c8 + (-8 - (longlong)*(void **)((longlong)local_c8 + -8))))
                 ) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            else {
              uVar11 = *puVar8 & 0xffffffffffff;
              if (local_c8 == (void *)0x0) goto LAB_18001908f;
              if ((0xfff < (ulonglong)((lStack_b8 - (longlong)local_c8 >> 3) * 8)) &&
                 (pvVar9 = *(void **)((longlong)local_c8 + -8),
                 0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
          }
          free(pvVar9);
          lStack_b8 = 0;
          local_c8 = (void *)0x0;
          pvStack_c0 = (void *)0x0;
        }
      }
    }
  }
LAB_18001908f:
  FUN_180043170(local_88);
  free(_Dst);
  return uVar11;
}

