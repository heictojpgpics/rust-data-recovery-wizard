// Function: FUN_1800101b0
// Address: 1800101b0
// Size: 1159 bytes


void FUN_1800101b0(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  double dVar21;
  undefined8 local_res10;
  undefined8 *local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 *local_68;
  longlong *local_60 [2];
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  
  uVar5 = (uint)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  if (param_2 != (longlong *)0x0) {
    local_50 = 0xfffffffffffffffe;
    iVar4 = (**(code **)(*param_2 + 8))(param_2);
    if ((iVar4 == 0) && ((*(byte *)((longlong)param_2 + 0x72) & 4) == 0)) {
      plVar7 = (longlong *)param_2[6];
      if (plVar7 != (longlong *)0x0) {
        if ((undefined **)*plVar7 == CNTFSFileProperties::vftable) {
          bVar3 = (byte)*(undefined2 *)((longlong)plVar7 + 0x23);
        }
        else {
          bVar3 = (*(code *)((undefined **)*plVar7)[7])();
        }
        if ((bVar3 >> 4 & 1) != 0) {
          return;
        }
      }
      if ((*(longlong *)(param_1 + 0xb8) != 0) &&
         (plVar7 = (longlong *)
                   __RTDynamicCast(param_2[6],0,&IFileProperties::RTTI_Type_Descriptor,
                                   &CNTFSFileProperties::RTTI_Type_Descriptor,
                                   (ulonglong)uVar5 << 0x20), plVar7 != (longlong *)0x0)) {
        if ((undefined **)*plVar7 == CNTFSFileProperties::vftable) {
          bVar3 = *(byte *)((longlong)plVar7 + 0x72) >> 4 & 1;
        }
        else {
          bVar3 = (*(code *)((undefined **)*plVar7)[0x1d])(plVar7);
        }
        if (bVar3 == 0) {
          uVar5 = (uint)*(ushort *)(plVar7 + 0xe);
          if (*(ushort *)(plVar7 + 0xe) == 0) {
            if ((undefined **)*plVar7 == CNTFSFileProperties::vftable) {
              bVar3 = *(byte *)((longlong)plVar7 + 0x72) & 1;
            }
            else {
              bVar3 = (*(code *)((undefined **)*plVar7)[0x1b])(plVar7);
            }
            if (bVar3 == 0) {
              return;
            }
            uVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
            uVar5 = FUN_1800442d0(plVar7,uVar5);
            if ((short)uVar5 == 0) {
              return;
            }
          }
          uVar17 = uVar5 & 0xffff;
          puVar10 = *(undefined8 **)(param_1 + 0x858);
          cVar1 = *(char *)((longlong)puVar10[1] + 0x19);
          puVar11 = puVar10;
          puVar19 = (undefined8 *)puVar10[1];
          while (cVar1 == '\0') {
            if (*(uint *)((longlong)puVar19 + 0x1c) < uVar17) {
              puVar13 = (undefined8 *)puVar19[2];
              puVar19 = puVar11;
            }
            else {
              puVar13 = (undefined8 *)*puVar19;
            }
            puVar11 = puVar19;
            puVar19 = puVar13;
            cVar1 = *(char *)((longlong)puVar13 + 0x19);
          }
          if ((puVar11 == puVar10) || (uVar17 < *(uint *)((longlong)puVar11 + 0x1c))) {
            puVar11 = puVar10;
          }
          if (puVar11 == puVar10) {
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
            dVar21 = FUN_180044580(uVar6);
            lVar8 = 0;
            if ((DAT_1800731b0 <= dVar21) &&
               (dVar21 = dVar21 - DAT_1800731b0, dVar21 < DAT_1800731b0)) {
              lVar8 = -0x8000000000000000;
            }
            if (0 < (longlong)dVar21 + lVar8) {
              local_res20 = param_2[0xb] - plVar7[0xb] * ((longlong)dVar21 + lVar8);
              lVar8 = FUN_180010640(param_1,local_res20);
              if (-1 < lVar8) {
                uVar18 = (ulonglong)(uVar5 & 0xffff);
                plVar7 = *(longlong **)(param_1 + 0x930);
                plVar15 = (longlong *)plVar7[1];
                cVar2 = *(char *)((longlong)plVar15 + 0x19);
                plVar14 = plVar7;
                plVar20 = plVar15;
                cVar1 = cVar2;
                while (cVar1 == '\0') {
                  if (plVar20[4] < (longlong)uVar18) {
                    plVar16 = (longlong *)plVar20[2];
                    plVar20 = plVar14;
                  }
                  else {
                    plVar16 = (longlong *)*plVar20;
                  }
                  plVar14 = plVar20;
                  plVar20 = plVar16;
                  cVar1 = *(char *)((longlong)plVar16 + 0x19);
                }
                if ((plVar14 == plVar7) || ((longlong)uVar18 < plVar14[4])) {
                  plVar14 = plVar7;
                }
                plVar16 = plVar7;
                if (plVar14 == plVar7) {
                  while (cVar2 == '\0') {
                    if (plVar15[4] < (longlong)uVar18) {
                      plVar14 = (longlong *)plVar15[2];
                      plVar15 = plVar16;
                    }
                    else {
                      plVar14 = (longlong *)*plVar15;
                    }
                    plVar16 = plVar15;
                    plVar15 = plVar14;
                    cVar2 = *(char *)((longlong)plVar14 + 0x19);
                  }
                  local_res10 = (undefined8 *)uVar18;
                  if ((plVar16 == plVar7) || ((longlong)uVar18 < plVar16[4])) {
                    local_68 = &local_res10;
                    plVar7 = (longlong *)
                             FUN_180015290((undefined8 *)(param_1 + 0x930),plVar15,&local_68);
                    FUN_180015310((longlong *)(param_1 + 0x930),local_60,plVar16,plVar7 + 4,plVar7);
                    plVar16 = local_60[0];
                  }
                  local_48 = local_res20;
                  local_40 = 1;
                  plVar7 = (longlong *)FUN_180014ba0(plVar16 + 5,(longlong)&local_48);
                  FUN_180014bf0(plVar16 + 5,local_60,'\0',plVar7 + 4,plVar7);
                }
                else {
                  puVar9 = (uint *)FUN_180011090(plVar14 + 5,&local_res20);
                  *puVar9 = *puVar9 + 1;
                  if (1 < *puVar9) {
                    plVar7 = FUN_180011090(plVar14 + 5,&local_res20);
                    puVar11 = (undefined8 *)0x0;
                    *(undefined4 *)plVar7 = 0;
                    puVar10 = (undefined8 *)FUN_18002be40(0x1a8);
                    local_res10 = puVar10;
                    if (puVar10 != (undefined8 *)0x0) {
                      uVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
                      puVar11 = FUN_180039390(puVar10,uVar6);
                    }
                    puVar11[2] = lVar8;
                    *(uint *)((longlong)puVar11 + 0xc) = uVar17;
                    puVar11[5] = 0;
                    *(undefined4 *)(puVar11 + 1) = 3;
                    local_res18 = puVar11;
                    lVar12 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
                    lVar12 = (lVar12 - lVar8) / (longlong)uVar18;
                    local_res18[0x15] = lVar12;
                    local_res18[0xc] = uVar18 * lVar12;
                    *(undefined4 *)((longlong)local_res18 + 0x9c) = 0x100;
                    local_res18[4] = 4;
                    FUN_1800142b0((longlong *)(param_1 + 0x868),&local_48,plVar20,
                                  (longlong *)&local_res18);
                    local_res10 = (undefined8 *)
                                  (CONCAT44(local_res10._4_4_,uVar5) & 0xffffffff0000ffff);
                    FUN_180014170((longlong *)(param_1 + 0x858),&local_48,plVar20,
                                  (uint *)&local_res10);
                    puVar10 = *(undefined8 **)(param_1 + 0x140);
                    puVar11 = (undefined8 *)*puVar10;
                    while (puVar11 != puVar10) {
                      lVar12 = puVar11[4];
                      if (((lVar12 != 0) && (*(longlong *)(lVar12 + 0x10) == lVar8)) &&
                         (uVar17 != *(uint *)(lVar12 + 0xc))) {
                        *(byte *)(lVar12 + 0xf8) = *(byte *)(lVar12 + 0xf8) | 1;
                      }
                      puVar19 = (undefined8 *)puVar11[2];
                      if (*(char *)((longlong)puVar19 + 0x19) == '\0') {
                        cVar1 = *(char *)((longlong)*puVar19 + 0x19);
                        puVar11 = puVar19;
                        puVar19 = (undefined8 *)*puVar19;
                        while (cVar1 == '\0') {
                          cVar1 = *(char *)((longlong)*puVar19 + 0x19);
                          puVar11 = puVar19;
                          puVar19 = (undefined8 *)*puVar19;
                        }
                      }
                      else {
                        cVar1 = *(char *)((longlong)puVar11[1] + 0x19);
                        puVar13 = (undefined8 *)puVar11[1];
                        puVar19 = puVar11;
                        while ((puVar11 = puVar13, cVar1 == '\0' &&
                               (puVar19 == (undefined8 *)puVar11[2]))) {
                          cVar1 = *(char *)((longlong)puVar11[1] + 0x19);
                          puVar13 = (undefined8 *)puVar11[1];
                          puVar19 = puVar11;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

