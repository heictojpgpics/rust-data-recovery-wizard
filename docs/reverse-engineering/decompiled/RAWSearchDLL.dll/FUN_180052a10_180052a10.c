// Function: FUN_180052a10
// Address: 180052a10
// Size: 608 bytes


void FUN_180052a10(undefined8 param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  int local_68;
  int local_60;
  int local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_b8;
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = 0xffffffffffffffff;
  local_90 = param_2;
  local_88 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_70 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_70 = *(int *)((longlong)param_3 + 0xc);
    if (local_70 < 1) {
      local_70 = 0x200;
    }
  }
  else {
    local_70 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_70 = local_70 << 7;
  uVar9 = 0;
  local_50 = 0x37686c2d;
  local_68 = 0x35686c2d;
  local_60 = 0x30686c2d;
  local_58 = 0x64686c2d;
  pbVar4 = FUN_180042930((longlong *)&local_88,0);
  if (pbVar4 == (byte *)0x0) {
LAB_180052c1b:
    __security_check_cookie(local_48 ^ (ulonglong)auStack_b8);
    return;
  }
  puVar5 = FUN_180001350();
  bVar1 = false;
  bVar3 = false;
  bVar2 = false;
  iVar11 = 1;
  local_98 = *(longlong *)(puVar5 + 0x70) * 10;
LAB_180052af8:
  iVar10 = (int)uVar9;
  if (((local_68 == *(int *)(pbVar4 + 2)) && (pbVar4[6] == 0x2d)) ||
     ((local_60 == *(int *)(pbVar4 + 2) && (pbVar4[6] == 0x2d)))) {
    uVar8 = iVar10 + *(int *)(pbVar4 + 7) + (uint)*pbVar4;
    if (!bVar1) {
      bVar3 = true;
    }
    if (!bVar1) {
      uVar8 = uVar8 + 2;
    }
    uVar9 = (ulonglong)uVar8;
    bVar2 = bVar3;
    if (local_98 < uVar9) goto LAB_180052bb9;
  }
  else if ((local_58 == *(int *)(pbVar4 + 2)) && (pbVar4[6] == 0x2d)) {
    bVar1 = true;
    uVar9 = (ulonglong)(iVar10 + (uint)*pbVar4);
  }
  else if ((local_50 == *(int *)(pbVar4 + 2)) && (pbVar4[6] == 0x2d)) {
    bVar1 = true;
    uVar9 = (ulonglong)(iVar10 + *(int *)(pbVar4 + 7) + (uint)*pbVar4);
  }
  else {
    if (!bVar2) {
      if (iVar10 == 0) goto LAB_180052c1b;
LAB_180052bb9:
      if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
        uVar7 = (ulonglong)*(uint *)((longlong)param_3 + 0xc);
        if ((int)*(uint *)((longlong)param_3 + 0xc) < 1) {
          uVar7 = 0x200;
        }
      }
      else {
        uVar8 = (*(code *)((undefined **)*param_3)[5])(param_3);
        uVar7 = (ulonglong)uVar8;
      }
      if ((int)(uVar9 % uVar7) != 0) {
        if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
          uVar7 = (ulonglong)*(uint *)((longlong)param_3 + 0xc);
          ppuVar6 = CRawFileCellTestStorageDevice::vftable;
          if ((int)*(uint *)((longlong)param_3 + 0xc) < 1) {
            uVar7 = 0x200;
          }
        }
        else {
          uVar8 = (*(code *)((undefined **)*param_3)[5])(param_3);
          uVar7 = (ulonglong)uVar8;
          ppuVar6 = (undefined **)*param_3;
        }
        iVar11 = (*(code *)ppuVar6[5])(param_3);
        uVar9 = (ulonglong)(uint)(((int)(uVar9 / uVar7) + 1) * iVar11);
      }
      *(ulonglong *)(local_90 + 0x10) = uVar9;
      goto LAB_180052c1b;
    }
    bVar3 = false;
    uVar9 = (ulonglong)(iVar10 - 2);
    bVar2 = bVar3;
  }
  pbVar4 = FUN_180042930((longlong *)&local_88,uVar9);
  if ((pbVar4 == (byte *)0x0) || (iVar11 = iVar11 + 1, 0x800 < iVar11)) goto LAB_180052bb9;
  goto LAB_180052af8;
}

