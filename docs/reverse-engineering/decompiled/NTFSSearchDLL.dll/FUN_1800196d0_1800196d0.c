// Function: FUN_1800196d0
// Address: 1800196d0
// Size: 457 bytes


undefined8 * FUN_1800196d0(longlong param_1,longlong param_2)

{
  LPCWSTR pWVar1;
  ulonglong uVar2;
  void *pvVar3;
  LPSTR pCVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong local_res10;
  undefined8 *local_res18;
  ulonglong local_38;
  undefined8 *local_30;
  undefined8 local_28 [2];
  
  if (param_2 == 0) {
    return (undefined8 *)0x0;
  }
  local_res18 = (undefined8 *)FUN_18002be40(0x38);
  pWVar1 = (LPCWSTR)(param_2 + 0x3c);
  local_res10 = 0;
  *(undefined4 *)(local_res18 + 4) = *(undefined4 *)(param_2 + 0x34);
  *local_res18 = *(undefined8 *)(param_2 + 8);
  local_res18[1] = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(local_res18 + 2) = *(undefined4 *)(param_2 + 0x28);
  local_res18[3] = *(undefined8 *)(param_2 + 0x20);
  if (pWVar1 == (LPCWSTR)0x0) {
LAB_180019768:
    if (pWVar1 == (LPCWSTR)0x0) goto LAB_1800197bc;
    plVar6 = &local_res10;
    pCVar4 = FUN_1800066f0(pWVar1,(ulonglong)(*(ushort *)(param_2 + 0x38) >> 1),plVar6);
    if (pCVar4 == (LPSTR)0x0) goto LAB_1800197bc;
  }
  else {
    plVar6 = &local_res10;
    pCVar4 = FUN_180006610(pWVar1,(ulonglong)(*(ushort *)(param_2 + 0x38) >> 1),plVar6);
    if (pCVar4 == (LPSTR)0x0) goto LAB_180019768;
  }
  local_res18[5] = pCVar4;
  *(undefined2 *)(local_res18 + 6) = (undefined2)local_res10;
  if ((*(char *)(param_1 + 0x80) != '\0') || ((*(uint *)(param_2 + 0x28) & 0x200) != 0)) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    local_38 = uVar2 & 0xffffffffffff;
    local_30 = local_res18;
    plVar5 = (longlong *)FUN_18001a170((undefined8 *)(param_1 + 0x30),&local_38);
    FUN_18001a1c0((longlong *)(param_1 + 0x30),local_28,plVar6,(ulonglong *)(plVar5 + 4),plVar5);
    if ((*(byte *)(local_res18 + 4) & 0x10) != 0) {
      local_30 = local_res18;
      puVar8 = local_res18;
      local_38 = uVar2 << 0x10 | uVar2 >> 0x30;
      plVar6 = (longlong *)FUN_1800151c0((undefined8 *)(param_1 + 0x68),(longlong)&local_38);
      FUN_1800144c0((longlong *)(param_1 + 0x68),local_28,puVar8,plVar6 + 4,plVar6);
    }
    pvVar3 = *(void **)(param_1 + 0x48);
    plVar6 = (longlong *)(param_1 + 0x40);
    if (*(void **)(param_1 + 0x50) != pvVar3) {
      puVar8 = local_res18;
      puVar7 = (undefined8 *)FUN_180001100(plVar6,pvVar3);
      *puVar7 = puVar8;
      plVar6[1] = plVar6[1] + 8;
      return local_res18;
    }
    FUN_180013a20(plVar6,pvVar3,&local_res18);
    return local_res18;
  }
  free((void *)local_res18[5]);
LAB_1800197bc:
  free(local_res18);
  return (undefined8 *)0x0;
}

