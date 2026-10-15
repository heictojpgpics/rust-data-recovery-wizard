// Function: FUN_180016b40
// Address: 180016b40
// Size: 213 bytes


void FUN_180016b40(undefined8 param_1,int *param_2,longlong param_3)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)&local_38;
  local_38 = 0x7c01fd10;
  uStack_34 = 0x11d07baa;
  local_30 = 0xa0000c9e;
  uStack_2c = 0xece622c9;
  local_28 = 0x7c01fd11;
  uStack_24 = 0x11d07baa;
  local_20 = 0xa0000c9e;
  uStack_1c = 0xece622c9;
  if ((((((*param_2 == 0x46535449) && (param_2[2] == 0x60)) &&
        (*(longlong *)(param_2 + 6) == 0x11d07baa7c01fd10)) &&
       ((*(longlong *)(param_2 + 8) == -0x1319dd365ffff362 &&
        (*(longlong *)(param_2 + 10) == 0x11d07baa7c01fd11)))) &&
      ((*(longlong *)(param_2 + 0xc) == -0x1319dd365ffff362 &&
       ((param_2[0x18] == 0x1fe && (param_2[0x1c] == 0)))))) && (param_2[0x1d] == 0)) {
    *(undefined4 *)(param_3 + 0x18) = 0xe;
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_2 + 0x1a);
    __security_check_cookie(local_18 ^ (ulonglong)&local_38);
    return;
  }
  __security_check_cookie(local_18 ^ (ulonglong)&local_38);
  return;
}

