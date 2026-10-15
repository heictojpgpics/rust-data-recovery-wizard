// Function: FUN_1800540d0
// Address: 1800540d0
// Size: 419 bytes


void FUN_1800540d0(undefined8 param_1,void *param_2,longlong param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_878 [32];
  char local_858 [8];
  char local_850 [8];
  char local_848 [8];
  char local_840 [8];
  char local_838 [8];
  char local_830 [8];
  char local_828 [8];
  char acStack_820 [8];
  char local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_878;
  builtin_strncpy(local_858,"<svg ",6);
  builtin_strncpy(local_850,"<svg\n ",7);
  builtin_strncpy(local_848,"<svg\r ",7);
  builtin_strncpy(local_840,"<svg> ",7);
  builtin_strncpy(local_838,"<svg>\n",7);
  builtin_strncpy(local_830,"<svg>\r",7);
  local_828 = (char  [8])s_<_xml_version___18006ef10._0_8_;
  acStack_820 = (char  [8])s_<_xml_version___18006ef10._8_8_;
  if ((param_2 != (void *)0x0) && (iVar1 = memcmp(param_2,local_828,0xf), iVar1 == 0)) {
    memcpy(local_818,param_2,0x800);
    pcVar2 = strstr(local_818,local_858);
    if (((pcVar2 != (char *)0x0) ||
        (((pcVar2 = strstr(local_818,local_850), pcVar2 != (char *)0x0 ||
          (pcVar2 = strstr(local_818,local_848), pcVar2 != (char *)0x0)) ||
         (pcVar2 = strstr(local_818,local_840), pcVar2 != (char *)0x0)))) ||
       ((pcVar2 = strstr(local_818,local_838), pcVar2 != (char *)0x0 ||
        (pcVar2 = strstr(local_818,local_830), pcVar2 != (char *)0x0)))) {
      *(undefined4 *)(param_3 + 0x18) = 0x5b;
      *(undefined8 *)(param_3 + 0x10) = 0;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_878);
  return;
}

