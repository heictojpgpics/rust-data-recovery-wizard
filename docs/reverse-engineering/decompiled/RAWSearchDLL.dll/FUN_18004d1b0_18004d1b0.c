// Function: FUN_18004d1b0
// Address: 18004d1b0
// Size: 2525 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_18004d1b0(undefined8 *******param_1,undefined8 *****param_2,int param_3,longlong param_4)

{
  byte bVar1;
  undefined8 *********_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *******pppppppuVar10;
  undefined8 ***********pppppppppppuVar11;
  undefined8 **********ppppppppppuVar12;
  undefined8 **********ppppppppppuVar13;
  undefined8 *******pppppppuVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 **********ppppppppppuVar20;
  undefined8 *********pppppppppuVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined8 ************_Src_00;
  undefined8 ***********pppppppppppuVar24;
  undefined8 ***********pppppppppppuVar25;
  bool bVar26;
  undefined1 auStackY_238 [32];
  undefined1 local_208 [4];
  uint local_204;
  longlong local_200;
  undefined8 **********local_1f8 [4];
  undefined8 local_1d8;
  undefined8 *******local_1d0 [2];
  ulonglong local_1c0;
  ulonglong local_1b8;
  undefined8 ************local_1b0 [2];
  undefined8 ***********local_1a0;
  ulonglong local_198;
  undefined8 *******local_190 [2];
  ulonglong local_180;
  ulonglong local_178;
  longlong local_170 [4];
  longlong local_150 [4];
  undefined8 **********local_130 [4];
  undefined8 **********local_110 [4];
  undefined8 **********local_f0 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 ***********local_b8 [6];
  undefined8 ***********local_88;
  undefined1 auStack_87 [7];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  char local_60;
  undefined8 local_58;
  char local_50 [4];
  char local_4c;
  ulonglong local_48;
  
  pppppppppppuVar25 = local_80;
  local_1d8 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_238;
  ppppppppppuVar12 = (undefined8 **********)0x0;
  local_204 = 0;
  local_80._7_1_ = SUB81(pppppppppppuVar25,7);
  local_80._0_7_ =
       CONCAT16(s_Author_18006dde0[6],CONCAT24(s_Author_18006dde0._4_2_,s_Author_18006dde0._0_4_));
  pppppppppppuVar25 = local_80;
  local_58 = (undefined8 ***********)s_CreationDate_18006de18._0_8_;
  pppppppppppuVar24 = local_58;
  local_50 = (char  [4])s_CreationDate_18006de18._8_4_;
  local_4c = s_CreationDate_18006de18[0xc];
  local_70 = (undefined8 ***********)0x726f7461657243;
  local_88 = (undefined8 ***********)0x65746144646f4d;
  local_68 = (undefined8 ***********)s_Producer_18006de08._0_8_;
  pppppppppppuVar11 = local_68;
  local_60 = s_Producer_18006de08[8];
  local_78._0_4_ = s_Title_18006ddec._0_4_;
  uVar5 = (undefined4)local_78;
  local_78._4_2_ = s_Title_18006ddec._4_2_;
  local_d0 = (undefined8 **********)0x0;
  local_c8 = (undefined8 **********)0x0;
  local_c0 = (undefined8 **********)0x0;
  local_b8[0] = (undefined8 ***********)0x0;
  local_b8[1] = (undefined8 ***********)0x0;
  local_b8[2] = (undefined8 ***********)0x0;
  local_b8[3] = (undefined8 ***********)0x0;
  local_b8[4] = (undefined8 ***********)0x0;
  local_b8[5] = (undefined8 ***********)0x0;
  if (param_2 == (undefined8 *****)0x0) {
LAB_18004d340:
    local_d0 = (undefined8 **********)0x0;
    local_b8[0] = (undefined8 ***********)ppppppppppuVar12;
  }
  else {
    local_80._0_1_ = (char)s_Author_18006dde0._0_4_;
    local_b8[0] = (undefined8 ***********)param_2;
    if ((char)local_80 != '\0') {
      local_d0 = ppppppppppuVar12;
      if (0 < param_3) {
        do {
          if (*(char *)local_b8[0] == (char)local_80) {
            param_1 = (undefined8 *******)&local_80;
            do {
              param_1 = (undefined8 *******)((longlong)param_1 + 1);
              if (*(char *)param_1 == '\0') {
                goto LAB_18004d343;
              }
            } while (*(char *)(((longlong)local_b8[0] - (longlong)&local_80) + (longlong)param_1) ==
                     *(char *)param_1);
          }
          local_b8[0] = (undefined8 ***********)((longlong)local_b8[0] + 1);
          uVar18 = (int)local_d0 + 1;
          local_d0 = (undefined8 **********)(ulonglong)uVar18;
        } while ((int)uVar18 < param_3);
      }
      local_d0 = (undefined8 **********)0x0;
      goto LAB_18004d340;
    }
  }
LAB_18004d343:
  local_b8[1] = (undefined8 ***********)ppppppppppuVar12;
  if (param_2 != (undefined8 *****)0x0) {
    local_b8[1] = (undefined8 ***********)param_2;
    ppppppppppuVar20 = ppppppppppuVar12;
    if (0 < param_3) {
      do {
        if (*(char *)local_b8[1] == 'C') {
          param_1 = (undefined8 *******)&local_70;
          do {
            param_1 = (undefined8 *******)((longlong)param_1 + 1);
            if (*(char *)param_1 == '\0') {
              local_d0 = (undefined8 **********)CONCAT44((int)ppppppppppuVar20,(undefined4)local_d0)
              ;
              goto LAB_18004d3a3;
            }
          } while (*(char *)(((longlong)local_b8[1] - (longlong)&local_70) + (longlong)param_1) ==
                   *(char *)param_1);
        }
        uVar18 = (int)ppppppppppuVar20 + 1;
        local_b8[1] = (undefined8 ***********)((longlong)local_b8[1] + 1);
        ppppppppppuVar20 = (undefined8 **********)(ulonglong)uVar18;
      } while ((int)uVar18 < param_3);
    }
    local_b8[1] = (undefined8 ***********)ppppppppppuVar12;
  }
LAB_18004d3a3:
  if (param_2 == (undefined8 *****)0x0) {
LAB_18004d410:
    local_c8 = (undefined8 **********)0x0;
    ppppppppppuVar20 = ppppppppppuVar12;
  }
  else {
    local_58._0_1_ = (char)s_CreationDate_18006de18._0_8_;
    ppppppppppuVar20 = (undefined8 **********)param_2;
    if ((char)local_58 != '\0') {
      local_c8 = ppppppppppuVar12;
      if (0 < param_3) {
        do {
          if (*(char *)ppppppppppuVar20 == (char)local_58) {
            param_1 = (undefined8 *******)&local_58;
            do {
              param_1 = (undefined8 *******)((longlong)param_1 + 1);
              if (*(char *)param_1 == '\0') {
                goto LAB_18004d413;
              }
            } while (*(char *)(((longlong)ppppppppppuVar20 - (longlong)&local_58) +
                              (longlong)param_1) == *(char *)param_1);
          }
          uVar18 = (int)local_c8 + 1;
          local_c8 = (undefined8 **********)(ulonglong)uVar18;
          ppppppppppuVar20 = (undefined8 **********)((longlong)ppppppppppuVar20 + 1);
        } while ((int)uVar18 < param_3);
      }
      local_c8 = (undefined8 **********)0x0;
      goto LAB_18004d410;
    }
    local_c8 = (undefined8 **********)0x0;
  }
LAB_18004d413:
  local_b8[2] = (undefined8 ***********)ppppppppppuVar20;
  local_b8[3] = (undefined8 ***********)ppppppppppuVar12;
  if (param_2 != (undefined8 *****)0x0) {
    ppppppppppuVar13 = ppppppppppuVar12;
    local_b8[3] = (undefined8 ***********)param_2;
    if (0 < param_3) {
      do {
        if (*(char *)local_b8[3] == 'M') {
          param_1 = &stack0xffffffffffffff78;
          do {
            param_1 = (undefined8 *******)((longlong)param_1 + 1);
            if (*(char *)param_1 == '\0') {
              local_c8 = (undefined8 **********)CONCAT44((int)ppppppppppuVar13,(undefined4)local_c8)
              ;
              goto LAB_18004d473;
            }
          } while (*(char *)(((longlong)local_b8[3] - (longlong)&stack0xffffffffffffff78) +
                            (longlong)param_1) == *(char *)param_1);
        }
        uVar18 = (int)ppppppppppuVar13 + 1;
        ppppppppppuVar13 = (undefined8 **********)(ulonglong)uVar18;
        local_b8[3] = (undefined8 ***********)((longlong)local_b8[3] + 1);
      } while ((int)uVar18 < param_3);
    }
    local_b8[3] = (undefined8 ***********)ppppppppppuVar12;
  }
LAB_18004d473:
  if (param_2 == (undefined8 *****)0x0) {
LAB_18004d4e4:
    local_c0 = (undefined8 **********)0x0;
    local_b8[4] = (undefined8 ***********)ppppppppppuVar12;
  }
  else {
    local_68._0_1_ = (char)s_Producer_18006de08._0_8_;
    local_b8[4] = (undefined8 ***********)param_2;
    if ((char)local_68 != '\0') {
      local_c0 = ppppppppppuVar12;
      if (0 < param_3) {
        do {
          if (*(char *)local_b8[4] == (char)local_68) {
            param_1 = (undefined8 *******)&local_68;
            do {
              param_1 = (undefined8 *******)((longlong)param_1 + 1);
              if (*(char *)param_1 == '\0') {
                goto LAB_18004d4e7;
              }
            } while (*(char *)(((longlong)local_b8[4] - (longlong)&local_68) + (longlong)param_1) ==
                     *(char *)param_1);
          }
          uVar18 = (int)local_c0 + 1;
          local_c0 = (undefined8 **********)(ulonglong)uVar18;
          local_b8[4] = (undefined8 ***********)((longlong)local_b8[4] + 1);
        } while ((int)uVar18 < param_3);
      }
      local_c0 = (undefined8 **********)0x0;
      goto LAB_18004d4e4;
    }
    local_c0 = (undefined8 **********)0x0;
  }
LAB_18004d4e7:
  uVar18 = 0;
  local_b8[5] = (undefined8 ***********)ppppppppppuVar12;
  if (param_2 != (undefined8 *****)0x0) {
    local_78._0_1_ = (char)s_Title_18006ddec._0_4_;
    if ((char)local_78 == '\0') {
      local_b8[5] = (undefined8 ***********)param_2;
    }
    else {
      ppppppppppuVar13 = ppppppppppuVar12;
      if (0 < param_3) {
        do {
          if (*(char *)param_2 == (char)local_78) {
            param_1 = (undefined8 *******)&local_78;
            do {
              param_1 = (undefined8 *******)((longlong)param_1 + 1);
              if (*(char *)param_1 == '\0') {
                local_c0 = (undefined8 **********)
                           CONCAT44((int)ppppppppppuVar13,(undefined4)local_c0);
                local_b8[5] = (undefined8 ***********)param_2;
                goto LAB_18004d553;
              }
            } while (*(char *)(((longlong)param_2 - (longlong)&local_78) + (longlong)param_1) ==
                     *(char *)param_1);
          }
          param_2 = (undefined8 *****)((longlong)param_2 + 1);
          uVar19 = (int)ppppppppppuVar13 + 1;
          ppppppppppuVar13 = (undefined8 **********)(ulonglong)uVar19;
        } while ((int)uVar19 < param_3);
      }
    }
  }
LAB_18004d553:
  local_200 = param_4;
  local_80 = pppppppppppuVar25;
  local_78._0_4_ = uVar5;
  local_68 = pppppppppppuVar11;
  local_58 = pppppppppppuVar24;
  if (local_b8[0] == (undefined8 ***********)0x0) {
    if ((local_b8[1] == (undefined8 ***********)0x0) &&
       (bVar26 = ppppppppppuVar20 == (undefined8 **********)0x0, ppppppppppuVar20 = local_b8[3],
       bVar26)) goto LAB_18004d577;
joined_r0x00018004d610:
    if (ppppppppppuVar20 == (undefined8 **********)0x0) goto LAB_18004d577;
  }
  else if (local_b8[1] == (undefined8 ***********)0x0) goto joined_r0x00018004d610;
  ppppppppppuVar20 = local_b8;
  pppppppppppuVar25 = (undefined8 ***********)&local_d0;
  local_88 = pppppppppppuVar25;
  do {
    _Src = *ppppppppppuVar20;
    iVar16 = (int)ppppppppppuVar12;
    if (_Src != (undefined8 *********)0x0) {
      pppppppppuVar21 = _Src;
      local_88 = pppppppppppuVar25;
      FUN_18004c590(param_1,(longlong)local_1b0,_Src,param_3 - *(int *)pppppppppppuVar25);
      uVar17 = SUB81(pppppppppuVar21,0);
      if ((undefined8 ***********)0x19 < local_1a0) {
        FUN_180001780((longlong)local_170);
        puVar6 = (undefined8 *)FUN_1800016b0(local_170);
        puVar6[2] = 0;
        puVar6[3] = 0xf;
        local_208[0] = 0;
        FUN_180001300((undefined1 *)puVar6,local_208);
        local_80 = (undefined8 ***********)0x19;
        local_70 = local_1a0;
        puVar7 = FUN_180001e40(&local_80,&local_70);
        uVar15 = *puVar7;
        _Src_00 = local_1b0;
        if (0xf < local_198) {
          _Src_00 = local_1b0[0];
        }
        if ((ulonglong)puVar6[3] < uVar15) {
          FUN_1800086f0((longlong)local_170,uVar15,uVar17,_Src_00);
        }
        else {
          puVar8 = puVar6;
          if (0xf < (ulonglong)puVar6[3]) {
            puVar8 = (undefined8 *)*puVar6;
          }
          puVar6[2] = uVar15;
          uVar22 = uVar15;
          memmove(puVar8,_Src_00,uVar15);
          uVar17 = (undefined1)uVar22;
          local_208[0] = 0;
          FUN_180001300((undefined1 *)((longlong)puVar8 + uVar15),local_208);
          uVar18 = local_204;
        }
        local_204 = uVar18 | 1;
        FUN_180001630((longlong *)local_1b0);
        puVar8 = (undefined8 *)FUN_1800016b0(local_1b0);
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        *puVar8 = *puVar6;
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        puVar6[2] = 0;
        puVar6[3] = 0xf;
        local_208[0] = 0;
        FUN_180001300((undefined1 *)puVar6,local_208);
        uVar18 = uVar18 & 0xfffffffe;
        local_204 = uVar18;
        FUN_180001630(local_170);
        pppppppppppuVar25 = local_88;
      }
      if ((iVar16 == 1) && (local_1a0 == (undefined8 ***********)0x0)) {
        FUN_180001780((longlong)local_190);
        puVar6 = (undefined8 *)FUN_1800016b0(local_190);
        puVar6[2] = 0;
        puVar6[3] = 0xf;
        local_208[0] = 0;
        FUN_180001300((undefined1 *)puVar6,local_208);
        uVar15 = 0xffffffffffffffff;
        do {
          uVar15 = uVar15 + 1;
        } while (*(char *)((longlong)_Src + uVar15) != '\0');
        if ((ulonglong)puVar6[3] < uVar15) {
          FUN_1800086f0((longlong)local_190,uVar15,uVar17,_Src);
        }
        else {
          puVar8 = puVar6;
          if (0xf < (ulonglong)puVar6[3]) {
            puVar8 = (undefined8 *)*puVar6;
          }
          puVar6[2] = uVar15;
          memmove(puVar8,_Src,uVar15);
          local_208[0] = 0;
          FUN_180001300((undefined1 *)((longlong)puVar8 + uVar15),local_208);
          uVar18 = local_204;
        }
        pppppppuVar10 = local_190;
        if (0xf < local_178) {
          pppppppuVar10 = local_190[0];
        }
        uVar15 = FUN_18000f820((longlong)pppppppuVar10,local_180,0,"Illustrator",0xb);
        if (uVar15 != 0xffffffffffffffff) {
          lVar23 = local_200;
          puVar6 = (undefined8 *)FUN_1800016b0(local_200 + 0xe0);
          if ((ulonglong)puVar6[3] < 0x11) {
            FUN_1800086f0(lVar23 + 0xe0,0x11,(char)lVar23,"Adobe Illustrator");
          }
          else {
            puVar8 = puVar6;
            if (0xf < (ulonglong)puVar6[3]) {
              puVar8 = (undefined8 *)*puVar6;
            }
            puVar6[2] = 0x11;
            memmove(puVar8,"Adobe Illustrator",0x11);
            local_208[0] = 0;
            FUN_180001300((undefined1 *)((longlong)puVar8 + 0x11),local_208);
          }
        }
        FUN_180001630((longlong *)local_190);
      }
      FUN_180001690((undefined1 *)local_1d0);
      if ((iVar16 != 2) && (iVar16 != 3)) {
        local_88 = local_1f8;
        plVar9 = (longlong *)FUN_180007060((longlong)local_1f8,local_1b0);
        pppppppuVar10 = (undefined8 *******)FUN_180017060((longlong)local_150,plVar9);
        if (local_1d0 != (undefined8 ********)pppppppuVar10) {
          FUN_180001630((longlong *)local_1d0);
          puVar6 = (undefined8 *)FUN_1800016b0(pppppppuVar10);
          puVar8 = (undefined8 *)FUN_1800016b0(local_1d0);
          uVar2 = puVar6[1];
          uVar3 = puVar6[2];
          uVar4 = puVar6[3];
          *puVar8 = *puVar6;
          puVar8[1] = uVar2;
          puVar8[2] = uVar3;
          puVar8[3] = uVar4;
          puVar6[2] = 0;
          puVar6[3] = 0xf;
          local_208[0] = 0;
          FUN_180001300((undefined1 *)puVar6,local_208);
        }
        FUN_180001630(local_150);
        pppppppppppuVar11 = (undefined8 ***********)FUN_180007060((longlong)local_1f8,local_1d0);
        ppppppppppuVar12 = pppppppppppuVar11[2];
        local_88 = pppppppppppuVar11;
        if ((undefined8 **********)0x1 < ppppppppppuVar12) {
          pppppppppppuVar24 = pppppppppppuVar11;
          if ((undefined8 **********)0xf < pppppppppppuVar11[3]) {
            pppppppppppuVar24 = (undefined8 ***********)*pppppppppppuVar11;
          }
          ppppppppppuVar13 = (undefined8 **********)0x0;
          if (ppppppppppuVar12 != (undefined8 **********)0x0) {
            do {
              bVar1 = *(char *)((longlong)pppppppppppuVar24 + (longlong)ppppppppppuVar13) - 0x20;
              if (((0x3f < bVar1) ||
                  ((0x87fffffe03ff6101U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0)) &&
                 (0x19 < (byte)(*(char *)((longlong)pppppppppppuVar24 + (longlong)ppppppppppuVar13)
                               + 0x9fU))) goto LAB_18004db24;
              ppppppppppuVar13 = (undefined8 **********)((longlong)ppppppppppuVar13 + 1);
            } while (ppppppppppuVar13 < ppppppppppuVar12);
          }
          FUN_180001630((longlong *)pppppppppppuVar11);
          goto LAB_18004d9ec;
        }
        goto LAB_18004db24;
      }
LAB_18004d9ec:
      if (iVar16 == 0) {
        pppppppuVar10 = (undefined8 *******)(local_200 + 0x80);
LAB_18004daba:
        if ((undefined8 ********)pppppppuVar10 != local_1d0) {
          pppppppuVar14 = local_1d0;
          if (0xf < local_1b8) {
            pppppppuVar14 = local_1d0[0];
          }
          FUN_1800071e0((longlong)pppppppuVar10,pppppppuVar14,local_1c0);
        }
      }
      else {
        if (iVar16 == 1) {
          pppppppuVar10 = (undefined8 *******)(local_200 + 0x60);
          goto LAB_18004daba;
        }
        if (iVar16 == 2) {
          local_88 = local_1f8;
          ppppppppppuVar12 = local_1f8;
          plVar9 = (longlong *)FUN_180007060((longlong)ppppppppppuVar12,local_1b0);
          plVar9 = (longlong *)FUN_18004c9c0(ppppppppppuVar12,(longlong)local_130,plVar9);
          FUN_180019970((longlong *)(local_200 + 0xa0),plVar9);
          pppppppppppuVar11 = local_130;
LAB_18004db24:
          FUN_180001630((longlong *)pppppppppppuVar11);
        }
        else {
          if (iVar16 == 3) {
            local_88 = local_1f8;
            ppppppppppuVar12 = local_1f8;
            plVar9 = (longlong *)FUN_180007060((longlong)ppppppppppuVar12,local_1b0);
            plVar9 = (longlong *)FUN_18004c9c0(ppppppppppuVar12,(longlong)local_110,plVar9);
            FUN_180019970((longlong *)(local_200 + 0xc0),plVar9);
            pppppppppppuVar11 = local_110;
            goto LAB_18004db24;
          }
          if (iVar16 == 4) {
            pppppppuVar10 = (undefined8 *******)(local_200 + 0x40);
            goto LAB_18004daba;
          }
          if (iVar16 == 5) {
            local_88 = local_1f8;
            ppppppppppuVar12 = local_1f8;
            plVar9 = (longlong *)FUN_180007060((longlong)ppppppppppuVar12,local_1d0);
            plVar9 = (longlong *)FUN_18004db90(ppppppppppuVar12,(longlong)local_f0,plVar9);
            FUN_180019970((longlong *)(local_200 + 0x20),plVar9);
            pppppppppppuVar11 = local_f0;
            goto LAB_18004db24;
          }
        }
      }
      FUN_180001630((longlong *)local_1d0);
      param_1 = local_1b0;
      FUN_180001630((longlong *)param_1);
    }
    ppppppppppuVar12 = (undefined8 **********)(ulonglong)(iVar16 + 1U);
    pppppppppppuVar25 = (undefined8 ***********)((longlong)pppppppppppuVar25 + 4);
    local_88 = pppppppppppuVar25;
    ppppppppppuVar20 = ppppppppppuVar20 + 1;
  } while ((int)(iVar16 + 1U) < 6);
LAB_18004d577:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_238);
  return;
}

