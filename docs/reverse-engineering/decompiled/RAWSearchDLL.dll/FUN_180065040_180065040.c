// Function: FUN_180065040
// Address: 180065040
// Size: 111 bytes


void FUN_180065040(void)

{
  longlong *plVar1;
  longlong *_Memory;
  
  _Memory = (longlong *)*DAT_180118540;
  *DAT_180118540 = (longlong)DAT_180118540;
  DAT_180118540[1] = (longlong)DAT_180118540;
  DAT_180118548 = 0;
  if (_Memory != DAT_180118540) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar1;
    } while (plVar1 != DAT_180118540);
  }
  free(DAT_180118540);
  return;
}

