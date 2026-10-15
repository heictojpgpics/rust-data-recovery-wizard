// Function: FUN_180027480
// Address: 180027480
// Size: 343 bytes


undefined8 FUN_180027480(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x18) = uVar3;
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
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  local_20 = local_20 << 7;
  piVar1 = (int *)FUN_180042930((longlong *)&local_38,uVar3);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x18);
  if (uVar3 < 0x40000000) {
    do {
      if (((short)*piVar1 != 0) || (*(char *)((longlong)piVar1 + 2) != '\x01')) goto LAB_1800275a4;
      if (*piVar1 == -0x45ff0000) {
        uVar2 = 0;
        if (((short)piVar1[5] == 0) && (uVar2 = 0, *(char *)((longlong)piVar1 + 0x16) == '\x01')) {
          uVar2 = *(ushort *)(piVar1 + 6) << 8 | *(ushort *)(piVar1 + 6) >> 8;
        }
        uVar3 = uVar3 + 0x1a + (ulonglong)uVar2;
      }
      else {
        *(ulonglong *)(param_1 + 0x18) = uVar3 + 6;
        uVar3 = (ulonglong)(ushort)(*(ushort *)(piVar1 + 1) << 8 | *(ushort *)(piVar1 + 1) >> 8) +
                uVar3 + 6;
      }
      *(ulonglong *)(param_1 + 0x18) = uVar3;
      piVar1 = (int *)FUN_180042930((longlong *)&local_38,uVar3);
      if (piVar1 == (int *)0x0) goto LAB_1800275a4;
      uVar3 = *(ulonglong *)(param_1 + 0x18);
    } while (uVar3 < 0x40000000);
  }
  *(undefined8 *)(param_1 + 0x18) = 0x40000000;
LAB_1800275a4:
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  return 1;
}

