// Function: FUN_180039c40
// Address: 180039c40
// Size: 28 bytes


undefined8 FUN_180039c40(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180039c52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_2,param_1);
    return uVar2;
  }
  return 0;
}

