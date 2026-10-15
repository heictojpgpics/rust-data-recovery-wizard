// Function: FUN_18001a320
// Address: 18001a320
// Size: 155 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18001a320(longlong *param_1,longlong param_2,void *param_3)

{
  longlong lVar1;
  undefined1 auStack_1058 [32];
  undefined1 local_1038;
  undefined1 local_1028 [4096];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x18001a32e;
  local_28 = DAT_180086010 ^ (ulonglong)auStack_1058;
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (param_2 < lVar1) {
    memset(local_1028,0,0x1000);
    local_1038 = 0;
    (**(code **)(*param_1 + 8))(param_1,local_1028,param_2,1);
    FUN_18003f8d0(param_3,local_1028);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_1058);
  return;
}

