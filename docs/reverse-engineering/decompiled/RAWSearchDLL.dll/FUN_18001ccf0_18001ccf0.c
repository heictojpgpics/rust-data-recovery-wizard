// Function: FUN_18001ccf0
// Address: 18001ccf0
// Size: 175 bytes


void FUN_18001ccf0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *_Memory;
  
  plVar3 = DAT_180118260;
  cVar1 = *(char *)(DAT_180118260[1] + 0x19);
  plVar2 = (longlong *)DAT_180118260[1];
  while (_Memory = plVar2, cVar1 == '\0') {
    FUN_18001ce40(param_1,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_1 = _Memory;
  }
  DAT_180118260[1] = (longlong)plVar3;
  *DAT_180118260 = (longlong)plVar3;
  DAT_180118260[2] = (longlong)plVar3;
  DAT_180118268 = 0;
  free(DAT_180118260);
  return;
}

