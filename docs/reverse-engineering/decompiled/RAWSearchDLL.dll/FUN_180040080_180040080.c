// Function: FUN_180040080
// Address: 180040080
// Size: 29 bytes


undefined8 FUN_180040080(undefined8 param_1,longlong param_2,longlong param_3)

{
  if ((*(char *)(param_2 + 5) == '\0') && (*(char *)(param_2 + 7) == '\0')) {
    *(undefined4 *)(param_3 + 0x18) = 0x6c;
    return 1;
  }
  return 0;
}

