// Function: FUN_180027000
// Address: 180027000
// Size: 282 bytes


undefined8 FUN_180027000(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined *puVar2;
  short *psVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  
  if (param_3 == (longlong *)0x0) {
    return 0;
  }
  local_30 = *(undefined8 *)(param_2 + 8);
  local_28 = 0xffffffffffffffff;
  local_38 = param_3;
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_20 = *(int *)((longlong)param_3 + 0xc);
    if (local_20 < 1) {
      local_20 = 0x200;
    }
  }
  else {
    local_20 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_20 = local_20 << 7;
  uVar5 = 0;
  puVar2 = FUN_180001350();
  lVar1 = *(longlong *)(puVar2 + 0x70);
  uVar6 = uVar5;
  while( true ) {
    psVar3 = (short *)FUN_180042930((longlong *)&local_38,uVar6);
    if (((psVar3 == (short *)0x0) || ((*psVar3 + 0xe01U & 0xf7ff) != 0)) ||
       ((ulonglong)(lVar1 * 10) < uVar6)) break;
    uVar4 = ((*(byte *)((longlong)psVar3 + 3) & 3) << 8 | (uint)*(byte *)(psVar3 + 2)) << 3 |
            (uint)(*(byte *)((longlong)psVar3 + 5) >> 5);
    uVar6 = uVar6 + uVar4;
    if ((uVar4 == 0) || (uVar4 = (int)uVar5 + 1, uVar5 = (ulonglong)uVar4, 2999 < (int)uVar4))
    break;
  }
  *(ulonglong *)(param_2 + 0x10) = uVar6;
  return 1;
}

