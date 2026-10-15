// Function: FUN_180020f00
// Address: 180020f00
// Size: 286 bytes


undefined8 * FUN_180020f00(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong local_res8;
  ulonglong local_res18;
  
  puVar7 = (undefined8 *)*param_1;
  puVar10 = puVar7;
  if (*(char *)((longlong)puVar7[1] + 0x19) == '\0') {
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    puVar8 = (undefined8 *)puVar7[1];
    do {
      plVar11 = puVar8 + 4;
      puVar9 = param_2;
      if (0xf < uVar2) {
        puVar9 = (undefined8 *)*param_2;
      }
      uVar3 = puVar8[6];
      if (0xf < (ulonglong)puVar8[7]) {
        plVar11 = (longlong *)*plVar11;
      }
      local_res8 = uVar1;
      local_res18 = uVar3;
      puVar6 = FUN_180001e40(&local_res18,&local_res8);
      iVar5 = memcmp(plVar11,puVar9,*puVar6);
      if (iVar5 == 0) {
        if (uVar3 < uVar1) goto LAB_180021009;
LAB_180020f89:
        puVar9 = (undefined8 *)*puVar8;
        puVar10 = puVar8;
      }
      else {
        if (-1 < iVar5) goto LAB_180020f89;
LAB_180021009:
        puVar9 = (undefined8 *)puVar8[2];
      }
      puVar8 = puVar9;
    } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
  }
  if (puVar10 != puVar7) {
    plVar11 = puVar10 + 4;
    uVar1 = puVar10[6];
    if (0xf < (ulonglong)puVar10[7]) {
      plVar11 = (longlong *)*plVar11;
    }
    uVar2 = param_2[2];
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    local_res8 = uVar1;
    local_res18 = uVar2;
    puVar6 = FUN_180001e40(&local_res18,&local_res8);
    iVar5 = memcmp(param_2,plVar11,*puVar6);
    if (iVar5 == 0) {
      if (uVar1 <= uVar2) {
LAB_180021011:
        return puVar10 + 8;
      }
    }
    else if (-1 < iVar5) goto LAB_180021011;
  }
  std::_Xout_of_range("invalid map<K, T> key");
  pcVar4 = (code *)swi(3);
  puVar7 = (undefined8 *)(*pcVar4)();
  return puVar7;
}

