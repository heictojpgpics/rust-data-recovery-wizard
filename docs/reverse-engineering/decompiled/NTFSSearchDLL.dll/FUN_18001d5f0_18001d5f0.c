// Function: FUN_18001d5f0
// Address: 18001d5f0
// Size: 157 bytes


undefined1 FUN_18001d5f0(longlong param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((*param_2 & 0xf) == 0 || (*param_2 & 0xf0) == 0) {
    return 0;
  }
  iVar2 = *param_3;
  iVar3 = 0;
  uVar5 = 0;
  uVar4 = 0;
  if (0 < iVar2) {
    while (uVar4 = 0, param_2 + iVar3 != (byte *)0x0) {
      bVar1 = param_2[iVar3];
      if (bVar1 == 0) {
        *param_3 = iVar3;
        uVar4 = 1;
        break;
      }
      uVar5 = uVar5 + (bVar1 & 0xf);
      iVar3 = iVar3 + 1 + (uint)(bVar1 >> 4) + (bVar1 & 0xf);
      uVar4 = 0;
      if ((iVar2 < iVar3) || (iVar2 <= iVar3)) break;
    }
  }
  if ((0 < *(longlong *)(param_1 + 0x70)) &&
     (*(longlong *)(param_1 + 0x70) <= (longlong)(ulonglong)uVar5)) {
    uVar4 = 1;
  }
  return uVar4;
}

