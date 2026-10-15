// Function: FUN_180052cf0
// Address: 180052cf0
// Size: 451 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180052cf0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined *puVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStackY_98 [32];
  char local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_18008f028 ^ (ulonglong)auStackY_98;
  local_58 = *(undefined8 *)(param_2 + 8);
  local_50 = 0xffffffffffffffff;
  local_60 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_48 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_48 = *(int *)((longlong)param_3 + 0xc);
    if (local_48 < 1) {
      local_48 = 0x200;
    }
  }
  else {
    local_48 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_48 = local_48 << 7;
  puVar2 = FUN_180001350();
  local_40 = (ulonglong)local_40._5_3_ << 0x28;
  uVar1 = *(longlong *)(puVar2 + 0x70) * 10;
  puVar2 = FUN_180042930((longlong *)&local_60,0);
  if ((puVar2 != (undefined *)0x0) && (puVar2[3] == '\x01')) {
    _DAT_180118184 = *(int *)(puVar2 + 9);
    uVar5 = 9;
    if (_DAT_180118184 == (int)local_40) {
      lVar4 = 1;
      local_68[0] = '\0';
      lVar6 = 0;
      do {
        puVar3 = (uint *)FUN_180042930((longlong *)&local_60,uVar5);
        if ((puVar3 == (uint *)0x0) || ((longlong)uVar1 < (longlong)uVar5)) break;
        local_40 = 0;
        lVar4 = FUN_180052ec0(local_68,&local_40,lVar4,puVar3,local_68);
        if (local_68[0] != '\0') {
          uVar5 = uVar5 + 4;
          break;
        }
        if (local_40 == lVar6) {
          lVar7 = lVar4 + 0xb;
        }
        else {
          lVar7 = local_40;
          if (lVar6 != 0) {
            local_68[0] = '\x01';
            lVar7 = lVar6;
          }
        }
        uVar5 = uVar5 + 0xf + lVar4;
        lVar6 = lVar7;
      } while (local_68[0] == '\0');
      if ((longlong)uVar1 <= (longlong)uVar5) {
        uVar5 = uVar1;
      }
      *(ulonglong *)(param_2 + 0x10) = uVar5;
      *(undefined4 *)(param_2 + 0x18) = 0x5a;
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_98);
  return;
}

