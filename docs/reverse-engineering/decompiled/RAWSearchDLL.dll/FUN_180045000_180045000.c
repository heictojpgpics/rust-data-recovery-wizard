// Function: FUN_180045000
// Address: 180045000
// Size: 257 bytes


undefined8 FUN_180045000(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined *puVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  
  local_30 = *(undefined8 *)(param_2 + 8);
  local_28 = 0xffffffffffffffff;
  local_38 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_20 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_20 = *(int *)((longlong)param_3 + 0xc);
    if (local_20 < 1) {
      local_20 = 0x200;
    }
  }
  else {
    local_20 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_20 = local_20 << 7;
  puVar2 = FUN_180042930((longlong *)&local_38,0);
  if (puVar2 != (undefined *)0x0) {
    uVar5 = 0x24;
    piVar3 = (int *)(puVar2 + 0x24);
    puVar2 = FUN_180001350();
    uVar1 = *(ulonglong *)(puVar2 + 0x70);
    if (*piVar3 == 0x4b427e) {
      do {
        uVar5 = uVar5 + 10 + *(int *)((longlong)piVar3 + 6);
        uVar4 = (ulonglong)uVar5;
        if (uVar1 < uVar4) break;
        piVar3 = (int *)FUN_180042930((longlong *)&local_38,uVar4);
        if (piVar3 == (int *)0x0) {
          return 0;
        }
      } while (*piVar3 == 0x4b427e);
      if (0x1ff < uVar5) {
        *(ulonglong *)(param_2 + 0x10) = uVar4;
        return 1;
      }
    }
  }
  return 0;
}

