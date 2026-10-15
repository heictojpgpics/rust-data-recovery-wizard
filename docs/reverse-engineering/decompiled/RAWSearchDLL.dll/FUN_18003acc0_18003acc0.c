// Function: FUN_18003acc0
// Address: 18003acc0
// Size: 592 bytes


undefined8 *
FUN_18003acc0(longlong *param_1,undefined8 *param_2,longlong *param_3,uint *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 local_20 [3];
  
  if (param_1[1] == 0) {
    FUN_18003af80(param_1,param_2,'\x01',(undefined8 *)*param_1,in_stack_ffffffffffffffc8,param_5);
  }
  else {
    plVar1 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar1) {
      if (*param_4 < *(uint *)((longlong)param_3 + 0x1c)) {
        FUN_18003af80(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
        return param_2;
      }
    }
    else if (param_3 == plVar1) {
      if (*(uint *)(plVar1[2] + 0x1c) < *param_4) {
        FUN_18003af80(param_1,param_2,'\0',(undefined8 *)plVar1[2],in_stack_ffffffffffffffc8,param_5
                     );
        return param_2;
      }
    }
    else {
      bVar5 = *(uint *)((longlong)param_3 + 0x1c) < *param_4;
      if (*param_4 < *(uint *)((longlong)param_3 + 0x1c)) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar1 = param_3;
          plVar4 = (longlong *)*param_3;
          if (*(char *)(*param_3 + 0x19) == '\0') {
            do {
              plVar3 = plVar4;
              plVar4 = (longlong *)plVar3[2];
            } while (*(char *)(plVar3[2] + 0x19) == '\0');
          }
          else {
            do {
              plVar3 = plVar1;
              plVar1 = (longlong *)plVar3[1];
              if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
            } while (plVar3 == (longlong *)*plVar1);
            if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
              plVar3 = plVar1;
            }
          }
        }
        else {
          plVar3 = (longlong *)param_3[2];
        }
        if (*(uint *)((longlong)plVar3 + 0x1c) < *param_4) {
          if (*(char *)(plVar3[2] + 0x19) != '\0') {
            FUN_18003af80(param_1,param_2,'\0',plVar3,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_18003af80(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
        bVar5 = *(uint *)((longlong)param_3 + 0x1c) < *param_4;
      }
      if (bVar5) {
        plVar1 = (longlong *)param_3[2];
        plVar4 = param_3;
        if (*(char *)(param_3[2] + 0x19) == '\0') {
          do {
            plVar3 = plVar1;
            plVar1 = (longlong *)*plVar3;
          } while (*(char *)(*plVar3 + 0x19) == '\0');
        }
        else {
          do {
            plVar3 = (longlong *)plVar4[1];
            if (*(char *)((longlong)plVar3 + 0x19) != '\0') break;
            bVar5 = plVar4 == (longlong *)plVar3[2];
            plVar4 = plVar3;
          } while (bVar5);
        }
        if ((plVar3 == (longlong *)*param_1) || (*param_4 < *(uint *)((longlong)plVar3 + 0x1c))) {
          if (*(char *)(param_3[2] + 0x19) != '\0') {
            FUN_18003af80(param_1,param_2,'\0',param_3,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_18003af80(param_1,param_2,'\x01',plVar3,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
    }
    puVar2 = FUN_18003b230(param_1,local_20,'\0',param_4,param_5);
    *param_2 = *puVar2;
  }
  return param_2;
}

