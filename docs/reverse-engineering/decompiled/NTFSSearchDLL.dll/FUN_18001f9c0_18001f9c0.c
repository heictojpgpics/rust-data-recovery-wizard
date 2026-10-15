// Function: FUN_18001f9c0
// Address: 18001f9c0
// Size: 1868 bytes


void FUN_18001f9c0(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  undefined **ppuVar2;
  ushort *puVar3;
  code *pcVar4;
  undefined4 *puVar5;
  bool bVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  void *pvVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  char *pcVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined4 *puVar22;
  ulonglong *puVar23;
  undefined4 *puVar24;
  longlong *plVar25;
  size_t sVar26;
  undefined8 **ppuVar27;
  uint *puVar28;
  ulonglong *_Dst;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [8];
  undefined8 *local_110;
  undefined8 *local_108;
  uint local_100 [2];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0 [3];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88 [4];
  longlong local_68 [4];
  ulonglong local_48;
  
  local_90 = 0xfffffffffffffffe;
  local_48 = DAT_180086010 ^ (ulonglong)auStackY_148;
  plVar25 = (longlong *)(param_1[7] + 0x60);
  plVar20 = *(longlong **)*plVar25;
  local_110 = param_1;
  local_f0 = plVar25;
  local_e8 = param_2;
  FUN_1800025a0(local_e0);
  if (plVar20 != (longlong *)*plVar25) {
    do {
      if (((longlong *)param_1[6] != (longlong *)0x0) &&
         (iVar9 = (**(code **)(*(longlong *)param_1[6] + 0x10))(), iVar9 == 0)) break;
      *(undefined1 *)((longlong)plVar20 + 0x5c) = 0;
      if ((undefined8 *)plVar20[9] != (undefined8 *)0x0) {
        iVar9 = (*(code *)**(undefined8 **)plVar20[9])();
        sVar26 = (size_t)iVar9;
        pvVar10 = (void *)(**(code **)(*(longlong *)plVar20[9] + 0x10))();
        FUN_1800026a0((longlong)local_88);
        puVar11 = (undefined1 *)FUN_180002680(local_88);
        *(undefined8 *)(puVar11 + 0x10) = 0;
        *(undefined8 *)(puVar11 + 0x18) = 0xf;
        local_118[0] = 0;
        FUN_180001150(puVar11,local_118);
        FUN_1800026c0(local_88,pvVar10,sVar26);
        bVar6 = FUN_1800025c0((longlong)local_88);
        if (!bVar6) {
          (**(code **)(*(longlong *)plVar20[9] + 0x70))((longlong *)plVar20[9],1);
          *(byte *)(plVar20[9] + 0x72) = *(byte *)(plVar20[9] + 0x72) | 1;
          *(byte *)(plVar20[9] + 0x72) = *(byte *)(plVar20[9] + 0x72) | 4;
          local_f8 = (longlong *)(**(code **)(*(longlong *)plVar20[9] + 0x18))();
          cVar7 = FUN_18001eb10((longlong)param_1,(longlong)(plVar20 + 5));
          if (cVar7 == '\0') {
            FUN_18001c400((longlong)param_1,(longlong)(plVar20 + 5),sVar26);
            puVar12 = FUN_1800025e0(local_88);
            FUN_180003be0(local_68,puVar12);
            cVar7 = FUN_1800445e0(local_68);
            plVar15 = local_68;
            FUN_1800025f0(plVar15);
            if (((cVar7 == '\0') ||
                (uVar13 = FUN_18001bb20(plVar15,plVar25,(longlong)(plVar20 + 5)),
                (char)uVar13 != '\0')) ||
               (uVar14 = (**(code **)(*(longlong *)plVar20[9] + 0x38))(), (uVar14 & 0x10) == 0)) {
              local_108 = (undefined8 *)((ulonglong)local_108 & 0xffffffff00000000);
              local_100[0] = 0;
              cVar7 = FUN_180043d60((longlong *)plVar20[9]);
              plVar15 = local_e0;
              if (cVar7 == '\0') {
                plVar15 = param_2;
              }
              if (plVar20[9] != 0) {
                puVar28 = local_100;
                ppuVar27 = &local_108;
                cVar7 = FUN_18001ef20(param_1,(ulonglong *)(plVar20 + 5),(uint *)ppuVar27,puVar28,
                                      plVar15);
                if (cVar7 != '\0') {
                  plVar25 = (longlong *)(**(code **)(*(longlong *)plVar20[9] + 0x18))();
                  local_108 = &local_c8;
                  plVar15 = (longlong *)FUN_180011a30((longlong)&local_c8,local_88);
                  cVar7 = FUN_18001b190(plVar15,plVar25,ppuVar27,(longlong *)puVar28);
                  if (cVar7 == '\0') {
                    *(undefined8 *)(plVar20[9] + 0x1b) = 0;
                  }
                  ppuVar2 = *(undefined ***)plVar20[9];
                  if (ppuVar2 == CNTFSFileProperties::vftable) {
                    puVar3 = (ushort *)((longlong *)plVar20[9])[9];
                    if (puVar3 == (ushort *)0x0) {
                      puVar12 = (undefined8 *)0x0;
                    }
                    else {
                      puVar12 = FUN_180033aa0(puVar3);
                    }
                  }
                  else {
                    puVar12 = (undefined8 *)(*(code *)ppuVar2[0xf])();
                  }
                  if (puVar12 != (undefined8 *)0x0) {
                    plVar25 = FUN_1800340b0((longlong)puVar12);
                    if (plVar25 == (longlong *)0x0) {
                      bVar6 = false;
                    }
                    else if ((*plVar25 == 0) && (plVar25[1] == 0)) {
                      bVar6 = false;
                    }
                    else {
                      plVar25 = (longlong *)param_1[1];
                      if (plVar25 != (longlong *)0x0) {
                        plVar15 = (longlong *)plVar20[9];
                        if ((undefined **)*plVar15 == CNTFSFileProperties::vftable) {
                          lVar17 = *(longlong *)((longlong)plVar15 + 0x1b);
                        }
                        else {
                          lVar17 = (*(code *)((undefined **)*plVar15)[3])(plVar15);
                          plVar25 = (longlong *)param_1[1];
                        }
                        iVar9 = (**(code **)(*plVar25 + 0x28))();
                        lVar18 = (**(code **)(*(longlong *)param_1[1] + 0x18))();
                        if (lVar18 * iVar9 <= lVar17) {
                          bVar6 = false;
                          goto LAB_18001fcad;
                        }
                      }
                      ppuVar2 = *(undefined ***)plVar20[9];
                      if (ppuVar2 == CNTFSFileProperties::vftable) {
                        lVar17 = *(longlong *)((longlong)plVar20[9] + 0x1b);
                      }
                      else {
                        lVar17 = (*(code *)ppuVar2[3])();
                      }
                      bVar6 = lVar17 != 0;
                    }
LAB_18001fcad:
                    (**(code **)*puVar12)(puVar12,1);
                    if (bVar6) {
                      *(byte *)(plVar20[9] + 0x72) = *(byte *)(plVar20[9] + 0x72) | 2;
                      plVar25 = (longlong *)plVar20[9];
                      pcVar4 = *(code **)(*plVar25 + 0x70);
                      uVar8 = (**(code **)(*plVar25 + 0x68))(plVar25);
                      (*pcVar4)(plVar25,uVar8 | 1);
                      plVar25 = param_2;
                      puVar12 = (undefined8 *)FUN_180002680(param_2);
                      lVar17 = puVar12[1];
                      local_108 = puVar12;
                      plVar25 = (longlong *)FUN_180002680(plVar25);
                      if ((ulonglong)((lVar17 - *plVar25) / 0x38) < 10000) {
                        plVar25 = param_2;
                        plVar15 = (longlong *)FUN_180002670((longlong)param_2);
                        puVar23 = (ulonglong *)*plVar15;
                        puVar16 = (undefined8 *)FUN_180002680(plVar25);
                        for (_Dst = (ulonglong *)*puVar16; _Dst != puVar23; _Dst = _Dst + 7) {
                          if ((plVar20[9] != 0) &&
                             (plVar25 = (longlong *)_Dst[4], plVar25 != (longlong *)0x0)) {
                            if ((undefined **)*plVar25 == CNTFSFileProperties::vftable) {
                              lVar17 = *(longlong *)((longlong)plVar25 + 0x11);
                            }
                            else {
                              lVar17 = (*(code *)((undefined **)*plVar25)[2])();
                            }
                            if (lVar17 != 0) {
                              ppuVar2 = *(undefined ***)plVar20[9];
                              if (ppuVar2 == CNTFSFileProperties::vftable) {
                                lVar17 = *(longlong *)((longlong)plVar20[9] + 0x11);
                              }
                              else {
                                lVar17 = (*(code *)ppuVar2[2])();
                              }
                              if (lVar17 != 0) {
                                lVar17 = (**(code **)(*(longlong *)plVar20[9] + 0xf0))();
                                lVar18 = (**(code **)(*(longlong *)_Dst[4] + 0xf0))();
                                if (lVar17 == lVar18) {
                                  ppuVar2 = *(undefined ***)_Dst[4];
                                  if (ppuVar2 == CNTFSFileProperties::vftable) {
                                    lVar17 = *(longlong *)((longlong)_Dst[4] + 0x11);
                                  }
                                  else {
                                    lVar17 = (*(code *)ppuVar2[2])();
                                  }
                                  plVar25 = (longlong *)plVar20[9];
                                  if ((undefined **)*plVar25 == CNTFSFileProperties::vftable) {
                                    pcVar19 = *(char **)((longlong)plVar25 + 0x11);
                                  }
                                  else {
                                    pcVar19 = (char *)(*(code *)((undefined **)*plVar25)[2])
                                                                (plVar25);
                                  }
                                  lVar17 = lVar17 - (longlong)pcVar19;
                                  do {
                                    cVar7 = *pcVar19;
                                    cVar1 = pcVar19[lVar17];
                                    if (cVar7 != cVar1) break;
                                    pcVar19 = pcVar19 + 1;
                                  } while (cVar1 != '\0');
                                  puVar12 = local_108;
                                  param_2 = local_e8;
                                  if (cVar7 == cVar1) break;
                                }
                              }
                            }
                          }
                          puVar12 = local_108;
                          param_2 = local_e8;
                        }
                        puVar23 = (ulonglong *)*plVar15;
                        if (_Dst != puVar23) {
                          uVar14 = FUN_18001f540((longlong)local_110,(longlong)(plVar20 + 5),_Dst,
                                                 (longlong)local_f8);
                          param_1 = local_110;
                          if ((char)uVar14 == '\0') goto LAB_18001fe77;
                          memmove(_Dst,_Dst + 7,*plVar15 - (longlong)(_Dst + 7));
                          puVar23 = (ulonglong *)(*plVar15 + -0x38);
                          *plVar15 = (longlong)puVar23;
                        }
                        plVar25 = (longlong *)FUN_180002810((longlong)param_2);
                        if (*plVar25 == puVar12[1]) {
                          FUN_180020900(param_2,puVar23,plVar20 + 5);
                          param_1 = local_110;
                        }
                        else {
                          plVar25 = (longlong *)FUN_180001100(puVar12[1],puVar23);
                          lVar17 = plVar20[6];
                          *plVar25 = plVar20[5];
                          plVar25[1] = lVar17;
                          lVar17 = plVar20[8];
                          plVar25[2] = plVar20[7];
                          plVar25[3] = lVar17;
                          lVar17 = plVar20[10];
                          plVar25[4] = plVar20[9];
                          plVar25[5] = lVar17;
                          plVar25[6] = plVar20[0xb];
                          *plVar15 = *plVar15 + 0x38;
                          param_1 = local_110;
                        }
                      }
                      else {
                        plVar25 = (longlong *)FUN_180002810((longlong)param_2);
                        if (*plVar25 == lVar17) {
                          puVar12 = (undefined8 *)FUN_180002670((longlong)param_2);
                          FUN_180020900(param_2,(void *)*puVar12,plVar20 + 5);
                        }
                        else {
                          plVar25 = (longlong *)FUN_180002670((longlong)param_2);
                          plVar15 = (longlong *)FUN_180001100(plVar25,*plVar25);
                          lVar17 = plVar20[6];
                          *plVar15 = plVar20[5];
                          plVar15[1] = lVar17;
                          lVar17 = plVar20[8];
                          plVar15[2] = plVar20[7];
                          plVar15[3] = lVar17;
                          lVar17 = plVar20[10];
                          plVar15[4] = plVar20[9];
                          plVar15[5] = lVar17;
                          plVar15[6] = plVar20[0xb];
                          *plVar25 = *plVar25 + 0x38;
                        }
                      }
                    }
                  }
LAB_18001fe77:
                  FUN_1800025f0(local_88);
                  plVar25 = local_f0;
                  goto LAB_18001ff3f;
                }
              }
            }
          }
        }
        FUN_1800025f0(local_88);
      }
LAB_18001ff3f:
      plVar15 = (longlong *)plVar20[2];
      if (*(char *)((longlong)plVar15 + 0x19) == '\0') {
        cVar7 = *(char *)(*plVar15 + 0x19);
        plVar20 = plVar15;
        plVar15 = (longlong *)*plVar15;
        while (cVar7 == '\0') {
          cVar7 = *(char *)(*plVar15 + 0x19);
          plVar20 = plVar15;
          plVar15 = (longlong *)*plVar15;
        }
      }
      else {
        cVar7 = *(char *)(plVar20[1] + 0x19);
        plVar21 = (longlong *)plVar20[1];
        plVar15 = plVar20;
        while ((plVar20 = plVar21, cVar7 == '\0' && (plVar15 == (longlong *)plVar20[2]))) {
          cVar7 = *(char *)(plVar20[1] + 0x19);
          plVar21 = (longlong *)plVar20[1];
          plVar15 = plVar20;
        }
      }
    } while (plVar20 != (longlong *)*plVar25);
  }
  plVar20 = (longlong *)FUN_180002670((longlong)param_2);
  lVar17 = *plVar20;
  plVar25 = (longlong *)FUN_180002680(param_2);
  for (lVar18 = *plVar25; lVar18 != lVar17; lVar18 = lVar18 + 0x38) {
    FUN_18001bd00((longlong)param_1,lVar18);
  }
  local_f8 = (longlong *)FUN_180002680(local_e0);
  puVar24 = (undefined4 *)*local_f8;
  plVar15 = (longlong *)FUN_180002670((longlong)local_e0);
  plVar25 = local_e8;
  puVar5 = (undefined4 *)*plVar15;
  if (puVar24 != puVar5) {
    plVar21 = local_e8;
    lVar17 = FUN_180002680(local_e8);
    plVar21 = (longlong *)FUN_180002810((longlong)plVar21);
    do {
      uVar29 = *puVar24;
      uVar30 = puVar24[1];
      uVar31 = puVar24[2];
      uVar32 = puVar24[3];
      local_b8 = *(undefined8 *)(puVar24 + 4);
      uStack_b0 = *(undefined8 *)(puVar24 + 6);
      local_a8 = *(undefined8 *)(puVar24 + 8);
      uStack_a0 = *(undefined8 *)(puVar24 + 10);
      local_98 = *(undefined8 *)(puVar24 + 0xc);
      local_c8._0_4_ = uVar29;
      local_c8._4_4_ = uVar30;
      uStack_c0 = uVar31;
      uStack_bc = uVar32;
      if (*plVar21 == *(longlong *)(lVar17 + 8)) {
        FUN_180020900(plVar25,(void *)*plVar20,&local_c8);
      }
      else {
        puVar22 = (undefined4 *)FUN_180001100(*(longlong *)(lVar17 + 8),(void *)*plVar20);
        *puVar22 = uVar29;
        puVar22[1] = uVar30;
        puVar22[2] = uVar31;
        puVar22[3] = uVar32;
        *(undefined8 *)(puVar22 + 4) = local_b8;
        *(undefined8 *)(puVar22 + 6) = uStack_b0;
        *(undefined8 *)(puVar22 + 8) = local_a8;
        *(undefined8 *)(puVar22 + 10) = uStack_a0;
        *(undefined8 *)(puVar22 + 0xc) = local_98;
        *plVar20 = *plVar20 + 0x38;
      }
      puVar24 = puVar24 + 0xe;
    } while (puVar24 != puVar5);
    puVar24 = (undefined4 *)*local_f8;
  }
  *plVar15 = (longlong)puVar24;
  FUN_180002520(local_e0);
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_148);
  return;
}

