// Function: FUN_18004b0c0
// Address: 18004b0c0
// Size: 127 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18004b0c0(void)

{
  longlong *plVar1;
  longlong *_Memory;
  
  FUN_180013490((longlong *)&DAT_1800881d8);
  _Memory = (longlong *)*DAT_1800881d8;
  *DAT_1800881d8 = (longlong)DAT_1800881d8;
  DAT_1800881d8[1] = (longlong)DAT_1800881d8;
  _DAT_1800881e0 = 0;
  if (_Memory != DAT_1800881d8) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar1;
    } while (plVar1 != DAT_1800881d8);
  }
  free(DAT_1800881d8);
  return;
}

