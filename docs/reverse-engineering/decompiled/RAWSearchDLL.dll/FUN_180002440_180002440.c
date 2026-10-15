// Function: FUN_180002440
// Address: 180002440
// Size: 78 bytes


LPVOID FUN_180002440(longlong param_1,LPVOID param_2,SIZE_T param_3)

{
  HANDLE hHeap;
  LPVOID pvVar1;
  
  hHeap = *(HANDLE *)(param_1 + 8);
  if (param_2 == (LPVOID)0x0) {
    pvVar1 = HeapAlloc(hHeap,0,param_3);
    return pvVar1;
  }
  if (param_3 == 0) {
    HeapFree(hHeap,0,param_2);
    return (LPVOID)0x0;
  }
  pvVar1 = HeapReAlloc(hHeap,0,param_2,param_3);
  return pvVar1;
}

