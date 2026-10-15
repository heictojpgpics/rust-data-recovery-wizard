// Function: FUN_180002090
// Address: 180002090
// Size: 82 bytes


void * FUN_180002090(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x138))(plVar3,1);
    }
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  }
  free(param_1);
  return param_1;
}

