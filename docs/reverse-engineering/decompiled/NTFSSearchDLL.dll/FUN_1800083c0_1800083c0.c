// Function: FUN_1800083c0
// Address: 1800083c0
// Size: 1809 bytes


void FUN_1800083c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 *_Memory;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  void *pvVar16;
  undefined8 local_res18;
  
  *param_1 = CNTFSSearchController::vftable;
  plVar2 = (longlong *)param_1[0x1d];
  if (plVar2 != (longlong *)0x0) {
    FUN_180026720(plVar2);
    param_2 = 0x20;
    free(plVar2);
    param_1[0x1d] = 0;
  }
  plVar2 = (longlong *)param_1[0x1e];
  if (plVar2 != (longlong *)0x0) {
    FUN_180026720(plVar2);
    param_2 = 0x20;
    free(plVar2);
    param_1[0x1e] = 0;
  }
  plVar2 = (longlong *)param_1[0x1f];
  if (plVar2 != (longlong *)0x0) {
    FUN_180028a00(plVar2);
    param_2 = 0x50;
    free(plVar2);
    param_1[0x1f] = 0;
  }
  if ((void *)param_1[0x1c] != (void *)0x0) {
    param_2 = 0x70;
    free((void *)param_1[0x1c]);
    param_1[0x1c] = 0;
  }
  plVar2 = (longlong *)param_1[0x1b];
  if (plVar2 != (longlong *)0x0) {
    plVar9 = (longlong *)*plVar2;
    plVar10 = (longlong *)*plVar9;
    *plVar9 = (longlong)plVar9;
    *(longlong *)(*plVar2 + 8) = *plVar2;
    plVar2[1] = 0;
    if (plVar10 != (longlong *)*plVar2) {
      do {
        plVar9 = (longlong *)*plVar10;
        free(plVar10);
        plVar10 = plVar9;
      } while (plVar9 != (longlong *)*plVar2);
    }
    free((void *)*plVar2);
    param_2 = 0x10;
    free(plVar2);
    param_1[0x1b] = 0;
  }
  if ((void *)param_1[0x18] != (void *)0x0) {
    free((void *)param_1[0x18]);
    param_1[0x18] = 0;
  }
  plVar2 = (longlong *)param_1[0x1a];
  if (plVar2 != (longlong *)0x0) {
    plVar9 = (longlong *)*plVar2;
    plVar10 = (longlong *)*plVar9;
    if (plVar10 != plVar9) {
      do {
        if ((void *)plVar10[2] != (void *)0x0) {
          param_2 = 1;
          FUN_180006500((void *)plVar10[2],1);
        }
        plVar10 = (longlong *)*plVar10;
        plVar9 = (longlong *)*plVar2;
      } while (plVar10 != plVar9);
      plVar10 = (longlong *)*plVar9;
    }
    *plVar9 = (longlong)plVar9;
    *(longlong *)(*plVar2 + 8) = *plVar2;
    plVar2[1] = 0;
    if (plVar10 != (longlong *)*plVar2) {
      do {
        plVar9 = (longlong *)*plVar10;
        param_2 = 0x18;
        free(plVar10);
        plVar10 = plVar9;
      } while (plVar9 != (longlong *)*plVar2);
    }
    plVar2 = (longlong *)param_1[0x1a];
    if (plVar2 != (longlong *)0x0) {
      plVar9 = (longlong *)*plVar2;
      plVar10 = (longlong *)*plVar9;
      *plVar9 = (longlong)plVar9;
      *(longlong *)(*plVar2 + 8) = *plVar2;
      plVar2[1] = 0;
      if (plVar10 != (longlong *)*plVar2) {
        do {
          plVar9 = (longlong *)*plVar10;
          free(plVar10);
          plVar10 = plVar9;
        } while (plVar9 != (longlong *)*plVar2);
      }
      free((void *)*plVar2);
      param_2 = 0x10;
      free(plVar2);
    }
    param_1[0x1a] = 0;
  }
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  FUN_180011140(param_1 + 0xfd);
  plVar2 = param_1 + 0xec;
  plVar9 = (longlong *)*plVar2;
  plVar10 = (longlong *)*plVar9;
  if (plVar10 != plVar9) {
    do {
      _Memory = (undefined1 *)plVar10[3];
      if (_Memory != (undefined1 *)0x0) {
        FUN_18001b8a0(_Memory,param_2,param_3,param_4);
        param_2 = 0x78;
        free(_Memory);
      }
      plVar10 = (longlong *)*plVar10;
      plVar9 = (longlong *)*plVar2;
    } while (plVar10 != plVar9);
  }
  plVar10 = (longlong *)*plVar9;
  *plVar9 = (longlong)plVar9;
  *(longlong *)(*plVar2 + 8) = *plVar2;
  param_1[0xed] = 0;
  if (plVar10 != (longlong *)*plVar2) {
    do {
      plVar9 = (longlong *)*plVar10;
      param_2 = 0x20;
      free(plVar10);
      plVar10 = plVar9;
    } while (plVar9 != (longlong *)*plVar2);
  }
  puVar3 = (undefined8 *)param_1[0x28];
  puVar4 = (undefined8 *)*puVar3;
  while (puVar4 != puVar3) {
    if ((undefined8 *)puVar4[4] != (undefined8 *)0x0) {
      param_2 = 1;
      (*(code *)**(undefined8 **)puVar4[4])();
    }
    puVar5 = (undefined8 *)puVar4[2];
    if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar5 + 0x19);
      puVar4 = puVar5;
      puVar5 = (undefined8 *)*puVar5;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)*puVar5 + 0x19);
        puVar4 = puVar5;
        puVar5 = (undefined8 *)*puVar5;
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
      puVar8 = (undefined8 *)puVar4[1];
      puVar5 = puVar4;
      while ((puVar4 = puVar8, cVar1 == '\0' && (puVar5 == (undefined8 *)puVar4[2]))) {
        cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
        puVar8 = (undefined8 *)puVar4[1];
        puVar5 = puVar4;
      }
    }
  }
  FUN_180011400(param_1 + 0x28);
  param_1[0xef] = param_1[0xee];
  plVar9 = param_1 + 0x2e;
  plVar10 = (longlong *)*plVar9;
  plVar13 = (longlong *)*plVar10;
  if (plVar13 != plVar10) {
    do {
      if ((void *)plVar13[2] != (void *)0x0) {
        param_2 = 0x10;
        free((void *)plVar13[2]);
      }
      plVar13 = (longlong *)*plVar13;
      plVar10 = (longlong *)*plVar9;
    } while (plVar13 != plVar10);
    plVar13 = (longlong *)*plVar10;
  }
  *plVar10 = (longlong)plVar10;
  *(longlong *)(*plVar9 + 8) = *plVar9;
  param_1[0x2f] = 0;
  if (plVar13 != (longlong *)*plVar9) {
    do {
      plVar10 = (longlong *)*plVar13;
      param_2 = 0x18;
      free(plVar13);
      plVar13 = plVar10;
    } while (plVar10 != (longlong *)*plVar9);
  }
  FUN_180008ae0((longlong)param_1);
  FUN_180008b90((longlong)param_1);
  plVar10 = param_1 + 0x104;
  plVar13 = (longlong *)*plVar10;
  if (plVar13 != (longlong *)param_1[0x105]) {
    do {
      if ((longlong *)*plVar13 != (longlong *)0x0) {
        param_2 = 1;
        (**(code **)(*(longlong *)*plVar13 + 0x30))();
        *plVar13 = 0;
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != (longlong *)param_1[0x105]);
  }
  param_1[0x105] = *plVar10;
  FUN_1800112c0(param_1 + 0x102);
  FUN_1800230c0(param_1 + 0x111,param_2,param_3,param_4);
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 1;
  *(undefined4 *)(param_1 + 0x23) = 1;
  param_1[0xfa] = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0x123) = 0;
  plVar13 = param_1 + 0x126;
  FUN_1800123e0(plVar13,&local_res18,*(longlong **)*plVar13,(longlong *)*plVar13);
  free((void *)*plVar13);
  plVar13 = param_1 + 0x124;
  plVar14 = (longlong *)*plVar13;
  plVar15 = (longlong *)*plVar14;
  FUN_180011e00(plVar13,&local_res18,plVar15,plVar14);
  uVar12 = 0x30;
  free((void *)*plVar13);
  FUN_180021f90(param_1 + 0x111,uVar12,plVar15,plVar14);
  FUN_180002480(param_1 + 0x10f);
  FUN_180011400(param_1 + 0x10d);
  free((void *)param_1[0x10d]);
  plVar13 = param_1 + 0x10b;
  lVar6 = *plVar13;
  lVar11 = lVar6;
  plVar14 = *(longlong **)(lVar6 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar6 + 8) + 0x19) == '\0') {
    do {
      FUN_180012d80(plVar13,(longlong *)plVar14[2]);
      plVar7 = (longlong *)*plVar14;
      free(plVar14);
      plVar14 = plVar7;
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
    lVar11 = *plVar13;
  }
  *(longlong *)(lVar11 + 8) = lVar6;
  *(longlong *)*plVar13 = lVar6;
  *(longlong *)(*plVar13 + 0x10) = lVar6;
  param_1[0x10c] = 0;
  free((void *)*plVar13);
  FUN_180011140(param_1 + 0x109);
  free((void *)param_1[0x109]);
  FID_conflict__vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>(plVar10);
  FUN_1800112c0(param_1 + 0x102);
  free((void *)param_1[0x102]);
  pvVar16 = (void *)param_1[0xff];
  if (pvVar16 != (void *)0x0) {
    plVar15 = (longlong *)((param_1[0x101] - (longlong)pvVar16) / 0x28);
    deallocate(param_1[0x101] - (longlong)pvVar16,pvVar16,(longlong)plVar15);
    param_1[0xff] = 0;
    param_1[0x100] = 0;
    param_1[0x101] = 0;
  }
  FUN_180011140(param_1 + 0xfd);
  uVar12 = 0x30;
  free((void *)param_1[0xfd]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf5));
  FID_conflict__vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>
            (param_1 + 0xee);
  FUN_1800116b0(plVar2);
  FUN_180026ff0(param_1 + 0x37,uVar12,plVar15,pvVar16);
  FUN_180038550(param_1 + 0x34);
  FUN_180011600(param_1 + 0x30);
  FUN_180011600(plVar9);
  FUN_180011600(param_1 + 0x2c);
  FUN_180011400(param_1 + 0x2a);
  uVar12 = 0x28;
  free((void *)param_1[0x2a]);
  FUN_180011490(param_1 + 0x28);
  FUN_180011490(param_1 + 0x26);
  FUN_1800079d0(param_1,uVar12,plVar15,pvVar16);
  return;
}

