// Function: FUN_1800415d0
// Address: 1800415d0
// Size: 57 bytes


undefined8 FUN_1800415d0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(ushort *)(param_1 + 4) < 0x30) || (*(short *)(param_1 + 0x2a) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

