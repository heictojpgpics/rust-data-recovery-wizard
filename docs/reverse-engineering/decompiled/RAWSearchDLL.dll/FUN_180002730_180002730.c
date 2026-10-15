// Function: FUN_180002730
// Address: 180002730
// Size: 160 bytes


LPVOID FUN_180002730(longlong param_1,LPVOID param_2,int param_3,ulonglong param_4)

{
  HANDLE hHeap;
  uint uVar1;
  LPVOID pvVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if ((((-1 < param_3) && (0 < 0x7fffffff - param_3)) &&
      (uVar4 = param_3 + 8U & 0xfffffff8, param_3 + 1 <= (int)uVar4)) &&
     ((uVar3 = (ulonglong)uVar4 * (param_4 & 0xffffffff), uVar3 < 0x100000000 &&
      (uVar1 = (uint)uVar3, uVar1 < 0xffffffe8)))) {
    uVar1 = uVar1 + 0x18;
    hHeap = *(HANDLE *)(*(longlong *)(param_1 + 8) + 8);
    if (param_2 == (LPVOID)0x0) {
      pvVar2 = HeapAlloc(hHeap,0,(ulonglong)uVar1);
    }
    else {
      if (uVar1 == 0) {
        HeapFree(hHeap,0,param_2);
        return (LPVOID)0x0;
      }
      pvVar2 = HeapReAlloc(hHeap,0,param_2,(ulonglong)uVar1);
    }
    if (pvVar2 != (LPVOID)0x0) {
      *(uint *)((longlong)pvVar2 + 0xc) = uVar4 - 1;
      return pvVar2;
    }
  }
  return (LPVOID)0x0;
}

