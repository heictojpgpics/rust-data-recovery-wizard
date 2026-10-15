// Function: FUN_18002c250
// Address: 18002c250
// Size: 141 bytes


undefined8 FUN_18002c250(undefined8 *param_1)

{
  LPCWSTR lpFileName;
  
  if ((param_1[8] == 0) || (*(char *)(param_1 + 0xb) == '\0')) {
    free((void *)*param_1);
  }
  else {
    if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
      UnmapViewOfFile((LPCVOID)*param_1);
    }
    if ((HANDLE)param_1[5] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[5]);
    }
    param_1[5] = 0;
    if ((HANDLE)param_1[4] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[4]);
    }
    lpFileName = (LPCWSTR)(param_1 + 6);
    param_1[4] = 0;
    if (7 < (ulonglong)param_1[9]) {
      lpFileName = *(LPCWSTR *)lpFileName;
    }
    DeleteFileW(lpFileName);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  return 1;
}

