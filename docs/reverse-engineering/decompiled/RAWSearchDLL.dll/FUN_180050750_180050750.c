// Function: FUN_180050750
// Address: 180050750
// Size: 1859 bytes


void FUN_180050750(longlong param_1,longlong *param_2,uint param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined6 uVar3;
  longlong lVar4;
  ushort uVar5;
  ushort *puVar6;
  size_t sVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  ulonglong uVar15;
  int iVar16;
  ushort uVar17;
  int *piVar18;
  ulonglong uVar19;
  int iVar20;
  undefined1 uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined8 *_Dst;
  undefined1 auStackY_e8 [32];
  undefined8 local_b8;
  int local_b0;
  uint local_ac;
  void *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_18008f028 ^ (ulonglong)auStackY_e8;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = ZEXT816(0);
  local_68 = 0;
  local_60 = 0;
  local_b0 = 0;
  do {
    DAT_1800936c0 = DAT_1800936c0 + 1;
    if ((0xf < DAT_1800936c0) ||
       (puVar6 = (ushort *)FUN_180042930(param_2,(ulonglong)param_3), puVar6 == (ushort *)0x0))
    break;
    uVar17 = *puVar6;
    local_b8 = (uint *)CONCAT62(local_b8._2_6_,uVar17);
    if (*(int *)(param_1 + 0x10) != 0) {
      local_b8 = (uint *)CONCAT71(CONCAT61(local_b8._2_6_,(char)uVar17),(char)(uVar17 >> 8));
      uVar17 = (ushort)local_b8;
    }
    if (0x1ff < (ushort)(uVar17 - 1)) break;
    sVar7 = SUB168(ZEXT816(0xc) * ZEXT216(uVar17),0);
    if (SUB168(ZEXT816(0xc) * ZEXT216(uVar17),8) != 0) {
      sVar7 = 0xffffffffffffffff;
    }
    local_a8 = (void *)FUN_1800020c0(sVar7);
    uVar22 = param_3 + 2;
    uVar23 = (ulonglong)uVar17;
    iVar20 = 0;
    local_ac = uVar22;
    if (uVar17 != 0) {
      piVar18 = (int *)((longlong)local_a8 + 8);
      do {
        puVar6 = (ushort *)FUN_180042930(param_2,(ulonglong)uVar22);
        if (puVar6 == (ushort *)0x0) break;
        iVar12 = *(int *)(puVar6 + 2);
        piVar18[-1] = iVar12;
        iVar16 = *(int *)(puVar6 + 4);
        if (*(int *)(param_1 + 0x3c) != 0) {
          iVar16 = iVar16 + 0xa0;
        }
        *piVar18 = iVar16;
        uVar1 = *puVar6;
        *(ushort *)(piVar18 + -2) = uVar1;
        uVar2 = puVar6[1];
        *(ushort *)((longlong)piVar18 + -6) = uVar2;
        if (*(int *)(param_1 + 0x10) != 0) {
          uVar5 = (ushort)((uint)iVar12 >> 0x10);
          piVar18[-1] = CONCAT22((ushort)iVar12 << 8 | (ushort)iVar12 >> 8,uVar5 << 8 | uVar5 >> 8);
          uVar5 = (ushort)((uint)iVar16 >> 0x10);
          iVar12 = CONCAT22((ushort)iVar16 << 8 | (ushort)iVar16 >> 8,uVar5 << 8 | uVar5 >> 8);
          if (*(int *)(param_1 + 0x3c) != 0) {
            iVar12 = iVar12 + 0xa0;
          }
          *(ushort *)((longlong)piVar18 + -6) = uVar2 << 8 | uVar2 >> 8;
          *piVar18 = iVar12;
          *(ushort *)(piVar18 + -2) = uVar1 << 8 | uVar1 >> 8;
        }
        uVar22 = uVar22 + 0xc;
        iVar20 = iVar20 + 1;
        piVar18 = piVar18 + 3;
      } while (iVar20 < (int)(uint)uVar17);
      local_ac = uVar22;
      if (uVar17 != 0) {
        puVar11 = (uint *)((longlong)local_a8 + 8);
        do {
          puVar8 = puVar11 + -2;
          iVar20 = 0;
          switch(*(undefined2 *)((longlong)puVar11 + -6)) {
          case 1:
          case 2:
          case 6:
          case 7:
            iVar20 = 1;
            break;
          case 3:
          case 8:
            iVar20 = 2;
            break;
          case 4:
          case 9:
          case 0xb:
            iVar20 = 4;
            break;
          case 5:
          case 10:
          case 0xc:
            iVar20 = 8;
          }
          uVar15 = (ulonglong)*puVar11;
          uVar22 = puVar11[-1] * iVar20;
          if (uVar22 < 5) {
            pcVar14 = "GetSubIFDTag tag = %d, len = %u, size = %u\n";
          }
          else {
            uVar19 = (ulonglong)(*puVar11 + uVar22);
            if (*(ulonglong *)(param_1 + 0x18) < uVar19) {
              *(ulonglong *)(param_1 + 0x18) = uVar19;
              uVar15 = (ulonglong)*puVar11;
            }
            pcVar14 = "GetSubIFDTag tag = %d, len = %u,offset = %u\n";
          }
          uVar19 = (ulonglong)uVar22;
          local_b8 = puVar8;
          FUN_1800108c0(pcVar14,(ulonglong)(ushort)*puVar8,uVar19,uVar15);
          uVar21 = (undefined1)uVar19;
          uVar17 = (ushort)*puVar8;
          if (0x202 < uVar17) {
            if (uVar17 < 0x9004) {
              if (uVar17 == 0x9003) {
                puVar10 = (undefined8 *)FUN_180042930(param_2,(ulonglong)(*puVar11 + param_4));
                if (puVar10 != (undefined8 *)0x0) {
                  local_98 = *puVar10;
                  uStack_90 = puVar10[1];
                  uStack_88 = puVar10[2];
                  uStack_80 = puVar10[3];
                  local_78 = *(undefined1 (*) [16])(puVar10 + 4);
                  local_68 = puVar10[6];
                  local_60 = CONCAT26(CONCAT11(local_60._7_1_,
                                               *(undefined1 *)((longlong)puVar10 + 0x3e)),
                                      *(undefined6 *)(puVar10 + 7));
                  if (*(longlong *)(param_1 + 0x88) == 0) {
                    uVar15 = 0xffffffffffffffff;
                    do {
                      uVar19 = uVar15 + 1;
                      lVar4 = uVar15 + 1;
                      uVar15 = uVar19;
                    } while (*(char *)((longlong)&local_98 + lVar4) != '\0');
                    puVar10 = (undefined8 *)FUN_1800016b0(param_1 + 0x78);
                    if ((ulonglong)puVar10[3] < uVar19) {
                      FUN_1800086f0(param_1 + 0x78,uVar19,uVar21,&local_98);
                    }
                    else {
                      _Dst = puVar10;
                      if (0xf < (ulonglong)puVar10[3]) {
                        _Dst = (undefined8 *)*puVar10;
                      }
                      puVar10[2] = uVar19;
                      memmove(_Dst,&local_98,uVar19);
                      local_b8 = (uint *)((ulonglong)local_b8 & 0xffffffffffffff00);
                      FUN_180001300((undefined1 *)((longlong)_Dst + uVar19),(undefined1 *)&local_b8)
                      ;
                    }
                  }
                }
              }
              else if (uVar17 == 0x280) {
                iVar20 = 0;
                switch(*(undefined2 *)((longlong)puVar11 + -6)) {
                case 1:
                case 2:
                case 6:
                case 7:
                  iVar20 = 1;
                  break;
                case 3:
                case 8:
                  iVar20 = 2;
                  break;
                case 4:
                case 9:
                case 0xb:
                  iVar20 = 4;
                  break;
                case 5:
                case 10:
                case 0xc:
                  iVar20 = 8;
                }
                uVar15 = (ulonglong)(puVar11[-1] * iVar20 + *puVar11 + param_4);
                if (*(ulonglong *)(param_1 + 0x18) < uVar15) {
                  *(ulonglong *)(param_1 + 0x18) = uVar15;
                }
              }
              else if (uVar17 == 0x83bb) {
                uVar9 = FUN_180051030(pcVar14,(uint)*(ushort *)((longlong)puVar11 + -6));
                uVar15 = (ulonglong)(param_4 + (int)uVar9 * puVar11[-1] + *puVar11);
                if (*(ulonglong *)(param_1 + 0x18) < uVar15) {
                  *(ulonglong *)(param_1 + 0x18) = uVar15;
                }
              }
              else if (uVar17 == 0x8769) {
                uVar13 = *puVar11;
                uVar15 = (ulonglong)(param_4 + uVar13 + uVar22);
                if (*(ulonglong *)(param_1 + 0x18) < uVar15) {
                  *(ulonglong *)(param_1 + 0x18) = uVar15;
                  uVar13 = *puVar11;
                }
                FUN_180042930(param_2,(ulonglong)(param_4 + uVar13));
                uVar15 = param_2[2];
                FUN_180050750(param_1,param_2,*puVar11 + param_4,param_4);
                FUN_180042930(param_2,0);
                FUN_180042930(param_2,uVar15);
              }
            }
            else if (uVar17 == 0x927c) {
              if (*(int *)(param_1 + 0x44) == 0) {
                iVar20 = 0;
                if (*(int *)(param_1 + 0x48) != 0) {
                  iVar20 = 8;
                }
              }
              else {
                iVar20 = 0x12;
              }
              FUN_180050750(param_1,param_2,*puVar11 + param_4,iVar20);
            }
            else if (uVar17 == 0xc612) {
              *(undefined4 *)(param_1 + 0x40) = 1;
            }
            goto switchD_1800509d3_caseD_112;
          }
          if (uVar17 == 0x202) {
switchD_1800509d3_caseD_117:
            if (puVar11[-1] == 1) {
              if (local_b0 != 0) {
                local_b0 = 0;
                uVar22 = *puVar11 - 0xa0;
                if (*(int *)(param_1 + 0x3c) == 0) {
                  uVar22 = *puVar11;
                }
                *(ulonglong *)(param_1 + 200) = (ulonglong)uVar22;
              }
              uVar22 = *puVar11 - 0xa0;
              if (*(int *)(param_1 + 0x3c) == 0) {
                uVar22 = *puVar11;
              }
            }
            else {
              iVar20 = 0;
              switch(*(undefined2 *)((longlong)puVar11 + -6)) {
              case 1:
              case 2:
              case 6:
              case 7:
                iVar20 = 1;
                break;
              case 3:
              case 8:
                iVar20 = 2;
                break;
              case 4:
              case 9:
              case 0xb:
                iVar20 = 4;
                break;
              case 5:
              case 10:
              case 0xc:
                iVar20 = 8;
              }
              uVar22 = (puVar11[-1] - 1) * iVar20 + *puVar11;
              puVar8 = (uint *)FUN_180042930(param_2,(ulonglong)uVar22);
              if (puVar8 == (uint *)0x0) {
                uVar22 = 0;
              }
              else if (iVar20 == 2) {
                uVar17 = (ushort)*puVar8;
                local_b8 = (uint *)CONCAT62(local_b8._2_6_,uVar17);
                if (*(int *)(param_1 + 0x10) != 0) {
                  local_b8 = (uint *)CONCAT71(CONCAT61(local_b8._2_6_,(char)uVar17),
                                              (char)(uVar17 >> 8));
                  uVar17 = (ushort)local_b8;
                }
                uVar22 = (uint)uVar17;
              }
              else if (iVar20 == 4) {
                uVar22 = *puVar8;
                local_b8 = (uint *)CONCAT44(local_b8._4_4_,uVar22);
                if (*(int *)(param_1 + 0x10) != 0) {
                  local_b8._2_1_ = (undefined1)(uVar22 >> 0x10);
                  local_b8._1_1_ = (undefined1)(uVar22 >> 8);
                  uVar3 = CONCAT51(CONCAT41(local_b8._4_4_,(char)uVar22),local_b8._1_1_);
                  local_b8._0_2_ = CONCAT11(local_b8._2_1_,(char)(uVar22 >> 0x18));
                  local_b8 = (uint *)CONCAT62(uVar3,(ushort)local_b8);
                  uVar22 = (uint)local_b8;
                }
              }
            }
            uVar15 = (ulonglong)(*(int *)(param_1 + 0x14) + uVar22);
            *(uint *)(param_1 + 0x20) = uVar22;
            if (*(ulonglong *)(param_1 + 0x18) < uVar15) {
              *(ulonglong *)(param_1 + 0x18) = uVar15;
            }
          }
          else {
            switch(uVar17) {
            case 0x111:
            case 0x201:
              if (puVar8 == (uint *)0x0) {
                *(int *)(param_1 + 0x14) = param_4;
              }
              else {
                uVar22 = FUN_1800512d0(param_1,param_2,&local_b8,&local_b0,param_4);
                *(uint *)(param_1 + 0x14) = uVar22 + param_4;
              }
              break;
            case 0x117:
              goto switchD_1800509d3_caseD_117;
            case 0x118:
              *(uint *)(param_1 + 0x178) = *puVar11;
              break;
            case 0x144:
              uVar15 = (ulonglong)(*puVar11 + param_4);
              *(uint *)(param_1 + 0x24) = *puVar11 + param_4;
              *(uint *)(param_1 + 0x34) = puVar11[-1];
              uVar9 = FUN_180051030(uVar15,(uint)*(ushort *)((longlong)puVar11 + -6));
              *(int *)(param_1 + 0x38) = (int)uVar9;
              uVar9 = FUN_180051030(uVar15,(uint)*(ushort *)((longlong)puVar11 + -6));
              *(uint *)(param_1 + 0x30) = (int)uVar9 * puVar11[-1];
              break;
            case 0x145:
              uVar15 = (ulonglong)(*puVar11 + param_4);
              *(uint *)(param_1 + 0x28) = *puVar11 + param_4;
              uVar9 = FUN_180051030(uVar15,(uint)*(ushort *)((longlong)puVar11 + -6));
              *(int *)(param_1 + 0x2c) = (int)uVar9;
              uVar22 = puVar11[-1];
              uVar9 = FUN_180051030(uVar15,(uint)*(ushort *)((longlong)puVar11 + -6));
              if (((int)uVar9 * uVar22 == *(int *)(param_1 + 0x30)) &&
                 (uVar22 == *(uint *)(param_1 + 0x34))) {
                FUN_180051180(param_1,param_2);
              }
            }
          }
switchD_1800509d3_caseD_112:
          puVar11 = puVar11 + 3;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
    }
    uVar22 = local_ac;
    if (local_a8 != (void *)0x0) {
      free(local_a8);
    }
    puVar11 = (uint *)FUN_180042930(param_2,(ulonglong)uVar22);
    if (puVar11 == (uint *)0x0) break;
    param_3 = *puVar11;
    uVar21 = (undefined1)(param_3 >> 0x18);
    if (param_3 != 0) {
      param_3 = param_3 + param_4;
      uVar21 = (undefined1)(param_3 >> 0x18);
    }
    local_b8 = (uint *)CONCAT44(local_b8._4_4_,param_3);
    if (*(int *)(param_1 + 0x10) != 0) {
      local_b8._0_1_ = (undefined1)param_3;
      local_b8._2_1_ = (undefined1)(param_3 >> 0x10);
      local_b8._1_1_ = (undefined1)(param_3 >> 8);
      uVar3 = CONCAT51(CONCAT41(local_b8._4_4_,(undefined1)local_b8),local_b8._1_1_);
      local_b8._0_2_ = CONCAT11(local_b8._2_1_,uVar21);
      local_b8 = (uint *)CONCAT62(uVar3,(ushort)local_b8);
      param_3 = (uint)local_b8;
    }
    if ((*(int *)(param_1 + 0x3c) != 0) && (param_3 != 0)) {
      param_3 = param_3 + 0xa0;
    }
    uVar23 = *(ulonglong *)(param_1 + 0x18);
    uVar22 = uVar22 + 4;
    if (uVar23 < uVar22) {
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar22;
      uVar23 = (ulonglong)uVar22;
    }
    uVar15 = (ulonglong)(uint)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x14));
    if (uVar23 < uVar15) {
      *(ulonglong *)(param_1 + 0x18) = uVar15;
    }
  } while (param_3 != 0);
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_e8);
  return;
}

