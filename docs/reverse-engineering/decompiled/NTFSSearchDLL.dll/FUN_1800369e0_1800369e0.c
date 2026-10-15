// Function: FUN_1800369e0
// Address: 1800369e0
// Size: 1273 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800369e0(longlong param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 param_7,undefined4 param_8)

{
  char cVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  char *pcVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  longlong *local_98;
  longlong local_90;
  longlong local_88 [2];
  undefined4 local_78;
  undefined8 local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined2 local_4e;
  
  FUN_180011670(local_88);
  FUN_180011670((longlong *)&local_98);
  puVar12 = param_2;
  while (puVar12 != (undefined8 *)0x0) {
    puVar15 = puVar12;
    uVar10 = FUN_18002e5b0((longlong)puVar12);
    plVar13 = local_98;
    if ((char)uVar10 != '\0') {
      bVar5 = true;
      goto LAB_180036acd;
    }
    puVar12 = (undefined8 *)puVar12[1];
    if (puVar12 == (undefined8 *)0x0) break;
    for (plVar16 = (longlong *)*local_98; param_6 = puVar12, plVar16 != local_98;
        plVar16 = (longlong *)*plVar16) {
      if ((undefined8 *)plVar16[2] == puVar12) {
        if (plVar16 != local_98) goto LAB_180036ac9;
        break;
      }
    }
    plVar16 = (longlong *)local_98[1];
    lVar11 = FUN_1800143b0(puVar15,(longlong)local_98,(longlong)plVar16,&param_6);
    if (local_90 == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_90 = local_90 + 1;
    plVar13[1] = lVar11;
    *plVar16 = lVar11;
  }
LAB_180036ac9:
  bVar5 = false;
LAB_180036acd:
  if (local_90 != 0) {
    plVar13 = (longlong *)*local_98;
    *local_98 = (longlong)local_98;
    local_98[1] = (longlong)local_98;
    local_90 = 0;
    if (plVar13 != local_98) {
      do {
        plVar16 = (longlong *)*plVar13;
        free(plVar13);
        plVar13 = plVar16;
      } while (plVar16 != local_98);
    }
  }
  FUN_180011600((longlong *)&local_98);
  uVar7 = param_8;
  uVar6 = param_7;
  local_78 = 0;
  local_50 = 0;
  local_4e = 0xffff;
  plVar13 = (longlong *)*param_4;
  plVar16 = (longlong *)plVar13[1];
  plVar17 = plVar16;
  plVar20 = plVar13;
  lStack_68 = param_3;
  local_70 = _DAT_180073280;
  local_60 = _DAT_180073280;
  uStack_58 = _UNK_180073288;
  if (*(char *)((longlong)plVar16 + 0x19) == '\0') {
    do {
      if (param_3 < *(longlong *)(plVar17[4] + 0x10)) {
        plVar18 = (longlong *)*plVar17;
        plVar20 = plVar17;
      }
      else {
        plVar18 = (longlong *)plVar17[2];
      }
      plVar17 = plVar18;
    } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
    do {
      if (*(longlong *)(plVar16[4] + 0x10) < param_3) {
        plVar17 = (longlong *)plVar16[2];
      }
      else {
        plVar17 = (longlong *)*plVar16;
        plVar13 = plVar16;
      }
      plVar16 = plVar17;
    } while (*(char *)((longlong)plVar17 + 0x19) == '\0');
  }
joined_r0x000180036ba0:
  do {
    if (plVar13 == plVar20) {
LAB_180036e9d:
      FUN_180011600(local_88);
      return;
    }
    piVar2 = (int *)plVar13[4];
    if (*(longlong *)(piVar2 + 6) != 0) {
      plVar16 = (longlong *)param_2[6];
      if (plVar16 != (longlong *)0x0) {
        if ((undefined **)*plVar16 == CNTFSFileProperties::vftable) {
          bVar9 = *(byte *)((longlong)plVar16 + 0x72) & 1;
        }
        else {
          bVar9 = (*(code *)((undefined **)*plVar16)[0x1b])();
        }
        if ((bVar9 != 0) && (plVar16 = *(longlong **)(piVar2 + 6), plVar16 != (longlong *)0x0)) {
          if ((undefined **)*plVar16 == CNTFSFileProperties::vftable) {
            bVar9 = *(byte *)((longlong)plVar16 + 0x72) & 1;
          }
          else {
            bVar9 = (*(code *)((undefined **)*plVar16)[0x1b])();
          }
          if (bVar9 == 0) {
            plVar16 = (longlong *)plVar13[2];
            if (*(char *)((longlong)plVar16 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar16 + 0x19);
              plVar17 = (longlong *)*plVar16;
              while (plVar13 = plVar16, cVar1 == '\0') {
                cVar1 = *(char *)(*plVar17 + 0x19);
                plVar16 = plVar17;
                plVar17 = (longlong *)*plVar17;
              }
            }
            else {
              cVar1 = *(char *)(plVar13[1] + 0x19);
              plVar17 = (longlong *)plVar13[1];
              plVar16 = plVar13;
              while ((plVar13 = plVar17, cVar1 == '\0' && (plVar16 == (longlong *)plVar13[2]))) {
                cVar1 = *(char *)(plVar13[1] + 0x19);
                plVar17 = (longlong *)plVar13[1];
                plVar16 = plVar13;
              }
            }
            goto joined_r0x000180036ba0;
          }
        }
      }
      param_6 = FUN_180031070();
      param_6[7] = piVar2;
      param_6[6] = *(undefined8 *)(piVar2 + 6);
      piVar2[6] = 0;
      piVar2[7] = 0;
      param_6[0xb] = *(undefined8 *)(piVar2 + 2);
      param_6[9] = param_3;
      lVar11 = *(longlong *)(piVar2 + 8);
      param_6[10] = lVar11;
      if (param_6 != (undefined8 *)0x0) {
        param_6[1] = param_2;
        lVar11 = param_6[3];
        param_6[4] = lVar11;
        lVar3 = param_2[2];
        param_6[3] = lVar3;
        if (lVar11 == 0) {
          lVar11 = lVar3;
        }
        param_6[4] = lVar11;
        param_2[2] = param_6;
        param_6[9] = param_2[10];
      }
      if (*piVar2 != 0) {
        lVar3 = *param_5;
        plVar16 = *(longlong **)(lVar3 + 8);
        lVar11 = FUN_1800143b0(lVar11,lVar3,(longlong)plVar16,&param_6);
        if (param_5[1] == 0xaaaaaaaaaaaaaa9) {
          std::_Xlength_error("list<T> too long");
          goto LAB_180036e9d;
        }
        param_5[1] = param_5[1] + 1;
        *(longlong *)(lVar3 + 8) = lVar11;
        *plVar16 = lVar11;
      }
      if ((bVar5) &&
         (puVar12 = (undefined8 *)FUN_1800362f0(local_88,(longlong)param_6,'\x01'),
         puVar12 != (undefined8 *)0x0)) {
        plVar16 = (longlong *)puVar12[6];
        puVar15 = puVar12;
        puVar19 = param_6;
        if (plVar16 != (longlong *)0x0) {
          if ((undefined **)*plVar16 == CNTFSFileProperties::vftable) {
            pcVar14 = *(char **)((longlong)plVar16 + 0x11);
          }
          else {
            pcVar14 = (char *)(*(code *)((undefined **)*plVar16)[2])(plVar16);
          }
          puVar19 = param_6;
          if (pcVar14 != (char *)0x0) {
            uVar10 = 0xffffffffffffffff;
            do {
              uVar10 = uVar10 + 1;
            } while (pcVar14[uVar10] != '\0');
            if (((1 < uVar10) && (*pcVar14 == '$')) && (pcVar14[1] == 'I')) {
              puVar15 = param_6;
              puVar19 = puVar12;
            }
          }
        }
        FUN_1800365f0(*(longlong **)(param_1 + 0x10),(longlong)puVar15,(longlong)puVar19,uVar6,uVar7
                     );
      }
    }
    plVar16 = (longlong *)plVar13[2];
    if (*(char *)((longlong)plVar16 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar16 + 0x19);
      plVar17 = plVar16;
      plVar18 = (longlong *)*plVar16;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar18 + 0x19);
        plVar17 = plVar18;
        plVar18 = (longlong *)*plVar18;
      }
    }
    else {
      cVar1 = *(char *)(plVar13[1] + 0x19);
      plVar8 = (longlong *)plVar13[1];
      plVar18 = plVar13;
      while ((plVar17 = plVar8, cVar1 == '\0' && (plVar18 == (longlong *)plVar17[2]))) {
        cVar1 = *(char *)(plVar17[1] + 0x19);
        plVar8 = (longlong *)plVar17[1];
        plVar18 = plVar17;
      }
    }
    if (*(char *)((longlong)plVar16 + 0x19) == '\0') {
      plVar16 = (longlong *)*plVar16;
      cVar1 = *(char *)((longlong)plVar16 + 0x19);
      while (cVar1 == '\0') {
        plVar16 = (longlong *)*plVar16;
        cVar1 = *(char *)((longlong)plVar16 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar13[1] + 0x19);
      plVar18 = (longlong *)plVar13[1];
      plVar16 = plVar13;
      while ((plVar8 = plVar18, cVar1 == '\0' && (plVar16 == (longlong *)plVar8[2]))) {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar18 = (longlong *)plVar8[1];
        plVar16 = plVar8;
      }
    }
    plVar13 = FUN_180012020(param_4,plVar13);
    free(plVar13);
    plVar13 = plVar17;
  } while( true );
}

