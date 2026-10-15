// Function: FUN_18001f8f0
// Address: 18001f8f0
// Size: 186 bytes


void FUN_18001f8f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = param_1 + 2;
  lVar2 = *plVar1;
  FUN_1800214c0(plVar1,*(longlong **)(lVar2 + 8),param_3,param_4);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  param_1[3] = 0;
  free((void *)*plVar1);
  lVar2 = *param_1;
  FUN_1800213e0(param_1,*(longlong **)(lVar2 + 8),param_3,param_4);
  *(longlong *)(*param_1 + 8) = lVar2;
  *(longlong *)*param_1 = lVar2;
  *(longlong *)(*param_1 + 0x10) = lVar2;
  param_1[1] = 0;
  free((void *)*param_1);
  return;
}

