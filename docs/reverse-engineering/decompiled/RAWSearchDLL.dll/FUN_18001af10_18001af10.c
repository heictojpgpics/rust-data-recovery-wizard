// Function: FUN_18001af10
// Address: 18001af10
// Size: 314 bytes


undefined8 FUN_18001af10(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  short sVar2;
  ulonglong uVar3;
  undefined *puVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  
  iVar9 = 0;
  puVar4 = FUN_180001350();
  local_28 = 0xffffffffffffffff;
  uVar3 = *(ulonglong *)(puVar4 + 0x70);
  local_30 = *(undefined8 *)(param_2 + 8);
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
  puVar4 = FUN_180042930((longlong *)&local_38,0);
  sVar2 = *(short *)(puVar4 + 0x10);
  if (sVar2 < 0) {
    return 0;
  }
  uVar8 = (int)sVar2 >> 8 & 0xffU | (int)(short)(sVar2 << 8);
  uVar6 = (ulonglong)uVar8;
  do {
    pbVar5 = FUN_180042930((longlong *)&local_38,uVar6);
    bVar1 = *pbVar5;
    if ((bVar1 < 0xe) && ((0x2536U >> (bVar1 & 0x1f) & 1) != 0)) {
      iVar9 = 0;
    }
    else {
      uVar7 = uVar6;
      if (bVar1 != 0) break;
      uVar7 = uVar6 + uVar8;
      iVar9 = iVar9 + 1;
      if (5 < iVar9) break;
    }
    uVar6 = uVar6 + uVar8;
    uVar7 = uVar6;
  } while (uVar6 < uVar3);
  if (0 < iVar9) {
    uVar7 = uVar7 - uVar8 * iVar9;
  }
  *(ulonglong *)(param_2 + 0x10) = uVar7;
  *(undefined4 *)(param_2 + 0x18) = 0x73;
  return 1;
}

