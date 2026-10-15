// Function: FUN_180001500
// Address: 180001500
// Size: 75 bytes


void FUN_180001500(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1800016c0(param_1,*(longlong **)(lVar1 + 8));
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}

