// Function: FUN_180028c00
// Address: 180028c00
// Size: 1019 bytes


void FUN_180028c00(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  
  puVar7 = (uint *)(param_2 + 8);
  iVar6 = 0;
  lVar5 = 0;
  do {
    uVar1 = puVar7[-2];
    uVar4 = param_3 >> 0x1f;
    if (uVar1 < 0xfffffffe) {
      *(uint *)(param_1 + 600) = uVar1;
      if (param_3 == 0x200) {
        uVar2 = uVar1 + 1;
LAB_180028c63:
        iVar3 = uVar2 * *(int *)(param_1 + 0x230) + *(int *)(param_1 + 8);
      }
      else {
        uVar2 = (int)(param_3 + (uVar4 & 0x1ff)) >> 9;
        if (uVar2 != 0) {
          uVar2 = (uVar1 + 1) / uVar2;
          goto LAB_180028c63;
        }
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x244) = iVar3;
      iVar3 = *(int *)(param_1 + 0x24c);
      *(int *)(param_1 + 0x24c) = iVar3 + 1;
      if (lVar5 != 0x7f) {
        *(int *)(param_1 + 0x24c) = iVar3 + 2;
      }
    }
    uVar1 = puVar7[-1];
    if (uVar1 < 0xfffffffe) {
      *(uint *)(param_1 + 600) = uVar1;
      if (param_3 == 0x200) {
        uVar2 = uVar1 + 1;
LAB_180028cd2:
        iVar3 = uVar2 * *(int *)(param_1 + 0x230) + *(int *)(param_1 + 8);
      }
      else {
        uVar2 = (int)(param_3 + (uVar4 & 0x1ff)) >> 9;
        if (uVar2 != 0) {
          uVar2 = (uVar1 + 1) / uVar2;
          goto LAB_180028cd2;
        }
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x244) = iVar3;
      iVar3 = *(int *)(param_1 + 0x24c);
      *(int *)(param_1 + 0x24c) = iVar3 + 1;
      if (iVar6 != 0x7e) {
        *(int *)(param_1 + 0x24c) = iVar3 + 2;
      }
    }
    uVar1 = *puVar7;
    if (uVar1 < 0xfffffffe) {
      *(uint *)(param_1 + 600) = uVar1;
      if (param_3 == 0x200) {
        uVar2 = uVar1 + 1;
LAB_180028d3f:
        iVar3 = uVar2 * *(int *)(param_1 + 0x230) + *(int *)(param_1 + 8);
      }
      else {
        uVar2 = (int)(param_3 + (uVar4 & 0x1ff)) >> 9;
        if (uVar2 != 0) {
          uVar2 = (uVar1 + 1) / uVar2;
          goto LAB_180028d3f;
        }
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x244) = iVar3;
      iVar3 = *(int *)(param_1 + 0x24c);
      *(int *)(param_1 + 0x24c) = iVar3 + 1;
      if (iVar6 != 0x7d) {
        *(int *)(param_1 + 0x24c) = iVar3 + 2;
      }
    }
    uVar1 = puVar7[1];
    if (uVar1 < 0xfffffffe) {
      *(uint *)(param_1 + 600) = uVar1;
      if (param_3 == 0x200) {
        uVar2 = uVar1 + 1;
LAB_180028dad:
        iVar3 = uVar2 * *(int *)(param_1 + 0x230) + *(int *)(param_1 + 8);
      }
      else {
        uVar2 = (int)(param_3 + (uVar4 & 0x1ff)) >> 9;
        if (uVar2 != 0) {
          uVar2 = (uVar1 + 1) / uVar2;
          goto LAB_180028dad;
        }
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x244) = iVar3;
      iVar3 = *(int *)(param_1 + 0x24c);
      *(int *)(param_1 + 0x24c) = iVar3 + 1;
      if (iVar6 != 0x7c) {
        *(int *)(param_1 + 0x24c) = iVar3 + 2;
      }
    }
    uVar1 = puVar7[2];
    if (uVar1 < 0xfffffffe) {
      *(uint *)(param_1 + 600) = uVar1;
      if (param_3 == 0x200) {
        uVar2 = uVar1 + 1;
LAB_180028e1b:
        iVar3 = uVar2 * *(int *)(param_1 + 0x230) + *(int *)(param_1 + 8);
      }
      else {
        uVar2 = (int)(param_3 + (uVar4 & 0x1ff)) >> 9;
        if (uVar2 != 0) {
          uVar2 = (uVar1 + 1) / uVar2;
          goto LAB_180028e1b;
        }
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x244) = iVar3;
      iVar3 = *(int *)(param_1 + 0x24c);
      *(int *)(param_1 + 0x24c) = iVar3 + 1;
      if (iVar6 != 0x7b) {
        *(int *)(param_1 + 0x24c) = iVar3 + 2;
      }
    }
    uVar1 = puVar7[3];
    if (uVar1 < 0xfffffffe) {
      *(uint *)(param_1 + 600) = uVar1;
      if (param_3 == 0x200) {
        uVar2 = uVar1 + 1;
LAB_180028e89:
        iVar3 = uVar2 * *(int *)(param_1 + 0x230) + *(int *)(param_1 + 8);
      }
      else {
        uVar2 = (int)(param_3 + (uVar4 & 0x1ff)) >> 9;
        if (uVar2 != 0) {
          uVar2 = (uVar1 + 1) / uVar2;
          goto LAB_180028e89;
        }
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x244) = iVar3;
      iVar3 = *(int *)(param_1 + 0x24c);
      *(int *)(param_1 + 0x24c) = iVar3 + 1;
      if (iVar6 != 0x7a) {
        *(int *)(param_1 + 0x24c) = iVar3 + 2;
      }
    }
    uVar1 = puVar7[4];
    if (uVar1 < 0xfffffffe) {
      *(uint *)(param_1 + 600) = uVar1;
      if (param_3 == 0x200) {
        uVar2 = uVar1 + 1;
LAB_180028ef7:
        iVar3 = uVar2 * *(int *)(param_1 + 0x230) + *(int *)(param_1 + 8);
      }
      else {
        uVar2 = (int)(param_3 + (uVar4 & 0x1ff)) >> 9;
        if (uVar2 != 0) {
          uVar2 = (uVar1 + 1) / uVar2;
          goto LAB_180028ef7;
        }
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x244) = iVar3;
      iVar3 = *(int *)(param_1 + 0x24c);
      *(int *)(param_1 + 0x24c) = iVar3 + 1;
      if (iVar6 != 0x79) {
        *(int *)(param_1 + 0x24c) = iVar3 + 2;
      }
    }
    uVar1 = puVar7[5];
    if (uVar1 < 0xfffffffe) {
      *(uint *)(param_1 + 600) = uVar1;
      if (param_3 == 0x200) {
        uVar2 = uVar1 + 1;
LAB_180028f65:
        iVar3 = uVar2 * *(int *)(param_1 + 0x230) + *(int *)(param_1 + 8);
      }
      else {
        uVar2 = (int)(param_3 + (uVar4 & 0x1ff)) >> 9;
        if (uVar2 != 0) {
          uVar2 = (uVar1 + 1) / uVar2;
          goto LAB_180028f65;
        }
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x244) = iVar3;
      iVar3 = *(int *)(param_1 + 0x24c);
      *(int *)(param_1 + 0x24c) = iVar3 + 1;
      if (iVar6 != 0x78) {
        *(int *)(param_1 + 0x24c) = iVar3 + 2;
      }
    }
    iVar6 = iVar6 + 8;
    lVar5 = lVar5 + 8;
    puVar7 = puVar7 + 8;
  } while (lVar5 < 0x80);
  iVar6 = 0;
  if (uVar1 != 0xffffffff) {
    if (param_3 == 0x200) {
      uVar4 = uVar1 + 1;
    }
    else {
      uVar4 = (int)(param_3 + (uVar4 & 0x1ff)) >> 9;
      iVar6 = 0;
      if (uVar4 == 0) goto LAB_180028fe5;
      uVar4 = (uVar1 + 1) / uVar4;
    }
    iVar6 = uVar4 * *(int *)(param_1 + 0x230) + *(int *)(param_1 + 8);
  }
LAB_180028fe5:
  *(int *)(param_1 + 0x240) = iVar6;
  return;
}

