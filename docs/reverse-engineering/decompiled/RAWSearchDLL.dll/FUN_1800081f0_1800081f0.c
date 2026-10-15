// Function: FUN_1800081f0
// Address: 1800081f0
// Size: 150 bytes


void FUN_1800081f0(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)*param_1;
  if (plVar5 != (longlong *)*param_1) {
    do {
      puVar2 = (undefined8 *)plVar5[5];
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      plVar3 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x19);
        plVar5 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x19);
          plVar5 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
        while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
        }
      }
    } while (plVar5 != (longlong *)*param_1);
  }
  FUN_180007310(param_1);
  return;
}

