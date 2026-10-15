// Function: FUN_180025b10
// Address: 180025b10
// Size: 19 bytes


undefined8 FUN_180025b10(longlong param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
    return *(undefined8 *)(param_1 + 0x18);
  }
  return 0xffffffffffffffff;
}

