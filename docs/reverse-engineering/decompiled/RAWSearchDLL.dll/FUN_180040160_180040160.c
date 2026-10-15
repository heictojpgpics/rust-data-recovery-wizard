// Function: FUN_180040160
// Address: 180040160
// Size: 818 bytes


void FUN_180040160(longlong param_1,int *param_2,int param_3,ulonglong param_4,longlong *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong _Size;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 auStackY_6a8 [32];
  undefined1 local_678 [8];
  longlong *local_670;
  longlong local_668;
  undefined8 local_660;
  int local_658;
  undefined8 local_650;
  undefined1 local_648 [45];
  char local_61b [40];
  char local_5f3 [1195];
  char local_148 [272];
  ulonglong local_38;
  
  local_650 = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStackY_6a8;
  if (((param_2 != (int *)0x0) &&
      (*(longlong *)(param_1 + 0xe0) + *(longlong *)(param_1 + 0xd8) <=
       (longlong)((param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3))) &&
     (uVar2 = FUN_1800404a0(param_1,param_2,param_3,param_4,param_5), (int)uVar2 == 0)) {
    lVar1 = *(longlong *)(param_1 + 8);
    if ((param_4 - lVar1) * (longlong)param_3 < (ulonglong)(*(longlong *)(param_1 + 0x118) * 10)) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x110);
    }
    else {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x118);
    }
    memset(local_648,0,0x500);
    DAT_180117f98 = local_648;
    local_670 = *(longlong **)(param_1 + 0xe8);
    uVar5 = 0xffffffffffffffff;
    local_660 = 0xffffffffffffffff;
    local_668 = lVar1;
    if (local_670 == (longlong *)0x0) {
      local_658 = 0x200;
    }
    else if ((undefined **)*local_670 == CRawFileCellTestStorageDevice::vftable) {
      local_658 = *(int *)((longlong)local_670 + 0xc);
      if (local_658 < 1) {
        local_658 = 0x200;
      }
    }
    else {
      local_658 = (*(code *)((undefined **)*local_670)[5])();
    }
    local_658 = local_658 << 7;
    uVar6 = *(ulonglong *)(param_1 + 0xd8);
    puVar3 = FUN_180042930((longlong *)&local_670,uVar6);
    uVar2 = FUN_18004adb0((longlong)(puVar3 + 0x1c),uVar6,(int *)(puVar3 + 0x22),
                          *(int *)(param_1 + 0xe0));
    FUN_180042930((longlong *)&local_670,param_4);
    uVar8 = 4;
    memset(local_148,0,0x104);
    if ((int)uVar2 == 0) {
      uVar8 = 0xa8;
      snprintf(local_148,0x104,"%lld-%lld_",*(undefined8 *)(param_1 + 8));
      do {
        uVar6 = uVar5 + 1;
        lVar1 = uVar5 + 1;
        uVar5 = uVar6;
      } while (local_148[lVar1] != '\0');
      puVar4 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
      if ((ulonglong)puVar4[3] < uVar6) {
        FUN_1800086f0(param_1 + 0x20,uVar6,uVar8,local_148);
      }
      else {
        puVar7 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar7 = (undefined8 *)*puVar4;
        }
        puVar4[2] = uVar6;
        memmove(puVar7,local_148,uVar6);
        local_678[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar7 + uVar6),local_678);
      }
    }
    else {
      uVar6 = 0xffffffffffffffff;
      do {
        _Size = uVar6 + 1;
        lVar1 = uVar6 + 1;
        uVar6 = _Size;
      } while (local_61b[lVar1] != '\0');
      puVar4 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
      if ((ulonglong)puVar4[3] < _Size) {
        FUN_1800086f0(param_1 + 0x20,_Size,uVar8,local_61b);
      }
      else {
        puVar7 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar7 = (undefined8 *)*puVar4;
        }
        puVar4[2] = _Size;
        memmove(puVar7,local_61b,_Size);
        uVar8 = (undefined1)uVar6;
        local_678[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar7 + _Size),local_678);
      }
      do {
        uVar6 = uVar5 + 1;
        lVar1 = uVar5 + 1;
        uVar5 = uVar6;
      } while (local_5f3[lVar1] != '\0');
      puVar4 = (undefined8 *)FUN_1800016b0(param_1 + 0x40);
      if ((ulonglong)puVar4[3] < uVar6) {
        FUN_1800086f0(param_1 + 0x40,uVar6,uVar8,local_5f3);
      }
      else {
        puVar7 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar7 = (undefined8 *)*puVar4;
        }
        puVar4[2] = uVar6;
        memmove(puVar7,local_5f3,uVar6);
        local_678[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar7 + uVar6),local_678);
      }
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_6a8);
  return;
}

