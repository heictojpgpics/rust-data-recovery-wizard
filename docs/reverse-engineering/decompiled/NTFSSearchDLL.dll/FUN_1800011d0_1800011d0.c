// Function: FUN_1800011d0
// Address: 1800011d0
// Size: 360 bytes


void FUN_1800011d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98 [7];
  longlong *local_60;
  longlong local_58 [7];
  longlong *local_20;
  ulonglong local_18;
  
  local_a8 = 0xfffffffffffffffe;
  local_18 = DAT_180086010 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_60 = (longlong *)0x0;
  puVar2 = (undefined8 *)param_2[7];
  local_a0 = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    local_60 = (longlong *)(**(code **)*puVar2)(puVar2,local_98);
  }
  if ((local_60 != local_98) && (plVar3 = *(longlong **)(param_1 + 0x68), plVar3 != plVar1)) {
    *(longlong **)(param_1 + 0x68) = local_60;
    local_60 = plVar3;
    goto LAB_1800012e3;
  }
  local_20 = (longlong *)0x0;
  if (local_60 != (longlong *)0x0) {
    plVar3 = local_60;
    if (local_60 == local_98) {
      local_20 = (longlong *)(**(code **)(*local_60 + 8))(local_60,local_58);
      if (local_60 == (longlong *)0x0) goto LAB_1800012a6;
      (**(code **)(*local_60 + 0x20))
                (local_60,CONCAT71((int7)((ulonglong)local_98 >> 8),local_60 != local_98));
      plVar3 = local_20;
    }
    local_20 = plVar3;
    local_60 = (longlong *)0x0;
  }
LAB_1800012a6:
  FUN_180002890((longlong)local_98,plVar1);
  FUN_180002890((longlong)plVar1,local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))
              (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
  }
LAB_1800012e3:
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x20))
              (local_60,CONCAT71((int7)((ulonglong)local_98 >> 8),local_60 != local_98));
  }
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_c8);
  return;
}

