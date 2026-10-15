// Function: FUN_180011e00
// Address: 180011e00
// Size: 294 bytes


undefined8 *
FUN_180011e00(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((param_3 == *(longlong **)*param_1) && (param_4 == (longlong *)*param_1)) {
    FUN_180011140(param_1);
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
          plVar3 = (longlong *)*plVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x19);
            param_3 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
          while ((param_3 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)param_3[2]))) {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar4 = (longlong *)param_3[1];
            plVar3 = param_3;
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
          plVar3 = (longlong *)plVar5[1];
          plVar2 = plVar5;
          while ((plVar4 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
            cVar1 = *(char *)(plVar4[1] + 0x19);
            plVar3 = (longlong *)plVar4[1];
            plVar2 = plVar4;
          }
        }
        plVar5 = FUN_180012020(param_1,plVar5);
        free(plVar5);
        plVar5 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}

