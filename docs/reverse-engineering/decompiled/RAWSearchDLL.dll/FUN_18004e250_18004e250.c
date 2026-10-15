// Function: FUN_18004e250
// Address: 18004e250
// Size: 445 bytes


void FUN_18004e250(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  undefined1 auStack_a8 [32];
  char local_88 [8];
  char local_80 [8];
  char local_78 [8];
  char local_70 [8];
  char local_68 [32];
  char local_48 [16];
  char local_38 [16];
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_a8;
  if (param_2 != (char *)0x0) {
    builtin_strncpy(local_78," 0 obj",7);
    builtin_strncpy(local_70,"xref\r\n",7);
    builtin_strncpy(local_88,"xref\r",6);
    builtin_strncpy(local_80,"xref\n",6);
    builtin_strncpy(local_68 + 0x10,"trailr\r\n",9);
    builtin_strncpy(local_68,"trailr\r",8);
    builtin_strncpy(local_68 + 8,"trailr\n",8);
    builtin_strncpy(local_28,"startxref\r\n",0xc);
    builtin_strncpy(local_48,"startxref\r",0xb);
    builtin_strncpy(local_38,"startxref\n",0xb);
    pcVar1 = strstr(param_2,local_78);
    if ((((((pcVar1 == (char *)0x0) && (pcVar1 = strstr(param_2,local_70), pcVar1 == (char *)0x0))
          && (pcVar1 = strstr(param_2,local_88), pcVar1 == (char *)0x0)) &&
         ((pcVar1 = strstr(param_2,local_80), pcVar1 == (char *)0x0 &&
          (pcVar1 = strstr(param_2,local_68 + 0x10), pcVar1 == (char *)0x0)))) &&
        ((pcVar1 = strstr(param_2,local_68), pcVar1 == (char *)0x0 &&
         ((pcVar1 = strstr(param_2,local_68 + 8), pcVar1 == (char *)0x0 &&
          (pcVar1 = strstr(param_2,local_28), pcVar1 == (char *)0x0)))))) &&
       (pcVar1 = strstr(param_2,local_48), pcVar1 == (char *)0x0)) {
      strstr(param_2,local_38);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_a8);
  return;
}

