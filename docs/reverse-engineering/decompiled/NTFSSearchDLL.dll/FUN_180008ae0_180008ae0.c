// Function: FUN_180008ae0
// Address: 180008ae0
// Size: 171 bytes


void FUN_180008ae0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  void *_Memory;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)(param_1 + 0x150);
  plVar5 = *(longlong **)*plVar1;
  if (plVar5 != (longlong *)*plVar1) {
    do {
      _Memory = (void *)plVar5[4];
      if (_Memory != (void *)0x0) {
        FUN_180038ec0((longlong)_Memory);
        free(_Memory);
      }
      plVar3 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar3 + 0x19);
        plVar5 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar3 + 0x19);
          plVar5 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar2 = *(char *)(plVar5[1] + 0x19);
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
        while ((plVar5 = plVar4, cVar2 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
          cVar2 = *(char *)(plVar5[1] + 0x19);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
        }
      }
    } while (plVar5 != (longlong *)*plVar1);
  }
  FUN_180011400(plVar1);
  return;
}

