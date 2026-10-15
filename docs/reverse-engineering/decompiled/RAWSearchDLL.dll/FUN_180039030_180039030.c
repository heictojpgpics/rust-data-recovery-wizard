// Function: FUN_180039030
// Address: 180039030
// Size: 132 bytes


void FUN_180039030(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint local_res10 [6];
  
  puVar4 = *(undefined8 **)(param_1 + 0x160);
  uVar2 = *(uint *)(param_1 + 0x234);
  cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
  puVar7 = puVar4;
  puVar6 = (undefined8 *)puVar4[1];
  while (cVar1 == '\0') {
    if (*(uint *)((longlong)puVar6 + 0x1c) < param_2) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar4) || (param_2 < *(uint *)((longlong)puVar7 + 0x1c))) {
    puVar7 = puVar4;
  }
  if (puVar7 == puVar4) {
    iVar3 = *(int *)(param_1 + 8);
    local_res10[0] = param_2;
    plVar5 = FUN_18003aae0((longlong *)(param_1 + 0x160),local_res10);
    *(uint *)plVar5 = iVar3 + param_2 / uVar2;
  }
  return;
}

