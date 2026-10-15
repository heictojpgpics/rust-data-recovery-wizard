// Function: FUN_180021080
// Address: 180021080
// Size: 1287 bytes


undefined8 *
FUN_180021080(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  undefined8 *_Buf1;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined8 in_stack_ffffffffffffff58;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40 [2];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_1[1] == 0) {
    FUN_180021730(param_1,param_2,'\x01',(undefined8 *)*param_1,in_stack_ffffffffffffff58,param_5);
    return param_2;
  }
  plVar8 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar8) {
    plVar8 = param_3;
    puVar3 = (undefined8 *)FUN_180002680(param_4);
    puVar4 = (undefined8 *)FUN_180002680(plVar8 + 4);
    uVar1 = puVar4[2];
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    uVar10 = puVar3[2];
    if (0xf < (ulonglong)puVar3[3]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    local_98 = uVar1;
    local_90 = uVar10;
    puVar5 = FUN_180002960(&local_90,&local_98);
    iVar2 = memcmp(puVar3,puVar4,*puVar5);
    if (iVar2 == 0) {
      if (uVar10 < uVar1) {
LAB_18002115d:
        FUN_180021730(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffff58,param_5);
        return param_2;
      }
    }
    else if (iVar2 < 0) goto LAB_18002115d;
    goto LAB_180021501;
  }
  if (param_3 == plVar8) {
    puVar4 = (undefined8 *)plVar8[2];
    _Buf1 = (undefined8 *)FUN_180002680(puVar4 + 4);
    puVar3 = (undefined8 *)FUN_180002680(param_4);
    uVar1 = puVar3[2];
    if (0xf < (ulonglong)puVar3[3]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    uVar10 = _Buf1[2];
    if (0xf < (ulonglong)_Buf1[3]) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    local_88 = uVar1;
    local_80 = uVar10;
    puVar5 = FUN_180002960(&local_80,&local_88);
    iVar2 = memcmp(_Buf1,puVar3,*puVar5);
    if (iVar2 == 0) {
      if (uVar10 < uVar1) {
LAB_1800211ff:
        FUN_180021730(param_1,param_2,'\0',puVar4,in_stack_ffffffffffffff58,param_5);
        return param_2;
      }
    }
    else if (iVar2 < 0) goto LAB_1800211ff;
    goto LAB_180021501;
  }
  plVar8 = param_3;
  puVar3 = (undefined8 *)FUN_180002680(param_4);
  puVar4 = (undefined8 *)FUN_180002680(plVar8 + 4);
  uVar1 = puVar4[2];
  if (0xf < (ulonglong)puVar4[3]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  uVar10 = puVar3[2];
  uVar9 = puVar3[3];
  if (0xf < uVar9) {
    puVar3 = (undefined8 *)*puVar3;
  }
  local_78 = uVar1;
  local_70 = uVar10;
  puVar5 = FUN_180002960(&local_70,&local_78);
  iVar2 = memcmp(puVar3,puVar4,*puVar5);
  if (iVar2 == 0) {
    if (uVar10 < uVar1) goto LAB_180021299;
    if (uVar10 <= uVar1) goto LAB_180021293;
  }
  else {
LAB_180021293:
    if (iVar2 < 0) {
LAB_180021299:
      if (*(char *)((longlong)param_3 + 0x19) == '\0') {
        plVar8 = param_3;
        plVar6 = (longlong *)*param_3;
        if (*(char *)(*param_3 + 0x19) == '\0') {
          do {
            plVar7 = plVar6;
            plVar6 = (longlong *)plVar7[2];
          } while (*(char *)(plVar7[2] + 0x19) == '\0');
        }
        else {
          do {
            plVar7 = plVar8;
            plVar8 = (longlong *)plVar7[1];
            if (*(char *)((longlong)plVar8 + 0x19) != '\0') break;
          } while (plVar7 == (longlong *)*plVar8);
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            plVar7 = plVar8;
          }
        }
      }
      else {
        plVar7 = (longlong *)param_3[2];
      }
      puVar3 = (undefined8 *)FUN_180002680(plVar7 + 4);
      puVar4 = (undefined8 *)FUN_180002680(param_4);
      uVar10 = puVar4[2];
      uVar9 = puVar4[3];
      if (0xf < uVar9) {
        puVar4 = (undefined8 *)*puVar4;
      }
      uVar1 = puVar3[2];
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      local_68 = uVar10;
      local_60 = uVar1;
      puVar5 = FUN_180002960(&local_60,&local_68);
      iVar2 = memcmp(puVar3,puVar4,*puVar5);
      if (iVar2 == 0) {
        if (uVar1 < uVar10) goto LAB_18002154a;
        if (uVar10 < uVar1) goto LAB_180021336;
      }
      if (iVar2 < 0) {
LAB_18002154a:
        if (*(char *)(plVar7[2] + 0x19) != '\0') {
          FUN_180021730(param_1,param_2,'\0',plVar7,in_stack_ffffffffffffff58,param_5);
          return param_2;
        }
        FUN_180021730(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffff58,param_5);
        return param_2;
      }
    }
  }
LAB_180021336:
  puVar3 = (undefined8 *)FUN_180002680(param_3 + 4);
  puVar4 = (undefined8 *)FUN_180002680(param_4);
  if (0xf < uVar9) {
    puVar4 = (undefined8 *)*puVar4;
  }
  uVar1 = puVar3[2];
  if (0xf < (ulonglong)puVar3[3]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  local_58 = uVar10;
  local_50 = uVar1;
  puVar5 = FUN_180002960(&local_50,&local_58);
  iVar2 = memcmp(puVar3,puVar4,*puVar5);
  if (iVar2 == 0) {
    if (uVar10 <= uVar1) goto LAB_180021501;
  }
  else if (-1 < iVar2) goto LAB_180021501;
  plVar8 = (longlong *)param_3[2];
  plVar6 = param_3;
  if (*(char *)(param_3[2] + 0x19) == '\0') {
    do {
      plVar7 = plVar8;
      plVar8 = (longlong *)*plVar7;
    } while (*(char *)(*plVar7 + 0x19) == '\0');
  }
  else {
    do {
      plVar7 = (longlong *)plVar6[1];
      if (*(char *)((longlong)plVar7 + 0x19) != '\0') break;
      bVar11 = plVar6 == (longlong *)plVar7[2];
      plVar6 = plVar7;
    } while (bVar11);
  }
  if (plVar7 != (longlong *)*param_1) {
    puVar3 = (undefined8 *)FUN_180002680(param_4);
    puVar4 = (undefined8 *)FUN_180002680(plVar7 + 4);
    uVar1 = puVar4[2];
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    uVar10 = puVar3[2];
    if (0xf < (ulonglong)puVar3[3]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    local_48 = uVar1;
    local_40[0] = uVar10;
    puVar5 = FUN_180002960(local_40,&local_48);
    iVar2 = memcmp(puVar3,puVar4,*puVar5);
    if (iVar2 == 0) {
      if (uVar10 < uVar1) goto LAB_1800214c4;
    }
    else if (iVar2 < 0) goto LAB_1800214c4;
LAB_180021501:
    puVar5 = local_40;
    puVar4 = FUN_1800219e0(param_1,puVar5,'\0',param_4,param_5);
    *param_2 = *puVar4;
    return puVar5;
  }
LAB_1800214c4:
  if (*(char *)(param_3[2] + 0x19) != '\0') {
    FUN_180021730(param_1,param_2,'\0',param_3,in_stack_ffffffffffffff58,param_5);
    return param_2;
  }
  FUN_180021730(param_1,param_2,'\x01',plVar7,in_stack_ffffffffffffff58,param_5);
  return param_2;
}

