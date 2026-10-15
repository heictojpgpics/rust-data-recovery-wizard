// Function: FUN_1800174f0
// Address: 1800174f0
// Size: 94 bytes


void FUN_1800174f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((longlong *)(param_1 + 0x40) != param_2) {
    plVar1 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar1 = (longlong *)*param_2;
    }
    FUN_1800071e0(param_1 + 0x40,plVar1,param_2[2]);
  }
  FUN_180001630(param_2);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_48);
  return;
}

