// Function: FUN_180009b00
// Address: 180009b00
// Size: 197 bytes


void FUN_180009b00(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  int iVar1;
  undefined1 auStackY_68 [32];
  char *local_38;
  char local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)auStackY_68;
  if (((*(longlong *)(param_1 + 0x68) != 0) &&
      (param_1[0x71] != (basic_streambuf<char,struct_std::char_traits<char>_>)0x0)) &&
     (iVar1 = FUN_1800095f0(param_1,-1), iVar1 != -1)) {
    iVar1 = std::codecvt<char,char,struct__Mbstatet>::unshift
                      (*(codecvt<char,char,struct__Mbstatet> **)(param_1 + 0x68),
                       (_Mbstatet *)(param_1 + 0x74),local_30,(char *)&local_10,&local_38);
    if (iVar1 == 0) {
      param_1[0x71] = (basic_streambuf<char,struct_std::char_traits<char>_>)0x0;
    }
    else if (iVar1 != 1) goto LAB_180009bad;
    if ((longlong)local_38 - (longlong)local_30 != 0) {
      fwrite(local_30,1,(longlong)local_38 - (longlong)local_30,*(FILE **)(param_1 + 0x80));
    }
  }
LAB_180009bad:
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_68);
  return;
}

