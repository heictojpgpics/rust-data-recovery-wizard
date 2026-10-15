// Function: FUN_180018740
// Address: 180018740
// Size: 819 bytes


ulonglong FUN_180018740(longlong *param_1,longlong *param_2,undefined8 *param_3,uint param_4,
                       longlong param_5)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int *piVar10;
  undefined8 uVar11;
  longlong lVar12;
  byte local_res10 [8];
  uint in_stack_ffffffffffffff88;
  longlong *local_50;
  longlong local_48;
  ulonglong local_40 [3];
  
  if ((param_2 == (longlong *)0x0) || (param_3 == (undefined8 *)0x0)) {
    return 0;
  }
  if (param_5 != 0) {
    *param_1 = param_5;
  }
  param_1[1] = (longlong)param_2;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 2) = 8;
  uVar3 = *(uint *)(param_1 + 2);
  if (param_4 != 0) {
    uVar3 = param_4;
  }
  *(uint *)(param_1 + 2) = uVar3;
  local_res10[0] = 0;
  iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  FUN_180019d40(local_40,(longlong)(iVar2 * 0x14),local_res10);
  puVar8 = local_40;
  plVar4 = (longlong *)FUN_180002680(puVar8);
  lVar12 = *plVar4;
  uVar7 = 0;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  local_50 = (longlong *)FUN_180013230(puVar8,0,0);
  FUN_180040690(param_3,(longlong)&local_50);
  if ((local_48 != 0) && (*(longlong **)(*local_50 + 0x10) != (longlong *)0x0)) {
    lVar9 = (ulonglong)param_4 * **(longlong **)(*local_50 + 0x10);
    uVar11 = 0x14;
    uVar3 = (**(code **)(*(longlong *)param_1[1] + 8))
                      ((longlong *)param_1[1],lVar12,lVar9,0x14,
                       in_stack_ffffffffffffff88 & 0xffffff00);
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
      iVar2 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
      if (iVar2 == 0x200) {
        iVar2 = 0x1400;
      }
      else {
        iVar2 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
        iVar2 = iVar2 * 5;
      }
      piVar10 = (int *)(iVar2 + lVar12);
      uVar5 = FUN_180041bb0(piVar10,0x400);
      if ((((int)uVar5 != 0) &&
          (uVar6 = FUN_180018a80((longlong)param_1,piVar10,lVar9,uVar11,param_4,param_3),
          0 < (longlong)uVar6)) && (local_48 != 0)) {
        plVar4 = (longlong *)*local_50;
        if (plVar4 != local_50) {
          lVar12 = 0;
          do {
            lVar9 = lVar12 + (longlong)
                             (((longlong *)plVar4[2])[2] * (ulonglong)*(uint *)(param_1 + 2)) / 2;
            if ((longlong)uVar6 <= lVar9) {
              lVar12 = (ulonglong)*(uint *)(param_1 + 2) * *(longlong *)plVar4[2] +
                       (uVar6 - lVar12) * 2;
              if (((0 < lVar12) &&
                  (uVar6 = FUN_180018d80((longlong)param_1,lVar12), 0 < (longlong)uVar6)) &&
                 (local_48 != 0)) {
                plVar4 = (longlong *)*local_50;
                if (plVar4 != local_50) {
                  lVar12 = 0;
                  goto LAB_180018940;
                }
              }
              break;
            }
            plVar4 = (longlong *)*plVar4;
            lVar12 = lVar9;
          } while (plVar4 != local_50);
        }
      }
    }
  }
  goto LAB_18001898f;
  while (plVar4 = (longlong *)*plVar4, lVar12 = lVar9, plVar4 != local_50) {
LAB_180018940:
    lVar9 = lVar12 + (longlong)(((longlong *)plVar4[2])[2] * (ulonglong)*(uint *)(param_1 + 2)) / 2;
    if ((longlong)uVar6 <= lVar9) {
      lVar12 = (ulonglong)*(uint *)(param_1 + 2) * *(longlong *)plVar4[2] + (uVar6 - lVar12) * 2;
      if (0 < lVar12) {
        uVar7 = FUN_1800190d0((longlong)param_1,param_3,lVar12);
        uVar7 = uVar7 & 0xffffffff;
      }
      break;
    }
  }
LAB_18001898f:
  plVar4 = (longlong *)*local_50;
  if (plVar4 != local_50) {
    do {
      free((void *)plVar4[2]);
      plVar4 = (longlong *)*plVar4;
    } while (plVar4 != local_50);
  }
  plVar4 = (longlong *)*local_50;
  *local_50 = (longlong)local_50;
  local_50[1] = (longlong)local_50;
  local_48 = 0;
  if (plVar4 != local_50) {
    do {
      plVar1 = (longlong *)*plVar4;
      free(plVar4);
      plVar4 = plVar1;
    } while (plVar1 != local_50);
  }
  plVar4 = (longlong *)*local_50;
  *local_50 = (longlong)local_50;
  local_50[1] = (longlong)local_50;
  local_48 = 0;
  if (plVar4 != local_50) {
    do {
      plVar1 = (longlong *)*plVar4;
      free(plVar4);
      plVar4 = plVar1;
    } while (plVar1 != local_50);
  }
  free(local_50);
  FUN_180005fb0((longlong *)local_40);
  return uVar7;
}

