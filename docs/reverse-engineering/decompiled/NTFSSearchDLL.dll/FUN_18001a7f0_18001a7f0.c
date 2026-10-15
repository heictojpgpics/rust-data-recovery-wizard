// Function: FUN_18001a7f0
// Address: 18001a7f0
// Size: 385 bytes


void FUN_18001a7f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar3 = (longlong *)*param_1;
  plVar7 = (longlong *)*plVar3;
  *plVar3 = (longlong)plVar3;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  if (plVar7 != (longlong *)*param_1) {
    do {
      plVar3 = (longlong *)*plVar7;
      free(plVar7);
      plVar7 = plVar3;
    } while (plVar3 != (longlong *)*param_1);
  }
  plVar3 = param_1 + 2;
  puVar4 = (undefined8 *)*plVar3;
  for (puVar5 = (undefined8 *)*puVar4; puVar5 != puVar4; puVar5 = (undefined8 *)*puVar5) {
    plVar7 = (longlong *)puVar5[2];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 0x138))(plVar7,1);
      }
    }
  }
  plVar7 = (longlong *)*plVar3;
  plVar6 = (longlong *)*plVar7;
  *plVar7 = (longlong)plVar7;
  *(longlong *)(*plVar3 + 8) = *plVar3;
  param_1[3] = 0;
  if (plVar6 != (longlong *)*plVar3) {
    do {
      plVar7 = (longlong *)*plVar6;
      free(plVar6);
      plVar6 = plVar7;
    } while (plVar7 != (longlong *)*plVar3);
  }
  plVar7 = (longlong *)*plVar3;
  plVar6 = (longlong *)*plVar7;
  *plVar7 = (longlong)plVar7;
  *(longlong *)(*plVar3 + 8) = *plVar3;
  param_1[3] = 0;
  if (plVar6 != (longlong *)*plVar3) {
    do {
      plVar7 = (longlong *)*plVar6;
      free(plVar6);
      plVar6 = plVar7;
    } while (plVar7 != (longlong *)*plVar3);
  }
  free((void *)*plVar3);
  plVar3 = (longlong *)*param_1;
  plVar7 = (longlong *)*plVar3;
  *plVar3 = (longlong)plVar3;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  if (plVar7 != (longlong *)*param_1) {
    do {
      plVar3 = (longlong *)*plVar7;
      free(plVar7);
      plVar7 = plVar3;
    } while (plVar3 != (longlong *)*param_1);
  }
  free((void *)*param_1);
  return;
}

