// Function: FUN_180036f50
// Address: 180036f50
// Size: 429 bytes


void FUN_180036f50(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong *plVar8;
  undefined **ppuVar9;
  
  plVar6 = *(longlong **)*param_1;
  if (plVar6 != (longlong *)*param_1) {
    do {
      lVar2 = plVar6[5];
      plVar8 = *(longlong **)(lVar2 + 0x30);
      ppuVar9 = (undefined **)*plVar8;
      if (ppuVar9 != CNTFSFileProperties::vftable) {
        (*(code *)ppuVar9[7])(plVar8);
        ppuVar9 = (undefined **)*plVar8;
      }
      lVar2 = *(longlong *)(lVar2 + 8);
      if (ppuVar9 == CNTFSFileProperties::vftable) {
        pcVar7 = *(char **)((longlong)plVar8 + 0x11);
      }
      else {
        pcVar7 = (char *)(*(code *)ppuVar9[2])(plVar8);
      }
      plVar8 = (longlong *)plVar6[2];
      if (*pcVar7 == '$' || lVar2 != 0) {
        if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar8 + 0x19);
          plVar3 = (longlong *)*plVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x19);
            plVar8 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar5 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar8 = plVar5, cVar1 == '\0' && (plVar3 == (longlong *)plVar8[2]))) {
            cVar1 = *(char *)(plVar8[1] + 0x19);
            plVar5 = (longlong *)plVar8[1];
            plVar3 = plVar8;
          }
        }
        if (*(char *)(plVar6[2] + 0x19) == '\0') {
          plVar3 = *(longlong **)plVar6[2];
          cVar1 = *(char *)((longlong)plVar3 + 0x19);
          while (cVar1 == '\0') {
            plVar3 = (longlong *)*plVar3;
            cVar1 = *(char *)((longlong)plVar3 + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar5 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar4 = plVar5, cVar1 == '\0' && (plVar3 == (longlong *)plVar4[2]))) {
            cVar1 = *(char *)(plVar4[1] + 0x19);
            plVar5 = (longlong *)plVar4[1];
            plVar3 = plVar4;
          }
        }
        plVar6 = FUN_180012020(param_1,plVar6);
        free(plVar6);
      }
      else if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar6 = (longlong *)*plVar8;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x19);
          plVar8 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x19);
        plVar3 = (longlong *)plVar6[1];
        while ((plVar8 = plVar3, cVar1 == '\0' && (plVar6 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar3 = (longlong *)plVar8[1];
          plVar6 = plVar8;
        }
      }
      plVar6 = plVar8;
    } while (plVar8 != (longlong *)*param_1);
  }
  return;
}

