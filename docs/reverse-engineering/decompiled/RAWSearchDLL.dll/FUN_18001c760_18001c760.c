// Function: FUN_18001c760
// Address: 18001c760
// Size: 186 bytes


undefined8
FUN_18001c760(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong *param_5)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined7 extraout_var;
  longlong lVar4;
  
  if (((*(char *)(param_1 + 0x110) == '\0') && (param_2 != 0)) && (0 < param_3)) {
    lVar4 = (longlong)param_3;
    lVar1 = *(longlong *)(param_1 + 8);
    lVar3 = *(longlong *)(param_1 + 0x118) / lVar4 + lVar1;
    if ((*param_5 <= lVar3) && (lVar3 < param_5[1])) {
      bVar2 = FUN_18001c820(param_1,param_2,(*param_5 - lVar1) * lVar4,(param_5[1] - lVar1) * lVar4,
                            (param_4 - lVar1) * lVar4);
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        *(undefined1 *)(param_1 + 0x110) = 1;
        return 1;
      }
    }
    return 2;
  }
  return 1;
}

