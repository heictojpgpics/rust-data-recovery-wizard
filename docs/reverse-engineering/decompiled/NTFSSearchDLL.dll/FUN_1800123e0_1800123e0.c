// Function: FUN_1800123e0
// Address: 1800123e0
// Size: 471 bytes


undefined8 *
FUN_1800123e0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar6) && (param_4 == plVar6)) {
    FUN_180011c90(param_1,(longlong *)plVar6[1],param_3,param_4);
    *(longlong **)(*param_1 + 8) = plVar6;
    *(longlong **)*param_1 = plVar6;
    *(longlong **)(*param_1 + 0x10) = plVar6;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
    plVar6 = param_3;
    if (param_3 != param_4) {
      do {
        plVar2 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          param_3 = plVar2;
          plVar5 = (longlong *)*plVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar5 + 0x19);
            param_3 = plVar5;
            plVar5 = (longlong *)*plVar5;
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (longlong *)plVar6[1];
          plVar5 = plVar6;
          while ((param_3 = plVar4, cVar1 == '\0' && (plVar5 == (longlong *)param_3[2]))) {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar4 = (longlong *)param_3[1];
            plVar5 = param_3;
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
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar5 = (longlong *)plVar6[1];
          plVar2 = plVar6;
          while ((plVar4 = plVar5, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
            cVar1 = *(char *)(plVar4[1] + 0x19);
            plVar5 = (longlong *)plVar4[1];
            plVar2 = plVar4;
          }
        }
        plVar5 = FUN_180012020(param_1,plVar6);
        plVar6 = plVar5 + 5;
        lVar3 = *plVar6;
        cVar1 = *(char *)((longlong)*(longlong **)(lVar3 + 8) + 0x19);
        plVar2 = *(longlong **)(lVar3 + 8);
        while (cVar1 == '\0') {
          FUN_180011da0(plVar6,(longlong *)plVar2[2]);
          plVar4 = (longlong *)*plVar2;
          free(plVar2);
          plVar2 = plVar4;
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
        }
        *(longlong *)(*plVar6 + 8) = lVar3;
        *(longlong *)*plVar6 = lVar3;
        *(longlong *)(*plVar6 + 0x10) = lVar3;
        plVar5[6] = 0;
        free((void *)*plVar6);
        free(plVar5);
        plVar6 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}

