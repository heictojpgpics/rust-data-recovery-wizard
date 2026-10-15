// Function: FUN_1800444d0
// Address: 1800444d0
// Size: 418 bytes


void FUN_1800444d0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_18008f028 ^ (ulonglong)auStack_78;
  local_50 = *(undefined8 *)(param_2 + 8);
  uVar8 = 0xe;
  local_38 = 0x6b72544d;
  local_34 = 0;
  local_48 = 0xffffffffffffffff;
  local_58 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_40 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_40 = *(int *)((longlong)param_3 + 0xc);
    if (local_40 < 1) {
      local_40 = 0x200;
    }
  }
  else {
    local_40 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_40 = local_40 << 7;
  puVar5 = FUN_180001350();
  uVar1 = *(ulonglong *)(puVar5 + 0x70);
  while (((uVar8 <= uVar1 &&
          (puVar5 = FUN_180042930((longlong *)&local_58,uVar8), puVar5 != (undefined *)0x0)) &&
         (iVar3 = _memicmp(puVar5,&local_38,4), iVar3 == 0))) {
    uVar2 = (ushort)((uint)*(undefined4 *)(puVar5 + 4) >> 0x10);
    uVar7 = (ushort)*(undefined4 *)(puVar5 + 4);
    uVar8 = uVar8 + ((ulonglong)(ushort)(uVar2 << 8 | uVar2 >> 8) |
                    (longlong)(int)((uint)(ushort)(uVar7 << 8 | uVar7 >> 8) << 0x10)) + 8;
  }
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    iVar3 = *(int *)((longlong)param_3 + 0xc);
    if (iVar3 < 1) {
      iVar3 = 0x200;
    }
  }
  else {
    iVar3 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  if (uVar8 % (ulonglong)(longlong)iVar3 == 0) {
    *(ulonglong *)(param_2 + 0x10) = uVar8;
  }
  else {
    if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
      iVar3 = *(int *)((longlong)param_3 + 0xc);
      ppuVar6 = CRawFileCellTestStorageDevice::vftable;
      if (iVar3 < 1) {
        iVar3 = 0x200;
      }
    }
    else {
      iVar3 = (*(code *)((undefined **)*param_3)[5])(param_3);
      ppuVar6 = (undefined **)*param_3;
    }
    iVar4 = (*(code *)ppuVar6[5])(param_3);
    *(ulonglong *)(param_2 + 0x10) = (longlong)iVar4 * (uVar8 / (ulonglong)(longlong)iVar3 + 1);
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStack_78);
  return;
}

