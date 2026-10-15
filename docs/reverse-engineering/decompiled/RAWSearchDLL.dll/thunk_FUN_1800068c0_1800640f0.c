// Function: thunk_FUN_1800068c0
// Address: 1800640f0
// Size: 5 bytes


void thunk_FUN_1800068c0(void)

{
  longlong *plVar1;
  longlong *_Memory;
  
  if (DAT_1801181b8 != 0) {
    FUN_1800081f0((longlong *)&DAT_1801181b0);
  }
  if (DAT_1801181c8 != 0) {
    FUN_1800081f0((longlong *)&DAT_1801181c0);
  }
  if (DAT_1801181a8 != 0) {
    FUN_180008290((longlong *)&DAT_1801181a0);
  }
  if (DAT_1801181e8 != 0) {
    FUN_1800081f0((longlong *)&DAT_1801181e0);
  }
  if (DAT_1801181f8 != 0) {
    FUN_1800081f0((longlong *)&DAT_1801181f0);
  }
  if (DAT_1801181d8 != 0) {
    FUN_180008290((longlong *)&DAT_1801181d0);
  }
  FUN_180007310((longlong *)&DAT_1801181f0);
  free(DAT_1801181f0);
  FUN_180007310((longlong *)&DAT_1801181e0);
  free(DAT_1801181e0);
  _Memory = (longlong *)*DAT_1801181d0;
  *DAT_1801181d0 = (longlong)DAT_1801181d0;
  DAT_1801181d0[1] = (longlong)DAT_1801181d0;
  DAT_1801181d8 = 0;
  if (_Memory != DAT_1801181d0) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar1;
    } while (plVar1 != DAT_1801181d0);
  }
  free(DAT_1801181d0);
  FUN_180007310((longlong *)&DAT_1801181c0);
  free(DAT_1801181c0);
  FUN_180007310((longlong *)&DAT_1801181b0);
  free(DAT_1801181b0);
  FUN_180006d20((longlong *)&DAT_1801181a0);
  return;
}

