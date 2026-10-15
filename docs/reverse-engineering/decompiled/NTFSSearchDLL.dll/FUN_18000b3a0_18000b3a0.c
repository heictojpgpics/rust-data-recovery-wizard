// Function: FUN_18000b3a0
// Address: 18000b3a0
// Size: 273 bytes


undefined8 FUN_18000b3a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar5 = *(undefined8 **)(param_1 + 0x140);
  puVar8 = (undefined8 *)puVar5[1];
  puVar7 = puVar5;
  if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
    puVar6 = puVar5;
    puVar9 = puVar8;
    do {
      puVar7 = puVar9;
      lVar4 = *(longlong *)(puVar7[4] + 0x10);
      if ((*(longlong *)(param_2 + 0x10) < lVar4) ||
         ((*(longlong *)(param_2 + 0x10) <= lVar4 &&
          (*(uint *)(param_2 + 0xc) < *(uint *)(puVar7[4] + 0xc))))) {
        puVar9 = (undefined8 *)*puVar7;
      }
      else {
        puVar9 = (undefined8 *)puVar7[2];
        puVar7 = puVar6;
      }
      puVar6 = puVar7;
    } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
    do {
      lVar4 = *(longlong *)(puVar8[4] + 0x10);
      if ((lVar4 < *(longlong *)(param_2 + 0x10)) ||
         ((lVar4 <= *(longlong *)(param_2 + 0x10) &&
          (*(uint *)(puVar8[4] + 0xc) < *(uint *)(param_2 + 0xc))))) {
        puVar9 = (undefined8 *)puVar8[2];
      }
      else {
        puVar9 = (undefined8 *)*puVar8;
        puVar5 = puVar8;
      }
      puVar8 = puVar9;
    } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
  }
  if (puVar5 != puVar7) {
    do {
      lVar4 = puVar5[4];
      puVar2 = (uint *)(lVar4 + 0x9c);
      *puVar2 = *puVar2 | 0x20;
      plVar1 = (longlong *)(lVar4 + 0x28);
      *plVar1 = *plVar1 + 1;
      puVar8 = (undefined8 *)puVar5[2];
      if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
        cVar3 = *(char *)((longlong)*puVar8 + 0x19);
        puVar5 = puVar8;
        puVar8 = (undefined8 *)*puVar8;
        while (cVar3 == '\0') {
          cVar3 = *(char *)((longlong)*puVar8 + 0x19);
          puVar5 = puVar8;
          puVar8 = (undefined8 *)*puVar8;
        }
      }
      else {
        cVar3 = *(char *)((longlong)puVar5[1] + 0x19);
        puVar9 = (undefined8 *)puVar5[1];
        puVar8 = puVar5;
        while ((puVar5 = puVar9, cVar3 == '\0' && (puVar8 == (undefined8 *)puVar5[2]))) {
          cVar3 = *(char *)((longlong)puVar5[1] + 0x19);
          puVar9 = (undefined8 *)puVar5[1];
          puVar8 = puVar5;
        }
      }
    } while (puVar5 != puVar7);
    return 1;
  }
  return 0;
}

