// Function: FUN_1800097b0
// Address: 1800097b0
// Size: 20 bytes


void FUN_1800097b0(longlong param_1)

{
  if (*(FILE **)(param_1 + 0x80) != (FILE *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800097bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _lock_file(*(FILE **)(param_1 + 0x80));
    return;
  }
  return;
}

