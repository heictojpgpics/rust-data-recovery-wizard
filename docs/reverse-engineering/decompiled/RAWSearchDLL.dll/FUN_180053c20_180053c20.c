// Function: FUN_180053c20
// Address: 180053c20
// Size: 230 bytes


undefined8 FUN_180053c20(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  
  local_20 = *(undefined8 *)(param_2 + 8);
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
  puVar1 = FUN_180042930((longlong *)&local_28,0);
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    uVar3 = (ulonglong)*(uint *)((longlong)param_3 + 0xc);
    if ((int)*(uint *)((longlong)param_3 + 0xc) < 1) {
      uVar3 = 0x200;
    }
  }
  else {
    uVar4 = (*(code *)((undefined **)*param_3)[5])(param_3);
    uVar3 = (ulonglong)uVar4;
  }
  uVar4 = *(uint *)(puVar1 + 4);
  iVar2 = (int)(uVar4 / uVar3);
  if ((uint)(iVar2 * (int)uVar3) < uVar4) {
    uVar4 = (iVar2 + 1) * (int)uVar3;
  }
  *(ulonglong *)(param_2 + 0x10) = (ulonglong)uVar4;
  return 1;
}

