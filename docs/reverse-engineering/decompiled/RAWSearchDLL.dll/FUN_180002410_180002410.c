// Function: FUN_180002410
// Address: 180002410
// Size: 39 bytes


void FUN_180002410(longlong param_1,LPVOID param_2)

{
  if (param_2 != (LPVOID)0x0) {
    HeapFree(*(HANDLE *)(param_1 + 8),0,param_2);
  }
  return;
}

