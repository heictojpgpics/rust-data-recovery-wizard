// Function: FUN_18003a090
// Address: 18003a090
// Size: 185 bytes


longlong * FUN_18003a090(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar2 = param_1;
  lVar1 = FUN_180012fd0();
  *param_1 = lVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar1 = FUN_180012c00(plVar2,0,0);
  param_1[7] = lVar1;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = FUN_180012fd0();
  param_1[9] = lVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar1 = FUN_180012fd0();
  param_1[0xd] = lVar1;
  param_1[0xf] = 0;
  return param_1;
}

