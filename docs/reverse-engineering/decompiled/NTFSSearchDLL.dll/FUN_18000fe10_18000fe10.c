// Function: FUN_18000fe10
// Address: 18000fe10
// Size: 440 bytes


void FUN_18000fe10(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  
  plVar10 = *(longlong **)(param_1 + 0x140);
  iVar9 = 0;
  plVar8 = (longlong *)*plVar10;
  if (plVar8 != plVar10) {
    do {
      if (9 < iVar9) {
        return;
      }
      lVar2 = plVar8[4];
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0xf6) != '\0')) {
        lVar3 = *(longlong *)(lVar2 + 0x10);
        plVar7 = (longlong *)*plVar10;
        iVar11 = iVar9;
        if (plVar7 != plVar10) {
          do {
            if (9 < iVar11) break;
            lVar4 = plVar7[4];
            if (((lVar4 != 0) && (lVar4 != lVar2)) &&
               ((*(char *)(lVar2 + 0xf1) != '\0' || (*(char *)(lVar4 + 0xf6) == '\0')))) {
              lVar5 = *(longlong *)(lVar4 + 0x10);
              if ((lVar5 == lVar3) &&
                 ((*(int *)(lVar4 + 0xc) != *(int *)(lVar2 + 0xc) ||
                  (*(longlong *)(lVar4 + 0x60) != *(longlong *)(lVar2 + 0x60))))) {
                *(byte *)(lVar2 + 0xf8) = *(byte *)(lVar2 + 0xf8) | 1;
                break;
              }
              if ((lVar3 <= *(longlong *)(lVar4 + 0x60) + lVar5) &&
                 (lVar5 <= lVar3 + *(longlong *)(lVar2 + 0x60))) {
                *(byte *)(lVar2 + 0xf8) = *(byte *)(lVar2 + 0xf8) | 2;
              }
            }
            plVar10 = (longlong *)plVar7[2];
            if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar10 + 0x19);
              plVar7 = plVar10;
              plVar10 = (longlong *)*plVar10;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar10 + 0x19);
                plVar7 = plVar10;
                plVar10 = (longlong *)*plVar10;
              }
            }
            else {
              cVar1 = *(char *)(plVar7[1] + 0x19);
              plVar6 = (longlong *)plVar7[1];
              plVar10 = plVar7;
              while ((plVar7 = plVar6, cVar1 == '\0' && (plVar10 == (longlong *)plVar7[2]))) {
                cVar1 = *(char *)(plVar7[1] + 0x19);
                plVar6 = (longlong *)plVar7[1];
                plVar10 = plVar7;
              }
            }
            iVar11 = iVar11 + 1;
          } while (plVar7 != *(longlong **)(param_1 + 0x140));
        }
      }
      plVar10 = (longlong *)plVar8[2];
      if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar10 + 0x19);
        plVar8 = plVar10;
        plVar10 = (longlong *)*plVar10;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar10 + 0x19);
          plVar8 = plVar10;
          plVar10 = (longlong *)*plVar10;
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar7 = (longlong *)plVar8[1];
        plVar10 = plVar8;
        while ((plVar8 = plVar7, cVar1 == '\0' && (plVar10 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar7 = (longlong *)plVar8[1];
          plVar10 = plVar8;
        }
      }
      plVar10 = *(longlong **)(param_1 + 0x140);
      iVar9 = iVar9 + 1;
    } while (plVar8 != plVar10);
  }
  return;
}

