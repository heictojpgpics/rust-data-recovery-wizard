// Function: FUN_18000da80
// Address: 18000da80
// Size: 51 bytes


undefined8 FUN_18000da80(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)(param_1 + 0x1b8);
  plVar2 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  if (*plVar2 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000daaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
  return uVar3;
}

