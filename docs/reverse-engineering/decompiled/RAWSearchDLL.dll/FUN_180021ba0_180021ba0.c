// Function: FUN_180021ba0
// Address: 180021ba0
// Size: 469 bytes


longlong * FUN_180021ba0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_res20;
  longlong *local_48;
  longlong *local_40;
  
  plVar11 = (longlong *)*param_1;
  local_40 = plVar11 + 1;
  plVar8 = plVar11;
  if (*(char *)(plVar11[1] + 0x19) == '\0') {
    plVar5 = (longlong *)param_3[2];
    uVar1 = param_3[3];
    plVar6 = (longlong *)plVar11[1];
    local_res8 = plVar11;
    local_res10 = param_2;
    do {
      plVar8 = plVar6 + 4;
      puVar9 = param_3;
      if (0xf < uVar1) {
        puVar9 = (undefined8 *)*param_3;
      }
      uVar2 = plVar6[7];
      plVar7 = (longlong *)plVar6[6];
      plVar10 = plVar8;
      if (0xf < uVar2) {
        plVar10 = (longlong *)*plVar8;
      }
      local_res20 = plVar5;
      local_48 = plVar7;
      puVar4 = FUN_180001e40((ulonglong *)&local_48,(ulonglong *)&local_res20);
      iVar3 = memcmp(plVar10,puVar9,*puVar4);
      if (iVar3 == 0) {
        if (plVar7 < plVar5) goto LAB_180021ca0;
LAB_180021c4a:
        if (*(char *)((longlong)plVar11 + 0x19) != '\0') {
          if (0xf < uVar2) {
            plVar8 = (longlong *)*plVar8;
          }
          puVar9 = param_3;
          if (0xf < uVar1) {
            puVar9 = (undefined8 *)*param_3;
          }
          local_res8 = plVar7;
          local_res20 = plVar5;
          puVar4 = FUN_180001e40((ulonglong *)&local_res20,(ulonglong *)&local_res8);
          iVar3 = memcmp(puVar9,plVar8,*puVar4);
          if (iVar3 == 0) {
            if (plVar5 < plVar7) {
LAB_180021cad:
              plVar11 = plVar6;
            }
          }
          else if (iVar3 < 0) goto LAB_180021cad;
        }
        plVar7 = (longlong *)*plVar6;
        local_res8 = plVar6;
      }
      else {
        if (-1 < iVar3) goto LAB_180021c4a;
LAB_180021ca0:
        plVar7 = (longlong *)plVar6[2];
      }
      plVar6 = plVar7;
      plVar8 = local_res8;
      param_2 = local_res10;
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
  }
  plVar5 = local_40;
  if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
    plVar5 = plVar11;
  }
  if (*(char *)(*plVar5 + 0x19) == '\0') {
    uVar1 = param_3[3];
    plVar6 = (longlong *)param_3[2];
    plVar5 = (longlong *)*plVar5;
    do {
      plVar7 = plVar5 + 4;
      plVar10 = (longlong *)plVar5[6];
      if (0xf < (ulonglong)plVar5[7]) {
        plVar7 = (longlong *)*plVar7;
      }
      puVar9 = param_3;
      if (0xf < uVar1) {
        puVar9 = (undefined8 *)*param_3;
      }
      local_res8 = plVar6;
      local_res10 = plVar10;
      puVar4 = FUN_180001e40((ulonglong *)&local_res8,(ulonglong *)&local_res10);
      iVar3 = memcmp(puVar9,plVar7,*puVar4);
      if (iVar3 == 0) {
        if (plVar6 < plVar10) goto LAB_180021d6d;
LAB_180021d3e:
        plVar7 = (longlong *)plVar5[2];
      }
      else {
        if (-1 < iVar3) goto LAB_180021d3e;
LAB_180021d6d:
        plVar7 = (longlong *)*plVar5;
        plVar11 = plVar5;
      }
      plVar5 = plVar7;
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
  }
  *param_2 = (longlong)plVar8;
  param_2[1] = (longlong)plVar11;
  return param_2;
}

