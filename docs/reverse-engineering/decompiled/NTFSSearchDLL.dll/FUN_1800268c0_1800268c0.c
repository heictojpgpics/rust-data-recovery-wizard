// Function: FUN_1800268c0
// Address: 1800268c0
// Size: 499 bytes


bool FUN_1800268c0(undefined8 *param_1,longlong param_2,uint param_3,uint param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  plVar7 = *(longlong **)*param_1;
  plVar5 = (longlong *)plVar7[1];
  plVar10 = plVar7;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    plVar9 = plVar7;
    plVar8 = plVar5;
    do {
      plVar10 = plVar8;
      lVar2 = *(longlong *)(plVar10[4] + 0x10);
      if ((*(longlong *)(param_2 + 0x10) < lVar2) ||
         ((*(longlong *)(param_2 + 0x10) <= lVar2 &&
          (*(uint *)(param_2 + 0xc) < *(uint *)(plVar10[4] + 0xc))))) {
        plVar8 = (longlong *)*plVar10;
      }
      else {
        plVar8 = (longlong *)plVar10[2];
        plVar10 = plVar9;
      }
      plVar9 = plVar10;
    } while (*(char *)((longlong)plVar8 + 0x19) == '\0');
    do {
      lVar2 = *(longlong *)(plVar5[4] + 0x10);
      if ((lVar2 < *(longlong *)(param_2 + 0x10)) ||
         ((lVar2 <= *(longlong *)(param_2 + 0x10) &&
          (*(uint *)(plVar5[4] + 0xc) < *(uint *)(param_2 + 0xc))))) {
        plVar8 = (longlong *)plVar5[2];
      }
      else {
        plVar8 = (longlong *)*plVar5;
        plVar7 = plVar5;
      }
      plVar5 = plVar8;
    } while (*(char *)((longlong)plVar8 + 0x19) == '\0');
  }
  bVar11 = plVar7 != plVar10;
  plVar5 = plVar7;
  while (bVar11) {
    uVar6 = *(uint *)(plVar5[4] + 0x9c);
    if ((param_4 & uVar6) != 0) {
      uVar6 = uVar6 & ~param_4;
    }
    *(uint *)(plVar5[4] + 0x9c) = uVar6 | param_3;
    if ((uVar6 | param_3) == 0) {
      plVar9 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar9 + 0x19);
        plVar8 = plVar9;
        plVar3 = (longlong *)*plVar9;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x19);
          plVar8 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
        while ((plVar8 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar4 = (longlong *)plVar8[1];
          plVar3 = plVar8;
        }
      }
      if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
        plVar9 = (longlong *)*plVar9;
        cVar1 = *(char *)((longlong)plVar9 + 0x19);
        while (cVar1 == '\0') {
          plVar9 = (longlong *)*plVar9;
          cVar1 = *(char *)((longlong)plVar9 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar3 = (longlong *)plVar5[1];
        plVar9 = plVar5;
        while ((plVar4 = plVar3, cVar1 == '\0' && (plVar9 == (longlong *)plVar4[2]))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar3 = (longlong *)plVar4[1];
          plVar9 = plVar4;
        }
      }
      plVar5 = FUN_180012020((longlong *)*param_1,plVar5);
      free(plVar5);
    }
    else {
      plVar8 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar5 = (longlong *)*plVar8;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          plVar8 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar9 = (longlong *)plVar5[1];
        while ((plVar8 = plVar9, cVar1 == '\0' && (plVar5 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar9 = (longlong *)plVar8[1];
          plVar5 = plVar8;
        }
      }
    }
    bVar11 = plVar8 != plVar10;
    plVar5 = plVar8;
  }
  return plVar7 != plVar10;
}

