// Function: FUN_180057470
// Address: 180057470
// Size: 403 bytes


void FUN_180057470(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *_Memory;
  longlong lVar4;
  void *_Memory_00;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_58;
  void *local_48 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_68 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_98;
  local_78 = 0;
  *param_1 = neb::CJsonObject::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar3 = param_1 + 0xe;
  *puVar3 = 0;
  param_1[0xf] = 0;
  local_70 = puVar3;
  local_58 = param_1;
  uVar2 = FUN_1800582c0();
  *puVar3 = uVar2;
  param_1[0x10] = 0;
  puVar1 = param_1 + 0x11;
  *puVar1 = 0;
  param_1[0x12] = 0;
  local_70 = puVar1;
  uVar2 = FUN_180001d30();
  *puVar1 = uVar2;
  param_1[0x13] = 0;
  param_1[0x10] = *puVar3;
  param_1[0x13] = *puVar1;
  puVar3 = (undefined8 *)FUN_180007000((longlong)local_48,&DAT_180066bb1);
  local_78 = 1;
  lVar4 = *(longlong *)(param_2 + 8);
  if ((lVar4 != 0) || (lVar4 = *(longlong *)(param_2 + 0x10), lVar4 != 0)) {
    param_3 = 0;
    _Memory = FUN_18005d530(lVar4,0,0);
    if (_Memory != (undefined4 *)0x0) {
      FUN_18000f660((longlong)local_48,_Memory);
      free(_Memory);
    }
  }
  FUN_180057b80((longlong)param_1,puVar3,param_3,param_4);
  if (0xf < local_30) {
    _Memory_00 = local_48[0];
    if ((0xfff < local_30 + 1) &&
       (_Memory_00 = *(void **)((longlong)local_48[0] + -8),
       0x1f < (ulonglong)((longlong)local_48[0] + (-8 - (longlong)_Memory_00)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory_00);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_98);
  return;
}

