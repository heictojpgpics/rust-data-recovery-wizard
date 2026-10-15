// Function: FUN_1800066f0
// Address: 1800066f0
// Size: 236 bytes


LPSTR FUN_1800066f0(LPCWSTR param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  LPSTR lpMultiByteStr;
  CHAR local_res10 [16];
  BOOL local_res20 [2];
  
  if (param_2 != 0) {
    local_res20[0] = 1;
    local_res10[0] = '_';
    local_res10[1] = '\0';
    iVar1 = WideCharToMultiByte(0,0x200,param_1,(int)param_2,(LPSTR)0x0,0,local_res10,local_res20);
    if (0 < iVar1) {
      lpMultiByteStr = (LPSTR)FUN_18002be40((longlong)(iVar1 + 1));
      memset(lpMultiByteStr,0,(longlong)(iVar1 + 1));
      iVar1 = WideCharToMultiByte(0,0x200,param_1,(int)param_2,lpMultiByteStr,iVar1,local_res10,
                                  local_res20);
      *param_3 = (longlong)iVar1;
      return lpMultiByteStr;
    }
  }
  return (LPSTR)0x0;
}

