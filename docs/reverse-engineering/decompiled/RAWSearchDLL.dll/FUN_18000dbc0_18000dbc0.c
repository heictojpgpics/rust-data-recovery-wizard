// Function: FUN_18000dbc0
// Address: 18000dbc0
// Size: 355 bytes


void FUN_18000dbc0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_98 [7];
  longlong *local_60;
  longlong local_58 [7];
  longlong *local_20;
  ulonglong local_18;
  
  local_a8 = 0xfffffffffffffffe;
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_c8;
  local_60 = (longlong *)0x0;
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    local_60 = (longlong *)(**(code **)*puVar1)(puVar1,local_98);
  }
  if ((local_60 != local_98) && (plVar2 = (longlong *)param_1[7], plVar2 != param_1)) {
    param_1[7] = (longlong)local_60;
    local_60 = plVar2;
    goto LAB_18000dce1;
  }
  local_20 = (longlong *)0x0;
  if (local_60 != (longlong *)0x0) {
    if (local_60 == local_98) {
      local_20 = (longlong *)(**(code **)(*local_60 + 8))(local_60,local_58);
      if (local_60 == (longlong *)0x0) goto LAB_18000dc76;
      (**(code **)(*local_60 + 0x20))
                (local_60,CONCAT71((int7)((ulonglong)local_98 >> 8),local_60 != local_98));
    }
    else {
      local_20 = local_60;
    }
    local_60 = (longlong *)0x0;
  }
LAB_18000dc76:
  FUN_18000e0f0((longlong)local_98,param_1);
  if (local_20 != (longlong *)0x0) {
    if (local_20 == local_58) {
      lVar3 = (**(code **)(*local_20 + 8))(local_20,param_1);
      param_1[7] = lVar3;
      if (local_20 == (longlong *)0x0) goto LAB_18000dcc4;
      (**(code **)(*local_20 + 0x20))
                (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
    }
    else {
      param_1[7] = (longlong)local_20;
    }
    local_20 = (longlong *)0x0;
  }
LAB_18000dcc4:
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))
              (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
    local_20 = (longlong *)0x0;
  }
LAB_18000dce1:
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x20))(local_60,local_60 != local_98);
    local_60 = (longlong *)0x0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_c8);
  return;
}

