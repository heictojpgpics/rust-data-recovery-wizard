// Function: FUN_180032190
// Address: 180032190
// Size: 30 bytes


undefined8 FUN_180032190(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0x30), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001800321a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x90))(plVar1,param_3);
    return uVar2;
  }
  return 0;
}

