// Function: FUN_180064040
// Address: 180064040
// Size: 110 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180064040(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_180093a58) {
    pvVar1 = (void *)CONCAT71(DAT_180093a40._1_7_,(undefined1)DAT_180093a40);
    _Memory = pvVar1;
    if ((0xfff < DAT_180093a58 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  _DAT_180093a50 = _DAT_18006ee90;
  DAT_180093a58 = _UNK_18006ee98;
  DAT_180093a40._0_1_ = 0;
  FUN_180001470(0x180093a00);
  return;
}

