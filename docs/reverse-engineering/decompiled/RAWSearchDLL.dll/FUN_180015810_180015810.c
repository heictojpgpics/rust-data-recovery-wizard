// Function: FUN_180015810
// Address: 180015810
// Size: 102 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180015810(void)

{
  void *_Memory;
  
  if (DAT_180118248 != (void *)0x0) {
    _Memory = DAT_180118248;
    if ((0xfff < (DAT_180118258 - (longlong)DAT_180118248 & 0xfffffffffffffffcU)) &&
       (_Memory = *(void **)((longlong)DAT_180118248 + -8),
       0x1f < (ulonglong)((longlong)DAT_180118248 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    _DAT_180118250 = (undefined1  [16])0x0;
    DAT_180118248 = (void *)0x0;
  }
  return;
}

