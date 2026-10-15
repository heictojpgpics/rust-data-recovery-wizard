// Function: FUN_180064f40
// Address: 180064f40
// Size: 167 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180064f40(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  _guard_check_icall();
  if (DAT_1801183d8 != (longlong *)0x0) {
    plVar2 = DAT_1801183e0;
    plVar1 = DAT_1801183d8;
    if (DAT_1801183d8 != DAT_1801183e0) {
      do {
        FUN_180001630(plVar1);
        plVar1 = plVar1 + 4;
      } while (plVar1 != plVar2);
    }
    plVar2 = DAT_1801183d8;
    if ((0xfff < (DAT_1801183e8 - (longlong)DAT_1801183d8 & 0xffffffffffffffe0U)) &&
       (plVar2 = (longlong *)DAT_1801183d8[-1],
       0x1f < (ulonglong)((longlong)DAT_1801183d8 + (-8 - (longlong)plVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar2);
    _DAT_1801183d8 = (undefined1  [16])0x0;
    DAT_1801183e8 = 0;
  }
  return;
}

