// Function: FUN_180003940
// Address: 180003940
// Size: 76 bytes


int FUN_180003940(longlong *param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(param_1 + 0xd);
  if ((undefined **)*param_1 == CNTFSFileProperties::vftable) {
    iVar3 = uVar1 - 1;
    if ((*(byte *)((longlong)param_1 + 0x72) >> 3 & 1) == 0) {
      iVar3 = CONCAT22((short)((uint)iVar3 >> 0x10),uVar1);
    }
    return iVar3;
  }
  cVar2 = (*(code *)((undefined **)*param_1)[0x2b])();
  iVar3 = uVar1 - 1;
  if (cVar2 == '\0') {
    iVar3 = CONCAT22((short)((uint)iVar3 >> 0x10),uVar1);
  }
  return iVar3;
}

