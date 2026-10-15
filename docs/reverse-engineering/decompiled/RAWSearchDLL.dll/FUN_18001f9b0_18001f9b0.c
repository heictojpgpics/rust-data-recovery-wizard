// Function: FUN_18001f9b0
// Address: 18001f9b0
// Size: 96 bytes


void FUN_18001f9b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1800214c0(param_1,*(longlong **)(lVar1 + 8),param_3,param_4);
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  free((void *)*param_1);
  return;
}

