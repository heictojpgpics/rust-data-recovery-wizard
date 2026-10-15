// Function: FUN_1800011a0
// Address: 1800011a0
// Size: 17 bytes


void FUN_1800011a0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800011ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
    return;
  }
  return;
}

