// Function: FUN_180042740
// Address: 180042740
// Size: 14 bytes


int FUN_180042740(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < 1) {
    iVar1 = 0x200;
  }
  return iVar1;
}

