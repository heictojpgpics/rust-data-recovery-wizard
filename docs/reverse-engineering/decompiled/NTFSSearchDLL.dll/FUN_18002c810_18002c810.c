// Function: FUN_18002c810
// Address: 18002c810
// Size: 407 bytes


undefined8 *
FUN_18002c810(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar4) && (param_4 == plVar4)) {
    plVar3 = plVar4;
    plVar5 = (longlong *)plVar4[1];
    if (*(char *)(plVar4[1] + 0x19) == '\0') {
      do {
        FUN_18002c7b0(param_1,(longlong *)plVar5[2]);
        plVar3 = (longlong *)*plVar5;
        FUN_180019de0(plVar5 + 4);
        free(plVar5);
        plVar5 = plVar3;
      } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
      plVar3 = (longlong *)*param_1;
    }
    plVar3[1] = (longlong)plVar4;
    *(longlong **)*param_1 = plVar4;
    *(longlong **)(*param_1 + 0x10) = plVar4;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
    plVar4 = param_3;
    if (param_3 != param_4) {
      do {
        plVar3 = (longlong *)plVar4[2];
        if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x19);
          param_3 = plVar3;
          plVar5 = (longlong *)*plVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar5 + 0x19);
            param_3 = plVar5;
            plVar5 = (longlong *)*plVar5;
          }
        }
        else {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar2 = (longlong *)plVar4[1];
          plVar5 = plVar4;
          while ((param_3 = plVar2, cVar1 == '\0' && (plVar5 == (longlong *)param_3[2]))) {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar2 = (longlong *)param_3[1];
            plVar5 = param_3;
          }
        }
        if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
          plVar3 = (longlong *)*plVar3;
          cVar1 = *(char *)((longlong)plVar3 + 0x19);
          while (cVar1 == '\0') {
            plVar3 = (longlong *)*plVar3;
            cVar1 = *(char *)((longlong)plVar3 + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar5 = (longlong *)plVar4[1];
          plVar3 = plVar4;
          while ((plVar2 = plVar5, cVar1 == '\0' && (plVar3 == (longlong *)plVar2[2]))) {
            cVar1 = *(char *)(plVar2[1] + 0x19);
            plVar5 = (longlong *)plVar2[1];
            plVar3 = plVar2;
          }
        }
        plVar4 = FUN_180012020(param_1,plVar4);
        FUN_180019de0(plVar4 + 4);
        free(plVar4);
        plVar4 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}

