// Function: FUN_18003f630
// Address: 18003f630
// Size: 116 bytes


int FUN_18003f630(longlong param_1)

{
  int iVar1;
  
  if (((int)*(char *)(param_1 + 0x40) & 0x80U) == 0) {
    if (*(char *)(param_1 + 0x40) == '\0') {
      iVar1 = 0x400;
    }
    else {
      iVar1 = (int)*(char *)(param_1 + 0x40) * (uint)*(ushort *)(param_1 + 0xb) *
              (uint)*(byte *)(param_1 + 0xd);
    }
  }
  else {
    iVar1 = 1 << (~*(byte *)(param_1 + 0x40) + 1 & 0x1f);
  }
  return iVar1;
}

