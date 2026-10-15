// Function: FUN_180011a10
// Address: 180011a10
// Size: 609 bytes


undefined8 *
FUN_180011a10(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             longlong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_res8;
  undefined8 in_stack_ffffffffffffff88;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48 [4];
  
  local_48[1] = 0xfffffffffffffffe;
  uVar9 = 1;
  plVar8 = (longlong *)((longlong *)*param_1)[1];
  plVar10 = (longlong *)*param_1;
  local_res8 = param_1;
  while (*(char *)((longlong)plVar8 + 0x19) == '\0') {
    plVar10 = plVar8 + 4;
    uVar1 = plVar8[6];
    if (0xf < (ulonglong)plVar8[7]) {
      plVar10 = (longlong *)*plVar10;
    }
    uVar2 = param_4[2];
    puVar7 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar7 = (undefined8 *)*param_4;
    }
    local_60 = uVar1;
    local_58 = uVar2;
    puVar6 = FUN_180001e40(&local_58,&local_60);
    uVar4 = memcmp(puVar7,plVar10,*puVar6);
    if (uVar4 == 0) {
      if (uVar2 < uVar1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar1 < uVar2);
      }
    }
    uVar9 = uVar4 >> 0x1f;
    plVar10 = plVar8;
    if ((int)uVar4 < 0) {
      plVar8 = (longlong *)*plVar8;
    }
    else {
      plVar8 = (longlong *)plVar8[2];
    }
  }
  plVar8 = plVar10;
  if ((char)uVar9 != '\0') {
    if (plVar10 == *(longlong **)*local_res8) {
      puVar7 = FUN_180011d80(local_res8,&local_res8,'\x01',plVar10,in_stack_ffffffffffffff88,param_5
                            );
      *param_2 = *puVar7;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
      plVar11 = plVar10;
      plVar3 = (longlong *)*plVar10;
      if (*(char *)(*plVar10 + 0x19) == '\0') {
        do {
          plVar8 = plVar3;
          plVar3 = (longlong *)plVar8[2];
        } while (*(char *)(plVar8[2] + 0x19) == '\0');
      }
      else {
        do {
          plVar8 = plVar11;
          plVar11 = (longlong *)plVar8[1];
          if (*(char *)((longlong)plVar11 + 0x19) != '\0') break;
        } while (plVar8 == (longlong *)*plVar11);
        if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
          plVar8 = plVar11;
        }
      }
    }
    else {
      plVar8 = (longlong *)plVar10[2];
    }
  }
  plVar11 = plVar8 + 4;
  uVar1 = param_4[2];
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  uVar2 = plVar8[6];
  if (0xf < (ulonglong)plVar8[7]) {
    plVar11 = (longlong *)*plVar11;
  }
  local_50 = uVar1;
  local_48[0] = uVar2;
  puVar6 = FUN_180001e40(local_48,&local_50);
  iVar5 = memcmp(plVar11,param_4,*puVar6);
  if (iVar5 == 0) {
    if (uVar1 <= uVar2) {
LAB_180011c1c:
      local_res8 = param_5 + 4;
      FUN_180001630(local_res8);
      local_48[2] = 0x48;
      free(param_5);
      *param_2 = plVar8;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  else if (-1 < iVar5) goto LAB_180011c1c;
  puVar7 = FUN_180011d80(local_res8,local_48,(char)uVar9,plVar10,in_stack_ffffffffffffff88,param_5);
  *param_2 = *puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

