// Function: FUN_18003cd00
// Address: 18003cd00
// Size: 274 bytes


void FUN_18003cd00(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = *plVar1;
  lVar4 = lVar2;
  plVar5 = *(longlong **)(lVar2 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19) == '\0') {
    do {
      FUN_180007770(plVar1,(longlong *)plVar5[2]);
      plVar3 = (longlong *)*plVar5;
      free(plVar5);
      plVar5 = plVar3;
    } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
    lVar4 = *plVar1;
  }
  *(longlong *)(lVar4 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  free((void *)*plVar1);
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar2 = *plVar1;
  lVar4 = lVar2;
  plVar5 = *(longlong **)(lVar2 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19) == '\0') {
    do {
      FUN_18003abf0(plVar1,(longlong *)plVar5[2]);
      plVar3 = (longlong *)*plVar5;
      free(plVar5);
      plVar5 = plVar3;
    } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
    lVar4 = *plVar1;
  }
  *(longlong *)(lVar4 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  free((void *)*plVar1);
  return;
}

