// Function: FUN_180038740
// Address: 180038740
// Size: 159 bytes


void FUN_180038740(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *_Memory;
  
  plVar3 = DAT_180088190;
  cVar1 = *(char *)(DAT_180088190[1] + 0x19);
  plVar2 = (longlong *)DAT_180088190[1];
  while (_Memory = plVar2, cVar1 == '\0') {
    FUN_180038860(param_1,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_1 = _Memory;
  }
  DAT_180088190[1] = (longlong)plVar3;
  *DAT_180088190 = (longlong)plVar3;
  DAT_180088190[2] = (longlong)plVar3;
  DAT_180088198 = 0;
  free(DAT_180088190);
  return;
}

