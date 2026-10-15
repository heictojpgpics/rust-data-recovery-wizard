// Function: FUN_1800095f0
// Address: 1800095f0
// Size: 416 bytes


void FUN_1800095f0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  size_t _Count;
  char cVar7;
  undefined1 auStackY_88 [32];
  char local_48;
  char local_47 [7];
  char *local_40;
  char *local_38;
  char local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)auStackY_88;
  if (param_2 != -1) {
    uVar1 = **(ulonglong **)(param_1 + 0x40);
    cVar7 = (char)param_2;
    if ((uVar1 == 0) || ((longlong)**(int **)(param_1 + 0x58) + uVar1 <= uVar1)) {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        if ((basic_streambuf<char,struct_std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18)
            == param_1 + 0x70) {
          uVar2 = *(undefined8 *)(param_1 + 0x90);
          lVar3 = *(longlong *)(param_1 + 0x88);
          **(longlong **)(param_1 + 0x18) = lVar3;
          **(longlong **)(param_1 + 0x38) = lVar3;
          **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar3;
        }
        if (*(codecvt<char,char,struct__Mbstatet> **)(param_1 + 0x68) ==
            (codecvt<char,char,struct__Mbstatet> *)0x0) {
          fputc((int)cVar7,*(FILE **)(param_1 + 0x80));
        }
        else {
          local_48 = cVar7;
          iVar4 = std::codecvt<char,char,struct__Mbstatet>::out
                            (*(codecvt<char,char,struct__Mbstatet> **)(param_1 + 0x68),
                             (_Mbstatet *)(param_1 + 0x74),&local_48,local_47,&local_38,local_30,
                             (char *)&local_10,&local_40);
          if (-1 < iVar4) {
            if (iVar4 < 2) {
              _Count = (longlong)local_40 - (longlong)local_30;
              if ((_Count == 0) ||
                 (sVar6 = fwrite(local_30,1,_Count,*(FILE **)(param_1 + 0x80)), _Count == sVar6)) {
                param_1[0x71] = (basic_streambuf<char,struct_std::char_traits<char>_>)0x1;
              }
            }
            else if (iVar4 == 3) {
              fputc((int)local_48,*(FILE **)(param_1 + 0x80));
            }
          }
        }
      }
    }
    else {
      pcVar5 = std::basic_streambuf<char,struct_std::char_traits<char>_>::_Pninc(param_1);
      *pcVar5 = cVar7;
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_88);
  return;
}

