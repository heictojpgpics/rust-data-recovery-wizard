// Function: FUN_18002cf20
// Address: 18002cf20
// Size: 128 bytes


void FUN_18002cf20(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 8);
  uVar2 = FUN_18002d070(param_3);
  lVar3 = FUN_18002d2d0(param_1,param_2,(longlong)plVar1,uVar2);
  FUN_18002cfa0(param_1,1);
  *(longlong *)(param_2 + 8) = lVar3;
  *plVar1 = lVar3;
  return;
}

