// Function: FUN_18003a2b0
// Address: 18003a2b0
// Size: 1145 bytes


void FUN_18003a2b0(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined *puVar5;
  ulonglong uVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  char *pcVar14;
  longlong *plVar15;
  longlong lVar16;
  char cVar17;
  undefined1 auStackY_c8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_80 = 0xfffffffffffffffe;
  local_48 = DAT_180086010 ^ (ulonglong)auStackY_c8;
  if (param_3 == (longlong *)0x0) goto LAB_18003a6f0;
  plVar11 = (longlong *)param_1[7];
  plVar15 = (longlong *)*plVar11;
  *plVar11 = (longlong)plVar11;
  *(longlong *)(param_1[7] + 8) = param_1[7];
  param_1[8] = 0;
  plVar11 = param_3;
  if (plVar15 != (longlong *)param_1[7]) {
    do {
      plVar1 = (longlong *)*plVar15;
      free(plVar15);
      plVar15 = plVar1;
    } while (plVar1 != (longlong *)param_1[7]);
  }
  FUN_180011140(param_1 + 9);
  param_1[5] = param_2;
  param_1[0xf] = param_5;
  plVar15 = *(longlong **)*param_1;
  if (plVar15 != (longlong *)*param_1) {
    do {
      plVar1 = (longlong *)plVar15[5];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,1);
      }
      plVar1 = (longlong *)plVar15[2];
      if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
        cVar17 = *(char *)(*plVar1 + 0x19);
        plVar15 = plVar1;
        plVar1 = (longlong *)*plVar1;
        while (cVar17 == '\0') {
          cVar17 = *(char *)(*plVar1 + 0x19);
          plVar15 = plVar1;
          plVar1 = (longlong *)*plVar1;
        }
      }
      else {
        cVar17 = *(char *)(plVar15[1] + 0x19);
        plVar3 = (longlong *)plVar15[1];
        plVar1 = plVar15;
        while ((plVar15 = plVar3, cVar17 == '\0' && (plVar1 == (longlong *)plVar15[2]))) {
          cVar17 = *(char *)(plVar15[1] + 0x19);
          plVar3 = (longlong *)plVar15[1];
          plVar1 = plVar15;
        }
      }
    } while (plVar15 != (longlong *)*param_1);
  }
  FUN_180011140(param_1);
  lVar10 = param_1[5];
  if (*(char *)(lVar10 + 0x1a0) == '\0') {
    if (lVar10 != 0) {
      plVar15 = *(longlong **)(lVar10 + 0x130);
      plVar1 = *(longlong **)(lVar10 + 0x138);
      if (plVar15 != plVar1) {
        do {
          lVar13 = *plVar15;
          *(undefined2 *)(lVar13 + 0x6c) = 1;
          local_88 = lVar13;
          puVar5 = FUN_1800319c0(lVar13);
          FUN_180003be0(local_68,puVar5);
          uVar6 = FUN_1800025d0((longlong)local_68);
          if (2 < uVar6) {
            pcVar7 = (char *)FUN_180002680(local_68);
            pcVar14 = pcVar7;
            if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
              pcVar14 = *(char **)pcVar7;
            }
            if (*pcVar14 == '$') {
              if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
                pcVar7 = *(char **)pcVar7;
              }
              if (pcVar7[1] == 'R') {
                FUN_1800246b0(param_1 + 7,&local_88);
              }
            }
          }
          uVar6 = FUN_1800025d0((longlong)local_68);
          if (2 < uVar6) {
            pcVar7 = (char *)FUN_180002680(local_68);
            pcVar14 = pcVar7;
            if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
              pcVar14 = *(char **)pcVar7;
            }
            if (*pcVar14 == '$') {
              if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
                pcVar7 = *(char **)pcVar7;
              }
              if (pcVar7[1] == 'I') {
                FUN_1800246b0(param_1 + 7,&local_88);
              }
            }
          }
          FUN_1800025f0(local_68);
          FUN_18003bfa0(param_1,lVar13,plVar11);
          plVar15 = plVar15 + 1;
        } while (plVar15 != plVar1);
        plVar15 = *(longlong **)(lVar10 + 0x130);
      }
      *(longlong **)(lVar10 + 0x138) = plVar15;
      lVar10 = param_1[5];
      if (*(char *)(lVar10 + 0xf5) == '\0') goto LAB_18003a5d9;
      if ((*(char *)(lVar10 + 0xf6) == '\0') || (*(char *)(lVar10 + 0xf8) != '\x01')) {
        cVar17 = '\0';
      }
      else {
        cVar17 = '\x01';
      }
      FUN_18003c2c0(param_1,param_3,cVar17);
    }
    if (param_1[5] != 0) {
      lVar10 = *param_3;
      uVar8 = param_3[1] - lVar10 >> 3;
      uVar6 = param_1[0xc];
      if (uVar6 < uVar8) {
        if (uVar8 <= uVar6) {
          FUN_18003d3e0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        do {
          plVar11 = *(longlong **)(lVar10 + uVar6 * 8);
          if (((plVar11 != (longlong *)0x0) &&
              (uVar9 = FUN_18003c970((longlong)param_1,plVar11), (char)uVar9 != '\0')) &&
             ((ulonglong)param_1[0xc] <= uVar6)) {
            lVar10 = param_1[5];
            lVar13 = *(longlong *)(lVar10 + 0x10);
            bVar4 = FUN_18003ad10((longlong)param_1,plVar11,lVar13,*(longlong *)(lVar10 + 0x60),
                                  *(int *)(lVar10 + 0x58));
            if ((bVar4) && (lVar10 = (**(code **)*plVar11)(plVar11), lVar10 != 0)) {
              *(undefined2 *)(lVar10 + 0x6c) = *(undefined2 *)((longlong)plVar11 + 0x6c);
              FUN_18003bc80((longlong)param_1,lVar10);
              FUN_18003bfa0(param_1,lVar10,lVar13);
            }
          }
          uVar6 = uVar6 + 1;
          lVar10 = *param_3;
        } while (uVar6 < (ulonglong)(param_3[1] - lVar10 >> 3));
      }
    }
  }
LAB_18003a5d9:
  FUN_18003aa50(param_1);
  bVar4 = FUN_180019dd0((longlong)param_1);
  if (!bVar4) {
    lVar10 = param_1[8];
    while (lVar10 != 0) {
      plVar11 = FUN_180003ba0(param_1 + 7,&local_88);
      lVar10 = *(longlong *)(*plVar11 + 0x10);
      puVar12 = FUN_180003ba0(param_1 + 7,&local_78);
      plVar11 = (longlong *)*puVar12;
      lVar13 = *plVar11;
      *(longlong *)plVar11[1] = lVar13;
      *(longlong *)(*plVar11 + 8) = plVar11[1];
      param_1[8] = param_1[8] + -1;
      free(plVar11);
      FUN_1800378b0(plVar11,&local_70,lVar13);
      lVar13 = FUN_1800362f0(param_1 + 7,lVar10,'\0');
      if (lVar13 != 0) {
        plVar11 = *(longlong **)(lVar13 + 0x30);
        lVar16 = lVar13;
        if (plVar11 != (longlong *)0x0) {
          if ((undefined **)*plVar11 == CNTFSFileProperties::vftable) {
            pcVar14 = *(char **)((longlong)plVar11 + 0x11);
          }
          else {
            pcVar14 = (char *)(*(code *)((undefined **)*plVar11)[2])();
          }
          if (pcVar14 != (char *)0x0) {
            uVar6 = 0xffffffffffffffff;
            do {
              uVar6 = uVar6 + 1;
            } while (pcVar14[uVar6] != '\0');
            if (((1 < uVar6) && (*pcVar14 == '$')) && (pcVar14[1] == 'I')) {
              lVar16 = lVar10;
              lVar10 = lVar13;
            }
          }
        }
        FUN_1800365f0((longlong *)param_1[6],lVar16,lVar10,*(undefined8 *)(param_1[5] + 0x10),
                      *(undefined4 *)(param_1[5] + 0xc));
      }
      lVar10 = param_1[8];
    }
  }
LAB_18003a6f0:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_c8);
  return;
}

