// Function: FUN_180044e30
// Address: 180044e30
// Size: 229 bytes


undefined8 FUN_180044e30(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  
  local_20 = *(undefined8 *)(param_2 + 8);
  uVar4 = 0;
  local_18 = 0xffffffffffffffff;
  local_28 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_10 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_10 = *(int *)((longlong)param_3 + 0xc);
    if (local_10 < 1) {
      local_10 = 0x200;
    }
  }
  else {
    local_10 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_10 = local_10 << 7;
  puVar2 = FUN_180001350();
  uVar1 = *(longlong *)(puVar2 + 0x70) * 2;
  while (((((uVar5 = uVar4, uVar4 <= uVar1 &&
            (puVar2 = FUN_180042930((longlong *)&local_28,uVar4), puVar2 != (undefined *)0x0)) &&
           (*(longlong *)(puVar2 + 4) == DAT_180067964)) &&
          ((*(int *)(puVar2 + 0xc) == DAT_18006796c &&
           ((uVar3 = *(ulonglong *)(puVar2 + 0xc4), uVar5 = uVar1, uVar3 != 0 ||
            (uVar3 = *(ulonglong *)(puVar2 + 100), uVar3 != 0)))))) && (uVar3 <= uVar1))) {
    uVar4 = uVar4 + uVar3;
  }
  *(ulonglong *)(param_2 + 0x10) = uVar5;
  return 1;
}

