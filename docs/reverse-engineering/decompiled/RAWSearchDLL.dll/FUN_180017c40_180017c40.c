// Function: FUN_180017c40
// Address: 180017c40
// Size: 514 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180017c40(int *param_1,ulonglong param_2,undefined1 *param_3,undefined1 *param_4)

{
  char *_Str1;
  int iVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined1 auStack_1058 [32];
  char local_1038 [4096];
  ulonglong local_38;
  
  if (param_1 != (int *)0x0) {
    local_38 = DAT_18008f028 ^ (ulonglong)auStack_1058;
    *param_4 = 0;
    *param_3 = 0;
    if (*param_1 == 0x4034b50) {
      _Str1 = (char *)((longlong)param_1 + 0x1e);
      memset(local_1038,0,0x1000);
      uVar3 = 0xfff;
      if (param_2 < 0x1000) {
        uVar3 = param_2;
      }
      memcpy(local_1038,_Str1,uVar3 - 0x1e);
      iVar1 = strncmp(_Str1,"[Content_Types].xml",0x13);
      if ((((((iVar1 == 0) || (iVar1 = strncmp(_Str1,"docProps/app.xml",0x10), iVar1 == 0)) ||
            (iVar1 = strncmp(_Str1,"word/theme/theme1.xml",0x15), iVar1 == 0)) ||
           ((iVar1 = strncmp(_Str1,"_rels/.rels",0xb), iVar1 == 0 ||
            (iVar1 = strncmp(_Str1,"docProps",8), iVar1 == 0)))) ||
          ((iVar1 = strncmp(_Str1,"word/",5), iVar1 == 0 ||
           ((iVar1 = strncmp(_Str1,"xl/worksheets/",0xe), iVar1 == 0 ||
            (iVar1 = strncmp(_Str1,"xl/drawings",0xb), iVar1 == 0)))))) ||
         ((iVar1 = strncmp(_Str1,"xl/workbook",0xb), iVar1 == 0 ||
          ((iVar1 = strncmp(_Str1,"ppt/",4), iVar1 == 0 ||
           (pcVar2 = strstr(local_1038,"doc"), pcVar2 != (char *)0x0)))))) {
        *param_3 = 1;
      }
      else {
        iVar1 = strncmp(_Str1,"content/riffData.cdr",0x14);
        if (iVar1 == 0) {
          *param_4 = 1;
        }
      }
    }
    __security_check_cookie(local_38 ^ (ulonglong)auStack_1058);
  }
  return;
}

