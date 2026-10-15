// Function: FUN_1800447c0
// Address: 1800447c0
// Size: 204 bytes


undefined8 FUN_1800447c0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined *puVar2;
  ushort *puVar3;
  ulonglong uVar4;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  
  local_20 = *(undefined8 *)(param_2 + 8);
  uVar4 = 0x1000;
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
  uVar1 = *(ulonglong *)(puVar2 + 0x70);
  while (((uVar4 <= uVar1 &&
          (puVar3 = (ushort *)FUN_180042930((longlong *)&local_28,uVar4), puVar3 != (ushort *)0x0))
         && ((char)*puVar3 != '\0'))) {
    if ((0x901 < *puVar3) || (uVar4 = uVar4 + 0x1000, 0x63fffff < uVar4)) break;
  }
  *(ulonglong *)(param_2 + 0x10) = uVar4;
  return 1;
}

