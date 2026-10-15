// Function: FUN_180003d50
// Address: 180003d50
// Size: 68 bytes


longlong * FUN_180003d50(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_3;
  *(longlong *)param_3[1] = lVar1;
  *(longlong *)(*param_3 + 8) = param_3[1];
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -1;
  free(param_3);
  *param_2 = lVar1;
  return param_2;
}

