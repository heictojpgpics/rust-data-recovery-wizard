// Function: FUN_1800527b0
// Address: 1800527b0
// Size: 360 bytes


undefined8 FUN_1800527b0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  undefined *puVar4;
  char *pcVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  
  if (param_3 == (longlong *)0x0) {
    return 0;
  }
  local_20 = *(undefined8 *)(param_2 + 8);
  local_18 = 0xffffffffffffffff;
  local_28 = param_3;
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_10 = *(int *)((longlong)param_3 + 0xc);
    if (local_10 < 1) {
      local_10 = 0x200;
    }
  }
  else {
    local_10 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_10 = local_10 << 7;
  uVar6 = 0;
  puVar4 = FUN_180001350();
  lVar1 = *(longlong *)(puVar4 + 0x70);
  pcVar5 = FUN_180042930((longlong *)&local_28,0);
  do {
    if ((((pcVar5 == (char *)0x0) || (*pcVar5 != 'O')) || (pcVar5[1] != 'g')) ||
       (((pcVar5[2] != 'g' || (pcVar5[3] != 'S')) || ((ulonglong)(lVar1 * 10) < uVar6)))) {
      *(ulonglong *)(param_2 + 0x10) = uVar6;
      return 1;
    }
    uVar6 = uVar6 + 0x1b;
    uVar7 = 0;
    uVar8 = 0x1b;
    bVar3 = (byte)(*(uint *)(pcVar5 + 0x18) >> 0x10);
    if (bVar3 != 0) {
      do {
        bVar2 = false;
        uVar9 = uVar8;
        do {
          uVar8 = uVar9;
          if (bVar3 <= uVar7) break;
          uVar8 = (ulonglong)((int)uVar9 + 1);
          if (pcVar5[uVar9] != 0xff) {
            bVar2 = true;
          }
          uVar6 = uVar6 + 1 + (ulonglong)(byte)pcVar5[uVar9];
          uVar7 = uVar7 + 1;
          uVar9 = uVar8;
        } while (!bVar2);
      } while (uVar7 < (*(uint *)(pcVar5 + 0x18) >> 0x10 & 0xff));
    }
    pcVar5 = FUN_180042930((longlong *)&local_28,uVar6);
  } while( true );
}

