// Function: FUN_1800219e0
// Address: 1800219e0
// Size: 790 bytes


undefined8 *
FUN_1800219e0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 param_4,
             longlong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *local_res8;
  undefined8 in_stack_ffffffffffffff78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48 [4];
  
  local_48[1] = 0xfffffffffffffffe;
  uVar11 = 1;
  plVar10 = (longlong *)((longlong *)*param_1)[1];
  plVar13 = (longlong *)*param_1;
  local_res8 = param_1;
  while (*(char *)((longlong)plVar10 + 0x19) == '\0') {
    if (param_3 == '\0') {
      puVar7 = (undefined8 *)FUN_180002680(param_4);
      puVar8 = (undefined8 *)FUN_180002680(plVar10 + 4);
      uVar1 = puVar8[2];
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      uVar2 = puVar7[2];
      if (0xf < (ulonglong)puVar7[3]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      local_58 = uVar1;
      local_50 = uVar2;
      puVar9 = FUN_180002960(&local_50,&local_58);
      uVar5 = memcmp(puVar7,puVar8,*puVar9);
      if (uVar5 == 0) {
        if (uVar2 < uVar1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar1 < uVar2);
        }
      }
    }
    else {
      uVar12 = param_4;
      puVar7 = (undefined8 *)FUN_180002680(plVar10 + 4);
      puVar8 = (undefined8 *)FUN_180002680(uVar12);
      uVar1 = puVar8[2];
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      uVar2 = puVar7[2];
      if (0xf < (ulonglong)puVar7[3]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      local_68 = uVar1;
      local_60 = uVar2;
      puVar9 = FUN_180002960(&local_60,&local_68);
      uVar5 = memcmp(puVar7,puVar8,*puVar9);
      if (uVar5 == 0) {
        if (uVar2 < uVar1) {
          uVar5 = 0;
          goto LAB_180021b23;
        }
        uVar5 = (uint)(uVar1 < uVar2);
      }
      uVar5 = ~uVar5;
    }
LAB_180021b23:
    uVar11 = uVar5 >> 0x1f;
    plVar13 = plVar10;
    if ((int)uVar5 < 0) {
      plVar10 = (longlong *)*plVar10;
    }
    else {
      plVar10 = (longlong *)plVar10[2];
    }
  }
  plVar10 = plVar13;
  if ((char)uVar11 != '\0') {
    if (plVar13 == *(longlong **)*local_res8) {
      puVar8 = FUN_180021730(local_res8,&local_res8,'\x01',plVar13,in_stack_ffffffffffffff78,param_5
                            );
      *param_2 = *puVar8;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
      plVar4 = (longlong *)*plVar13;
      plVar3 = plVar13;
      if (*(char *)(*plVar13 + 0x19) == '\0') {
        do {
          plVar10 = plVar4;
          plVar4 = (longlong *)plVar10[2];
        } while (*(char *)(plVar10[2] + 0x19) == '\0');
      }
      else {
        do {
          plVar10 = plVar3;
          plVar3 = (longlong *)plVar10[1];
          if (*(char *)((longlong)plVar3 + 0x19) != '\0') break;
        } while (plVar10 == (longlong *)*plVar3);
        if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
          plVar10 = plVar3;
        }
      }
    }
    else {
      plVar10 = (longlong *)plVar13[2];
    }
  }
  puVar7 = (undefined8 *)FUN_180002680(plVar10 + 4);
  puVar8 = (undefined8 *)FUN_180002680(param_4);
  uVar1 = puVar8[2];
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  uVar2 = puVar7[2];
  if (0xf < (ulonglong)puVar7[3]) {
    puVar7 = (undefined8 *)*puVar7;
  }
  local_70 = uVar2;
  local_48[0] = uVar1;
  puVar9 = FUN_180002960(&local_70,local_48);
  iVar6 = memcmp(puVar7,puVar8,*puVar9);
  if (iVar6 == 0) {
    if (uVar1 <= uVar2) {
LAB_180021c9d:
      local_res8 = param_5 + 4;
      FUN_1800025f0(local_res8);
      local_48[2] = 0x48;
      free(param_5);
      *param_2 = plVar10;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  else if (-1 < iVar6) goto LAB_180021c9d;
  puVar8 = FUN_180021730(local_res8,&local_70,(char)uVar11,plVar13,in_stack_ffffffffffffff78,param_5
                        );
  *param_2 = *puVar8;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

