// Function: FUN_180010640
// Address: 180010640
// Size: 520 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180010640(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined1 auStack_2048 [32];
  undefined1 local_2028;
  longlong local_2018 [2];
  longlong local_2008;
  longlong local_2000 [2];
  undefined1 local_1ff0;
  short local_1fee [3];
  undefined8 local_1fe8;
  longlong local_1fe0 [2];
  undefined2 local_1fd0;
  undefined8 local_1fc8;
  int local_1fb8 [2024];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x180010654;
  local_1fc8 = 0xfffffffffffffffe;
  local_18 = DAT_180086010 ^ (ulonglong)auStack_2048;
  memset(local_1fb8,0,0x1f9c);
  if (((*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) && (0 < param_2)) &&
     (lVar4 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))(), param_2 < lVar4 + -0x20)) {
    local_2028 = 0;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))
                      (*(longlong **)(param_1 + 0xb8),local_1fb8,param_2);
    if ((iVar3 != 0) && (iVar3 = FUN_1800411d0(local_1fb8), iVar3 != 0)) {
      local_2008 = -1;
      FUN_180040cb0(local_2000);
      local_1ff0 = 2;
      bVar2 = false;
      local_1fee[0] = 0;
      local_1fe8 = 0;
      FUN_180040cb0(local_1fe0);
      local_1fd0 = 0;
      FUN_180041cf0(local_2018,local_1fb8,0x400,0);
      bVar1 = FUN_180041c50(local_2018);
      if ((int)CONCAT71(extraout_var,bVar1) == 0) {
        FUN_180041c70(local_2018);
      }
      else {
        FUN_180041b70(local_2018,0x20,0);
        bVar1 = FUN_180044da0(local_2018,local_1fee);
        if (((int)CONCAT71(extraout_var_00,bVar1) != 0) && (local_1fee[0] != 0)) {
          lVar4 = FUN_180041b70(local_2018,0x30,0);
          if ((lVar4 != 0) && (lVar4 != -0x18)) {
            local_1fe8 = *(undefined8 *)(lVar4 + 0x20);
          }
          FUN_180044bd0(local_2018,(longlong)local_2000,0,(undefined8 *)0x0);
          local_2008 = param_2;
          bVar2 = FUN_180040b50((longlong)local_2000);
          bVar2 = (int)CONCAT71(extraout_var_01,bVar2) == 0;
        }
        FUN_180041c70(local_2018);
        if (bVar2) {
          FUN_180040570(local_2000,0);
          FUN_180001ea0((longlong)&local_2008);
          goto LAB_1800107fd;
        }
      }
      FUN_180001ea0((longlong)&local_2008);
    }
  }
LAB_1800107fd:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_2048);
  return;
}

