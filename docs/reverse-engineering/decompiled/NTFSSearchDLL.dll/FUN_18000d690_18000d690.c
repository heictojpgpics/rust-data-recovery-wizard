// Function: FUN_18000d690
// Address: 18000d690
// Size: 417 bytes


bool FUN_18000d690(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_30;
  undefined8 local_28;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  uVar1 = *(uint *)(param_3 + 0xc);
  lVar5 = FUN_180040570(param_2 + 1,0);
  lVar6 = *param_2;
  cVar3 = FUN_1800443e0(lVar6,lVar5,lVar2,uVar1);
  if (cVar3 == '\0') {
    bVar4 = false;
  }
  else {
    local_30 = (longlong *)0x0;
    local_28 = 0;
    local_30 = (longlong *)FUN_180013230(lVar6,0,0);
    FUN_180040690(param_2 + 1,(longlong)&local_30);
    plVar7 = (longlong *)*local_30;
    lVar2 = 0;
    for (plVar8 = plVar7; plVar8 != local_30; plVar8 = (longlong *)*plVar8) {
      lVar6 = *(longlong *)plVar8[2] + -1 + ((longlong *)plVar8[2])[2];
      if (lVar6 <= lVar2) {
        lVar6 = lVar2;
      }
      lVar2 = lVar6;
    }
    bVar4 = (longlong)((ulonglong)uVar1 * lVar2) < *(longlong *)(param_3 + 0x60);
    plVar8 = local_30;
    if (plVar7 != local_30) {
      do {
        if ((void *)plVar7[2] != (void *)0x0) {
          free((void *)plVar7[2]);
          plVar8 = local_30;
        }
        plVar7 = (longlong *)*plVar7;
      } while (plVar7 != plVar8);
    }
    plVar7 = (longlong *)*plVar8;
    *plVar8 = (longlong)plVar8;
    local_30[1] = (longlong)local_30;
    local_28 = 0;
    if (plVar7 != local_30) {
      do {
        plVar8 = (longlong *)*plVar7;
        free(plVar7);
        plVar7 = plVar8;
      } while (plVar8 != local_30);
    }
    plVar8 = (longlong *)*local_30;
    *local_30 = (longlong)local_30;
    local_30[1] = (longlong)local_30;
    local_28 = 0;
    if (plVar8 != local_30) {
      do {
        plVar7 = (longlong *)*plVar8;
        free(plVar8);
        plVar8 = plVar7;
      } while (plVar7 != local_30);
    }
    free(local_30);
  }
  return bVar4;
}

