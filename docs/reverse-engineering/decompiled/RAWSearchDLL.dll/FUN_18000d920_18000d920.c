// Function: FUN_18000d920
// Address: 18000d920
// Size: 88 bytes


void FUN_18000d920(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_28;
  int local_20;
  undefined8 local_18 [2];
  
  local_20 = *(int *)(param_4 + 0x18);
  if (local_20 == 0) {
    local_20 = *(int *)(param_3 + 8);
  }
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    local_28 = param_2;
    plVar2 = (longlong *)FUN_18000e980((undefined8 *)(lVar1 + 0x10038),&local_28);
    FUN_18000e9d0((longlong *)(lVar1 + 0x10038),local_18,param_3,plVar2 + 4,plVar2);
  }
  return;
}

