// Function: FUN_180025260
// Address: 180025260
// Size: 351 bytes


void FUN_180025260(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  bool bVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_78 [4];
  longlong local_58 [6];
  ulonglong local_28;
  
  local_88 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_a8;
  uVar1 = param_2[6];
  if (uVar1 == param_1[6]) {
    bVar2 = (ulonglong)param_2[8] < (ulonglong)param_1[8];
  }
  else {
    bVar2 = (ulonglong)param_1[6] < uVar1;
  }
  if (bVar2) {
    FUN_18001e970((longlong)local_78,(longlong)param_2);
    FUN_180024ec0(param_2,param_1);
    FUN_180024ec0(param_1,local_78);
    FUN_180001630(local_58);
    FUN_180001630(local_78);
    uVar1 = param_2[6];
  }
  if (param_3[6] == uVar1) {
    bVar2 = (ulonglong)param_3[8] < (ulonglong)param_2[8];
  }
  else {
    bVar2 = uVar1 < (ulonglong)param_3[6];
  }
  if (bVar2) {
    FUN_18001e970((longlong)local_78,(longlong)param_3);
    FUN_180024ec0(param_3,param_2);
    FUN_180024ec0(param_2,local_78);
    FUN_180001630(local_58);
    FUN_180001630(local_78);
    if (param_2[6] == param_1[6]) {
      bVar2 = (ulonglong)param_2[8] < (ulonglong)param_1[8];
    }
    else {
      bVar2 = (ulonglong)param_1[6] < (ulonglong)param_2[6];
    }
    if (bVar2) {
      FUN_18001e970((longlong)local_78,(longlong)param_2);
      FUN_180024ec0(param_2,param_1);
      FUN_180024ec0(param_1,local_78);
      FUN_180001630(local_58);
      FUN_180001630(local_78);
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_a8);
  return;
}

