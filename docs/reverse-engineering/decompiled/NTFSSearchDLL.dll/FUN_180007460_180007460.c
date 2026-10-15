// Function: FUN_180007460
// Address: 180007460
// Size: 230 bytes


longlong * FUN_180007460(longlong *param_1,ulonglong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_18002be40(0x40);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = -1;
    FUN_180040cb0(plVar1 + 1);
    *(undefined1 *)(plVar1 + 3) = 2;
    *(undefined2 *)((longlong)plVar1 + 0x1a) = 0;
    plVar1[4] = 0;
    FUN_180040cb0(plVar1 + 5);
    *(undefined2 *)(plVar1 + 7) = 0;
    uVar2 = FUN_180007550(plVar1,param_1,param_2);
    if (((int)uVar2 != 0) && (lVar3 = FUN_180040570(plVar1 + 1,0), lVar3 != -1)) {
      *(char *)(plVar1 + 7) = param_4;
      if (param_4 != '\0') {
        return plVar1;
      }
      FUN_180007670(plVar1,param_3,param_2);
      return plVar1;
    }
    FUN_180006500(plVar1,1);
  }
  return (longlong *)0x0;
}

