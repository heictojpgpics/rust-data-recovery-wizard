// Function: FUN_180042b30
// Address: 180042b30
// Size: 241 bytes


int FUN_180042b30(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  size_t _Size;
  int iVar5;
  
  if (param_2 == 0x200) {
    param_2 = 0x200;
  }
  _Size = (size_t)param_2;
  _Dst = (void *)FUN_1800020c0(_Size);
  memset(_Dst,0,_Size);
  iVar4 = 0;
  iVar2 = 0;
  iVar1 = memcmp(param_1,_Dst,_Size);
  if (iVar1 == 0) {
    free(_Dst);
    iVar2 = 0;
  }
  else {
    iVar1 = param_2;
    if (0 < param_2 + -1) {
      do {
        iVar2 = (iVar1 + iVar4) / 2;
        iVar3 = memcmp((void *)((longlong)param_1 + (longlong)iVar2),_Dst,
                       (longlong)(param_2 - iVar2));
        iVar5 = iVar2;
        if ((iVar3 != 0) &&
           (iVar3 = memcmp((void *)((longlong)param_1 + (longlong)iVar2),_Dst,
                           (longlong)(param_2 - iVar2)), iVar5 = iVar1, 0 < iVar3)) {
          iVar4 = iVar2;
        }
        iVar1 = iVar5;
      } while (iVar4 < iVar5 + -1);
    }
    free(_Dst);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

