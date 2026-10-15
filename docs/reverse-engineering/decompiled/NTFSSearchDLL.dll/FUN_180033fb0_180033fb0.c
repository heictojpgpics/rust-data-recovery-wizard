// Function: FUN_180033fb0
// Address: 180033fb0
// Size: 247 bytes


void FUN_180033fb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = IDataRunList::vftable;
  puVar1 = param_1 + 1;
  uVar4 = param_1[4];
  plVar2 = (longlong *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    plVar2 = (longlong *)*puVar1;
  }
  for (; uVar4 != param_1[5] + param_1[4]; uVar4 = uVar4 + 1) {
    if (plVar2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar2;
    }
    free(*(void **)(*(longlong *)
                     (*(longlong *)(lVar3 + 8) + (uVar4 >> 1 & *(longlong *)(lVar3 + 0x10) - 1U) * 8
                     ) + (ulonglong)((uint)uVar4 & 1) * 8));
  }
  FUN_180034540((longlong)puVar1);
  plVar2 = (longlong *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    plVar2 = (longlong *)*puVar1;
  }
  if ((((longlong *)param_1[6] != plVar2) && (plVar2 != (longlong *)0x0)) &&
     ((undefined8 *)*plVar2 != (undefined8 *)0x0)) {
    param_1[6] = *(undefined8 *)*plVar2;
  }
  param_1[8] = param_1[4];
  FUN_180034540((longlong)puVar1);
  free((void *)*puVar1);
  *puVar1 = 0;
  return;
}

