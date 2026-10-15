// Function: FUN_180023cb0
// Address: 180023cb0
// Size: 2399 bytes


void FUN_180023cb0(longlong *param_1,char param_2,TypeDescriptor *param_3)

{
  ushort uVar1;
  longlong *plVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  void *pvVar5;
  TypeDescriptor *pTVar6;
  longlong *plVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  TypeDescriptor *pTVar12;
  TypeDescriptor *pTVar13;
  longlong *plVar14;
  ulonglong uVar15;
  void *pvVar16;
  TypeDescriptor *pTVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 uVar20;
  TypeDescriptor *pTVar21;
  longlong *plVar22;
  void *pvVar23;
  TypeDescriptor *pTVar24;
  longlong lVar25;
  uint uVar26;
  undefined **ppuVar27;
  TypeDescriptor *pTVar28;
  longlong *plVar29;
  bool bVar30;
  uint local_res20;
  TypeDescriptor local_d8;
  void *local_c8;
  TypeDescriptor *local_c0;
  TypeDescriptor *local_b8;
  longlong *local_b0;
  void *local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong *local_90;
  void **local_88;
  TypeDescriptor *local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60 [4];
  
  local_78 = 0xfffffffffffffffe;
  if ((*param_1 != 0) && (*(longlong *)(*param_1 + 8) != 0)) {
    plVar14 = (longlong *)param_1[2];
    plVar29 = (longlong *)*plVar14;
    local_90 = plVar14;
    if (plVar29 != plVar14) {
      do {
        local_res20 = 0;
        local_a8 = (void *)0x0;
        pTVar24 = (TypeDescriptor *)plVar29[5];
        local_a0 = 0xffffffffffffffff;
        local_d8.pVFTable = (void *)0x0;
        local_d8.spare = (void *)0x0;
        local_c0 = pTVar24;
        local_d8.pVFTable = (void *)FUN_180012fd0();
        if (((longlong *)param_1[0x11] != (longlong *)0x0) &&
           (cVar8 = (**(code **)(*(longlong *)param_1[0x11] + 0x88))(), pvVar16 = local_d8.pVFTable,
           cVar8 != '\0')) {
          cVar8 = *(char *)((longlong)*(longlong **)((longlong)local_d8.pVFTable + 8) + 0x19);
          plVar14 = *(longlong **)((longlong)local_d8.pVFTable + 8);
          while (cVar8 == '\0') {
            FUN_180011da0(&local_d8,(longlong *)plVar14[2]);
            plVar29 = (longlong *)*plVar14;
            free(plVar14);
            plVar14 = plVar29;
            cVar8 = *(char *)((longlong)plVar29 + 0x19);
          }
          ((TypeDescriptor *)local_d8.pVFTable)->spare = pvVar16;
          ((TypeDescriptor *)local_d8.pVFTable)->pVFTable = pvVar16;
          ((TypeDescriptor *)((longlong)local_d8.pVFTable + 0x10))->pVFTable = pvVar16;
          local_d8.spare = (void *)0x0;
          free(local_d8.pVFTable);
          return;
        }
        pTVar17 = pTVar24;
        if (pTVar24 != (TypeDescriptor *)plVar29[6]) {
          do {
            plVar2 = (longlong *)pTVar24->pVFTable;
            local_b0 = plVar2;
            if (((longlong *)param_1[0x11] != (longlong *)0x0) &&
               (cVar8 = (**(code **)(*(longlong *)param_1[0x11] + 0x88))(), plVar14 = local_90,
               cVar8 != '\0')) break;
            if ((plVar2 != (longlong *)0x0) &&
               ((iVar10 = (**(code **)(*plVar2 + 8))(plVar2), iVar10 == 0 &&
                ((*(byte *)((longlong)plVar2 + 0x72) & 4) == 0)))) {
              plVar14 = (longlong *)plVar2[6];
              if (plVar14 != (longlong *)0x0) {
                ppuVar27 = CNTFSFileProperties::vftable;
                if ((undefined **)*plVar14 == CNTFSFileProperties::vftable) {
                  bVar9 = (byte)*(undefined2 *)((longlong)plVar14 + 0x23);
                  param_3 = (TypeDescriptor *)ppuVar27;
                }
                else {
                  bVar9 = (*(code *)((undefined **)*plVar14)[7])();
                  param_3 = (TypeDescriptor *)ppuVar27;
                }
                if ((bVar9 >> 4 & 1) != 0) goto LAB_18002412f;
              }
              param_3 = &IFileProperties::RTTI_Type_Descriptor;
              uVar20 = 0;
              pTVar12 = (TypeDescriptor *)plVar2[6];
              lVar11 = __RTDynamicCast();
              if (lVar11 != 0) {
                uVar1 = *(ushort *)(lVar11 + 0x70);
                uVar26 = (uint)uVar1;
                if (uVar1 != 0) {
                  local_c8 = (void *)CONCAT44(local_c8._4_4_,uVar26);
                  pTVar12 = *(TypeDescriptor **)((longlong)local_d8.pVFTable + 8);
                  pTVar21 = (TypeDescriptor *)local_d8.pVFTable;
                  if (*(char *)((longlong)
                                &(*(TypeDescriptor **)((longlong)local_d8.pVFTable + 8))[1].spare +
                               1) == '\0') {
                    do {
                      if (*(uint *)&pTVar12[2].pVFTable < uVar26) {
                        pTVar13 = (TypeDescriptor *)pTVar12[1].pVFTable;
                      }
                      else {
                        pTVar13 = (TypeDescriptor *)pTVar12->pVFTable;
                        pTVar21 = pTVar12;
                      }
                      pTVar12 = pTVar13;
                    } while (*(char *)((longlong)&pTVar13[1].spare + 1) == '\0');
                    if ((pTVar21 == (TypeDescriptor *)local_d8.pVFTable) ||
                       (pTVar12 = (TypeDescriptor *)local_d8.pVFTable, pTVar13 = pTVar21,
                       uVar26 < *(uint *)&pTVar21[2].pVFTable)) goto LAB_180023e57;
                  }
                  else {
LAB_180023e57:
                    local_88 = &local_c8;
                    plVar14 = (longlong *)FUN_1800255f0(&local_d8.pVFTable,uVar20,&local_88);
                    pTVar12 = &local_d8;
                    FUN_180025650((longlong *)pTVar12,&local_80,(longlong *)pTVar21,
                                  (uint *)(plVar14 + 4),plVar14);
                    pTVar13 = local_80;
                    param_3 = pTVar21;
                  }
                  pTVar13[2].spare = (void *)((longlong)pTVar13[2].spare + 1);
                }
                plVar14 = local_b0;
                puVar18 = (undefined8 *)*param_1;
                if (param_2 == '\0') {
                  pTVar21 = (TypeDescriptor *)plVar29[4];
                  local_c8 = (void *)0x0;
                  local_b8 = pTVar21;
                  if (puVar18 != (undefined8 *)0x0) {
                    pTVar13 = (TypeDescriptor *)*puVar18;
                    pTVar3 = (TypeDescriptor *)pTVar13->pVFTable;
                    pTVar28 = param_3;
                    while ((param_3 = pTVar28, pTVar3 != pTVar13 &&
                           ((((param_3 = (TypeDescriptor *)pTVar3[2].pVFTable, local_b8 = param_3,
                              param_3 == (TypeDescriptor *)0x0 || ((longlong)param_3[0xc].spare < 1)
                              ) || (uVar15 = FUN_180023970(pTVar12,(longlong)plVar14,
                                                           (longlong)param_3), pTVar28 = param_3,
                                   (char)uVar15 == '\0')) ||
                            (pTVar12 = local_b8,
                            pTVar21 !=
                            (TypeDescriptor *)
                            ((longlong)local_b8[1].pVFTable + (longlong)local_b8[0xc].spare)))))) {
                      pTVar4 = (TypeDescriptor *)pTVar3[1].pVFTable;
                      if (*(char *)((longlong)&pTVar4[1].spare + 1) == '\0') {
                        cVar8 = *(char *)((longlong)&((TypeDescriptor *)pTVar4->pVFTable)[1].spare +
                                         1);
                        pTVar3 = pTVar4;
                        pTVar12 = (TypeDescriptor *)pTVar4->pVFTable;
                        while (cVar8 == '\0') {
                          cVar8 = *(char *)((longlong)
                                            &((TypeDescriptor *)pTVar12->pVFTable)[1].spare + 1);
                          pTVar3 = pTVar12;
                          pTVar12 = (TypeDescriptor *)pTVar12->pVFTable;
                        }
                      }
                      else {
                        cVar8 = *(char *)((longlong)&((TypeDescriptor *)pTVar3->spare)[1].spare + 1)
                        ;
                        pTVar6 = (TypeDescriptor *)pTVar3->spare;
                        pTVar4 = pTVar3;
                        while ((pTVar3 = pTVar6, cVar8 == '\0' &&
                               (pTVar4 == (TypeDescriptor *)pTVar3[1].pVFTable))) {
                          cVar8 = *(char *)((longlong)&((TypeDescriptor *)pTVar3->spare)[1].spare +
                                           1);
                          pTVar6 = (TypeDescriptor *)pTVar3->spare;
                          pTVar4 = pTVar3;
                        }
                      }
                    }
                    if (pTVar3 != *(TypeDescriptor **)*param_1) {
                      local_c8 = pTVar3[2].pVFTable;
                    }
                  }
                }
                else {
                  pTVar21 = (TypeDescriptor *)plVar29[4];
                  local_c8 = (void *)0x0;
                  if (puVar18 != (undefined8 *)0x0) {
                    pTVar13 = (TypeDescriptor *)*puVar18;
                    pTVar3 = (TypeDescriptor *)pTVar13->pVFTable;
                    while ((pTVar3 != pTVar13 &&
                           (((pTVar28 = (TypeDescriptor *)pTVar3[2].pVFTable, local_b8 = pTVar28,
                             pTVar28 == (TypeDescriptor *)0x0 ||
                             (pTVar28[0x16].pVFTable == (void *)0x0)) ||
                            ((uVar15 = FUN_180023970(pTVar12,(longlong)plVar14,(longlong)pTVar28),
                             param_3 = pTVar28, (char)uVar15 == '\0' ||
                             (param_3 = pTVar21,
                             pvVar16 = FUN_180023b00(&pTVar12->pVFTable,(longlong)local_b8,
                                                     (longlong)pTVar21,plVar14[0xb]),
                             (char)pvVar16 == '\0'))))))) {
                      pTVar28 = (TypeDescriptor *)pTVar3[1].pVFTable;
                      if (*(char *)((longlong)&pTVar28[1].spare + 1) == '\0') {
                        cVar8 = *(char *)((longlong)&((TypeDescriptor *)pTVar28->pVFTable)[1].spare
                                         + 1);
                        pTVar3 = pTVar28;
                        pTVar12 = (TypeDescriptor *)pTVar28->pVFTable;
                        while (cVar8 == '\0') {
                          cVar8 = *(char *)((longlong)
                                            &((TypeDescriptor *)pTVar12->pVFTable)[1].spare + 1);
                          pTVar3 = pTVar12;
                          pTVar12 = (TypeDescriptor *)pTVar12->pVFTable;
                        }
                      }
                      else {
                        cVar8 = *(char *)((longlong)&((TypeDescriptor *)pTVar3->spare)[1].spare + 1)
                        ;
                        pTVar4 = (TypeDescriptor *)pTVar3->spare;
                        pTVar28 = pTVar3;
                        while ((pTVar3 = pTVar4, cVar8 == '\0' &&
                               (pTVar28 == (TypeDescriptor *)pTVar3[1].pVFTable))) {
                          cVar8 = *(char *)((longlong)&((TypeDescriptor *)pTVar3->spare)[1].spare +
                                           1);
                          pTVar4 = (TypeDescriptor *)pTVar3->spare;
                          pTVar28 = pTVar3;
                        }
                      }
                    }
                    if (pTVar3 == *(TypeDescriptor **)*param_1) {
                      if (param_1[0xc] != 0) {
                        FUN_1800101b0(param_1[0xc],plVar14);
                      }
                    }
                    else {
                      local_c8 = pTVar3[2].pVFTable;
                    }
                  }
                }
                pvVar23 = local_a8;
                pTVar12 = local_c0;
                pvVar16 = local_c8;
                if (local_c8 != (void *)0x0) {
                  if (uVar1 != 0) {
                    if ((longlong)local_a0 < 1) {
                      local_a0 = (ulonglong)(uint)uVar1;
                    }
                    else {
                      pTVar17 = (TypeDescriptor *)&pTVar24->spare;
                    }
                  }
                  if ((local_a8 == (void *)0x0) || (local_a8 == local_c8)) {
                    local_a8 = local_c8;
                    cVar8 = FUN_180031960(local_b0);
                    if (cVar8 == '\0') {
                      local_res20 = local_res20 + 1;
                    }
                  }
                  else if (3 < local_res20) {
                    if (*(char *)((longlong)local_a8 + 0x178) == '\0') {
                      *(longlong *)((longlong)local_a8 + 0x68) =
                           *(longlong *)((longlong)local_a8 + 0x68) + 0x32;
                      *(undefined1 *)((longlong)local_a8 + 0x178) = 1;
                    }
                    FUN_180024a40((longlong *)((longlong)local_a8 + 0x130),
                                  *(void **)((longlong)local_a8 + 0x138),local_c0,(longlong)pTVar24)
                    ;
                    param_3 = (TypeDescriptor *)plVar29[4];
                    FUN_180022d40((longlong)param_1,(longlong)pvVar23,(longlong)param_3);
                    if (pTVar12 != pTVar24) {
                      pTVar21 = (TypeDescriptor *)(plVar29[6] - (longlong)pTVar24);
                      param_3 = pTVar21;
                      memmove(pTVar12,pTVar24,(size_t)pTVar21);
                      plVar29[6] = (longlong)&pTVar12->pVFTable + (longlong)&pTVar21->pVFTable;
                    }
                    local_res20 = 0;
                    local_a8 = pvVar16;
                    pTVar24 = pTVar12;
                  }
                }
              }
            }
LAB_18002412f:
            pTVar24 = (TypeDescriptor *)&pTVar24->spare;
            plVar14 = local_90;
          } while (pTVar24 != (TypeDescriptor *)plVar29[6]);
        }
        lVar25 = 0;
        lVar11 = param_1[0xc];
        if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x870) != 0)) {
          plVar2 = *(longlong **)(lVar11 + 0x868);
          plVar22 = (longlong *)*plVar2;
          if (plVar22 != plVar2) {
            do {
              local_98 = plVar22[4];
              FUN_1800142b0((longlong *)(lVar11 + 0x140),local_60,param_3,&local_98);
              plVar14 = (longlong *)plVar22[2];
              if (*(char *)((longlong)plVar14 + 0x19) == '\0') {
                cVar8 = *(char *)(*plVar14 + 0x19);
                plVar22 = plVar14;
                plVar14 = (longlong *)*plVar14;
                while (cVar8 == '\0') {
                  cVar8 = *(char *)(*plVar14 + 0x19);
                  plVar22 = plVar14;
                  plVar14 = (longlong *)*plVar14;
                }
              }
              else {
                cVar8 = *(char *)(plVar22[1] + 0x19);
                plVar7 = (longlong *)plVar22[1];
                plVar14 = plVar22;
                while ((plVar22 = plVar7, cVar8 == '\0' && (plVar14 == (longlong *)plVar22[2]))) {
                  cVar8 = *(char *)(plVar22[1] + 0x19);
                  plVar7 = (longlong *)plVar22[1];
                  plVar14 = plVar22;
                }
              }
              lVar25 = local_98;
              plVar14 = local_90;
            } while (plVar22 != plVar2);
          }
          FUN_180011400((longlong *)(lVar11 + 0x868));
        }
        pvVar23 = local_a8;
        pvVar16 = local_d8.pVFTable;
        if ((local_res20 == 0) && (lVar25 == 0)) {
          pvVar23 = (void *)0x0;
          if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
            param_3 = (TypeDescriptor *)0xffffffff;
            iVar10 = 0;
            pTVar24 = (TypeDescriptor *)*(void **)local_d8.pVFTable;
            while (pTVar24 != (TypeDescriptor *)local_d8.pVFTable) {
              uVar26 = (uint)param_3;
              pvVar5 = pTVar24[2].spare;
              if ((longlong)(int)uVar26 < (longlong)pvVar5) {
                iVar10 = *(int *)&pTVar24[2].pVFTable;
              }
              uVar19 = (uint)pvVar5;
              if ((longlong)pvVar5 <= (longlong)(int)uVar26) {
                uVar19 = uVar26;
              }
              param_3 = (TypeDescriptor *)(ulonglong)uVar19;
              pTVar17 = (TypeDescriptor *)pTVar24[1].pVFTable;
              if (*(char *)((longlong)&pTVar17[1].spare + 1) == '\0') {
                cVar8 = *(char *)((longlong)&((TypeDescriptor *)pTVar17->pVFTable)[1].spare + 1);
                pTVar24 = pTVar17;
                pTVar17 = (TypeDescriptor *)pTVar17->pVFTable;
                while (cVar8 == '\0') {
                  cVar8 = *(char *)((longlong)&((TypeDescriptor *)pTVar17->pVFTable)[1].spare + 1);
                  pTVar24 = pTVar17;
                  pTVar17 = (TypeDescriptor *)pTVar17->pVFTable;
                }
              }
              else {
                cVar8 = *(char *)((longlong)&((TypeDescriptor *)pTVar24->spare)[1].spare + 1);
                pTVar12 = (TypeDescriptor *)pTVar24->spare;
                pTVar17 = pTVar24;
                while ((pTVar24 = pTVar12, cVar8 == '\0' &&
                       (pTVar17 == (TypeDescriptor *)pTVar24[1].pVFTable))) {
                  cVar8 = *(char *)((longlong)&((TypeDescriptor *)pTVar24->spare)[1].spare + 1);
                  pTVar12 = (TypeDescriptor *)pTVar24->spare;
                  pTVar17 = pTVar24;
                }
              }
            }
            pTVar24 = *(TypeDescriptor **)*param_1;
            pTVar17 = (TypeDescriptor *)pTVar24->pVFTable;
            if (pTVar17 != pTVar24) {
              do {
                if ((*(int *)((longlong)pTVar17[2].pVFTable + 0xc) == iVar10) &&
                   (bVar30 = pvVar23 != (void *)0x0, pvVar23 = pTVar17[2].pVFTable, bVar30))
                goto LAB_180024373;
                pTVar12 = (TypeDescriptor *)pTVar17[1].pVFTable;
                if (*(char *)((longlong)&pTVar12[1].spare + 1) == '\0') {
                  cVar8 = *(char *)((longlong)&((TypeDescriptor *)pTVar12->pVFTable)[1].spare + 1);
                  pTVar17 = pTVar12;
                  param_3 = (TypeDescriptor *)pTVar12->pVFTable;
                  while (cVar8 == '\0') {
                    cVar8 = *(char *)((longlong)&((TypeDescriptor *)param_3->pVFTable)[1].spare + 1)
                    ;
                    pTVar17 = param_3;
                    param_3 = (TypeDescriptor *)param_3->pVFTable;
                  }
                }
                else {
                  cVar8 = *(char *)((longlong)&((TypeDescriptor *)pTVar17->spare)[1].spare + 1);
                  pTVar21 = (TypeDescriptor *)pTVar17->spare;
                  pTVar12 = pTVar17;
                  while ((pTVar17 = pTVar21, cVar8 == '\0' &&
                         (pTVar12 == (TypeDescriptor *)pTVar17[1].pVFTable))) {
                    cVar8 = *(char *)((longlong)&((TypeDescriptor *)pTVar17->spare)[1].spare + 1);
                    pTVar21 = (TypeDescriptor *)pTVar17->spare;
                    pTVar12 = pTVar17;
                  }
                }
              } while (pTVar17 != pTVar24);
              if (pvVar23 != (void *)0x0) {
                param_3 = local_c0;
                FUN_180024a40((longlong *)((longlong)pvVar23 + 0x130),
                              *(void **)((longlong)pvVar23 + 0x138),local_c0,plVar29[6]);
                *(longlong *)((longlong)pvVar23 + 0x68) =
                     *(longlong *)((longlong)pvVar23 + 0x68) + 0x1e;
                plVar29[6] = plVar29[5];
                goto LAB_180024526;
              }
            }
          }
LAB_180024373:
          cVar8 = *(char *)((longlong)*(longlong **)((longlong)local_d8.pVFTable + 8) + 0x19);
          plVar2 = *(longlong **)((longlong)local_d8.pVFTable + 8);
          while (cVar8 == '\0') {
            FUN_180011da0(&local_d8,(longlong *)plVar2[2]);
            plVar22 = (longlong *)*plVar2;
            free(plVar2);
            plVar2 = plVar22;
            cVar8 = *(char *)((longlong)plVar22 + 0x19);
          }
          ((TypeDescriptor *)local_d8.pVFTable)->spare = pvVar16;
          ((TypeDescriptor *)local_d8.pVFTable)->pVFTable = pvVar16;
          ((TypeDescriptor *)((longlong)local_d8.pVFTable + 0x10))->pVFTable = pvVar16;
          local_d8.spare = (void *)0x0;
          free(local_d8.pVFTable);
        }
        else {
          if (local_a8 == (void *)0x0) {
            if (lVar25 != 0) {
              param_3 = local_c0;
              FUN_180024a40((longlong *)(lVar25 + 0x130),*(void **)(lVar25 + 0x138),local_c0,
                            plVar29[6]);
              *(longlong *)(lVar25 + 0x68) = *(longlong *)(lVar25 + 0x68) + 0x1e;
              goto LAB_18002451e;
            }
          }
          else {
            if ((*(byte *)((longlong)local_a8 + 0xf8) & 1) == 0) {
              FUN_180024a40((longlong *)((longlong)local_a8 + 0x130),
                            *(void **)((longlong)local_a8 + 0x138),local_c0,plVar29[6]);
              pvVar16 = pvVar23;
            }
            else {
              pvVar16 = (void *)FUN_180022aa0(param_1,(longlong)local_a8);
              if (pvVar16 == (void *)0x0) goto LAB_180024526;
              if ((*(longlong *)((longlong)pvVar23 + 0x160) != 0) &&
                 (*(char *)((longlong)pvVar23 + 0xf1) != '\0')) {
                puVar18 = (undefined8 *)FUN_180002680((longlong)pvVar23 + 0x158);
                puVar18 = FUN_1800065b0(local_70,(undefined8 *)(*(longlong *)*puVar18 + 0x10));
                FUN_180022b60((longlong)param_1,(longlong)pvVar16,plVar29[4],puVar18);
              }
              if (local_a0 == *(uint *)((longlong)pvVar23 + 0xc)) {
                FUN_180024a40((longlong *)((longlong)pvVar23 + 0x130),
                              *(void **)((longlong)pvVar23 + 0x138),local_c0,(longlong)pTVar17);
                if (pTVar17 != (TypeDescriptor *)plVar29[6]) {
                  FUN_180024990((longlong)pvVar16,pTVar17,plVar29[6],0x1e);
                }
              }
              else {
                FUN_180024a40((longlong *)((longlong)pvVar16 + 0x130),
                              *(void **)((longlong)pvVar16 + 0x138),local_c0,plVar29[6]);
                *(longlong *)((longlong)pvVar16 + 0x68) =
                     *(longlong *)((longlong)pvVar16 + 0x68) + 0x1e;
              }
            }
            param_3 = (TypeDescriptor *)plVar29[4];
            FUN_180022d40((longlong)param_1,(longlong)pvVar16,(longlong)param_3);
LAB_18002451e:
            plVar29[6] = plVar29[5];
          }
LAB_180024526:
          FUN_180010f60((longlong *)&local_d8);
        }
        plVar2 = (longlong *)plVar29[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar8 = *(char *)(*plVar2 + 0x19);
          plVar29 = plVar2;
          plVar2 = (longlong *)*plVar2;
          while (cVar8 == '\0') {
            cVar8 = *(char *)(*plVar2 + 0x19);
            plVar29 = plVar2;
            plVar2 = (longlong *)*plVar2;
          }
        }
        else {
          cVar8 = *(char *)(plVar29[1] + 0x19);
          plVar22 = (longlong *)plVar29[1];
          plVar2 = plVar29;
          while ((plVar29 = plVar22, cVar8 == '\0' && (plVar2 == (longlong *)plVar29[2]))) {
            cVar8 = *(char *)(plVar29[1] + 0x19);
            plVar22 = (longlong *)plVar29[1];
            plVar2 = plVar29;
          }
        }
      } while (plVar29 != plVar14);
    }
  }
  return;
}

