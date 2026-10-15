// Function: FUN_1800126d0
// Address: 1800126d0
// Size: 430 bytes


undefined8 *
FUN_1800126d0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar5) && (param_4 == plVar5)) {
    FUN_180012f00(param_1,(longlong *)plVar5[1],param_3,param_4);
    *(longlong **)(*param_1 + 8) = plVar5;
    *(longlong **)*param_1 = plVar5;
    *(longlong **)(*param_1 + 0x10) = plVar5;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
    plVar5 = param_3;
    if (param_3 != param_4) {
      do {
        plVar2 = (longlong *)plVar5[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          param_3 = plVar2;
          plVar4 = (longlong *)*plVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            param_3 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar3 = (longlong *)plVar5[1];
          plVar4 = plVar5;
          while ((param_3 = plVar3, cVar1 == '\0' && (plVar4 == (longlong *)param_3[2]))) {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar3 = (longlong *)param_3[1];
            plVar4 = param_3;
          }
        }
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          plVar2 = (longlong *)*plVar2;
          cVar1 = *(char *)((longlong)plVar2 + 0x19);
          while (cVar1 == '\0') {
            plVar2 = (longlong *)*plVar2;
            cVar1 = *(char *)((longlong)plVar2 + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar4 = (longlong *)plVar5[1];
          plVar2 = plVar5;
          while ((plVar3 = plVar4, cVar1 == '\0' && (plVar2 == (longlong *)plVar3[2]))) {
            cVar1 = *(char *)(plVar3[1] + 0x19);
            plVar4 = (longlong *)plVar3[1];
            plVar2 = plVar3;
          }
        }
        plVar3 = FUN_180012020(param_1,plVar5);
        plVar5 = plVar3 + 5;
        plVar2 = (longlong *)*plVar5;
        plVar4 = (longlong *)*plVar2;
        *plVar2 = (longlong)plVar2;
        *(longlong *)(*plVar5 + 8) = *plVar5;
        plVar3[6] = 0;
        if (plVar4 != (longlong *)*plVar5) {
          do {
            plVar2 = (longlong *)*plVar4;
            free(plVar4);
            plVar4 = plVar2;
          } while (plVar2 != (longlong *)*plVar5);
        }
        free((void *)*plVar5);
        free(plVar3);
        plVar5 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}

