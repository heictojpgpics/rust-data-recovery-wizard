// Function: FUN_18003f6d0
// Address: 18003f6d0
// Size: 463 bytes


void FUN_18003f6d0(void *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined1 local_218 [11];
  ushort local_20d;
  char cStack_208;
  char local_207;
  char cStack_206;
  char cStack_205;
  char local_204;
  char cStack_202;
  char local_201;
  char cStack_1f8;
  char local_1f7;
  char cStack_1f6;
  char cStack_1f5;
  ulonglong local_18;
  
  local_18 = DAT_180086010 ^ (ulonglong)auStack_248;
  if (((((param_1 != (void *)0x0) && (memcpy(local_218,param_1,0x200), param_1 != (void *)0x0)) &&
       (uVar2 = FUN_18003f480((longlong)local_218), (uVar2 & 0xff) != 0)) &&
      ((((cStack_208 == '\0' && (local_207 == '\0')) &&
        ((cStack_206 == '\0' && ((cStack_205 == '\0' && (local_204 == '\0')))))) &&
       (cStack_202 == '\0')))) &&
     ((((local_201 == '\0' && (cStack_1f8 == '\0')) && (local_1f7 == '\0')) &&
      ((cStack_1f6 == '\0' && (cStack_1f5 == '\0')))))) {
    iVar1 = FUN_18003f630((longlong)local_218);
    local_228 = (undefined1)(iVar1 / (int)(uint)local_20d);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_248);
  return;
}

