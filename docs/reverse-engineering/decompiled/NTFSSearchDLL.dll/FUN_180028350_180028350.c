// Function: FUN_180028350
// Address: 180028350
// Size: 223 bytes


void FUN_180028350(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100 [2];
  longlong local_f0;
  undefined4 *local_e8;
  longlong *local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined4 local_c8 [44];
  ulonglong local_18;
  
  if (param_2 != 0) {
    local_d0 = 0xfffffffffffffffe;
    local_18 = DAT_180086010 ^ (ulonglong)auStack_128;
    uVar1 = *(longlong *)(param_2 + 0x10) - 0x8000;
    uVar2 = (longlong)uVar1 >> 0x3f;
    if ((longlong)((uVar1 ^ uVar2) - uVar2) < 0x40) {
      *(undefined8 *)(param_2 + 0x10) = 0x8000;
    }
    local_108 = param_2;
    FUN_180001690(local_c8);
    FUN_1800024f0(local_100);
    local_f0 = *(longlong *)(param_1 + 0x60);
    local_e8 = local_c8;
    local_e0 = local_100;
    local_d8 = 0;
    FUN_180003ed0(&local_f0,local_108,param_2);
    FUN_180043f60(*(longlong **)(param_1 + 0x38),&local_108,*(undefined8 **)(param_1 + 0x68));
    FUN_180002480(local_100);
    FUN_180001700((longlong)local_c8);
    __security_check_cookie(local_18 ^ (ulonglong)auStack_128);
  }
  return;
}

