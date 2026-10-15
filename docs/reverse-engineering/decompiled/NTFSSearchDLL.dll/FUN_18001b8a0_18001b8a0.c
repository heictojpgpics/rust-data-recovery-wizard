// Function: FUN_18001b8a0
// Address: 18001b8a0
// Size: 141 bytes


void FUN_18001b8a0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_18001b930(param_1);
  FUN_180011140((longlong *)(param_1 + 0x60));
  free(*(void **)(param_1 + 0x60));
  plVar2 = (longlong *)(param_1 + 0x40);
  lVar1 = *plVar2;
  FUN_180020860(plVar2,*(longlong **)(lVar1 + 8),param_3,param_4);
  *(longlong *)(*plVar2 + 8) = lVar1;
  *(longlong *)*plVar2 = lVar1;
  *(longlong *)(*plVar2 + 0x10) = lVar1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  free((void *)*plVar2);
  return;
}

