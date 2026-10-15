// Function: FUN_180029390
// Address: 180029390
// Size: 891 bytes


void FUN_180029390(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong lVar8;
  void *_Memory;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *local_res10;
  undefined8 local_res20;
  undefined8 local_40;
  
  uVar10 = 0;
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    free(*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    free(*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  plVar3 = (longlong *)(param_1 + 0xb0);
  FUN_180011140(plVar3);
  lVar9 = *(longlong *)(param_1 + 0xd0);
  uVar13 = uVar10;
  if (*(longlong *)(param_1 + 0xd8) - lVar9 >> 3 != 0) {
    do {
      free(*(void **)(uVar10 + *(longlong *)(param_1 + 0xd0)));
      uVar12 = (int)uVar13 + 1;
      uVar10 = uVar10 + 8;
      lVar9 = *(longlong *)(param_1 + 0xd0);
      uVar13 = (ulonglong)uVar12;
    } while ((ulonglong)(longlong)(int)uVar12 <
             (ulonglong)(*(longlong *)(param_1 + 0xd8) - lVar9 >> 3));
  }
  *(longlong *)(param_1 + 0xd8) = lVar9;
  plVar1 = (longlong *)(param_1 + 0x60);
  local_res10 = *(longlong **)*plVar1;
  if (local_res10 != (longlong *)*plVar1) {
    do {
      plVar11 = (longlong *)local_res10[9];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (plVar11 != (longlong *)0x0)) {
          (**(code **)(*plVar11 + 0x138))(plVar11,1);
        }
      }
      plVar11 = (longlong *)local_res10[2];
      if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
        cVar5 = *(char *)(*plVar11 + 0x19);
        local_res10 = plVar11;
        plVar11 = (longlong *)*plVar11;
        while (cVar5 == '\0') {
          cVar5 = *(char *)(*plVar11 + 0x19);
          local_res10 = plVar11;
          plVar11 = (longlong *)*plVar11;
        }
      }
      else {
        cVar5 = *(char *)(local_res10[1] + 0x19);
        plVar7 = (longlong *)local_res10[1];
        plVar11 = local_res10;
        while ((local_res10 = plVar7, cVar5 == '\0' && (plVar11 == (longlong *)local_res10[2]))) {
          cVar5 = *(char *)(local_res10[1] + 0x19);
          plVar7 = (longlong *)local_res10[1];
          plVar11 = local_res10;
        }
      }
    } while (local_res10 != (longlong *)*plVar1);
  }
  FUN_180020630(plVar1);
  plVar11 = (longlong *)(param_1 + 0xc0);
  FUN_180020630(plVar11);
  pvVar6 = *(void **)(param_1 + 0xd0);
  if (pvVar6 != (void *)0x0) {
    _Memory = pvVar6;
    if ((0xfff < (ulonglong)((*(longlong *)(param_1 + 0xe0) - (longlong)pvVar6 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)pvVar6 + -8),
       0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  FUN_180020630(plVar11);
  free((void *)*plVar11);
  FUN_180011140(plVar3);
  free((void *)*plVar3);
  FUN_180011140((longlong *)(param_1 + 0xa0));
  free(*(void **)(param_1 + 0xa0));
  plVar3 = (longlong *)(param_1 + 0x90);
  FUN_180012880(plVar3,&local_res20,*(longlong **)*plVar3,(longlong *)*plVar3);
  free((void *)*plVar3);
  plVar3 = (longlong *)(param_1 + 0x80);
  FUN_180012880(plVar3,&local_40,*(longlong **)*plVar3,(longlong *)*plVar3);
  free((void *)*plVar3);
  plVar3 = (longlong *)(param_1 + 0x70);
  lVar9 = *plVar3;
  lVar8 = lVar9;
  plVar11 = *(longlong **)(lVar9 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar9 + 8) + 0x19) == '\0') {
    do {
      FUN_18002adb0(plVar3,(longlong *)plVar11[2]);
      plVar7 = (longlong *)*plVar11;
      free(plVar11);
      plVar11 = plVar7;
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
    lVar8 = *plVar3;
  }
  *(longlong *)(lVar8 + 8) = lVar9;
  *(longlong *)*plVar3 = lVar9;
  *(longlong *)(*plVar3 + 0x10) = lVar9;
  *(undefined8 *)(param_1 + 0x78) = 0;
  free((void *)*plVar3);
  FUN_180020630(plVar1);
  free((void *)*plVar1);
  FUN_18002acc0((longlong *)(param_1 + 0x50));
  return;
}

