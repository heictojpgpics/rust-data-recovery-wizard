// Function: FUN_180003a70
// Address: 180003a70
// Size: 10 bytes


byte FUN_180003a70(longlong param_1)

{
  return *(byte *)(param_1 + 0x72) >> 3 & 1;
}

