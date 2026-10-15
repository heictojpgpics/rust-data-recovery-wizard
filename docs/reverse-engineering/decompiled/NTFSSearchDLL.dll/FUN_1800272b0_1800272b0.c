// Function: FUN_1800272b0
// Address: 1800272b0
// Size: 840 bytes


ulonglong FUN_1800272b0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  void *pvVar1;
  longlong lVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    return 0x460005;
  }
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x260) = param_3;
  pvVar1 = (void *)(param_1 + 0x3a0);
  iVar5 = FUN_18001a320(*(longlong **)(param_1 + 0x18),*(longlong *)(param_1 + 0x5a0),pvVar1);
  if (iVar5 == 0) {
    return 0x500015;
  }
  uVar3 = FUN_18003f940((longlong)pvVar1);
  uVar7 = (uint)uVar3;
  *(uint *)(param_1 + 0x34) = (uint)uVar3;
  if (uVar3 == 0) {
    return 0x550005;
  }
  uVar8 = *(ulonglong *)(param_1 + 0x88) / (ulonglong)uVar3;
  *(ulonglong *)(param_1 + 0xd0) = uVar8;
  plVar14 = *(longlong **)(param_1 + 600);
  if (plVar14 != (longlong *)0x0) {
    if ((*plVar14 != 0) || (plVar14[1] != 0)) {
      FUN_18002c250(plVar14);
      plVar14 = *(longlong **)(param_1 + 600);
      uVar7 = *(uint *)(param_1 + 0x34);
    }
    FUN_18002bfd0(plVar14,uVar8,uVar7);
    if (**(longlong **)(param_1 + 600) != 0) {
      FUN_18002c390(*(longlong **)(param_1 + 600));
    }
    *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x268);
  }
  puVar9 = (undefined8 *)FUN_18002be40(0x40);
  puVar13 = (undefined8 *)0x0;
  puVar10 = puVar13;
  if (puVar9 != (undefined8 *)0x0) {
    puVar10 = FUN_180007370(puVar9);
  }
  *(undefined8 **)(param_1 + 0x398) = puVar10;
  sVar4 = FUN_18003f940((longlong)pvVar1);
  lVar12 = *(longlong *)(param_1 + 0x38);
  puVar10 = *(undefined8 **)(param_1 + 0x398);
  plVar14 = *(longlong **)(param_1 + 0x18);
  if ((param_1 == -0x28) || (plVar14 == (longlong *)0x0)) {
LAB_180027467:
    uVar3 = FUN_18003f940((longlong)pvVar1);
    lVar11 = FUN_18003f970((longlong)pvVar1);
    lVar2 = *(longlong *)(param_1 + 0x38);
    iVar5 = FUN_18003f9b0((longlong)pvVar1);
    uVar7 = (int)(iVar5 + (iVar5 >> 0x1f & 0x1ffU)) >> 9;
    if (((uVar7 & 1) == 0) && ((byte)uVar7 < 0x11)) {
      uVar15 = (ulonglong)(uVar7 & 0xff);
      if ((byte)uVar7 == 0) {
        uVar15 = 1;
      }
      iVar5 = FUN_18001a3c0((ulonglong)uVar3 * lVar11 + lVar2,(byte)uVar15,plVar14,puVar10,lVar12,
                            sVar4);
      plVar16 = plVar14;
      puVar9 = puVar10;
      if (iVar5 != 0) goto LAB_1800274f5;
    }
    uVar8 = 0x610016;
  }
  else {
    uVar3 = FUN_18003f940((longlong)pvVar1);
    lVar11 = FUN_18003f990((longlong)pvVar1);
    lVar2 = *(longlong *)(param_1 + 0x38);
    iVar5 = (**(code **)(*plVar14 + 0x28))(plVar14);
    iVar6 = FUN_18003f9b0((longlong)pvVar1);
    uVar8 = (longlong)iVar6 / (longlong)iVar5;
    if (((uVar8 & 1) != 0) || (0x10 < (byte)uVar8)) goto LAB_180027467;
    uVar15 = uVar8 & 0xff;
    if ((byte)uVar8 == 0) {
      uVar15 = 1;
    }
    plVar16 = plVar14;
    puVar9 = puVar10;
    iVar5 = FUN_18001a3c0(lVar11 * (ulonglong)uVar3 + lVar2,(byte)uVar15,plVar14,puVar10,lVar12,
                          sVar4);
    if (iVar5 == 0) goto LAB_180027467;
LAB_1800274f5:
    puVar10 = *(undefined8 **)(param_1 + 0x390);
    if (puVar10 != (undefined8 *)0x0) {
      if ((void *)*puVar10 != (void *)0x0) {
        uVar15 = 1;
        FUN_180006500((void *)*puVar10,1);
        **(undefined8 **)(param_1 + 0x390) = 0;
        puVar10 = *(undefined8 **)(param_1 + 0x390);
      }
      if (puVar10 != (undefined8 *)0x0) {
        FUN_1800270a0(puVar10,uVar15,plVar16,puVar9);
      }
      *(undefined8 *)(param_1 + 0x390) = 0;
    }
    lVar12 = FUN_18002be40(0x20);
    if (lVar12 != 0) {
      puVar13 = (undefined8 *)FUN_180026ec0(lVar12);
    }
    *(undefined8 **)(param_1 + 0x390) = puVar13;
    *puVar13 = *(undefined8 *)(param_1 + 0x398);
    lVar12 = *(longlong *)(param_1 + 0x20);
    uVar3 = FUN_18003f940((longlong)pvVar1);
    FUN_18001cf20((undefined1 *)(param_1 + 0x1e0),*(longlong **)(param_1 + 0x18),
                  (undefined8 *)(*(longlong *)(param_1 + 0x398) + 8),(uint)uVar3,lVar12);
    FUN_18001d460(param_1 + 0x1e0);
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
    iVar6 = FUN_18003f9b0((longlong)pvVar1);
    uVar8 = FUN_180016750((longlong *)(param_1 + 8),
                          (undefined8 *)(*(longlong *)(param_1 + 0x398) + 8),(char)(iVar6 / iVar5),0
                         );
    plVar14 = *(longlong **)(param_1 + 0x10);
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0xa8))(plVar14,1);
    }
  }
  return uVar8;
}

