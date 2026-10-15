// Function: FUN_180006610
// Address: 180006610
// Size: 210 bytes


LPSTR FUN_180006610(LPCWSTR param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  LPSTR lpMultiByteStr;
  
  if (param_2 != 0) {
    iVar1 = WideCharToMultiByte(0xfde9,0,param_1,(int)param_2,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (0 < iVar1) {
      lpMultiByteStr = (LPSTR)FUN_18002be40((longlong)(iVar1 + 1));
      memset(lpMultiByteStr,0,(longlong)(iVar1 + 1));
      iVar1 = WideCharToMultiByte(0xfde9,0,param_1,(int)param_2,lpMultiByteStr,iVar1,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
      *param_3 = (longlong)iVar1;
      return lpMultiByteStr;
    }
  }
  return (LPSTR)0x0;
}

