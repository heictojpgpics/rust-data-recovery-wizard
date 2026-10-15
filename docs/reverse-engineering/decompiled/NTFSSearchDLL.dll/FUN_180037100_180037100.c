// Function: FUN_180037100
// Address: 180037100
// Size: 1182 bytes


undefined8 *
FUN_180037100(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 local_res20;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40 [3];
  
  local_res20 = param_4;
  FUN_180011530((longlong *)&local_60);
  plVar15 = *(longlong **)*param_2;
  puVar16 = (undefined8 *)0x0;
  if (plVar15 != (longlong *)*param_2) {
    do {
      lVar3 = plVar15[4];
      plVar9 = *(longlong **)(lVar3 + 0x18);
      if (plVar9 != (longlong *)0x0) {
        if ((undefined **)*plVar9 == CNTFSFileProperties::vftable) {
          uVar6 = *(ushort *)((longlong)plVar9 + 0x23);
        }
        else {
          uVar6 = (*(code *)((undefined **)*plVar9)[7])(plVar9);
        }
        if ((uVar6 & 0x10) == 0) {
          if ((undefined **)*plVar9 == CNTFSFileProperties::vftable) {
            lVar12 = *(longlong *)((longlong)plVar9 + 0x1b);
          }
          else {
            lVar12 = (*(code *)((undefined **)*plVar9)[3])(plVar9);
          }
          if (lVar12 == 0) goto LAB_1800371f7;
        }
        puVar7 = FUN_180031070();
        puVar7[7] = lVar3;
        puVar7[6] = *(undefined8 *)(lVar3 + 0x18);
        *(undefined8 *)(lVar3 + 0x18) = 0;
        local_res20 = *(undefined8 *)(lVar3 + 0x10);
        puVar8 = (undefined8 *)FUN_180002680(&local_res20);
        local_50 = *puVar8;
        local_48 = puVar7;
        plVar9 = (longlong *)FUN_1800151c0(&local_60,(longlong)&local_50);
        FUN_180015210((longlong *)&local_60,local_40,param_3,plVar9 + 4,plVar9);
      }
LAB_1800371f7:
      plVar9 = (longlong *)plVar15[2];
      if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar9 + 0x19);
        plVar15 = plVar9;
        plVar9 = (longlong *)*plVar9;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar9 + 0x19);
          plVar15 = plVar9;
          plVar9 = (longlong *)*plVar9;
        }
      }
      else {
        cVar1 = *(char *)(plVar15[1] + 0x19);
        plVar13 = (longlong *)plVar15[1];
        plVar9 = plVar15;
        while ((plVar15 = plVar13, cVar1 == '\0' && (plVar9 == (longlong *)plVar15[2]))) {
          cVar1 = *(char *)(plVar15[1] + 0x19);
          plVar13 = (longlong *)plVar15[1];
          plVar9 = plVar15;
        }
      }
    } while (plVar15 != (longlong *)*param_2);
  }
  plVar15 = (longlong *)*local_60;
  plVar9 = local_60;
  if (plVar15 != local_60) {
    do {
      lVar3 = plVar15[5];
      if ((lVar3 != 0) && (plVar13 = *(longlong **)(lVar3 + 0x30), plVar13 != (longlong *)0x0)) {
        if ((undefined **)*plVar13 == CNTFSFileProperties::vftable) {
          uVar6 = *(ushort *)((longlong)plVar13 + 0x23);
        }
        else {
          uVar6 = (*(code *)((undefined **)*plVar13)[7])();
          plVar9 = local_60;
        }
        if (((uVar6 & 0x10) != 0) &&
           (lVar12 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x20), 0x18 < lVar12)) {
          plVar13 = (longlong *)plVar9[1];
          cVar2 = *(char *)((longlong)plVar13 + 0x19);
          plVar11 = plVar13;
          plVar17 = plVar9;
          cVar1 = cVar2;
          while (plVar10 = plVar9, cVar1 == '\0') {
            if (lVar12 < plVar11[4]) {
              plVar10 = (longlong *)*plVar11;
              plVar17 = plVar11;
            }
            else {
              plVar10 = (longlong *)plVar11[2];
            }
            plVar11 = plVar10;
            cVar1 = *(char *)((longlong)plVar10 + 0x19);
          }
          while (plVar11 = plVar13, cVar2 == '\0') {
            if (plVar11[4] < lVar12) {
              plVar13 = (longlong *)plVar11[2];
              plVar11 = plVar10;
            }
            else {
              plVar13 = (longlong *)*plVar11;
            }
            cVar2 = *(char *)((longlong)plVar13 + 0x19);
            plVar10 = plVar11;
          }
          while (plVar10 != plVar17) {
            lVar4 = plVar10[5];
            if (((*(longlong *)(lVar4 + 8) == 0) && (lVar4 != lVar3)) &&
               (lVar14 = lVar3, *(longlong *)(lVar4 + 0x30) != 0)) {
              do {
                if (lVar14 == lVar4) goto LAB_18003736d;
                plVar9 = (longlong *)(lVar14 + 8);
                lVar14 = *plVar9;
              } while (*plVar9 != 0);
              *(longlong *)(lVar4 + 0x48) = lVar12;
              *(longlong *)(lVar4 + 8) = lVar3;
              lVar14 = *(longlong *)(lVar4 + 0x18);
              *(longlong *)(lVar4 + 0x20) = lVar14;
              lVar5 = *(longlong *)(lVar3 + 0x10);
              *(longlong *)(lVar4 + 0x18) = lVar5;
              if (lVar14 == 0) {
                lVar14 = lVar5;
              }
              *(longlong *)(lVar4 + 0x20) = lVar14;
              *(longlong *)(lVar3 + 0x10) = lVar4;
              *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar3 + 0x50);
            }
LAB_18003736d:
            plVar13 = (longlong *)plVar10[2];
            plVar9 = local_60;
            if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar13 + 0x19);
              plVar10 = plVar13;
              plVar13 = (longlong *)*plVar13;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar13 + 0x19);
                plVar10 = plVar13;
                plVar13 = (longlong *)*plVar13;
              }
            }
            else {
              cVar1 = *(char *)(plVar10[1] + 0x19);
              plVar11 = (longlong *)plVar10[1];
              plVar13 = plVar10;
              while ((plVar10 = plVar11, cVar1 == '\0' && (plVar13 == (longlong *)plVar10[2]))) {
                cVar1 = *(char *)(plVar10[1] + 0x19);
                plVar11 = (longlong *)plVar10[1];
                plVar13 = plVar10;
              }
            }
          }
        }
      }
      plVar13 = (longlong *)plVar15[2];
      if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar13 + 0x19);
        plVar15 = plVar13;
        plVar13 = (longlong *)*plVar13;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar13 + 0x19);
          plVar15 = plVar13;
          plVar13 = (longlong *)*plVar13;
        }
      }
      else {
        cVar1 = *(char *)(plVar15[1] + 0x19);
        plVar11 = (longlong *)plVar15[1];
        plVar13 = plVar15;
        while ((plVar15 = plVar11, cVar1 == '\0' && (plVar13 == (longlong *)plVar15[2]))) {
          cVar1 = *(char *)(plVar15[1] + 0x19);
          plVar11 = (longlong *)plVar15[1];
          plVar13 = plVar15;
        }
      }
    } while (plVar15 != plVar9);
  }
  FUN_180036f50((longlong *)&local_60);
  if (local_58 != 0) {
    if (param_1 == (undefined8 *)0x0) {
      param_1 = FUN_180037f00();
    }
    plVar15 = (longlong *)*local_60;
    while (puVar16 = param_1, plVar15 != local_60) {
      lVar3 = plVar15[5];
      if (lVar3 != 0) {
        *(undefined8 **)(lVar3 + 8) = param_1;
        lVar12 = *(longlong *)(lVar3 + 0x18);
        *(longlong *)(lVar3 + 0x20) = lVar12;
        lVar4 = param_1[2];
        *(longlong *)(lVar3 + 0x18) = lVar4;
        if (lVar12 == 0) {
          lVar12 = lVar4;
        }
        *(longlong *)(lVar3 + 0x20) = lVar12;
        param_1[2] = lVar3;
        *(undefined8 *)(lVar3 + 0x48) = param_1[10];
      }
      plVar9 = (longlong *)plVar15[2];
      if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar9 + 0x19);
        plVar15 = plVar9;
        plVar9 = (longlong *)*plVar9;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar9 + 0x19);
          plVar15 = plVar9;
          plVar9 = (longlong *)*plVar9;
        }
      }
      else {
        cVar1 = *(char *)(plVar15[1] + 0x19);
        plVar13 = (longlong *)plVar15[1];
        plVar9 = plVar15;
        while ((plVar15 = plVar13, cVar1 == '\0' && (plVar9 == (longlong *)plVar15[2]))) {
          cVar1 = *(char *)(plVar15[1] + 0x19);
          plVar13 = (longlong *)plVar15[1];
          plVar9 = plVar15;
        }
      }
    }
  }
  plVar9 = local_60;
  cVar1 = *(char *)(local_60[1] + 0x19);
  plVar15 = (longlong *)local_60[1];
  while (cVar1 == '\0') {
    FUN_180011da0(&local_60,(longlong *)plVar15[2]);
    plVar13 = (longlong *)*plVar15;
    free(plVar15);
    plVar15 = plVar13;
    cVar1 = *(char *)((longlong)plVar13 + 0x19);
  }
  local_60[1] = (longlong)plVar9;
  *local_60 = (longlong)plVar9;
  local_60[2] = (longlong)plVar9;
  local_58 = 0;
  FUN_1800080a0((longlong *)&local_60);
  return puVar16;
}

