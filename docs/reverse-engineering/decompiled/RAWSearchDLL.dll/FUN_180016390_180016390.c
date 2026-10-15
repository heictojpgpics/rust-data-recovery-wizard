// Function: FUN_180016390
// Address: 180016390
// Size: 149 bytes


void FUN_180016390(undefined8 param_1,void *param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_58;
  if (param_2 != (void *)0x0) {
    local_38 = 0x6e696150;
    local_34 = 0x68532074;
    local_30 = 0x5020706f;
    local_2c = 0x49206f72;
    local_28 = 0x6567616d;
    local_24 = 0x6c694620;
    local_20 = 0x1a0a65;
    iVar1 = memcmp(param_2,&local_38,0x20);
    if (iVar1 == 0) {
      *(undefined4 *)(param_3 + 0x18) = 0x37;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_58);
  return;
}

