// Function: FUN_180030340
// Address: 180030340
// Size: 188 bytes


size_t FUN_180030340(LPCWSTR param_1,longlong param_2,LPSTR param_3,size_t *param_4)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = WideCharToMultiByte(0xfde9,0,param_1,(int)param_2,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (0 < iVar1) {
      if ((param_3 != (LPSTR)0x0) && (iVar1 <= (int)*param_4)) {
        memset(param_3,0,*param_4);
        iVar1 = WideCharToMultiByte(0xfde9,0,param_1,(int)param_2,param_3,iVar1,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        *param_4 = (longlong)iVar1;
        return (longlong)iVar1;
      }
      *param_4 = (longlong)iVar1;
      return (longlong)iVar1;
    }
  }
  return 0;
}

