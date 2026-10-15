// Function: FUN_180019e50
// Address: 180019e50
// Size: 57 bytes


longlong * FUN_180019e50(longlong *param_1,void *param_2)

{
  ulonglong uVar1;
  
  param_1[3] = 7;
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (*(short *)((longlong)param_2 + uVar1 * 2) != 0);
  FUN_180019ee0(param_1,param_2,uVar1);
  return param_1;
}

