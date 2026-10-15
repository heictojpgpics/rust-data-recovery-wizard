// Function: FUN_180047020
// Address: 180047020
// Size: 693 bytes


void FUN_180047020(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  undefined *local_80 [6];
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_18008f028 ^ (ulonglong)auStack_c8;
  local_80[0] = &DAT_18006dbc8;
  local_80[1] = &DAT_18006dbc0;
  local_80[2] = &DAT_18006dbd8;
  local_80[3] = &DAT_18006dbd0;
  local_80[4] = &DAT_18006dbe8;
  local_80[5] = &DAT_18006dbe0;
  iVar10 = 500;
  local_98 = *(undefined8 *)(param_2 + 8);
  local_90 = 0xffffffffffffffff;
  local_a8 = param_2;
  local_a0 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_88 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_88 = *(int *)((longlong)param_3 + 0xc);
    if (local_88 < 1) {
      local_88 = 0x200;
    }
  }
  else {
    local_88 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_88 = local_88 << 7;
  puVar4 = (undefined4 *)FUN_180042930((longlong *)&local_a0,0);
  if (puVar4 != (undefined4 *)0x0) {
    iVar2 = Ordinal_14(*puVar4);
    uVar7 = (ulonglong)iVar2;
    if (0 < iVar2) {
      puVar5 = FUN_180001350();
      lVar1 = *(longlong *)(puVar5 + 0x70);
      do {
        if (((lVar1 * 10 < (longlong)uVar7) ||
            (puVar4 = (undefined4 *)FUN_180042930((longlong *)&local_a0,uVar7),
            puVar4 == (undefined4 *)0x0)) || (iVar2 = Ordinal_14(*puVar4), iVar2 < 1)) break;
        lVar9 = (longlong)iVar2;
        if (lVar9 == 1) {
          iVar3 = _memicmp(puVar4 + 1,&DAT_18006dbc8,(ulonglong)(iVar2 + 3));
          if ((iVar3 != 0) &&
             (iVar2 = _memicmp(puVar4 + 3,&DAT_18006dbc8,(ulonglong)(iVar2 + 3)), iVar2 != 0))
          break;
          if ((undefined8 *)(puVar4 + 2) == (undefined8 *)0x0) {
            local_50 = 0;
            piVar6 = _errno();
            *piVar6 = 0x16;
            _invalid_parameter_noinfo();
          }
          else {
            local_50 = *(undefined8 *)(puVar4 + 2);
          }
          iVar2 = (((uint)local_50._4_1_ * 0x100 + (uint)local_50._5_1_) * 0x100 +
                  (uint)local_50._6_1_) * 0x100 + (uint)local_50._7_1_;
          lVar9 = (longlong)iVar2;
          if (iVar2 < 1) goto LAB_180047280;
        }
        else {
          lVar8 = 0;
          while( true ) {
            puVar5 = local_80[lVar8];
            iVar2 = _memicmp(puVar4 + 1,puVar5,4);
            if ((iVar2 == 0) || (iVar2 = _memicmp(puVar4 + 3,puVar5,4), iVar2 == 0)) break;
            lVar8 = lVar8 + 1;
            if (5 < lVar8) goto LAB_180047224;
          }
        }
        uVar7 = uVar7 + lVar9;
        iVar10 = iVar10 + -1;
      } while (0 < iVar10);
LAB_180047224:
      if (uVar7 != 0) {
        *(ulonglong *)(local_a8 + 0x10) = uVar7;
      }
    }
  }
LAB_180047280:
  __security_check_cookie(local_40 ^ (ulonglong)auStack_c8);
  return;
}

