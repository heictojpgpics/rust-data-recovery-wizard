// Function: FUN_18002cc30
// Address: 18002cc30
// Size: 270 bytes


longlong FUN_18002cc30(LPCWSTR param_1,longlong param_2,LPSTR param_3,size_t *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res10;
  
  if ((param_1 == (LPCWSTR)0x0) || (param_2 == 0)) {
    lVar2 = 0;
  }
  else {
    local_res10 = (int)param_2;
    iVar1 = WideCharToMultiByte(0xfde9,0,param_1,local_res10,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 < 1) {
      lVar2 = 0;
    }
    else if ((param_3 == (LPSTR)0x0) || ((int)*param_4 < iVar1)) {
      *param_4 = (longlong)iVar1;
      lVar2 = (longlong)iVar1;
    }
    else {
      memset(param_3,0,*param_4);
      iVar1 = WideCharToMultiByte(0xfde9,0,param_1,local_res10,param_3,iVar1,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
      *param_4 = (longlong)iVar1;
      lVar2 = (longlong)iVar1;
    }
  }
  return lVar2;
}

