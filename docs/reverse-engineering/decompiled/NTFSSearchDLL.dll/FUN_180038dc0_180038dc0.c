// Function: FUN_180038dc0
// Address: 180038dc0
// Size: 121 bytes


undefined8 FUN_180038dc0(longlong param_1,byte param_2,void *param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_3 != (void *)0x0) && (2 < param_2)) {
    iVar1 = param_2 - 1;
    bVar3 = iVar1 < 0;
    if (!bVar3) {
      do {
        if (*(short *)(param_1 + (longlong)iVar1 * 2) == 0x2e) break;
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
      bVar3 = iVar1 < 0;
    }
    if ((iVar1 != 0 && !bVar3) && ((int)((uint)param_2 - iVar1) < 6)) {
      iVar2 = iVar1 + 1;
      *param_4 = (param_2 - (char)iVar1) + -1;
      if (iVar2 < (int)(uint)param_2) {
        memcpy(param_3,(void *)(param_1 + (longlong)iVar2 * 2),
               (longlong)(int)((uint)param_2 - iVar2) * 2);
      }
      return 1;
    }
  }
  return 0;
}

