// Function: FUN_1800155d0
// Address: 1800155d0
// Size: 592 bytes


undefined8 *
FUN_1800155d0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 local_20 [3];
  
  if (param_1[1] == 0) {
    FUN_180014ef0(param_1,param_2,'\x01',(undefined8 *)*param_1,in_stack_ffffffffffffffc8,param_5);
  }
  else {
    plVar1 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar1) {
      if (*param_4 < param_3[4]) {
        FUN_180014ef0(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
        return param_2;
      }
    }
    else if (param_3 == plVar1) {
      if ((longlong)((undefined8 *)plVar1[2])[4] < *param_4) {
        FUN_180014ef0(param_1,param_2,'\0',(undefined8 *)plVar1[2],in_stack_ffffffffffffffc8,param_5
                     );
        return param_2;
      }
    }
    else {
      lVar2 = *param_4;
      lVar3 = param_3[4];
      bVar8 = SBORROW8(lVar3,lVar2);
      lVar4 = lVar3 - lVar2;
      if (lVar2 < lVar3) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar1 = param_3;
          plVar7 = (longlong *)*param_3;
          if (*(char *)(*param_3 + 0x19) == '\0') {
            do {
              plVar6 = plVar7;
              plVar7 = (longlong *)plVar6[2];
            } while (*(char *)(plVar6[2] + 0x19) == '\0');
          }
          else {
            do {
              plVar6 = plVar1;
              plVar1 = (longlong *)plVar6[1];
              if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
            } while (plVar6 == (longlong *)*plVar1);
            if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
              plVar6 = plVar1;
            }
          }
        }
        else {
          plVar6 = (longlong *)param_3[2];
        }
        lVar4 = *param_4;
        if (plVar6[4] < lVar4) {
          if (*(char *)(plVar6[2] + 0x19) != '\0') {
            FUN_180014ef0(param_1,param_2,'\0',plVar6,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_180014ef0(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
        bVar8 = SBORROW8(param_3[4],lVar4);
        lVar4 = param_3[4] - lVar4;
      }
      if (bVar8 != lVar4 < 0) {
        plVar1 = (longlong *)param_3[2];
        plVar7 = param_3;
        if (*(char *)(param_3[2] + 0x19) == '\0') {
          do {
            plVar6 = plVar1;
            plVar1 = (longlong *)*plVar6;
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
        if ((plVar6 == (longlong *)*param_1) || (*param_4 < plVar6[4])) {
          if (*(char *)(param_3[2] + 0x19) != '\0') {
            FUN_180014ef0(param_1,param_2,'\0',param_3,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_180014ef0(param_1,param_2,'\x01',plVar6,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
    }
    puVar5 = FUN_180014bf0(param_1,local_20,'\0',param_4,param_5);
    *param_2 = *puVar5;
  }
  return param_2;
}

