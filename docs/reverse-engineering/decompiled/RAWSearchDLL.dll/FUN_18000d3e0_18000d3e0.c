// Function: FUN_18000d3e0
// Address: 18000d3e0
// Size: 653 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_18000d3e0(longlong param_1,ushort *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  char cVar1;
  ushort uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 local_48;
  int local_40;
  undefined8 local_38 [2];
  
  if (*(int *)param_2 == 0) {
    return (longlong *)0x0;
  }
  puVar5 = FUN_180006a80(param_1,param_2,param_3,param_4);
  uVar2 = *param_2;
  puVar12 = *(undefined8 **)(puVar5 + 0x20);
  puVar9 = (undefined8 *)puVar12[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x19);
  puVar3 = puVar12;
  puVar11 = puVar9;
  while (cVar1 == '\0') {
    if (*(ushort *)(puVar11 + 4) < uVar2) {
      puVar6 = (undefined8 *)puVar11[2];
      puVar11 = puVar3;
    }
    else {
      if ((*(char *)((longlong)puVar12 + 0x19) != '\0') && (uVar2 < *(ushort *)(puVar11 + 4))) {
        puVar12 = puVar11;
      }
      puVar6 = (undefined8 *)*puVar11;
    }
    puVar3 = puVar11;
    puVar11 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x19);
  }
  if (*(char *)((longlong)puVar12 + 0x19) == '\0') {
    puVar9 = (undefined8 *)*puVar12;
  }
  cVar1 = *(char *)((longlong)puVar9 + 0x19);
  while (cVar1 == '\0') {
    if (uVar2 < *(ushort *)(puVar9 + 4)) {
      puVar11 = (undefined8 *)*puVar9;
      puVar12 = puVar9;
    }
    else {
      puVar11 = (undefined8 *)puVar9[2];
    }
    puVar9 = puVar11;
    cVar1 = *(char *)((longlong)puVar11 + 0x19);
  }
  do {
    if (puVar3 == puVar12) {
      return (longlong *)0x0;
    }
    plVar10 = (longlong *)puVar3[5];
    lVar7 = (**(code **)(*plVar10 + 0x40))(plVar10);
    lVar13 = param_3;
    if (lVar7 == 0) {
      iVar4 = (**(code **)(*plVar10 + 0x10))(plVar10,param_2);
      if (iVar4 == 1) {
LAB_18000d4ef:
        local_40 = *(int *)(param_3 + 0x18);
        if (local_40 == 0) {
          local_40 = (int)plVar10[1];
        }
        lVar7 = *(longlong *)(param_1 + 0xd0);
        if (lVar7 == 0) {
          return plVar10;
        }
        local_48 = param_4;
        plVar8 = (longlong *)FUN_18000e980((undefined8 *)(lVar7 + 0x10038),&local_48);
        FUN_18000e9d0((longlong *)(lVar7 + 0x10038),local_38,lVar13,plVar8 + 4,plVar8);
        return plVar10;
      }
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(*plVar10 + 0x40))(plVar10);
      iVar4 = (**(code **)*puVar9)
                        (puVar9,param_2,param_3,(longlong)*(int *)(param_1 + 0xf0),param_4,*param_5,
                         param_5[1]);
      if (iVar4 != 0) goto LAB_18000d4ef;
      lVar13 = param_3;
      iVar4 = (**(code **)(*plVar10 + 0x10))(plVar10,param_2);
      if (iVar4 != 0) {
        iVar4 = *(int *)(param_3 + 0x18);
        if (*(int *)(param_3 + 0x18) == 0) {
          iVar4 = _DAT_00000008;
        }
        lVar7 = *(longlong *)(param_1 + 0xd0);
        if (lVar7 != 0) {
          local_48 = param_4;
          local_40 = iVar4;
          plVar10 = (longlong *)FUN_18000e980((undefined8 *)(lVar7 + 0x10038),&local_48);
          FUN_18000e9d0((longlong *)(lVar7 + 0x10038),local_38,lVar13,plVar10 + 4,plVar10);
        }
      }
    }
    puVar9 = (undefined8 *)puVar3[2];
    if (*(char *)((longlong)puVar9 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar9 + 0x19);
      puVar3 = puVar9;
      puVar9 = (undefined8 *)*puVar9;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)*puVar9 + 0x19);
        puVar3 = puVar9;
        puVar9 = (undefined8 *)*puVar9;
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
      puVar11 = (undefined8 *)puVar3[1];
      puVar9 = puVar3;
      while ((puVar3 = puVar11, cVar1 == '\0' && (puVar9 == (undefined8 *)puVar3[2]))) {
        cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
        puVar11 = (undefined8 *)puVar3[1];
        puVar9 = puVar3;
      }
    }
  } while( true );
}

