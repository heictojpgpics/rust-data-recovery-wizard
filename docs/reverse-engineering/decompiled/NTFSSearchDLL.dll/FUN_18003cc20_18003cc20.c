// Function: FUN_18003cc20
// Address: 18003cc20
// Size: 320 bytes


void FUN_18003cc20(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar5 = *(longlong **)(param_1 + 0x48);
  plVar2 = (longlong *)plVar5[1];
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  plVar7 = plVar5;
  plVar6 = plVar2;
  while (cVar1 == '\0') {
    if (plVar6[4] < param_3) {
      plVar3 = (longlong *)plVar6[2];
      plVar6 = plVar7;
    }
    else {
      plVar3 = (longlong *)*plVar6;
    }
    plVar7 = plVar6;
    plVar6 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  while( true ) {
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    plVar6 = plVar5;
    plVar3 = plVar2;
    while (cVar1 == '\0') {
      if (param_3 < plVar3[4]) {
        plVar4 = (longlong *)*plVar3;
        plVar6 = plVar3;
      }
      else {
        plVar4 = (longlong *)plVar3[2];
      }
      plVar3 = plVar4;
      cVar1 = *(char *)((longlong)plVar4 + 0x19);
    }
    if (plVar7 == plVar6) break;
    plVar6 = (longlong *)plVar7[2];
    if (param_2 == plVar7[5]) {
      if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
        plVar6 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar6 + 0x19);
        while (cVar1 == '\0') {
          plVar6 = (longlong *)*plVar6;
          cVar1 = *(char *)((longlong)plVar6 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar2 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar6 = plVar2, cVar1 == '\0' && (plVar5 == (longlong *)plVar6[2]))) {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar2 = (longlong *)plVar6[1];
          plVar5 = plVar6;
        }
      }
      plVar5 = FUN_180012020((longlong *)(param_1 + 0x48),plVar7);
      free(plVar5);
      return;
    }
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar6 + 0x19);
      plVar7 = plVar6;
      plVar6 = (longlong *)*plVar6;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x19);
        plVar7 = plVar6;
        plVar6 = (longlong *)*plVar6;
      }
    }
    else {
      cVar1 = *(char *)(plVar7[1] + 0x19);
      plVar3 = (longlong *)plVar7[1];
      plVar6 = plVar7;
      while ((plVar7 = plVar3, cVar1 == '\0' && (plVar6 == (longlong *)plVar7[2]))) {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar3 = (longlong *)plVar7[1];
        plVar6 = plVar7;
      }
    }
  }
  return;
}

