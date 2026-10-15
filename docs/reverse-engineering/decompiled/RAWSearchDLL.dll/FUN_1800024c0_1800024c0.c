// Function: FUN_1800024c0
// Address: 1800024c0
// Size: 91 bytes


undefined8 * FUN_1800024c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = ATL::CWin32Heap::vftable;
  if ((*(char *)(param_1 + 2) != '\0') && ((HANDLE)param_1[1] != (HANDLE)0x0)) {
    HeapDestroy((HANDLE)param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

