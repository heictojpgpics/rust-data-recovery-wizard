// Function: FUN_18000b8b0
// Address: 18000b8b0
// Size: 17 bytes


void FUN_18000b8b0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000b8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
    return;
  }
  return;
}

