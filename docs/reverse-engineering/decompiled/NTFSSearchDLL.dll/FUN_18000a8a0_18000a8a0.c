// Function: FUN_18000a8a0
// Address: 18000a8a0
// Size: 427 bytes


undefined8 FUN_18000a8a0(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar6 = *(undefined8 **)(param_1 + 0x140);
  uVar10 = 0;
  puVar11 = (undefined8 *)puVar6[1];
  puVar9 = puVar6;
  if (*(char *)((longlong)puVar11 + 0x19) == '\0') {
    puVar8 = puVar6;
    puVar12 = puVar11;
    do {
      puVar9 = puVar12;
      lVar3 = *(longlong *)(puVar9[4] + 0x10);
      if ((*(longlong *)(param_2 + 0x10) < lVar3) ||
         ((*(longlong *)(param_2 + 0x10) <= lVar3 &&
          (*(uint *)(param_2 + 0xc) < *(uint *)(puVar9[4] + 0xc))))) {
        puVar12 = (undefined8 *)*puVar9;
      }
      else {
        puVar12 = (undefined8 *)puVar9[2];
        puVar9 = puVar8;
      }
      puVar8 = puVar9;
    } while (*(char *)((longlong)puVar12 + 0x19) == '\0');
    do {
      lVar3 = *(longlong *)(puVar11[4] + 0x10);
      if ((lVar3 < *(longlong *)(param_2 + 0x10)) ||
         ((lVar3 <= *(longlong *)(param_2 + 0x10) &&
          (*(uint *)(puVar11[4] + 0xc) < *(uint *)(param_2 + 0xc))))) {
        puVar12 = (undefined8 *)puVar11[2];
      }
      else {
        puVar12 = (undefined8 *)*puVar11;
        puVar6 = puVar11;
      }
      puVar11 = puVar12;
    } while (*(char *)((longlong)puVar12 + 0x19) == '\0');
  }
  while (puVar6 != puVar9) {
    lVar3 = puVar6[4];
    if ((*(longlong *)(param_2 + 0x60) == *(longlong *)(lVar3 + 0x60)) &&
       (*(longlong *)(param_2 + 0x90) == *(longlong *)(lVar3 + 0x90))) {
      uVar10 = 1;
    }
    uVar2 = *(uint *)(lVar3 + 0x9c);
    if ((uVar2 & 1) == 0) {
      if ((((((uVar2 & 8) != 0) && (*(int *)(lVar3 + 0xc) == *(int *)(param_2 + 0xc))) &&
           (*(longlong *)(lVar3 + 200) != -1)) &&
          ((*(longlong *)(lVar3 + 200) == *(longlong *)(param_2 + 200) &&
           (*(longlong *)(lVar3 + 0x18) == *(longlong *)(param_2 + 0x18))))) &&
         ((*(int *)(lVar3 + 0x58) == *(int *)(param_2 + 0x58) &&
          (*(longlong *)(lVar3 + 0x10) == *(longlong *)(param_2 + 0x10))))) {
        lVar4 = *(longlong *)(lVar3 + 0xa8);
        lVar5 = *(longlong *)(param_2 + 0xa8);
        lVar7 = lVar4 - lVar5;
        if (lVar4 <= lVar5) {
          lVar7 = lVar5 - lVar4;
        }
        if (lVar7 < 2) {
          uVar10 = 1;
        }
      }
    }
    else {
      uVar10 = 1;
    }
    *(uint *)(lVar3 + 0x9c) = uVar2 | 2;
    puVar11 = (undefined8 *)puVar6[2];
    if (*(char *)((longlong)puVar11 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar11 + 0x19);
      puVar6 = puVar11;
      puVar11 = (undefined8 *)*puVar11;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)*puVar11 + 0x19);
        puVar6 = puVar11;
        puVar11 = (undefined8 *)*puVar11;
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
      puVar12 = (undefined8 *)puVar6[1];
      puVar11 = puVar6;
      while ((puVar6 = puVar12, cVar1 == '\0' && (puVar11 == (undefined8 *)puVar6[2]))) {
        cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
        puVar12 = (undefined8 *)puVar6[1];
        puVar11 = puVar6;
      }
    }
  }
  return uVar10;
}

