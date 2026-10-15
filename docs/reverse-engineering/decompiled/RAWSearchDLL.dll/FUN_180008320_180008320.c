// Function: FUN_180008320
// Address: 180008320
// Size: 408 bytes


void FUN_180008320(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar8 = *(longlong **)*param_1;
  while( true ) {
    plVar7 = (longlong *)*param_1;
    plVar2 = plVar8;
    while ((plVar2 != plVar7 &&
           (((uVar6 = *(int *)(plVar2[5] + 8) - 0x30, uVar6 < 0x19 &&
             ((0x1000801U >> (uVar6 & 0x1f) & 1) != 0)) ||
            (cVar5 = (**(code **)(*param_2 + 0x20))(param_2), cVar5 != '\0'))))) {
      plVar8 = (longlong *)plVar2[2];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar5 = *(char *)(*plVar8 + 0x19);
        plVar2 = plVar8;
        plVar8 = (longlong *)*plVar8;
        while (cVar5 == '\0') {
          cVar5 = *(char *)(*plVar8 + 0x19);
          plVar2 = plVar8;
          plVar8 = (longlong *)*plVar8;
        }
      }
      else {
        cVar5 = *(char *)(plVar2[1] + 0x19);
        plVar3 = (longlong *)plVar2[1];
        plVar8 = plVar2;
        while ((plVar2 = plVar3, cVar5 == '\0' && (plVar8 == (longlong *)plVar2[2]))) {
          cVar5 = *(char *)(plVar2[1] + 0x19);
          plVar3 = (longlong *)plVar2[1];
          plVar8 = plVar2;
        }
      }
    }
    if (plVar2 == (longlong *)*param_1) break;
    plVar7 = (longlong *)plVar2[2];
    puVar1 = (undefined8 *)plVar2[5];
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      cVar5 = *(char *)(*plVar7 + 0x19);
      plVar8 = plVar7;
      plVar3 = (longlong *)*plVar7;
      while (cVar5 == '\0') {
        cVar5 = *(char *)(*plVar3 + 0x19);
        plVar8 = plVar3;
        plVar3 = (longlong *)*plVar3;
      }
    }
    else {
      cVar5 = *(char *)(plVar2[1] + 0x19);
      plVar4 = (longlong *)plVar2[1];
      plVar3 = plVar2;
      while ((plVar8 = plVar4, cVar5 == '\0' && (plVar3 == (longlong *)plVar8[2]))) {
        cVar5 = *(char *)(plVar8[1] + 0x19);
        plVar4 = (longlong *)plVar8[1];
        plVar3 = plVar8;
      }
    }
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar7 = (longlong *)*plVar7;
      cVar5 = *(char *)((longlong)plVar7 + 0x19);
      while (cVar5 == '\0') {
        plVar7 = (longlong *)*plVar7;
        cVar5 = *(char *)((longlong)plVar7 + 0x19);
      }
    }
    else {
      cVar5 = *(char *)(plVar2[1] + 0x19);
      plVar3 = (longlong *)plVar2[1];
      plVar7 = plVar2;
      while ((plVar4 = plVar3, cVar5 == '\0' && (plVar7 == (longlong *)plVar4[2]))) {
        cVar5 = *(char *)(plVar4[1] + 0x19);
        plVar3 = (longlong *)plVar4[1];
        plVar7 = plVar4;
      }
    }
    plVar7 = FUN_1800073a0(param_1,plVar2);
    free(plVar7);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}

