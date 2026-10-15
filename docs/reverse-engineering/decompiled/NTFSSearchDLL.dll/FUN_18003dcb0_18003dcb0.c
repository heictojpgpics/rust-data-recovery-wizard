// Function: FUN_18003dcb0
// Address: 18003dcb0
// Size: 447 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_18003dcb0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *_Memory;
  
  plVar6 = DAT_1800881a0;
  if ((param_3 == (longlong *)*DAT_1800881a0) && (param_4 == DAT_1800881a0)) {
    FUN_18003de70(param_1,(longlong *)DAT_1800881a0[1]);
    DAT_1800881a0[1] = (longlong)plVar6;
    *DAT_1800881a0 = (longlong)plVar6;
    DAT_1800881a0[2] = (longlong)plVar6;
    _DAT_1800881a8 = 0;
    *param_2 = *DAT_1800881a0;
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
        plVar6 = FUN_180012020((longlong *)&DAT_1800881a0,plVar6);
        if (0xf < (ulonglong)plVar6[8]) {
          pvVar3 = (void *)plVar6[5];
          _Memory = pvVar3;
          if ((0xfff < plVar6[8] + 1U) &&
             (_Memory = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
        }
        plVar6[7] = 0;
        plVar6[8] = 0xf;
        *(undefined1 *)(plVar6 + 5) = 0;
        free(plVar6);
        plVar6 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = (longlong)param_3;
  }
  return param_2;
}

