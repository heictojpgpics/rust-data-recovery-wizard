// Function: FUN_1800375a0
// Address: 1800375a0
// Size: 566 bytes


longlong FUN_1800375a0(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong local_res20;
  undefined8 *in_stack_ffffffffffffff90;
  longlong *local_50;
  longlong local_48;
  
  if (param_2 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    local_res20 = 0;
    plVar9 = *(longlong **)param_2[1];
    lVar3 = param_3;
    if (plVar9 != (longlong *)param_2[1]) {
      do {
        local_res20 = plVar9[2];
        FUN_1800378c0(param_1,&local_50,lVar3,&local_res20);
        plVar9 = (longlong *)*plVar9;
      } while (plVar9 != (longlong *)param_2[1]);
    }
    uVar1 = *(uint *)(param_3 + 0xc);
    uVar11 = (ulonglong)uVar1;
    lVar3 = *(longlong *)(param_3 + 0x10);
    lVar8 = *param_2;
    puVar6 = (undefined8 *)param_2[3];
    FUN_180011670((longlong *)&local_50);
    plVar9 = (longlong *)0x5;
    while ((plVar10 = param_1,
           FUN_1800369e0((longlong)param_1,puVar6,(longlong)plVar9,param_1,(longlong *)&local_50,
                         in_stack_ffffffffffffff90,lVar3,uVar1), local_48 != 0 &&
           (puVar6 = *(undefined8 **)(*local_50 + 0x10), plVar9 = local_50,
           puVar6 != (undefined8 *)0x0))) {
      plVar9 = *(longlong **)(puVar6[7] + 0x20);
      if (plVar9 == (longlong *)0xffffffffffffffff) {
        if (uVar1 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(longlong *)(puVar6[7] + 8) - lVar3;
          lVar5 = FUN_180040020((undefined8 *)(lVar8 + 8),lVar4 / (longlong)uVar11);
          lVar4 = uVar11 * lVar5 + lVar4 % (longlong)uVar11;
        }
        uVar7 = (ulonglong)*(byte *)(lVar8 + 0x18);
        plVar9 = (longlong *)(lVar4 / (longlong)uVar7);
        if (lVar4 % (longlong)uVar7 != 0) {
          plVar9 = (longlong *)0xffffffffffffffff;
        }
      }
      plVar10 = (longlong *)*local_50;
      *(longlong *)plVar10[1] = *plVar10;
      *(longlong *)(*plVar10 + 8) = plVar10[1];
      local_48 = local_48 + -1;
      free(plVar10);
      if (((longlong *)puVar6[6] != (longlong *)0x0) &&
         (ppuVar2 = *(undefined ***)puVar6[6], ppuVar2 != CNTFSFileProperties::vftable)) {
        (*(code *)ppuVar2[7])();
      }
    }
    FUN_180011600((longlong *)&local_50);
    puVar6 = FUN_180037100((undefined8 *)param_1[3],param_1,plVar9,plVar10);
    if ((puVar6 != (undefined8 *)0x0) && (param_1[3] == 0)) {
      lVar3 = param_2[3];
      puVar6[1] = lVar3;
      lVar8 = puVar6[3];
      puVar6[4] = lVar8;
      lVar4 = *(longlong *)(lVar3 + 0x10);
      puVar6[3] = lVar4;
      if (lVar8 == 0) {
        lVar8 = lVar4;
      }
      puVar6[4] = lVar8;
      *(undefined8 **)(lVar3 + 0x10) = puVar6;
      puVar6[9] = *(undefined8 *)(lVar3 + 0x50);
      param_1[3] = (longlong)puVar6;
    }
    FUN_180011400(param_1);
    lVar3 = param_2[3];
  }
  return lVar3;
}

