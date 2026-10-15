// Function: FUN_18003b840
// Address: 18003b840
// Size: 1084 bytes


undefined8 FUN_18003b840(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  longlong *plVar7;
  char cVar8;
  ushort uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  code *pcVar17;
  longlong *plVar18;
  code *local_res8;
  longlong local_res10;
  code *local_50;
  code *pcStack_48;
  code *local_40;
  
  local_50 = (code *)0x0;
  pcStack_48 = (code *)0x0;
  local_res8 = (code *)0x0;
  local_40 = (code *)0x0;
  plVar12 = *(longlong **)*param_1;
  pcVar17 = local_res8;
  pcVar4 = local_50;
  pcVar5 = pcStack_48;
  if (plVar12 != (longlong *)*param_1) {
    do {
      pcVar17 = pcStack_48;
      lVar14 = plVar12[5];
      local_res10 = lVar14;
      if (local_res8 == pcStack_48) {
        FUN_180013520((longlong *)&local_50,pcStack_48,&local_res10);
        local_res8 = local_40;
      }
      else {
        plVar10 = (longlong *)FUN_180001100(lVar14,pcStack_48);
        *plVar10 = lVar14;
        pcStack_48 = pcVar17 + 8;
      }
      plVar10 = (longlong *)plVar12[2];
      if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
        cVar8 = *(char *)(*plVar10 + 0x19);
        plVar12 = plVar10;
        plVar10 = (longlong *)*plVar10;
        while (cVar8 == '\0') {
          cVar8 = *(char *)(*plVar10 + 0x19);
          plVar12 = plVar10;
          plVar10 = (longlong *)*plVar10;
        }
      }
      else {
        cVar8 = *(char *)(plVar12[1] + 0x19);
        plVar11 = (longlong *)plVar12[1];
        plVar10 = plVar12;
        while ((plVar12 = plVar11, cVar8 == '\0' && (plVar10 == (longlong *)plVar12[2]))) {
          cVar8 = *(char *)(plVar12[1] + 0x19);
          plVar11 = (longlong *)plVar12[1];
          plVar10 = plVar12;
        }
      }
      pcVar17 = local_res8;
      pcVar4 = local_50;
      pcVar5 = pcStack_48;
    } while (plVar12 != (longlong *)*param_1);
  }
  for (; pcVar6 = pcStack_48, pcVar4 != pcStack_48; pcVar4 = pcVar4 + 8) {
    lVar14 = *(longlong *)pcVar4;
    pcStack_48 = pcVar5;
    if (lVar14 != 0) {
      if (((longlong *)param_1[0xf] != (longlong *)0x0) &&
         (cVar8 = (**(code **)(*(longlong *)param_1[0xf] + 0x88))(), cVar8 != '\0')) break;
      plVar12 = *(longlong **)(lVar14 + 0x30);
      if (plVar12 != (longlong *)0x0) {
        pcVar17 = (code *)((undefined **)*plVar12)[7];
        if ((undefined **)*plVar12 == CNTFSFileProperties::vftable) {
          uVar9 = *(ushort *)((longlong)plVar12 + 0x23);
        }
        else {
          uVar9 = (*pcVar17)();
        }
        if (((uVar9 & 0x10) != 0) && (lVar1 = *(longlong *)(lVar14 + 0x50), 0x18 < lVar1)) {
          plVar12 = (longlong *)*param_1;
          plVar10 = (longlong *)plVar12[1];
          pcVar17 = (code *)(ulonglong)*(byte *)((longlong)plVar10 + 0x19);
          plVar11 = plVar10;
          plVar18 = plVar12;
          if (*(byte *)((longlong)plVar10 + 0x19) == 0) {
            do {
              if (lVar1 < plVar11[4]) {
                plVar15 = (longlong *)*plVar11;
                plVar18 = plVar11;
              }
              else {
                plVar15 = (longlong *)plVar11[2];
              }
              plVar11 = plVar15;
            } while (*(char *)((longlong)plVar15 + 0x19) == '\0');
            do {
              if (plVar10[4] < lVar1) {
                plVar11 = (longlong *)plVar10[2];
              }
              else {
                plVar11 = (longlong *)*plVar10;
                plVar12 = plVar10;
              }
              plVar10 = plVar11;
            } while (*(char *)((longlong)plVar11 + 0x19) == '\0');
          }
          while (plVar12 != plVar18) {
            lVar2 = plVar12[5];
            if (lVar2 == 0) {
              plVar10 = (longlong *)plVar12[2];
              if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
                cVar8 = *(char *)(*plVar10 + 0x19);
                plVar11 = (longlong *)*plVar10;
                while (plVar12 = plVar10, cVar8 == '\0') {
                  cVar8 = *(char *)(*plVar11 + 0x19);
                  plVar10 = plVar11;
                  plVar11 = (longlong *)*plVar11;
                }
              }
              else {
                cVar8 = *(char *)(plVar12[1] + 0x19);
                plVar11 = (longlong *)plVar12[1];
                plVar10 = plVar12;
                while ((plVar12 = plVar11, cVar8 == '\0' && (plVar10 == (longlong *)plVar12[2]))) {
                  cVar8 = *(char *)(plVar12[1] + 0x19);
                  plVar11 = (longlong *)plVar12[1];
                  plVar10 = plVar12;
                }
              }
            }
            else {
              if (((longlong *)param_1[0xf] != (longlong *)0x0) &&
                 (cVar8 = (**(code **)(*(longlong *)param_1[0xf] + 0x88))(), cVar8 != '\0')) break;
              if ((*(longlong *)(lVar2 + 8) == 0) && (lVar2 != lVar14)) {
                *(longlong *)(lVar2 + 0x48) = lVar1;
                *(longlong *)(lVar2 + 8) = lVar14;
                lVar16 = *(longlong *)(lVar2 + 0x18);
                *(longlong *)(lVar2 + 0x20) = lVar16;
                lVar3 = *(longlong *)(lVar14 + 0x10);
                *(longlong *)(lVar2 + 0x18) = lVar3;
                if (lVar16 == 0) {
                  lVar16 = lVar3;
                }
                *(longlong *)(lVar2 + 0x20) = lVar16;
                *(longlong *)(lVar14 + 0x10) = lVar2;
                *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar14 + 0x50);
                plVar10 = (longlong *)plVar12[2];
                if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
                  cVar8 = *(char *)(*plVar10 + 0x19);
                  plVar11 = plVar10;
                  plVar15 = (longlong *)*plVar10;
                  while (cVar8 == '\0') {
                    cVar8 = *(char *)(*plVar15 + 0x19);
                    plVar11 = plVar15;
                    plVar15 = (longlong *)*plVar15;
                  }
                }
                else {
                  cVar8 = *(char *)(plVar12[1] + 0x19);
                  plVar7 = (longlong *)plVar12[1];
                  plVar15 = plVar12;
                  while ((plVar11 = plVar7, cVar8 == '\0' && (plVar15 == (longlong *)plVar11[2]))) {
                    cVar8 = *(char *)(plVar11[1] + 0x19);
                    plVar7 = (longlong *)plVar11[1];
                    plVar15 = plVar11;
                  }
                }
                if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
                  plVar10 = (longlong *)*plVar10;
                  cVar8 = *(char *)((longlong)plVar10 + 0x19);
                  while (cVar8 == '\0') {
                    plVar10 = (longlong *)*plVar10;
                    cVar8 = *(char *)((longlong)plVar10 + 0x19);
                  }
                }
                else {
                  cVar8 = *(char *)(plVar12[1] + 0x19);
                  plVar15 = (longlong *)plVar12[1];
                  plVar10 = plVar12;
                  while ((plVar7 = plVar15, cVar8 == '\0' && (plVar10 == (longlong *)plVar7[2]))) {
                    cVar8 = *(char *)(plVar7[1] + 0x19);
                    plVar15 = (longlong *)plVar7[1];
                    plVar10 = plVar7;
                  }
                }
                plVar12 = FUN_180012020(param_1,plVar12);
                pcVar17 = (code *)0x30;
                free(plVar12);
                plVar12 = plVar11;
              }
              else {
                plVar10 = (longlong *)plVar12[2];
                if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
                  cVar8 = *(char *)(*plVar10 + 0x19);
                  plVar12 = plVar10;
                  plVar10 = (longlong *)*plVar10;
                  while (cVar8 == '\0') {
                    cVar8 = *(char *)(*plVar10 + 0x19);
                    plVar12 = plVar10;
                    plVar10 = (longlong *)*plVar10;
                  }
                }
                else {
                  cVar8 = *(char *)(plVar12[1] + 0x19);
                  plVar11 = (longlong *)plVar12[1];
                  plVar10 = plVar12;
                  while ((plVar12 = plVar11, cVar8 == '\0' && (plVar10 == (longlong *)plVar12[2])))
                  {
                    cVar8 = *(char *)(plVar12[1] + 0x19);
                    plVar11 = (longlong *)plVar12[1];
                    plVar10 = plVar12;
                  }
                }
              }
            }
          }
        }
      }
    }
    pcVar5 = pcStack_48;
    pcStack_48 = pcVar6;
  }
  pcVar4 = local_50;
  pcStack_48 = local_50;
  uVar13 = FUN_18003b5e0((longlong)param_1,pcVar17,param_1);
  if (pcVar4 != (code *)0x0) {
    pcVar17 = pcVar4;
    if ((0xfff < ((longlong)local_res8 - (longlong)pcVar4 & 0xfffffffffffffff8U)) &&
       (pcVar17 = *(code **)(pcVar4 + -8), (code *)0x1f < pcVar4 + (-8 - (longlong)pcVar17))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pcVar17);
  }
  return uVar13;
}

