// Function: FUN_180018130
// Address: 180018130
// Size: 2846 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180018130(longlong param_1,int *param_2,uint param_3,longlong param_4,longlong param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *_Dst;
  ulonglong uVar11;
  int *piVar12;
  undefined1 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStackY_218 [32];
  char local_1c8 [4];
  int local_1c4;
  uint local_1c0;
  uint local_1bc;
  longlong local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined2 local_18c;
  int local_188;
  undefined1 uStack_184;
  undefined1 uStack_183;
  undefined2 uStack_182;
  undefined2 local_180;
  int local_178;
  undefined2 local_174;
  undefined1 local_172;
  uint local_170;
  undefined1 local_16c;
  char local_168 [272];
  ulonglong local_58;
  
  local_58 = DAT_18008f028 ^ (ulonglong)auStackY_218;
  uVar11 = (ulonglong)(int)param_3;
  lVar14 = param_4;
  local_1c0 = param_3;
  local_1b8 = param_4;
  FUN_18000b460(&DAT_180117f30,"Exception:ZIP CalcRawSize(%d)",0x134,param_4);
  uVar1 = 0;
  local_1c4 = 0;
  local_1bc = 0;
  local_178 = 0;
  local_188 = 0;
  uVar9 = 1;
  if (2 < (ulonglong)(*(longlong *)(param_5 + 8) - param_4)) {
    uVar9 = 3;
  }
  uVar10 = (param_4 - *(longlong *)(param_1 + 8)) * uVar11;
  local_1b0 = uVar11;
  local_170 = uVar9;
  if (uVar10 < (ulonglong)(*(longlong *)(param_1 + 299) * 0x14) ||
      uVar10 + *(longlong *)(param_1 + 299) * -0x14 == 0) {
    if (param_2 == (int *)0x0) goto LAB_180018c28;
    if (param_4 == *(longlong *)(param_1 + 8)) {
      iVar2 = *param_2;
      if (iVar2 != 0x2014b50) {
        if (iVar2 == 0x4034b50) {
          if ((10 < *(ushort *)(param_2 + 2)) ||
             (0x102 < (ushort)(*(short *)((longlong)param_2 + 0x1a) - 1U))) goto LAB_180018c28;
        }
        else if (iVar2 != 0x6054b50) goto LAB_180018c28;
      }
      local_1c8[0] = '\0';
      FUN_18000b460(&DAT_180117f30,"Exception:ZIP CalcRawSize(%d)",0x37e,lVar14);
      FUN_180017c40(param_2,uVar11,(undefined1 *)(param_1 + 0x110),local_1c8);
      if (*(byte *)(param_1 + 0x110) == 0) {
        if (local_1c8[0] != '\0') {
          *(undefined4 *)(param_1 + 0x18) = 0xd;
        }
      }
      else {
        *(undefined8 *)(param_1 + 299) = 20000000;
      }
      FUN_18000b460(&DAT_180117f30,"Exception:ZIP CalcRawSize(%d), office?%d",0x389,
                    (ulonglong)*(byte *)(param_1 + 0x110));
      iVar2 = *param_2;
      if (iVar2 == 0x2014b50) {
LAB_180018377:
        local_1c4 = FUN_180018e00(param_1,param_2,(undefined **)(ulonglong)(param_3 * uVar9),
                                  &local_1bc,&local_178,&local_1a8);
        uVar1 = local_1bc;
        if (local_1c4 == 0) {
          *(ulonglong *)(param_1 + 0x10) = (ulonglong)local_1bc + *(longlong *)(param_1 + 0x113);
        }
      }
      else {
        if (iVar2 == 0x4034b50) {
          if ((*(ushort *)(param_2 + 2) < 0xb) &&
             ((ushort)(*(short *)((longlong)param_2 + 0x1a) - 1U) < 0x103)) goto LAB_180018377;
        }
        else if (iVar2 == 0x6054b50) goto LAB_180018377;
        local_1c4 = 1;
      }
      pcVar4 = FUN_180016fc0((char *)param_2,100,"application/hwp+zip",0x13);
      if (pcVar4 != (char *)0x0) {
        *(undefined4 *)(param_1 + 0x18) = 0x7a;
      }
    }
    uVar9 = 0x200;
    if (param_3 != 0) {
      uVar9 = param_3;
    }
    if ((ulonglong)uVar1 / (ulonglong)uVar9 + param_4 <= *(ulonglong *)(param_5 + 8)) {
      if ((((param_4 == *(longlong *)(param_1 + 8)) && (*(char *)(param_1 + 0x112) == '\0')) &&
          (*(char *)(param_1 + 0x110) != '\0')) &&
         ((*(int *)(param_1 + 0x18) == 0x48 &&
          (pcVar4 = FUN_180016fc0((char *)((ulonglong)uVar1 + (longlong)param_2),param_3,
                                  &DAT_1800936ec,4), pcVar4 != (char *)0x0)))) {
        pcVar5 = (char *)FUN_1800020c0((ulonglong)*(ushort *)(pcVar4 + 0x1a) + 1);
        memset(pcVar5,0,(ulonglong)*(ushort *)(pcVar4 + 0x1a) + 1);
        memcpy(pcVar5,pcVar4 + 0x1e,(ulonglong)*(ushort *)(pcVar4 + 0x1a));
        iVar2 = strncmp(pcVar5,"word/",5);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x18) = 0x49;
        }
        free(pcVar5);
      }
      uVar11 = *(ulonglong *)(param_1 + 0x113);
      if (((uVar11 != 0) &&
          (uVar10 = uVar11 % local_1b0, param_4 - *(longlong *)(param_1 + 8) == uVar11 / local_1b0))
         && (*(char *)(param_1 + 0x112) != '\0')) {
        piVar12 = (int *)((longlong)param_2 + uVar10);
        local_170 = local_1c0 * local_170;
        do {
          FUN_18000b460(&DAT_180117f30,"Exception:ZIP CalcRawSize(%d), office?%d",0x175,
                        (ulonglong)*(byte *)(param_1 + 0x110));
          if (piVar12 == (int *)0x0) goto LAB_180018589;
          iVar2 = *piVar12;
          if (iVar2 == 0x2014b50) {
LAB_18001867c:
            local_1c4 = FUN_180018e00(param_1,piVar12,(undefined **)(ulonglong)local_170,&local_1bc,
                                      &local_178,&local_1a8);
            uVar1 = local_1bc;
            if (local_1c4 == 0) {
              *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x113);
            }
          }
          else {
            if (iVar2 == 0x4034b50) {
              if ((*(ushort *)(piVar12 + 2) < 0xb) &&
                 ((ushort)(*(short *)((longlong)piVar12 + 0x1a) - 1U) < 0x103)) goto LAB_18001867c;
            }
            else if (iVar2 == 0x6054b50) goto LAB_18001867c;
LAB_180018589:
            local_1c4 = 1;
          }
          if (local_178 != 0) {
            *(longlong *)(param_1 + 0x133) = local_1a8;
            *(undefined8 *)(param_1 + 0x13b) = uStack_1a0;
            *(undefined8 *)(param_1 + 0x143) = local_198;
            *(undefined4 *)(param_1 + 0x14b) = local_190;
            *(undefined2 *)(param_1 + 0x14f) = local_18c;
            local_178 = 0;
            FUN_18000b460(&DAT_180117f30,"Exception:ZIP CalcRawSize(%d), office?%d",0x181,
                          (ulonglong)*(byte *)(param_1 + 0x110));
            puVar6 = FUN_180046260();
            uVar7 = FUN_1800463b0((longlong)puVar6,(longlong)param_2,local_1c0,param_4,uVar10,
                                  param_5,(size_t)&local_1a8,param_1 + 0x151,&local_188);
            if ((int)uVar7 == 0) break;
            if (local_188 == 0) {
              *(undefined4 *)(param_1 + 0x252) = 1;
            }
            else {
              local_188 = 0;
              *(longlong *)(param_1 + 0x11b) = param_4;
              *(ulonglong *)(param_1 + 0x123) = uVar10;
            }
          }
          if (param_4 - *(longlong *)(param_1 + 8) != *(ulonglong *)(param_1 + 0x113) / local_1b0)
          break;
          piVar12 = (int *)((longlong)piVar12 + (ulonglong)uVar1);
          uVar10 = uVar10 + uVar1;
          if (((local_1c4 != 0) || (uVar1 == 0)) || (*(char *)(param_1 + 0x112) == '\0')) break;
        } while( true );
      }
      uVar9 = local_1c0;
      if (*(longlong *)(param_1 + 0x11b) != 0) {
        FUN_18000b460(&DAT_180117f30,"Exception:ZIP CalcRawSize(%d), office?%d",0x19b,
                      (ulonglong)*(byte *)(param_1 + 0x110));
        puVar6 = FUN_180046260();
        uVar9 = local_1c0;
        uVar7 = FUN_1800463b0((longlong)puVar6,(longlong)param_2,local_1c0,param_4,
                              *(longlong *)(param_1 + 0x123),param_5,param_1 + 0x133,param_1 + 0x151
                              ,&local_188);
        if ((int)uVar7 != 0) {
          *(undefined8 *)(param_1 + 0x11b) = 0;
          *(undefined8 *)(param_1 + 0x123) = 0;
          *(undefined4 *)(param_1 + 0x252) = 1;
        }
      }
      if (0x10 < *(int *)(param_5 + 0x14)) {
        FUN_18000b460(&DAT_180117f30,"Exception:ZIP CalcRawSize(%d), office?%d",0x1a7,
                      (ulonglong)*(byte *)(param_1 + 0x110));
        lVar14 = (longlong)(int)uVar9;
        for (piVar12 = (int *)((longlong)param_2 + (lVar14 - *(int *)(param_5 + 0x14)));
            param_2 <= piVar12; piVar12 = (int *)((longlong)piVar12 + -1)) {
          if (((char)*piVar12 == 'P') && (*(char *)((longlong)piVar12 + 1) == DAT_180067d1d)) {
            iVar2 = (int)piVar12 - (int)param_2;
            if (iVar2 != -2) {
              lVar15 = (longlong)iVar2 + 2;
              if (*(short *)((longlong)param_2 + lVar15) == 0x201) {
                lVar15 = (param_4 - *(longlong *)(param_1 + 8)) * lVar14 + 0x2e + lVar15;
                *(longlong *)(param_1 + 0x10) = lVar15;
                *(longlong *)(param_1 + 0x25a) = lVar15;
                if (*(uint *)(param_5 + 0x14) < 0x16) goto LAB_1800188f1;
                goto LAB_1800188ec;
              }
              if (*(short *)((longlong)param_2 + lVar15) != 0x605) goto LAB_1800188f1;
              lVar15 = (param_4 - *(longlong *)(param_1 + 8)) * lVar14 + 0x12 + lVar15;
              goto LAB_1800188d7;
            }
            break;
          }
        }
        pcVar5 = (char *)((longlong)param_2 - lVar14);
        for (pcVar4 = pcVar5 + lVar14; pcVar5 <= pcVar4; pcVar4 = pcVar4 + -1) {
          if (((*pcVar4 == 'P') && (*(short *)(pcVar4 + 1) == DAT_180067d19)) &&
             (pcVar4[3] == DAT_180067d1b)) {
            iVar2 = ((int)pcVar4 - (int)pcVar5) + 4;
            if (0 < iVar2) {
              lVar15 = ((param_4 - *(longlong *)(param_1 + 8)) + -1) * lVar14 + 0x12 +
                       (longlong)iVar2;
LAB_1800188d7:
              *(longlong *)(param_1 + 0x25a) = lVar15;
              *(longlong *)(param_1 + 0x10) = lVar15;
              *(undefined4 *)(param_1 + 0x262) = 0;
LAB_1800188ec:
              local_1c4 = 1;
            }
            break;
          }
        }
LAB_1800188f1:
        if (*(char *)(param_1 + 0x110) != '\0') {
          FUN_18000b460(&DAT_180117f30,"Exception:ZIP CalcRawSize(%d)",0x1d4,lVar14);
          iVar2 = 0;
          local_178 = 0x726f7700;
          local_174 = 0x2f64;
          local_172 = 0;
          local_188 = 0x74707000;
          uStack_183 = 0;
          local_170 = 0x2f6c7800;
          local_16c = 0;
          if (0 < (int)uVar9) {
            do {
              lVar14 = (longlong)iVar2;
              if ((*(int *)(lVar14 + (longlong)param_2) == 0x726f7700) &&
                 (*(short *)(lVar14 + 4 + (longlong)param_2) == 0x2f64)) {
                *(undefined4 *)(param_1 + 0x18) = 0x49;
                break;
              }
              if ((*(int *)(lVar14 + (longlong)param_2) == 0x74707000) &&
                 (*(char *)(lVar14 + 4 + (longlong)param_2) == '/')) {
                *(undefined4 *)(param_1 + 0x18) = 0x4b;
                break;
              }
              if (*(int *)(lVar14 + (longlong)param_2) == 0x2f6c7800) {
                *(undefined4 *)(param_1 + 0x18) = 0x4a;
                break;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)uVar9);
          }
        }
        *(undefined1 *)(param_1 + 0x112) = 1;
      }
      DAT_180096ee0 = *(undefined8 *)(param_1 + 0x113);
      iVar2 = local_1c4;
      if ((local_1c4 != 0) && (1 < (ulonglong)(param_4 - *(longlong *)(param_1 + 8)))) {
        local_188 = 0x6174656d;
        uStack_184 = 0x2e;
        uStack_183 = 0x78;
        uStack_182 = 0x6c6d;
        local_180 = 0x4b50;
        if (*(longlong *)(param_1 + 0x1c1) == 0) {
          iVar2 = 0;
          lVar14 = 0x6c6d782e6174656d;
          lVar15 = 0;
          do {
            if ((*(longlong *)((longlong)iVar2 + -0x200 + (longlong)param_2) == lVar14) &&
               (*(short *)((longlong)iVar2 + -0x1f8 + (longlong)param_2) == 0x4b50)) {
              uVar9 = *(uint *)((longlong)param_2 + lVar15 + -0x204);
              param_4 = local_1b8;
              if ((*(ulonglong *)(param_1 + 0x10) < (ulonglong)uVar9) || (uVar9 == 0)) break;
              FUN_1800428b0(&local_1a8,*(longlong **)(param_1 + 0xe8),*(undefined8 *)(param_1 + 8));
              puVar6 = FUN_180042930(&local_1a8,(ulonglong)uVar9);
              param_4 = local_1b8;
              if (((puVar6 == (undefined *)0x0) || (*(int *)(puVar6 + 0x12) == 0)) ||
                 (*(int *)(puVar6 + 0x16) == 0)) break;
              puVar8 = FUN_180046260();
              uVar7 = FUN_180046550((longlong)puVar8,(longlong)puVar6,(ulonglong)puVar6,
                                    param_1 + 0x151);
              lVar14 = CONCAT26(uStack_182,CONCAT15(uStack_183,CONCAT14(uStack_184,local_188)));
              if ((int)uVar7 != 0) {
                *(undefined4 *)(param_1 + 0x252) = 1;
              }
            }
            iVar2 = iVar2 + 1;
            lVar15 = lVar15 + 1;
            param_4 = local_1b8;
          } while (iVar2 < 0x400);
        }
        uVar9 = local_1c0;
        iVar2 = local_1c4;
        lVar14 = *(longlong *)(param_1 + 0x1c1);
        if ((lVar14 == 0) &&
           ((*(int *)(param_1 + 0x18) - 0x94U < 2 || (*(int *)(param_1 + 0x18) == 0x93)))) {
          FUN_180018c50(param_1,local_1c0,'\x01');
          lVar14 = *(longlong *)(param_1 + 0x1c1);
        }
        if ((lVar14 == 0) && (*(int *)(param_1 + 0x18) - 0x49U < 3)) {
          FUN_180018c50(param_1,uVar9,'\0');
        }
        FUN_18000b460(&DAT_180117f30,"Exception:ZIP CalcRawSize(%d), office?%d",0x209,
                      (ulonglong)*(byte *)(param_1 + 0x110));
        FUN_1800191a0(param_1,param_4,uVar9,*(int *)(param_5 + 0x14));
        if ((((*(int *)(param_1 + 0x18) != 0x86) &&
             (*(longlong *)(param_2 + -7) == s_manifest_json_180067c20._0_8_)) &&
            (param_2[-5] == s_manifest_json_180067c20._8_4_)) &&
           ((char)param_2[-4] == s_manifest_json_180067c20[0xc])) {
          *(undefined4 *)(param_1 + 0x18) = 0x86;
        }
      }
      if ((iVar2 != 0) && (*(char *)(param_1 + 0x112) != '\0')) {
        if (((*(int *)(param_1 + 0x18) - 0x8cU & 0xfffffffa) == 0) &&
           (*(int *)(param_1 + 0x18) != 0x90)) {
          DAT_180096ee0 = 0;
          _DAT_180096ee8 = 0;
        }
        else if (*(char *)(param_1 + 0x112) != '\0') {
          uVar11 = ((param_4 - *(longlong *)(param_1 + 8)) + 1) * local_1b0;
          *(undefined4 *)(param_1 + 0x262) = 1;
          DAT_180096ee0 = 0;
          _DAT_180096ee8 = 0;
          if (uVar11 < *(ulonglong *)(param_1 + 0x113)) {
            uVar11 = *(ulonglong *)(param_1 + 0x113);
          }
          *(ulonglong *)(param_1 + 0x10) = uVar11;
        }
      }
      goto LAB_180018c28;
    }
    uVar13 = 4;
    memset(local_168,0,0x104);
    uVar11 = 0xffffffffffffffff;
    do {
      uVar10 = uVar11 + 1;
      lVar14 = uVar11 + 1;
      uVar11 = uVar10;
    } while (local_168[lVar14] != '\0');
  }
  else {
    uVar13 = 4;
    memset(local_168,0,0x104);
    uVar11 = 0xffffffffffffffff;
    do {
      uVar10 = uVar11 + 1;
      lVar14 = uVar11 + 1;
      uVar11 = uVar10;
    } while (local_168[lVar14] != '\0');
  }
  puVar3 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
  if ((ulonglong)puVar3[3] < uVar10) {
    FUN_1800086f0(param_1 + 0x20,uVar10,uVar13,local_168);
  }
  else {
    _Dst = puVar3;
    if (0xf < (ulonglong)puVar3[3]) {
      _Dst = (undefined8 *)*puVar3;
    }
    puVar3[2] = uVar10;
    memmove(_Dst,local_168,uVar10);
    local_1c8[0] = '\0';
    FUN_180001300((undefined1 *)((longlong)_Dst + uVar10),local_1c8);
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 299);
  DAT_180096ee0 = 0;
  _DAT_180096ee8 = 0;
LAB_180018c28:
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_218);
  return;
}

