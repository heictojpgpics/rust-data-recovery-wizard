// Function: FUN_180009060
// Address: 180009060
// Size: 742 bytes


void FUN_180009060(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)0x0;
  if (*(void **)(param_1 + 0xc0) != (void *)0x0) {
    free(*(void **)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0xe8);
  if (plVar4 != (longlong *)0x0) {
    FUN_180026720(plVar4);
    free(plVar4);
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0xf0);
  if (plVar4 != (longlong *)0x0) {
    FUN_180026720(plVar4);
    free(plVar4);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0xf8);
  if (plVar4 != (longlong *)0x0) {
    FUN_180028a00(plVar4);
    free(plVar4);
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
    free(*(void **)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  uVar7 = 0x20;
  plVar2 = (longlong *)FUN_18002be40(0x20);
  plVar4 = plVar8;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = 0;
    plVar2[1] = 0;
    lVar3 = FUN_180012c00(uVar7,0,0);
    *plVar2 = lVar3;
    plVar2[2] = 0;
    plVar2[3] = 0;
    lVar3 = FUN_180012e40(uVar7,0,0);
    plVar2[2] = lVar3;
    plVar4 = plVar2;
  }
  *(longlong **)(param_1 + 0xe8) = plVar4;
  uVar7 = 0x20;
  plVar2 = (longlong *)FUN_18002be40(0x20);
  plVar4 = plVar8;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = 0;
    plVar2[1] = 0;
    lVar3 = FUN_180012c00(uVar7,0,0);
    *plVar2 = lVar3;
    plVar2[2] = 0;
    plVar2[3] = 0;
    lVar3 = FUN_180012e40(uVar7,0,0);
    plVar2[2] = lVar3;
    plVar4 = plVar2;
  }
  *(longlong **)(param_1 + 0xf0) = plVar4;
  uVar7 = 0x50;
  plVar4 = (longlong *)FUN_18002be40(0x50);
  if (plVar4 != (longlong *)0x0) {
    lVar3 = *(longlong *)(param_1 + 0xb8);
    *plVar4 = 0;
    plVar4[1] = 0;
    lVar5 = FUN_180012c00(uVar7,0,0);
    *plVar4 = lVar5;
    plVar4[2] = 0;
    plVar4[3] = 0;
    lVar5 = FUN_180012c00(uVar7,0,0);
    plVar4[2] = lVar5;
    plVar4[4] = param_1 + 0x140;
    plVar4[5] = param_1 + 400;
    plVar4[7] = 0;
    plVar4[8] = 0;
    lVar5 = FUN_180012e40(uVar7,0,0);
    plVar4[7] = lVar5;
    plVar4[9] = lVar3;
    plVar8 = plVar4;
  }
  *(longlong **)(param_1 + 0xf8) = plVar8;
  puVar6 = (undefined8 *)FUN_18002be40(0x70);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    return;
  }
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0xffffffffffffffff;
  puVar6[4] = 0xffffffffffffffff;
  puVar6[5] = uVar1;
  puVar6[6] = param_1 + 0x160;
  puVar6[7] = param_1 + 0x140;
  puVar6[8] = param_1 + 400;
  puVar6[9] = param_1 + 0x170;
  puVar6[10] = param_1 + 0x760;
  puVar6[0xb] = 0;
  puVar6[0xc] = uVar7;
  puVar6[0xd] = param_1 + 0x920;
  *(undefined8 **)(param_1 + 0xe0) = puVar6;
  return;
}

