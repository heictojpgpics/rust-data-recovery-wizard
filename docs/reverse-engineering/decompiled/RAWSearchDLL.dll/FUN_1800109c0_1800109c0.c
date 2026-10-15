// Function: FUN_1800109c0
// Address: 1800109c0
// Size: 120 bytes


void FUN_1800109c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = param_1 + 1;
  *param_1 = CNeedRawMgr::vftable;
  FUN_18000def0(param_1 + 3);
  lVar2 = *plVar1;
  FUN_180011380(plVar1,*(longlong **)(lVar2 + 8),param_3,param_4);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  param_1[2] = 0;
  free((void *)*plVar1);
  return;
}

