// Function: FUN_180030400
// Address: 180030400
// Size: 229 bytes


size_t FUN_180030400(LPCSTR param_1,longlong param_2,LPSTR param_3,size_t *param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  size_t sVar3;
  LPCWSTR lpWideCharStr;
  
  if (param_2 != 0) {
    iVar2 = MultiByteToWideChar(0,0,param_1,(int)param_2,(LPWSTR)0x0,0);
    if (0 < iVar2) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (longlong)(iVar2 + 1);
      sVar3 = SUB168(ZEXT816(2) * auVar1,0);
      if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
        sVar3 = 0xffffffffffffffff;
      }
      lpWideCharStr = (LPCWSTR)FUN_1800020c0(sVar3);
      memset(lpWideCharStr,0,(longlong)(iVar2 + 1) * 2);
      iVar2 = MultiByteToWideChar(0,0,param_1,(int)param_2,lpWideCharStr,iVar2);
      if (lpWideCharStr != (LPCWSTR)0x0) {
        FUN_180030340(lpWideCharStr,(longlong)iVar2,param_3,param_4);
        free(lpWideCharStr);
        return *param_4;
      }
    }
  }
  return 0;
}

