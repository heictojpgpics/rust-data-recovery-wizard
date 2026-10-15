// Function: FUN_180009790
// Address: 180009790
// Size: 20 bytes


void FUN_180009790(longlong param_1)

{
  if (*(FILE **)(param_1 + 0x80) != (FILE *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000979c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _unlock_file(*(FILE **)(param_1 + 0x80));
    return;
  }
  return;
}

