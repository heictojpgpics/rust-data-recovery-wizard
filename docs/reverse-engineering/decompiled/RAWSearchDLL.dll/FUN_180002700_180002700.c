// Function: FUN_180002700
// Address: 180002700
// Size: 43 bytes


void FUN_180002700(longlong param_1,LPVOID param_2)

{
  if (param_2 != (LPVOID)0x0) {
    HeapFree(*(HANDLE *)(*(longlong *)(param_1 + 8) + 8),0,param_2);
  }
  return;
}

