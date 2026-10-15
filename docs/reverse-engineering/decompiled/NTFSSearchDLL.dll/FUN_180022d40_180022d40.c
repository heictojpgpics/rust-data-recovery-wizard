// Function: FUN_180022d40
// Address: 180022d40
// Size: 433 bytes


void FUN_180022d40(longlong param_1,longlong param_2,longlong param_3)

{
  longlong **pplVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_res10;
  longlong local_res18 [2];
  longlong *local_20;
  longlong local_18;
  
  if (param_2 != 0) {
    plVar9 = (longlong *)(param_1 + 0x78);
    local_res18[0] = param_3;
    plVar5 = FUN_180024610(plVar9,local_res18);
    FUN_1800247a0((char *)&local_20,plVar5);
    if (local_18 != 0) {
      pplVar1 = (longlong **)(param_2 + 0x148);
      if (pplVar1 != &local_20) {
        plVar5 = *pplVar1;
        *pplVar1 = local_20;
        lVar3 = *(longlong *)(param_2 + 0x150);
        *(longlong *)(param_2 + 0x150) = local_18;
        local_20 = plVar5;
        local_18 = lVar3;
      }
      plVar5 = (longlong *)*plVar9;
      plVar6 = (longlong *)plVar5[1];
      cVar2 = *(char *)((longlong)plVar6 + 0x19);
      plVar4 = plVar5;
      plVar7 = plVar6;
      while (cVar2 == '\0') {
        if (plVar7[4] < local_res18[0]) {
          plVar8 = (longlong *)plVar7[2];
          plVar7 = plVar4;
        }
        else {
          if ((*(char *)((longlong)plVar5 + 0x19) != '\0') && (local_res18[0] < plVar7[4])) {
            plVar5 = plVar7;
          }
          plVar8 = (longlong *)*plVar7;
        }
        plVar4 = plVar7;
        plVar7 = plVar8;
        cVar2 = *(char *)((longlong)plVar8 + 0x19);
      }
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        plVar6 = (longlong *)*plVar5;
      }
      cVar2 = *(char *)((longlong)plVar6 + 0x19);
      while (plVar7 = plVar4, cVar2 == '\0') {
        if (local_res18[0] < plVar6[4]) {
          plVar7 = (longlong *)*plVar6;
          plVar5 = plVar6;
        }
        else {
          plVar7 = (longlong *)plVar6[2];
        }
        plVar6 = plVar7;
        cVar2 = *(char *)((longlong)plVar7 + 0x19);
      }
      while (plVar7 != plVar5) {
        plVar6 = (longlong *)plVar7[2];
        if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar6 + 0x19);
          plVar7 = plVar6;
          plVar6 = (longlong *)*plVar6;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar6 + 0x19);
            plVar7 = plVar6;
            plVar6 = (longlong *)*plVar6;
          }
        }
        else {
          cVar2 = *(char *)(plVar7[1] + 0x19);
          plVar8 = (longlong *)plVar7[1];
          plVar6 = plVar7;
          while ((plVar7 = plVar8, cVar2 == '\0' && (plVar6 == (longlong *)plVar7[2]))) {
            cVar2 = *(char *)(plVar7[1] + 0x19);
            plVar8 = (longlong *)plVar7[1];
            plVar6 = plVar7;
          }
        }
      }
      FUN_1800126d0(plVar9,&local_res10,plVar4,plVar5);
    }
    plVar9 = (longlong *)*local_20;
    *local_20 = (longlong)local_20;
    local_20[1] = (longlong)local_20;
    local_18 = 0;
    if (plVar9 != local_20) {
      do {
        plVar5 = (longlong *)*plVar9;
        free(plVar9);
        plVar9 = plVar5;
      } while (plVar5 != local_20);
    }
    free(local_20);
  }
  return;
}

