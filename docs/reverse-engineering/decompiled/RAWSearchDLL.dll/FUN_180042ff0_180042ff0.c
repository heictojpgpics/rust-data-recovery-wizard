// Function: FUN_180042ff0
// Address: 180042ff0
// Size: 274 bytes


ulonglong FUN_180042ff0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined *puVar2;
  short *psVar3;
  ulonglong uVar4;
  ulonglong uVar5;
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
  uVar5 = 0;
  puVar2 = FUN_180001350();
  lVar1 = *(longlong *)(puVar2 + 0x70);
  puVar2 = FUN_180042930((longlong *)&local_28,0);
  if (puVar2 != (undefined *)0x0) {
    do {
      psVar3 = (short *)FUN_180042930((longlong *)&local_28,uVar5);
      if (psVar3 == (short *)0x0) {
        return 0;
      }
      if (psVar3[0x2c] == 0x4d4d) {
        uVar4 = 0x58;
      }
      else if (((*psVar3 != 0x4d4d) || (psVar3[0x2c] == 0)) ||
              (uVar4 = (ulonglong)(ushort)psVar3[1], uVar4 == 0)) break;
      uVar5 = uVar5 + uVar4;
    } while (uVar5 <= (ulonglong)(lVar1 * 5));
    *(ulonglong *)(param_2 + 0x10) = uVar5;
    uVar5 = 1;
  }
  return uVar5;
}

