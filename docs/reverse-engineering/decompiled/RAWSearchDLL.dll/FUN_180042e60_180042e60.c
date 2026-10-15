// Function: FUN_180042e60
// Address: 180042e60
// Size: 233 bytes


void FUN_180042e60(ulonglong *param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [48];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_a8;
  local_70 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_78 = 0x74682f3c;
  local_74 = 0x3e6c6d;
  local_38 = 7;
  local_30 = 0x100000;
  FUN_180054470(param_1,param_2,param_3,&local_78);
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    iVar2 = *(int *)((longlong)param_3 + 0xc);
    if (iVar2 < 1) {
      iVar2 = 0x200;
    }
  }
  else {
    iVar2 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  uVar4 = (ulonglong)iVar2;
  uVar3 = uVar1 / uVar4;
  if (uVar3 * uVar4 < uVar1) {
    *(ulonglong *)(param_2 + 0x10) = (uVar3 + 1) * uVar4;
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_a8);
  return;
}

