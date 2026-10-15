// Function: FUN_18001f870
// Address: 18001f870
// Size: 127 bytes


void FUN_18001f870(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = param_1 + 4;
  lVar2 = *plVar1;
  FUN_1800214c0(plVar1,*(longlong **)(lVar2 + 8),param_3,param_4);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  param_1[5] = 0;
  uVar3 = 0x58;
  free((void *)*plVar1);
  FUN_18001f8f0(param_1,uVar3,param_3,param_4);
  return;
}

