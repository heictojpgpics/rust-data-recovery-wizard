// Function: FUN_1800390c0
// Address: 1800390c0
// Size: 426 bytes


void FUN_1800390c0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  longlong param_5)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar6 = (longlong *)**(longlong **)(param_1 + 0x160);
  if (plVar6 != *(longlong **)(param_1 + 0x160)) {
    do {
      if (*(uint *)(plVar6 + 4) == param_3) {
        uVar2 = *(uint *)((longlong)plVar6 + 0x1c);
        *(ulonglong *)(param_1 + 0x148) = (ulonglong)uVar2;
        FUN_180038730(param_1,(undefined1 *)
                              ((ulonglong)uVar2 % (ulonglong)*(uint *)(param_1 + 0x234) + param_2),
                      *(uint *)(param_1 + 0x234),param_3,param_4,param_5);
        plVar3 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x19);
          plVar7 = plVar3;
          plVar4 = (longlong *)*plVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            plVar7 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar5 = (longlong *)plVar6[1];
          plVar4 = plVar6;
          while ((plVar7 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar7[2]))) {
            cVar1 = *(char *)(plVar7[1] + 0x19);
            plVar5 = (longlong *)plVar7[1];
            plVar4 = plVar7;
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
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
            cVar1 = *(char *)(plVar5[1] + 0x19);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
          }
        }
        plVar6 = FUN_1800073a0((longlong *)(param_1 + 0x160),plVar6);
        free(plVar6);
      }
      else {
        plVar7 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x19);
          plVar6 = (longlong *)*plVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar6 + 0x19);
            plVar7 = plVar6;
            plVar6 = (longlong *)*plVar6;
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar3 = (longlong *)plVar6[1];
          while ((plVar7 = plVar3, cVar1 == '\0' && (plVar6 == (longlong *)plVar7[2]))) {
            cVar1 = *(char *)(plVar7[1] + 0x19);
            plVar3 = (longlong *)plVar7[1];
            plVar6 = plVar7;
          }
        }
      }
      plVar6 = plVar7;
    } while (plVar7 != *(longlong **)(param_1 + 0x160));
  }
  return;
}

