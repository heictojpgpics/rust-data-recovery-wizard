// Function: FUN_18003fbe0
// Address: 18003fbe0
// Size: 592 bytes


undefined8 *
FUN_18003fbe0(longlong *param_1,undefined8 *param_2,longlong *param_3,int *param_4,longlong *param_5
             )

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 local_20 [3];
  
  if (param_1[1] == 0) {
    FUN_18000b010(param_1,param_2,'\x01',(undefined8 *)*param_1,in_stack_ffffffffffffffc8,param_5);
  }
  else {
    plVar3 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar3) {
      if (*param_4 < (int)param_3[4]) {
        FUN_18000b010(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
        return param_2;
      }
    }
    else if (param_3 == plVar3) {
      if (*(int *)((undefined8 *)plVar3[2] + 4) < *param_4) {
        FUN_18000b010(param_1,param_2,'\0',(undefined8 *)plVar3[2],in_stack_ffffffffffffffc8,param_5
                     );
        return param_2;
      }
    }
    else {
      iVar1 = *param_4;
      iVar2 = (int)param_3[4];
      bVar8 = SBORROW4(iVar2,iVar1);
      iVar4 = iVar2 - iVar1;
      if (iVar1 < iVar2) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar3 = param_3;
          plVar7 = (longlong *)*param_3;
          if (*(char *)(*param_3 + 0x19) == '\0') {
            do {
              plVar6 = plVar7;
              plVar7 = (longlong *)plVar6[2];
            } while (*(char *)(plVar6[2] + 0x19) == '\0');
          }
          else {
            do {
              plVar6 = plVar3;
              plVar3 = (longlong *)plVar6[1];
              if (*(char *)((longlong)plVar3 + 0x19) != '\0') break;
            } while (plVar6 == (longlong *)*plVar3);
            if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
              plVar6 = plVar3;
            }
          }
        }
        else {
          plVar6 = (longlong *)param_3[2];
        }
        iVar4 = *param_4;
        if ((int)plVar6[4] < iVar4) {
          if (*(char *)(plVar6[2] + 0x19) != '\0') {
            FUN_18000b010(param_1,param_2,'\0',plVar6,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_18000b010(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
        bVar8 = SBORROW4((int)param_3[4],iVar4);
        iVar4 = (int)param_3[4] - iVar4;
      }
      if (bVar8 != iVar4 < 0) {
        plVar3 = (longlong *)param_3[2];
        plVar7 = param_3;
        if (*(char *)(param_3[2] + 0x19) == '\0') {
          do {
            plVar6 = plVar3;
            plVar3 = (longlong *)*plVar6;
          } while (*(char *)(*plVar6 + 0x19) == '\0');
        }
        else {
          do {
            plVar6 = (longlong *)plVar7[1];
            if (*(char *)((longlong)plVar6 + 0x19) != '\0') break;
            bVar8 = plVar7 == (longlong *)plVar6[2];
            plVar7 = plVar6;
          } while (bVar8);
        }
        if ((plVar6 == (longlong *)*param_1) || (*param_4 < (int)plVar6[4])) {
          if (*(char *)(param_3[2] + 0x19) != '\0') {
            FUN_18000b010(param_1,param_2,'\0',param_3,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_18000b010(param_1,param_2,'\x01',plVar6,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
    }
    puVar5 = FUN_18003fe40(param_1,local_20,'\0',param_4,param_5);
    *param_2 = *puVar5;
  }
  return param_2;
}

