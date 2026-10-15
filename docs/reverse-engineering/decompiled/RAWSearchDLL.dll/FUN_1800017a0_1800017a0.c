// Function: FUN_1800017a0
// Address: 1800017a0
// Size: 430 bytes


undefined8 *
FUN_1800017a0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *_Memory;
  
  plVar6 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar6) && (param_4 == plVar6)) {
    FUN_1800016c0(param_1,(longlong *)plVar6[1]);
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
          plVar4 = (longlong *)*plVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            param_3 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar5 = (longlong *)plVar6[1];
          plVar4 = plVar6;
          while ((param_3 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)param_3[2]))) {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar5 = (longlong *)param_3[1];
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
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (longlong *)plVar6[1];
          plVar2 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar2 == (longlong *)plVar5[2]))) {
            cVar1 = *(char *)(plVar5[1] + 0x19);
            plVar4 = (longlong *)plVar5[1];
            plVar2 = plVar5;
          }
        }
        plVar6 = FUN_1800019b0(param_1,plVar6);
        if (7 < (ulonglong)plVar6[7]) {
          pvVar3 = (void *)plVar6[4];
          _Memory = pvVar3;
          if ((0xfff < plVar6[7] * 2 + 2U) &&
             (_Memory = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
        }
        plVar6[6] = 0;
        plVar6[7] = 7;
        *(undefined2 *)(plVar6 + 4) = 0;
        free(plVar6);
        plVar6 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}

