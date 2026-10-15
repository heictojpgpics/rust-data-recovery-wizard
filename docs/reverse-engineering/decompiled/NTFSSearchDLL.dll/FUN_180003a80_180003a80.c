// Function: FUN_180003a80
// Address: 180003a80
// Size: 78 bytes


ulonglong FUN_180003a80(longlong *param_1)

{
  ushort uVar1;
  
  if ((undefined **)*param_1 == CNTFSFileProperties::vftable) {
    uVar1 = *(ushort *)(param_1 + 0xd) - 1;
    if ((*(byte *)((longlong)param_1 + 0x72) & 8) == 0) {
      uVar1 = *(ushort *)(param_1 + 0xd);
    }
  }
  else {
    uVar1 = (*(code *)((undefined **)*param_1)[0x28])(param_1);
  }
  return param_1[0xb] << 0x10 | (ulonglong)uVar1;
}

