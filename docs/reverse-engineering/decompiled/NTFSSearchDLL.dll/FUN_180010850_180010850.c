// Function: FUN_180010850
// Address: 180010850
// Size: 940 bytes


void FUN_180010850(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 local_res10 [8];
  uint local_res18;
  longlong local_res20;
  
  puVar2 = *(undefined8 **)(param_1 + 0x140);
  puVar3 = (undefined8 *)*puVar2;
  do {
    if (puVar3 == puVar2) {
      return;
    }
    lVar18 = puVar3[4];
    if ((lVar18 != 0) && (*(longlong *)(lVar18 + 0x170) != 0)) {
      local_res20 = lVar18;
      lVar8 = FUN_180022aa0((longlong *)(param_1 + 0x888),lVar18);
      uVar17 = 0xffffffff;
      lVar10 = lVar8;
      plVar9 = (longlong *)FUN_180002680(lVar18 + 0x168);
      puVar4 = (undefined8 *)*plVar9;
      for (puVar5 = (undefined8 *)*puVar4; puVar5 != puVar4; puVar5 = (undefined8 *)*puVar5) {
        lVar11 = puVar5[2];
        lVar7 = puVar5[3];
        for (plVar9 = *(longlong **)(param_1 + 0x7f8);
            (plVar9 != *(longlong **)(param_1 + 0x800) && (lVar11 != *plVar9)); plVar9 = plVar9 + 5)
        {
        }
        local_res18 = (int)uVar17 + 1;
        uVar17 = (ulonglong)local_res18;
        if (plVar9 != *(longlong **)(param_1 + 0x800)) {
          plVar9[4] = lVar18;
          plVar12 = *(longlong **)(param_1 + 0x900);
          lVar16 = lVar7;
          if (*plVar9 <= lVar7) {
            lVar16 = *plVar9;
          }
          plVar13 = (longlong *)*plVar12;
          if (plVar13 != plVar12) {
            do {
              plVar14 = *(longlong **)plVar13[5];
              if (plVar14 != (longlong *)plVar13[5]) {
                do {
                  lVar10 = plVar14[2];
                  if ((lVar11 < lVar10) && (lVar10 < lVar11 + lVar16)) {
                    lVar18 = *(longlong *)(lVar18 + 0x148);
                    plVar15 = *(longlong **)(lVar18 + 8);
                    lVar10 = FUN_180014360(lVar10,lVar18,(longlong)plVar15,plVar14 + 2);
                    if (*(longlong *)(local_res20 + 0x150) == 0x666666666666665) {
                      std::_Xlength_error("list<T> too long");
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    *(longlong *)(local_res20 + 0x150) = *(longlong *)(local_res20 + 0x150) + 1;
                    *(longlong *)(lVar18 + 8) = lVar10;
                    *plVar15 = lVar10;
                    plVar15 = (longlong *)*plVar14;
                    *(longlong **)plVar14[1] = plVar15;
                    *(longlong *)(*plVar14 + 8) = plVar14[1];
                    plVar13[6] = plVar13[6] + -1;
                    free(plVar14);
                    lVar18 = local_res20;
                  }
                  else {
                    plVar15 = (longlong *)*plVar14;
                  }
                  plVar14 = plVar15;
                } while (plVar15 != (longlong *)plVar13[5]);
              }
              plVar14 = (longlong *)plVar13[2];
              if (*(char *)((longlong)plVar14 + 0x19) == '\0') {
                cVar1 = *(char *)(*plVar14 + 0x19);
                plVar13 = plVar14;
                plVar14 = (longlong *)*plVar14;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*plVar14 + 0x19);
                  plVar13 = plVar14;
                  plVar14 = (longlong *)*plVar14;
                }
              }
              else {
                cVar1 = *(char *)(plVar13[1] + 0x19);
                plVar15 = (longlong *)plVar13[1];
                plVar14 = plVar13;
                while ((plVar13 = plVar15, cVar1 == '\0' && (plVar14 == (longlong *)plVar13[2]))) {
                  cVar1 = *(char *)(plVar13[1] + 0x19);
                  plVar15 = (longlong *)plVar13[1];
                  plVar14 = plVar13;
                }
              }
            } while (plVar13 != plVar12);
            uVar17 = (ulonglong)local_res18;
            lVar10 = lVar8;
          }
          if (lVar7 < plVar9[2]) {
            lVar11 = lVar18;
            if (lVar10 != 0) {
              lVar11 = lVar10;
            }
            plVar9[4] = lVar11;
          }
          if (((int)uVar17 < 1) && (*(char *)(lVar18 + 0xf7) != '\0')) {
            plVar12 = plVar9 + 5;
            FUN_180002ca0(local_res10);
            memmove(plVar9,plVar12,*(longlong *)(param_1 + 0x800) - (longlong)plVar12);
            *(longlong *)(param_1 + 0x800) = *(longlong *)(param_1 + 0x800) + -0x28;
            plVar9 = *(longlong **)(lVar18 + 0x148);
            plVar12 = (longlong *)*plVar9;
            *plVar9 = (longlong)plVar9;
            *(longlong *)(*(longlong *)(lVar18 + 0x148) + 8) = *(longlong *)(lVar18 + 0x148);
            *(undefined8 *)(lVar18 + 0x150) = 0;
            if (plVar12 != *(longlong **)(lVar18 + 0x148)) {
              do {
                plVar9 = (longlong *)*plVar12;
                free(plVar12);
                plVar12 = plVar9;
              } while (plVar9 != (longlong *)*(longlong *)(lVar18 + 0x148));
            }
            uVar17 = (ulonglong)local_res18;
          }
        }
        lVar10 = lVar8;
      }
    }
    puVar4 = (undefined8 *)puVar3[2];
    if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar4 + 0x19);
      puVar3 = puVar4;
      puVar4 = (undefined8 *)*puVar4;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)*puVar4 + 0x19);
        puVar3 = puVar4;
        puVar4 = (undefined8 *)*puVar4;
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
      puVar5 = (undefined8 *)puVar3[1];
      puVar4 = puVar3;
      while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined8 *)puVar3[2]))) {
        cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
        puVar5 = (undefined8 *)puVar3[1];
        puVar4 = puVar3;
      }
    }
  } while( true );
}

