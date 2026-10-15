// Function: FUN_1800176b0
// Address: 1800176b0
// Size: 33 bytes


undefined8 FUN_1800176b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  if ((0x13 < *(ushort *)(param_2 + 8)) && (*(ushort *)(param_2 + 8) != 0x62)) {
    return 0;
  }
  *(undefined4 *)(param_3 + 0x18) = 0x48;
  return 1;
}

