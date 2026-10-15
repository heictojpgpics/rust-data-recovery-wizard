// Function: FUN_180057710
// Address: 180057710
// Size: 661 bytes


void FUN_180057710(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  void *_Memory;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  longlong lVar11;
  undefined1 auStackY_a8 [32];
  undefined8 *local_78 [2];
  undefined8 local_68;
  void *local_60 [3];
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_68 = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStackY_a8;
  puVar6 = param_2;
  uVar3 = FUN_180007850(param_2,(undefined8 *)(param_1 + 0x50));
  if (((char)uVar3 != '\0') && (*(longlong *)(param_1 + 0x98) != *(longlong *)(param_1 + 0x88)))
  goto LAB_18005797e;
  plVar1 = (longlong *)(param_1 + 0x88);
  puVar7 = (undefined8 *)*plVar1;
  puVar8 = puVar7;
  puVar9 = (undefined8 *)puVar7[1];
  if (*(char *)((longlong)puVar7[1] + 0x19) == '\0') {
    do {
      puVar8 = puVar9;
      uVar2 = FUN_180011400(puVar6,puVar8 + 4,param_2);
      if ((char)uVar2 == '\0') {
        puVar9 = (undefined8 *)*puVar8;
      }
      else {
        puVar9 = (undefined8 *)puVar8[2];
        puVar8 = puVar7;
      }
      puVar7 = puVar8;
    } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
    puVar7 = (undefined8 *)*plVar1;
  }
  if ((puVar8 == puVar7) || (uVar2 = FUN_180011400(puVar6,param_2,puVar8 + 4), (char)uVar2 != '\0'))
  {
    puVar8 = puVar7;
  }
  if (puVar8 != puVar7) {
    *(undefined8 **)(param_1 + 0x98) = puVar8;
    FUN_180011340((undefined8 *)(param_1 + 0x50),param_2);
    goto LAB_18005797e;
  }
  lVar11 = *(longlong *)(param_1 + 8);
  if (((lVar11 == 0) && (lVar11 = *(longlong *)(param_1 + 0x10), lVar11 == 0)) ||
     (*(int *)(lVar11 + 0x18) != 7)) {
LAB_1800578c1:
    uVar10 = (undefined1)lVar11;
    local_78[0] = (undefined8 *)FUN_1800020c0(0xa0);
    if (local_78[0] == (undefined8 *)0x0) {
      local_40 = (undefined8 *)0x0;
    }
    else {
      local_40 = FUN_180057320(local_78[0]);
    }
    puVar6 = (undefined8 *)FUN_1800016b0(param_2);
    FUN_180007060((longlong)local_60,puVar6);
    plVar5 = (longlong *)FUN_180058340(plVar1,(longlong)local_60);
    FUN_180058390(plVar1,local_78,uVar10,plVar5 + 4,plVar5);
    if (local_48 < 0x10) goto LAB_18005797e;
    _Memory = local_60[0];
    if ((0xfff < local_48 + 1) &&
       (_Memory = *(void **)((longlong)local_60[0] + -8),
       0x1f < (ulonglong)((longlong)local_60[0] + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    pbVar4 = (byte *)FUN_180006f90(param_2);
    plVar5 = FUN_18005e140(lVar11,pbVar4);
    uVar10 = (undefined1)lVar11;
    if (plVar5 == (longlong *)0x0) goto LAB_1800578c1;
    local_78[0] = (undefined8 *)FUN_1800020c0(0xa0);
    if (local_78[0] == (undefined8 *)0x0) {
      local_40 = (undefined8 *)0x0;
    }
    else {
      local_40 = FUN_180057f10(local_78[0],plVar5);
    }
    puVar6 = (undefined8 *)FUN_1800016b0(param_2);
    FUN_180007060((longlong)local_60,puVar6);
    plVar5 = (longlong *)FUN_180058340(plVar1,(longlong)local_60);
    FUN_180058390(plVar1,local_78,uVar10,plVar5 + 4,plVar5);
    if (local_48 < 0x10) goto LAB_18005797e;
    _Memory = local_60[0];
    if ((0xfff < local_48 + 1) &&
       (_Memory = *(void **)((longlong)local_60[0] + -8),
       0x1f < (ulonglong)
              ((longlong)local_60[0] + (-8 - (longlong)*(void **)((longlong)local_60[0] + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  free(_Memory);
LAB_18005797e:
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_a8);
  return;
}

