// Function: FUN_180041c70
// Address: 180041c70
// Size: 117 bytes


void FUN_180041c70(longlong *param_1)

{
  bool bVar1;
  undefined7 extraout_var;
  
  bVar1 = FUN_180041c50(param_1);
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      FUN_180041290(*param_1,0x400);
    }
    if ((int)param_1[1] != 0) {
      free((void *)*param_1);
      *param_1 = 0;
    }
  }
  return;
}

