// Function: FUN_18002e3b0
// Address: 18002e3b0
// Size: 254 bytes


LPWSTR FUN_18002e3b0(LPCSTR param_1,longlong param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  size_t sVar3;
  LPWSTR lpWideCharStr;
  undefined4 local_res10;
  
  if ((param_1 == (LPCSTR)0x0) || (param_2 == 0)) {
    lpWideCharStr = (LPWSTR)0x0;
  }
  else {
    local_res10 = (int)param_2;
    iVar2 = MultiByteToWideChar(0xfde9,0,param_1,local_res10,(LPWSTR)0x0,0);
    if (iVar2 < 1) {
      lpWideCharStr = (LPWSTR)0x0;
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (longlong)(iVar2 + 1);
      sVar3 = SUB168(ZEXT816(2) * auVar1,0);
      if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
        sVar3 = 0xffffffffffffffff;
      }
      lpWideCharStr = (LPWSTR)thunk_FUN_18002be40(sVar3);
      memset(lpWideCharStr,0,(longlong)(iVar2 + 1) << 1);
      iVar2 = MultiByteToWideChar(0xfde9,0,param_1,local_res10,lpWideCharStr,iVar2);
      *param_3 = (longlong)iVar2;
    }
  }
  return lpWideCharStr;
}

