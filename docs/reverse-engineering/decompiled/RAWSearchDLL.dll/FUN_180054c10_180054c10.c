// Function: FUN_180054c10
// Address: 180054c10
// Size: 5618 bytes


int FUN_180054c10(longlong *param_1)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined2 uVar18;
  undefined1 *_Dst;
  uint uVar19;
  uint uVar20;
  int local_res10;
  undefined2 local_res18;
  undefined1 local_res1a;
  undefined1 local_res1b;
  uint local_res20;
  byte bStack_67;
  uint local_64;
  undefined1 *local_58;
  
  puVar2 = (uint *)param_1[5];
  if (((puVar2 != (uint *)0x0) && (_Dst = (undefined1 *)param_1[2], _Dst != (undefined1 *)0x0)) &&
     ((puVar14 = (uint *)*param_1, puVar14 != (uint *)0x0 || ((int)param_1[1] == 0)))) {
    uVar7 = *puVar2;
    if (uVar7 == 0xb) {
      *puVar2 = 0xc;
      uVar7 = 0xc;
    }
    uVar6 = *(uint *)(param_1 + 3);
    uVar1 = *(uint *)(param_1 + 1);
    uVar20 = puVar2[0x10];
    uVar15 = puVar2[0x11];
    local_res10 = 0;
    local_58 = _Dst;
    local_res20 = uVar6;
    local_64 = uVar6;
    uVar16 = uVar1;
    while (uVar7 < 0x1d) {
      uVar10 = 0;
      switch((ulonglong)(&switchD_180054cbb::switchdataD_180056204)[(int)uVar7] + 0x180000000) {
      case 0x180054cbd:
        if (puVar2[2] == 0) {
          *puVar2 = 0xc;
        }
        else {
          for (; uVar15 < 0x10; uVar15 = uVar15 + 8) {
            if (uVar16 == 0) goto LAB_1800551cf;
            uVar16 = uVar16 - 1;
            uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
            puVar14 = (uint *)((longlong)puVar14 + 1);
          }
          if (((puVar2[2] & 2) == 0) || (uVar20 != 0x8b1f)) {
            puVar2[4] = 0;
            if (*(longlong *)(puVar2 + 8) != 0) {
              *(undefined4 *)(*(longlong *)(puVar2 + 8) + 0x40) = 0xffffffff;
            }
            if (((puVar2[2] & 1) == 0) ||
               (uVar7 = (uVar20 & 0xff) * 0x100 + (uVar20 >> 8), uVar7 != (uVar7 / 0x1f) * 0x1f)) {
              *puVar2 = 0x1b;
              param_1[4] = (longlong)"incorrect header check";
            }
            else if (((byte)uVar20 & 0xf) == 8) {
              uVar7 = (uVar20 >> 4 & 0xf) + 8;
              if (puVar2[10] < uVar7) {
                *puVar2 = 0x1b;
                param_1[4] = (longlong)"invalid window size";
                uVar20 = uVar20 >> 4;
                uVar15 = uVar15 - 4;
              }
              else {
                puVar2[5] = 1 << (sbyte)uVar7;
                uVar7 = FUN_1800562a0(0,(byte *)0x0,0);
                puVar2[6] = uVar7;
                *(uint *)((longlong)param_1 + 0x4c) = uVar7;
                *puVar2 = ~(uVar20 >> 0xc) & 2 | 9;
                uVar20 = 0;
                _Dst = local_58;
                uVar15 = uVar20;
              }
            }
            else {
              *puVar2 = 0x1b;
              param_1[4] = (longlong)"unknown compression method";
            }
          }
          else {
            uVar7 = FUN_180057010(0,(uint *)0x0,0);
            puVar2[6] = uVar7;
            local_res18 = 0x8b1f;
            uVar7 = FUN_180057020(uVar7,(uint *)&local_res18,2);
            puVar2[6] = uVar7;
            uVar20 = 0;
            *puVar2 = 1;
            _Dst = local_58;
            uVar15 = uVar20;
          }
        }
        break;
      case 0x180054e3b:
        for (; uVar15 < 0x10; uVar15 = uVar15 + 8) {
          if (uVar16 == 0) goto LAB_1800551cf;
          uVar16 = uVar16 - 1;
          uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
          puVar14 = (uint *)((longlong)puVar14 + 1);
        }
        puVar2[4] = uVar20;
        if ((char)uVar20 == '\b') {
          if ((uVar20 & 0xe000) == 0) {
            uVar7 = uVar20;
            if (*(uint **)(puVar2 + 8) != (uint *)0x0) {
              **(uint **)(puVar2 + 8) = uVar20 >> 8 & 1;
              uVar7 = puVar2[4];
            }
            if ((uVar7 >> 9 & 1) != 0) {
              local_res18 = (undefined2)uVar20;
              uVar7 = FUN_180057020(puVar2[6],(uint *)&local_res18,2);
              puVar2[6] = uVar7;
            }
            uVar20 = 0;
            *puVar2 = 2;
            uVar15 = uVar20;
            do {
              if (uVar16 == 0) goto LAB_1800551cf;
              uVar16 = uVar16 - 1;
              uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
              puVar14 = (uint *)((longlong)puVar14 + 1);
              uVar15 = uVar15 + 8;
joined_r0x000180054efc:
            } while (uVar15 < 0x20);
            if (*(longlong *)(puVar2 + 8) != 0) {
              *(uint *)(*(longlong *)(puVar2 + 8) + 4) = uVar20;
            }
            if ((puVar2[4] & 0x200) != 0) {
              local_res18 = (undefined2)uVar20;
              local_res1a = (undefined1)(uVar20 >> 0x10);
              local_res1b = (undefined1)(uVar20 >> 0x18);
              uVar7 = FUN_180057020(puVar2[6],(uint *)&local_res18,4);
              puVar2[6] = uVar7;
            }
            uVar20 = 0;
            *puVar2 = 3;
            uVar15 = uVar20;
            do {
              if (uVar16 == 0) goto LAB_1800551cf;
              uVar16 = uVar16 - 1;
              uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
              puVar14 = (uint *)((longlong)puVar14 + 1);
              uVar15 = uVar15 + 8;
joined_r0x000180054f82:
            } while (uVar15 < 0x10);
            if (*(longlong *)(puVar2 + 8) != 0) {
              *(uint *)(*(longlong *)(puVar2 + 8) + 8) = uVar20 & 0xff;
              *(uint *)(*(longlong *)(puVar2 + 8) + 0xc) = uVar20 >> 8;
            }
            if ((puVar2[4] & 0x200) != 0) {
              local_res18 = (undefined2)uVar20;
              uVar7 = FUN_180057020(puVar2[6],(uint *)&local_res18,2);
              puVar2[6] = uVar7;
            }
            uVar20 = 0;
            *puVar2 = 4;
            uVar15 = uVar20;
            goto switchD_180054cbb_caseD_80054ffa;
          }
          *puVar2 = 0x1b;
          param_1[4] = (longlong)"unknown header flags set";
        }
        else {
          *puVar2 = 0x1b;
          param_1[4] = (longlong)"unknown compression method";
        }
        break;
      case 0x180054ef9:
        goto joined_r0x000180054efc;
      case 0x180054f7f:
        goto joined_r0x000180054f82;
      case 0x180054ffa:
switchD_180054cbb_caseD_80054ffa:
        if ((puVar2[4] & 0x400) == 0) {
          if (*(longlong *)(puVar2 + 8) != 0) {
            *(undefined8 *)(*(longlong *)(puVar2 + 8) + 0x10) = 0;
          }
        }
        else {
          for (; uVar15 < 0x10; uVar15 = uVar15 + 8) {
            if (uVar16 == 0) goto LAB_1800551cf;
            uVar16 = uVar16 - 1;
            uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
            puVar14 = (uint *)((longlong)puVar14 + 1);
          }
          puVar2[0x12] = uVar20;
          if (*(longlong *)(puVar2 + 8) != 0) {
            *(uint *)(*(longlong *)(puVar2 + 8) + 0x18) = uVar20;
          }
          if ((puVar2[4] & 0x200) != 0) {
            local_res18 = (undefined2)uVar20;
            uVar7 = FUN_180057020(puVar2[6],(uint *)&local_res18,2);
            puVar2[6] = uVar7;
          }
          uVar20 = 0;
          uVar15 = uVar20;
        }
        *puVar2 = 5;
      case 0x18005508e:
        uVar7 = puVar2[4];
        if ((uVar7 >> 10 & 1) == 0) {
LAB_180055134:
          puVar2[0x12] = 0;
          *puVar2 = 6;
switchD_180054cbb_caseD_80055140:
          uVar17 = 0;
          if ((puVar2[4] & 0x800) == 0) {
            if (*(longlong *)(puVar2 + 8) != 0) {
              *(undefined8 *)(*(longlong *)(puVar2 + 8) + 0x20) = 0;
            }
LAB_18005523d:
            puVar2[0x12] = 0;
            *puVar2 = 7;
switchD_180054cbb_caseD_80055249:
            uVar17 = 0;
            if ((puVar2[4] & 0x1000) == 0) {
              if (*(longlong *)(puVar2 + 8) != 0) {
                *(undefined8 *)(*(longlong *)(puVar2 + 8) + 0x30) = 0;
              }
LAB_1800552de:
              *puVar2 = 8;
              _Dst = local_58;
              uVar6 = local_res20;
switchD_180054cbb_caseD_800552f1:
              if ((puVar2[4] >> 9 & 1) != 0) {
                for (; uVar15 < 0x10; uVar15 = uVar15 + 8) {
                  if (uVar16 == 0) goto LAB_1800551cf;
                  uVar16 = uVar16 - 1;
                  uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
                  puVar14 = (uint *)((longlong)puVar14 + 1);
                }
                if (uVar20 != (ushort)puVar2[6]) {
                  *puVar2 = 0x1b;
                  param_1[4] = (longlong)"header crc mismatch";
                  break;
                }
                uVar20 = 0;
                uVar15 = uVar20;
              }
              if (*(longlong *)(puVar2 + 8) != 0) {
                *(uint *)(*(longlong *)(puVar2 + 8) + 0x3c) = (int)puVar2[4] >> 9 & 1;
                *(undefined4 *)(*(longlong *)(puVar2 + 8) + 0x40) = 1;
              }
              uVar7 = FUN_180057010(0,(uint *)0x0,0);
              puVar2[6] = uVar7;
              *(uint *)((longlong)param_1 + 0x4c) = uVar7;
LAB_180055378:
              *puVar2 = 0xb;
              _Dst = local_58;
              break;
            }
            if (uVar16 != 0) {
              do {
                uVar7 = (int)uVar17 + 1;
                cVar4 = *(char *)(uVar17 + (longlong)puVar14);
                lVar12 = *(longlong *)(puVar2 + 8);
                if (((lVar12 != 0) && (*(longlong *)(lVar12 + 0x30) != 0)) &&
                   (puVar2[0x12] < *(uint *)(lVar12 + 0x38))) {
                  *(char *)((ulonglong)puVar2[0x12] + *(longlong *)(lVar12 + 0x30)) = cVar4;
                  puVar2[0x12] = puVar2[0x12] + 1;
                }
              } while ((cVar4 != '\0') && (uVar17 = (ulonglong)uVar7, uVar7 < uVar16));
              if ((puVar2[4] & 0x200) != 0) {
                if (puVar14 == (uint *)0x0) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = FUN_180057020(puVar2[6],puVar14,uVar7);
                }
                puVar2[6] = uVar6;
              }
              uVar16 = uVar16 - uVar7;
              puVar14 = (uint *)((longlong)puVar14 + (ulonglong)uVar7);
              if (cVar4 == '\0') goto LAB_1800552de;
            }
          }
          else if (uVar16 != 0) {
            do {
              uVar7 = (int)uVar17 + 1;
              cVar4 = *(char *)(uVar17 + (longlong)puVar14);
              lVar12 = *(longlong *)(puVar2 + 8);
              if (((lVar12 != 0) && (*(longlong *)(lVar12 + 0x20) != 0)) &&
                 (puVar2[0x12] < *(uint *)(lVar12 + 0x28))) {
                *(char *)((ulonglong)puVar2[0x12] + *(longlong *)(lVar12 + 0x20)) = cVar4;
                puVar2[0x12] = puVar2[0x12] + 1;
              }
            } while ((cVar4 != '\0') && (uVar17 = (ulonglong)uVar7, uVar7 < uVar16));
            if ((puVar2[4] & 0x200) != 0) {
              if (puVar14 == (uint *)0x0) {
                uVar6 = 0;
              }
              else {
                uVar6 = FUN_180057020(puVar2[6],puVar14,uVar7);
              }
              puVar2[6] = uVar6;
            }
            uVar16 = uVar16 - uVar7;
            puVar14 = (uint *)((longlong)puVar14 + (ulonglong)uVar7);
            if (cVar4 == '\0') goto LAB_18005523d;
          }
        }
        else {
          uVar6 = puVar2[0x12];
          uVar10 = uVar16;
          if (uVar6 <= uVar16) {
            uVar10 = uVar6;
          }
          if (uVar10 != 0) {
            lVar12 = *(longlong *)(puVar2 + 8);
            if ((lVar12 != 0) && (*(longlong *)(lVar12 + 0x10) != 0)) {
              uVar6 = *(int *)(lVar12 + 0x18) - uVar6;
              uVar7 = *(int *)(lVar12 + 0x1c) - uVar6;
              if (uVar10 + uVar6 <= *(uint *)(lVar12 + 0x1c)) {
                uVar7 = uVar10;
              }
              memcpy((void *)((ulonglong)uVar6 + *(longlong *)(lVar12 + 0x10)),puVar14,
                     (ulonglong)uVar7);
              uVar7 = puVar2[4];
              uVar6 = puVar2[0x12];
            }
            if ((uVar7 >> 9 & 1) != 0) {
              if (puVar14 == (uint *)0x0) {
                uVar7 = 0;
              }
              else {
                uVar7 = FUN_180057020(puVar2[6],puVar14,uVar10);
              }
              puVar2[6] = uVar7;
            }
            uVar16 = uVar16 - uVar10;
            puVar14 = (uint *)((longlong)puVar14 + (ulonglong)uVar10);
            uVar6 = uVar6 - uVar10;
            puVar2[0x12] = uVar6;
          }
          if (uVar6 == 0) goto LAB_180055134;
        }
LAB_1800551cf:
        uVar7 = puVar2[0xb];
        puVar2[0x11] = uVar15;
        param_1[2] = (longlong)local_58;
        *(uint *)(param_1 + 3) = local_res20;
        *param_1 = (longlong)puVar14;
        *(uint *)(param_1 + 1) = uVar16;
        puVar2[0x10] = uVar20;
        if (((uVar7 == 0) && ((0x17 < (int)*puVar2 || (local_64 == local_res20)))) ||
           (iVar5 = FUN_180054af0((longlong)param_1,local_64), iVar5 == 0)) {
          local_64 = local_64 - (int)param_1[3];
          iVar5 = uVar1 - (int)param_1[1];
          *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + iVar5;
          *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + local_64;
          puVar2[7] = puVar2[7] + local_64;
          if ((puVar2[2] != 0) && (local_64 != 0)) {
            puVar14 = (uint *)(param_1[2] - (ulonglong)local_64);
            if (puVar2[4] == 0) {
              uVar7 = FUN_1800562a0(puVar2[6],(byte *)puVar14,local_64);
              puVar2[6] = uVar7;
              *(uint *)((longlong)param_1 + 0x4c) = uVar7;
            }
            else if (puVar14 == (uint *)0x0) {
              puVar2[6] = 0;
              *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
            }
            else {
              uVar7 = FUN_180057020(puVar2[6],puVar14,local_64);
              puVar2[6] = uVar7;
              *(uint *)((longlong)param_1 + 0x4c) = uVar7;
            }
          }
          iVar11 = 0;
          if (*puVar2 == 0xb) {
            iVar11 = 0x80;
          }
          *(uint *)(param_1 + 9) = (-(uint)(puVar2[1] != 0) & 0x40) + iVar11 + puVar2[0x11];
          if (iVar5 != 0) {
            return local_res10;
          }
          if (local_64 != 0) {
            return local_res10;
          }
          if (local_res10 != 0) {
            return local_res10;
          }
          return -5;
        }
        *puVar2 = 0x1c;
LAB_1800561f1:
        return -4;
      case 0x180055140:
        goto switchD_180054cbb_caseD_80055140;
      case 0x180055226:
        goto LAB_1800561f1;
      case 0x180055249:
        goto switchD_180054cbb_caseD_80055249;
      case 0x1800552f1:
        goto switchD_180054cbb_caseD_800552f1;
      case 0x18005539f:
        for (; uVar15 < 0x20; uVar15 = uVar15 + 8) {
          if (uVar16 == 0) goto LAB_1800551cf;
          uVar16 = uVar16 - 1;
          uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
          puVar14 = (uint *)((longlong)puVar14 + 1);
        }
        *puVar2 = 10;
        uVar7 = (uVar20 >> 8 & 0xff00) + ((uVar20 & 0xff00) + uVar20 * 0x10000) * 0x100 +
                (uVar20 >> 0x18);
        puVar2[6] = uVar7;
        *(uint *)((longlong)param_1 + 0x4c) = uVar7;
        uVar20 = uVar10;
        uVar15 = uVar10;
      case 0x180055403:
        if (puVar2[3] == 0) {
          param_1[2] = (longlong)_Dst;
          *(uint *)(param_1 + 3) = uVar6;
          *param_1 = (longlong)puVar14;
          *(uint *)(param_1 + 1) = uVar16;
          puVar2[0x10] = uVar20;
          puVar2[0x11] = uVar15;
          return 2;
        }
        uVar7 = FUN_1800562a0(0,(byte *)0x0,0);
        puVar2[6] = uVar7;
        *(uint *)((longlong)param_1 + 0x4c) = uVar7;
        *puVar2 = 0xb;
        _Dst = local_58;
switchD_180054cbb_caseD_80055436:
        if (puVar2[1] == 0) {
          for (; uVar15 < 3; uVar15 = uVar15 + 8) {
            if (uVar16 == 0) goto LAB_1800551cf;
            uVar16 = uVar16 - 1;
            uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
            puVar14 = (uint *)((longlong)puVar14 + 1);
          }
          puVar2[1] = uVar20 & 1;
          uVar7 = uVar20 >> 1 & 3;
          if (uVar7 == 0) {
            *puVar2 = 0xd;
LAB_180055519:
            uVar20 = uVar20 >> 3;
            uVar15 = uVar15 - 3;
          }
          else if (uVar7 == 1) {
            *(undefined **)(puVar2 + 0x16) = &DAT_180068260;
            puVar2[0x1a] = 9;
            *(undefined **)(puVar2 + 0x18) = &DAT_180068a90;
            puVar2[0x1b] = 5;
            *puVar2 = 0x12;
            uVar20 = uVar20 >> 3;
            uVar15 = uVar15 - 3;
          }
          else if (uVar7 == 2) {
            *puVar2 = 0xf;
            uVar20 = uVar20 >> 3;
            uVar15 = uVar15 - 3;
          }
          else {
            if (uVar7 != 3) goto LAB_180055519;
            param_1[4] = (longlong)"invalid block type";
            *puVar2 = 0x1b;
            uVar20 = uVar20 >> 3;
            uVar15 = uVar15 - 3;
          }
        }
        else {
          *puVar2 = 0x18;
          uVar20 = uVar20 >> (sbyte)(uVar15 & 7);
          uVar15 = uVar15 - (uVar15 & 7);
        }
        break;
      case 0x180055436:
        goto switchD_180054cbb_caseD_80055436;
      case 0x180055525:
        uVar20 = uVar20 >> (sbyte)(uVar15 & 7);
        for (uVar15 = uVar15 - (uVar15 & 7); uVar15 < 0x20; uVar15 = uVar15 + 8) {
          if (uVar16 == 0) goto LAB_1800551cf;
          uVar16 = uVar16 - 1;
          uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
          puVar14 = (uint *)((longlong)puVar14 + 1);
        }
        if ((uVar20 & 0xffff) == ~uVar20 >> 0x10) {
          puVar2[0x12] = uVar20 & 0xffff;
          *puVar2 = 0xe;
          uVar20 = uVar10;
          uVar15 = uVar10;
          goto switchD_180054cbb_caseD_8005558f;
        }
        *puVar2 = 0x1b;
        param_1[4] = (longlong)"invalid stored block lengths";
        break;
      case 0x18005558f:
switchD_180054cbb_caseD_8005558f:
        uVar7 = puVar2[0x12];
        if (uVar7 == 0) {
          *puVar2 = 0xb;
        }
        else {
          uVar10 = uVar16;
          if (uVar7 <= uVar16) {
            uVar10 = uVar7;
          }
          if (uVar10 <= uVar6) {
            uVar6 = uVar10;
          }
          if (uVar6 == 0) goto LAB_1800551cf;
          memcpy(_Dst,puVar14,(ulonglong)uVar6);
          local_res20 = local_res20 - uVar6;
          uVar16 = uVar16 - uVar6;
          puVar14 = (uint *)((longlong)puVar14 + (ulonglong)uVar6);
          puVar2[0x12] = puVar2[0x12] - uVar6;
          local_58 = local_58 + uVar6;
          _Dst = local_58;
          uVar6 = local_res20;
        }
        break;
      case 0x1800555f6:
        for (; uVar15 < 0xe; uVar15 = uVar15 + 8) {
          if (uVar16 == 0) goto LAB_1800551cf;
          uVar16 = uVar16 - 1;
          uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
          puVar14 = (uint *)((longlong)puVar14 + 1);
        }
        uVar15 = uVar15 - 0xe;
        uVar10 = uVar20 >> 5;
        uVar7 = (uVar20 & 0x1f) + 0x101;
        uVar19 = uVar20 >> 10;
        puVar2[0x1d] = uVar7;
        uVar20 = uVar20 >> 0xe;
        uVar10 = (uVar10 & 0x1f) + 1;
        puVar2[0x1e] = uVar10;
        puVar2[0x1c] = (uVar19 & 0xf) + 4;
        if ((uVar7 < 0x11f) && (uVar10 < 0x1f)) {
          puVar2[0x1f] = 0;
          *puVar2 = 0x10;
          goto switchD_180054cbb_caseD_80055679;
        }
        *puVar2 = 0x1b;
        param_1[4] = (longlong)"too many length or distance symbols";
        break;
      case 0x180055679:
switchD_180054cbb_caseD_80055679:
        uVar7 = puVar2[0x1f];
        if (uVar7 < puVar2[0x1c]) {
          do {
            for (; uVar15 < 3; uVar15 = uVar15 + 8) {
              if (uVar16 == 0) goto LAB_1800551cf;
              uVar16 = uVar16 - 1;
              uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
              puVar14 = (uint *)((longlong)puVar14 + 1);
            }
            uVar9 = (ushort)uVar20;
            uVar20 = uVar20 >> 3;
            uVar15 = uVar15 - 3;
            *(ushort *)
             ((longlong)puVar2 +
             (ulonglong)*(ushort *)(&DAT_180068a60 + (ulonglong)puVar2[0x1f] * 2) * 2 + 0x88) =
                 uVar9 & 7;
            puVar2[0x1f] = puVar2[0x1f] + 1;
            uVar7 = puVar2[0x1f];
          } while (uVar7 < puVar2[0x1c]);
        }
        while (uVar7 < 0x13) {
          *(undefined2 *)
           ((longlong)puVar2 +
           (ulonglong)*(ushort *)(&DAT_180068a60 + (ulonglong)puVar2[0x1f] * 2) * 2 + 0x88) = 0;
          puVar2[0x1f] = puVar2[0x1f] + 1;
          uVar7 = puVar2[0x1f];
        }
        puVar2[0x1a] = 7;
        *(uint **)(puVar2 + 0x16) = puVar2 + 0x152;
        *(uint **)(puVar2 + 0x20) = puVar2 + 0x152;
        local_res10 = FUN_180056580(0,(ushort *)(puVar2 + 0x22),0x13,(longlong *)(puVar2 + 0x20),
                                    puVar2 + 0x1a,(undefined *)(puVar2 + 0xc2));
        if (local_res10 == 0) {
          puVar2[0x1f] = 0;
          *puVar2 = 0x11;
          uVar7 = 0x11;
          goto switchD_180054cbb_caseD_800557a3;
        }
        *puVar2 = 0x1b;
        param_1[4] = (longlong)"invalid code lengths set";
        _Dst = local_58;
        break;
      case 0x1800557a3:
switchD_180054cbb_caseD_800557a3:
        uVar10 = puVar2[0x1f];
        if (uVar10 < puVar2[0x1e] + puVar2[0x1d]) {
          do {
            uVar18 = 0;
            uVar7 = *(uint *)(*(longlong *)(puVar2 + 0x16) +
                             (ulonglong)((1 << ((byte)puVar2[0x1a] & 0x1f)) - 1U & uVar20) * 4);
            if (uVar15 < (uVar7 >> 8 & 0xff)) {
              do {
                if (uVar16 == 0) goto LAB_1800551cf;
                uVar16 = uVar16 - 1;
                uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
                puVar14 = (uint *)((longlong)puVar14 + 1);
                uVar15 = uVar15 + 8;
                uVar7 = *(uint *)(*(longlong *)(puVar2 + 0x16) +
                                 (ulonglong)((1 << ((byte)puVar2[0x1a] & 0x1f)) - 1U & uVar20) * 4);
              } while (uVar15 < (uVar7 >> 8 & 0xff));
            }
            uVar9 = (ushort)(uVar7 >> 0x10);
            bStack_67 = (byte)(uVar7 >> 8);
            if (0xf < uVar9) {
              if (uVar9 == 0x10) {
                for (; uVar15 < bStack_67 + 2; uVar15 = uVar15 + 8) {
                  if (uVar16 == 0) goto LAB_1800551cf;
                  uVar16 = uVar16 - 1;
                  uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
                  puVar14 = (uint *)((longlong)puVar14 + 1);
                }
                uVar15 = uVar15 - bStack_67;
                uVar20 = uVar20 >> (bStack_67 & 0x1f);
                if (uVar10 != 0) {
                  uVar18 = *(undefined2 *)((longlong)puVar2 + (ulonglong)(uVar10 - 1) * 2 + 0x88);
                  iVar11 = (uVar20 & 3) + 3;
                  uVar20 = uVar20 >> 2;
                  uVar15 = uVar15 - 2;
                  goto LAB_180055991;
                }
              }
              else {
                if (uVar9 == 0x11) {
                  for (; uVar15 < bStack_67 + 3; uVar15 = uVar15 + 8) {
                    if (uVar16 == 0) goto LAB_1800551cf;
                    uVar16 = uVar16 - 1;
                    uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
                    puVar14 = (uint *)((longlong)puVar14 + 1);
                  }
                  iVar5 = -3;
                  uVar20 = uVar20 >> (bStack_67 & 0x1f);
                  iVar11 = (uVar20 & 7) + 3;
                  uVar20 = uVar20 >> 3;
                }
                else {
                  for (; uVar15 < bStack_67 + 7; uVar15 = uVar15 + 8) {
                    if (uVar16 == 0) goto LAB_1800551cf;
                    uVar16 = uVar16 - 1;
                    uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
                    puVar14 = (uint *)((longlong)puVar14 + 1);
                  }
                  iVar5 = -7;
                  uVar20 = uVar20 >> (bStack_67 & 0x1f);
                  iVar11 = (uVar20 & 0x7f) + 0xb;
                  uVar20 = uVar20 >> 7;
                }
                uVar15 = uVar15 + (iVar5 - (uint)bStack_67);
LAB_180055991:
                if (uVar10 + iVar11 <= puVar2[0x1e] + puVar2[0x1d]) {
                  do {
                    *(undefined2 *)((longlong)puVar2 + (ulonglong)puVar2[0x1f] * 2 + 0x88) = uVar18;
                    puVar2[0x1f] = puVar2[0x1f] + 1;
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                  goto LAB_1800559b7;
                }
              }
              *puVar2 = 0x1b;
              param_1[4] = (longlong)"invalid bit length repeat";
              _Dst = local_58;
              goto LAB_180055387;
            }
            for (; uVar15 < (uVar7 >> 8 & 0xff); uVar15 = uVar15 + 8) {
              if (uVar16 == 0) goto LAB_1800551cf;
              uVar16 = uVar16 - 1;
              uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
              puVar14 = (uint *)((longlong)puVar14 + 1);
            }
            uVar15 = uVar15 - bStack_67;
            uVar20 = uVar20 >> (bStack_67 & 0x1f);
            *(ushort *)((longlong)puVar2 + (ulonglong)uVar10 * 2 + 0x88) = uVar9;
            puVar2[0x1f] = puVar2[0x1f] + 1;
LAB_1800559b7:
            uVar10 = puVar2[0x1f];
          } while (uVar10 < puVar2[0x1e] + puVar2[0x1d]);
          uVar7 = *puVar2;
        }
        _Dst = local_58;
        if (uVar7 == 0x1b) break;
        puVar2[0x1a] = 9;
        *(uint **)(puVar2 + 0x20) = puVar2 + 0x152;
        *(uint **)(puVar2 + 0x16) = puVar2 + 0x152;
        local_res10 = FUN_180056580(1,(ushort *)(puVar2 + 0x22),puVar2[0x1d],
                                    (longlong *)(puVar2 + 0x20),puVar2 + 0x1a,
                                    (undefined *)(puVar2 + 0xc2));
        if (local_res10 != 0) {
          *puVar2 = 0x1b;
          param_1[4] = (longlong)"invalid literal/lengths set";
          uVar6 = local_res20;
          break;
        }
        *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(puVar2 + 0x20);
        puVar2[0x1b] = 6;
        local_res10 = FUN_180056580(2,(ushort *)
                                      ((ulonglong)puVar2[0x1d] * 2 + 0x88 + (longlong)puVar2),
                                    puVar2[0x1e],(longlong *)(puVar2 + 0x20),puVar2 + 0x1b,
                                    (undefined *)(puVar2 + 0xc2));
        uVar6 = local_res20;
        if (local_res10 == 0) {
          *puVar2 = 0x12;
          goto switchD_180054cbb_caseD_80055ae4;
        }
        pcVar8 = "invalid distances set";
        goto LAB_180055abf;
      case 0x180055ae4:
switchD_180054cbb_caseD_80055ae4:
        if ((5 < uVar16) && (0x101 < uVar6)) {
          param_1[2] = (longlong)_Dst;
          *(uint *)(param_1 + 3) = uVar6;
          *param_1 = (longlong)puVar14;
          *(uint *)(param_1 + 1) = uVar16;
          puVar2[0x10] = uVar20;
          puVar2[0x11] = uVar15;
          FUN_180056b20(param_1,local_64);
          local_58 = (undefined1 *)param_1[2];
          local_res20 = *(uint *)(param_1 + 3);
          puVar14 = (uint *)*param_1;
          uVar16 = *(uint *)(param_1 + 1);
          _Dst = local_58;
          uVar6 = local_res20;
          uVar20 = puVar2[0x10];
          uVar15 = puVar2[0x11];
          break;
        }
        uVar7 = *(uint *)(*(longlong *)(puVar2 + 0x16) +
                         (ulonglong)((1 << ((byte)puVar2[0x1a] & 0x1f)) - 1U & uVar20) * 4);
        if (uVar15 < (uVar7 >> 8 & 0xff)) {
          do {
            if (uVar16 == 0) goto LAB_1800551cf;
            uVar16 = uVar16 - 1;
            uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
            puVar14 = (uint *)((longlong)puVar14 + 1);
            uVar15 = uVar15 + 8;
            uVar7 = *(uint *)(*(longlong *)(puVar2 + 0x16) +
                             (ulonglong)((1 << ((byte)puVar2[0x1a] & 0x1f)) - 1U & uVar20) * 4);
          } while (uVar15 < (uVar7 >> 8 & 0xff));
        }
        cVar4 = (char)uVar7;
        if ((cVar4 != '\0') && ((uVar7 & 0xf0) == 0)) {
          bVar3 = (byte)(uVar7 >> 8);
          uVar10 = *(uint *)(*(longlong *)(puVar2 + 0x16) +
                            (ulonglong)
                            ((((1 << (cVar4 + bVar3 & 0x1f)) - 1U & uVar20) >> (bVar3 & 0x1f)) +
                            (uVar7 >> 0x10)) * 4);
          if (uVar15 < (uVar10 >> 8 & 0xff) + (uVar7 >> 8 & 0xff)) {
            do {
              if (uVar16 == 0) goto LAB_1800551cf;
              uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
              uVar16 = uVar16 - 1;
              puVar14 = (uint *)((longlong)puVar14 + 1);
              uVar15 = uVar15 + 8;
              uVar10 = *(uint *)(*(longlong *)(puVar2 + 0x16) +
                                (ulonglong)
                                ((((1 << (cVar4 + bVar3 & 0x1f)) - 1U & uVar20) >> (bVar3 & 0x1f)) +
                                (uVar7 >> 0x10)) * 4);
            } while (uVar15 < (uVar10 >> 8 & 0xff) + (uint)bVar3);
          }
          uVar7 = uVar10;
          uVar20 = uVar20 >> (bVar3 & 0x1f);
          uVar15 = uVar15 - bVar3;
        }
        uVar20 = uVar20 >> ((byte)(uVar7 >> 8) & 0x1f);
        uVar15 = uVar15 - (uVar7 >> 8 & 0xff);
        puVar2[0x12] = uVar7 >> 0x10;
        if ((char)uVar7 == '\0') {
          *puVar2 = 0x17;
          _Dst = local_58;
          break;
        }
        if ((uVar7 & 0x20) == 0) {
          if ((uVar7 & 0x40) == 0) {
            *puVar2 = 0x13;
            puVar2[0x14] = uVar7 & 0xf;
            goto switchD_180054cbb_caseD_80055cd1;
          }
          *puVar2 = 0x1b;
          param_1[4] = (longlong)"invalid literal/length code";
          _Dst = local_58;
          break;
        }
        goto LAB_180055378;
      case 0x180055cd1:
switchD_180054cbb_caseD_80055cd1:
        uVar7 = puVar2[0x14];
        if (uVar7 != 0) {
          for (; uVar15 < uVar7; uVar15 = uVar15 + 8) {
            if (uVar16 == 0) goto LAB_1800551cf;
            uVar16 = uVar16 - 1;
            uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
            puVar14 = (uint *)((longlong)puVar14 + 1);
          }
          uVar10 = (1 << ((byte)uVar7 & 0x1f)) - 1U & uVar20;
          uVar20 = uVar20 >> ((byte)uVar7 & 0x1f);
          puVar2[0x12] = puVar2[0x12] + uVar10;
          uVar15 = uVar15 - uVar7;
        }
        *puVar2 = 0x14;
      case 0x180055d1e:
        uVar7 = *(uint *)(*(longlong *)(puVar2 + 0x18) +
                         (ulonglong)((1 << ((byte)puVar2[0x1b] & 0x1f)) - 1U & uVar20) * 4);
        if (uVar15 < (uVar7 >> 8 & 0xff)) {
          do {
            if (uVar16 == 0) goto LAB_1800551cf;
            uVar16 = uVar16 - 1;
            uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
            puVar14 = (uint *)((longlong)puVar14 + 1);
            uVar15 = uVar15 + 8;
            uVar7 = *(uint *)(*(longlong *)(puVar2 + 0x18) +
                             (ulonglong)((1 << ((byte)puVar2[0x1b] & 0x1f)) - 1U & uVar20) * 4);
          } while (uVar15 < (uVar7 >> 8 & 0xff));
        }
        if ((uVar7 & 0xf0) == 0) {
          bVar3 = (byte)(uVar7 >> 8);
          uVar10 = *(uint *)(*(longlong *)(puVar2 + 0x18) +
                            (ulonglong)
                            ((((1 << ((char)uVar7 + bVar3 & 0x1f)) - 1U & uVar20) >> (bVar3 & 0x1f))
                            + (uVar7 >> 0x10)) * 4);
          if (uVar15 < (uVar10 >> 8 & 0xff) + (uVar7 >> 8 & 0xff)) {
            do {
              if (uVar16 == 0) goto LAB_1800551cf;
              uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
              uVar16 = uVar16 - 1;
              puVar14 = (uint *)((longlong)puVar14 + 1);
              uVar15 = uVar15 + 8;
              uVar10 = *(uint *)(*(longlong *)(puVar2 + 0x18) +
                                (ulonglong)
                                ((((1 << ((char)uVar7 + bVar3 & 0x1f)) - 1U & uVar20) >>
                                 (bVar3 & 0x1f)) + (uVar7 >> 0x10)) * 4);
            } while (uVar15 < (uVar10 >> 8 & 0xff) + (uint)bVar3);
          }
          uVar7 = uVar10;
          uVar20 = uVar20 >> (bVar3 & 0x1f);
          uVar15 = uVar15 - bVar3;
        }
        uVar20 = uVar20 >> ((byte)(uVar7 >> 8) & 0x1f);
        uVar15 = uVar15 - (uVar7 >> 8 & 0xff);
        if ((uVar7 & 0x40) != 0) {
          pcVar8 = "invalid distance code";
LAB_180055abf:
          param_1[4] = (longlong)pcVar8;
          *puVar2 = 0x1b;
          _Dst = local_58;
          break;
        }
        puVar2[0x13] = uVar7 >> 0x10;
        *puVar2 = 0x15;
        puVar2[0x14] = uVar7 & 0xf;
        _Dst = local_58;
switchD_180054cbb_caseD_80055e8a:
        uVar7 = puVar2[0x14];
        if (uVar7 != 0) {
          for (; uVar15 < uVar7; uVar15 = uVar15 + 8) {
            if (uVar16 == 0) goto LAB_1800551cf;
            uVar16 = uVar16 - 1;
            uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
            puVar14 = (uint *)((longlong)puVar14 + 1);
          }
          uVar10 = (1 << ((byte)uVar7 & 0x1f)) - 1U & uVar20;
          uVar20 = uVar20 >> ((byte)uVar7 & 0x1f);
          puVar2[0x13] = puVar2[0x13] + uVar10;
          uVar15 = uVar15 - uVar7;
        }
        if ((puVar2[0xc] - uVar6) + local_64 < puVar2[0x13]) {
          *puVar2 = 0x1b;
          param_1[4] = (longlong)"invalid distance too far back";
          break;
        }
        *puVar2 = 0x16;
switchD_180054cbb_caseD_80055efc:
        if (uVar6 != 0) {
          uVar7 = puVar2[0x13];
          if (local_64 - uVar6 < uVar7) {
            uVar7 = uVar7 - (local_64 - uVar6);
            uVar19 = puVar2[0xd];
            if (uVar19 < uVar7) {
              uVar7 = uVar7 - uVar19;
              uVar19 = puVar2[0xb];
            }
            uVar10 = puVar2[0x12];
            lVar12 = (ulonglong)(uVar19 - uVar7) + *(longlong *)(puVar2 + 0xe);
            uVar19 = uVar10;
            if (uVar7 <= uVar10) {
              uVar19 = uVar7;
            }
          }
          else {
            uVar10 = puVar2[0x12];
            lVar12 = (longlong)_Dst - (ulonglong)uVar7;
            uVar19 = uVar10;
          }
          uVar7 = uVar6;
          if (uVar19 <= uVar6) {
            uVar7 = uVar19;
          }
          local_res20 = uVar6 - uVar7;
          lVar12 = lVar12 - (longlong)_Dst;
          puVar2[0x12] = uVar10 - uVar7;
          do {
            *_Dst = _Dst[lVar12];
            _Dst = _Dst + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
          uVar6 = local_res20;
          local_58 = _Dst;
          if (puVar2[0x12] == 0) {
            *puVar2 = 0x12;
          }
          break;
        }
        goto LAB_1800551cf;
      case 0x180055e8a:
        goto switchD_180054cbb_caseD_80055e8a;
      case 0x180055efc:
        goto switchD_180054cbb_caseD_80055efc;
      case 0x180055f8e:
        if (uVar6 == 0) goto LAB_1800551cf;
        *_Dst = (char)puVar2[0x12];
        _Dst = _Dst + 1;
        local_res20 = uVar6 - 1;
        *puVar2 = 0x12;
        uVar6 = local_res20;
        local_58 = _Dst;
        break;
      case 0x180055fb7:
        if (puVar2[2] != 0) {
          for (; uVar15 < 0x20; uVar15 = uVar15 + 8) {
            if (uVar16 == 0) goto LAB_1800551cf;
            uVar16 = uVar16 - 1;
            uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
            puVar14 = (uint *)((longlong)puVar14 + 1);
          }
          local_64 = local_64 - uVar6;
          uVar7 = puVar2[4];
          *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + local_64;
          puVar2[7] = puVar2[7] + local_64;
          if (local_64 != 0) {
            puVar13 = (uint *)(_Dst + -(ulonglong)local_64);
            if (uVar7 == 0) {
              uVar10 = FUN_1800562a0(puVar2[6],(byte *)puVar13,local_64);
              _Dst = local_58;
            }
            else if (puVar13 != (uint *)0x0) {
              uVar10 = FUN_180057020(puVar2[6],puVar13,local_64);
              _Dst = local_58;
            }
            puVar2[6] = uVar10;
            *(uint *)((longlong)param_1 + 0x4c) = uVar10;
          }
          local_64 = local_res20;
          uVar10 = uVar20;
          if (uVar7 == 0) {
            uVar10 = ((uVar20 & 0xff00) + uVar20 * 0x10000) * 0x100 + (uVar20 >> 8 & 0xff00) +
                     (uVar20 >> 0x18);
          }
          uVar6 = local_res20;
          if (uVar10 != puVar2[6]) {
            *puVar2 = 0x1b;
            param_1[4] = (longlong)"incorrect data check";
            break;
          }
          uVar20 = 0;
          uVar15 = uVar20;
        }
        *puVar2 = 0x19;
      case 0x18005609c:
        if ((puVar2[2] != 0) && (puVar2[4] != 0)) {
          for (; uVar15 < 0x20; uVar15 = uVar15 + 8) {
            if (uVar16 == 0) goto LAB_1800551cf;
            uVar16 = uVar16 - 1;
            uVar20 = uVar20 + ((uint)(byte)*puVar14 << ((byte)uVar15 & 0x1f));
            puVar14 = (uint *)((longlong)puVar14 + 1);
          }
          if (uVar20 != puVar2[7]) {
            *puVar2 = 0x1b;
            param_1[4] = (longlong)"incorrect length check";
            break;
          }
          uVar20 = 0;
          uVar15 = uVar20;
        }
        *puVar2 = 0x1a;
switchD_180054cbb_caseD_80056122:
        local_res10 = 1;
        goto LAB_1800551cf;
      case 0x180056122:
        goto switchD_180054cbb_caseD_80056122;
      case 0x18005612d:
        local_res10 = -3;
        goto LAB_1800551cf;
      }
LAB_180055387:
      uVar7 = *puVar2;
    }
  }
  return -2;
}

