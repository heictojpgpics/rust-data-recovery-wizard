// Function: FUN_18002a100
// Address: 18002a100
// Size: 222 bytes


void * FUN_18002a100(void *param_1,int param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  
  if (param_1 != (void *)0x0) {
    for (iVar6 = 0; iVar6 < param_2; iVar6 = iVar6 + 1) {
      plVar4 = *(longlong **)*param_3;
LAB_18002a150:
      if (plVar4 != (longlong *)*param_3) {
        iVar1 = (int)plVar4[5];
        if ((iVar1 <= param_2) &&
           (iVar3 = memcmp(param_1,(void *)plVar4[4],(longlong)iVar1), iVar3 == 0)) {
          *param_4 = iVar1;
          return param_1;
        }
        plVar2 = (longlong *)plVar4[2];
        plVar5 = plVar4;
        if (*(char *)(plVar4[2] + 0x19) == '\0') {
          do {
            plVar4 = plVar2;
            plVar2 = (longlong *)*plVar4;
          } while (*(char *)(*plVar4 + 0x19) == '\0');
        }
        else {
          do {
            plVar4 = (longlong *)plVar5[1];
            if (*(char *)((longlong)plVar4 + 0x19) != '\0') break;
            bVar7 = plVar5 == (longlong *)plVar4[2];
            plVar5 = plVar4;
          } while (bVar7);
        }
        goto LAB_18002a150;
      }
      param_1 = (void *)((longlong)param_1 + 1);
    }
  }
  return (void *)0x0;
}

