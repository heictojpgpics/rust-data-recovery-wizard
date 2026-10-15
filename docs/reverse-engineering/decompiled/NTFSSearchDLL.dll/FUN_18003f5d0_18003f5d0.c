// Function: FUN_18003f5d0
// Address: 18003f5d0
// Size: 75 bytes


uint FUN_18003f5d0(longlong param_1)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0xd) & 0xf0) == 0xf0) {
    uVar1 = 1 << (~*(byte *)(param_1 + 0xd) + 1 & 0x1f);
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 0xd);
  }
  return uVar1;
}

