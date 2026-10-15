// Function: FUN_1800020c0
// Address: 1800020c0
// Size: 225 bytes


void FUN_1800020c0(size_t param_1)

{
  BOOL BVar1;
  void *pvVar2;
  undefined1 auStack_78 [32];
  _MEMORYSTATUSEX local_58;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_78;
  pvVar2 = malloc(param_1);
  if (pvVar2 == (void *)0x0) {
    LogInfo("Failed to alloc 0x%08x bytes");
    local_58.dwLength = 0x40;
    BVar1 = GlobalMemoryStatusEx(&local_58);
    if (BVar1 == 0) {
      LogInfo("Failed to query memory status.");
    }
    LogInfo("Memory status:");
    LogInfo("Total physical memory:%4I64d MB\tAvailable physical memory:%4I64d MB");
    LogInfo("Total   page    files:%4I64d MB\tAvailable    page   files:%4I64d MB");
    RaiseException(0xe0000001,0xc0000025,0,(ULONG_PTR *)0x0);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
  return;
}

