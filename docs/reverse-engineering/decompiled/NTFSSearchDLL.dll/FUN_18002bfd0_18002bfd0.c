// Function: FUN_18002bfd0
// Address: 18002bfd0
// Size: 510 bytes


undefined8 FUN_18002bfd0(longlong *param_1,ulonglong param_2,undefined4 param_3)

{
  BOOL BVar1;
  ulonglong uVar2;
  HANDLE pvVar3;
  LPVOID pvVar4;
  void *_Dst;
  LPCWSTR pszPath;
  LPCWSTR lpFileName;
  LARGE_INTEGER liDistanceToMove;
  DWORD local_res10 [2];
  undefined4 local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_20;
  
  if ((longlong)param_2 < 1) {
    return 0;
  }
  local_res18 = param_3;
  FUN_18002c250(param_1);
  param_1[2] = param_2;
  uVar2 = param_2 >> 3;
  if ((param_2 & 7) != 0) {
    uVar2 = uVar2 + 1;
  }
  param_1[1] = uVar2 + 0xfff & 0xfffffffffffff000;
  if (param_1[8] != 0) {
    lpFileName = (LPCWSTR)(param_1 + 6);
    pszPath = lpFileName;
    if (7 < (ulonglong)param_1[9]) {
      pszPath = *(LPCWSTR *)lpFileName;
    }
    BVar1 = PathFileExistsW(pszPath);
    if (BVar1 == 0) {
      if (7 < (ulonglong)param_1[9]) {
        lpFileName = *(LPCWSTR *)lpFileName;
      }
      pvVar3 = CreateFileW(lpFileName,0x10000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
      param_1[4] = (longlong)pvVar3;
      if (pvVar3 == (HANDLE)0xffffffffffffffff) {
        *(undefined1 *)(param_1 + 0xb) = 0;
      }
      else {
        BVar1 = DeviceIoControl(pvVar3,0x900c4,(LPVOID)0x0,0,(LPVOID)0x0,0,local_res10,
                                (LPOVERLAPPED)0x0);
        if (BVar1 == 0) {
          *(undefined1 *)(param_1 + 0xb) = 0;
        }
        else {
          liDistanceToMove.QuadPart = param_1[1] + 8;
          local_res20.QuadPart = liDistanceToMove.QuadPart;
          SetFilePointerEx((HANDLE)param_1[4],liDistanceToMove,&local_20,0);
          SetEndOfFile((HANDLE)param_1[4]);
          pvVar3 = CreateFileMappingW((HANDLE)param_1[4],(LPSECURITY_ATTRIBUTES)0x0,4,
                                      local_res20._4_4_,liDistanceToMove.s.LowPart,(LPCWSTR)0x0);
          param_1[5] = (longlong)pvVar3;
          if (pvVar3 == (HANDLE)0x0) {
            *(undefined1 *)(param_1 + 0xb) = 0;
          }
          else {
            pvVar4 = MapViewOfFile(pvVar3,0xf001f,0,0,0);
            *param_1 = (longlong)pvVar4;
            if (pvVar4 == (LPVOID)0x0) {
              return 0;
            }
          }
        }
      }
    }
  }
  if (*param_1 == 0) {
    if ((ulonglong)param_1[0xd] < (ulonglong)param_1[1]) {
      param_1[1] = 0;
      param_1[2] = 0;
      return 0;
    }
    _Dst = (void *)FUN_18002be40(param_1[1] + 8);
    *param_1 = (longlong)_Dst;
    if (_Dst != (void *)0x0) {
      memset(_Dst,0,param_1[1] + 8);
    }
    if (*param_1 == 0) {
      param_1[1] = 0;
      param_1[2] = 0;
      return 0;
    }
  }
  param_1[2] = param_1[2] + -1;
  *(undefined4 *)(param_1 + 3) = local_res18;
  return 1;
}

