// Function: FUN_18000d980
// Address: 18000d980
// Size: 77 bytes


void FUN_18000d980(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18 [2];
  
  local_20 = (undefined4)param_3;
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    local_28 = param_2;
    plVar2 = (longlong *)FUN_18000e980((undefined8 *)(lVar1 + 0x10038),&local_28);
    FUN_18000e9d0((longlong *)(lVar1 + 0x10038),local_18,param_3,plVar2 + 4,plVar2);
  }
  return;
}

