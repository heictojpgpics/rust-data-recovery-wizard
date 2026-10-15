// Function: FUN_18002a860
// Address: 18002a860
// Size: 2139 bytes


char FUN_18002a860(longlong param_1,char *param_2,uint param_3,longlong param_4,longlong *param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 uVar16;
  undefined **ppuVar17;
  char *pcVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float _X;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float _Y;
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [64];
  undefined1 auVar34 [16];
  undefined1 auVar35 [64];
  undefined1 auVar36 [16];
  undefined1 auVar37 [64];
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [64];
  undefined1 auVar41 [16];
  undefined1 auVar42 [64];
  undefined1 local_138 [8];
  longlong **local_130;
  ulonglong local_128;
  ulonglong local_120;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108;
  int local_100;
  longlong *local_f8 [4];
  undefined8 local_d8;
  
  local_d8 = 0xfffffffffffffffe;
  uVar14 = (ulonglong)(int)param_3;
  if ((param_2 != (char *)0x0) && (0 < (int)param_3)) {
    if ((*(longlong *)(param_1 + 8) <= param_4) || (*(longlong *)(param_1 + 0x110) < 1)) {
      ppuVar17 = *(undefined ***)(param_1 + 0x110);
      if (param_4 - *(longlong *)(param_1 + 8) < (longlong)ppuVar17 / (longlong)uVar14) {
        return '\x02';
      }
      local_120 = uVar14;
      if (ppuVar17 == (undefined **)0x0) {
        ppuVar17 = (undefined **)0x3;
        iVar8 = strncmp(param_2 + 8,"iso",3);
        if (iVar8 == 0) {
          *(undefined1 *)(param_1 + 0x124) = 1;
        }
      }
      local_128 = 0;
      *(ulonglong *)(param_1 + 0x178) = uVar14;
      *(undefined8 *)(param_1 + 0x118) = 0;
      uVar29 = 0;
      auVar31 = ZEXT464(DAT_18006ee64);
      auVar33 = ZEXT464(DAT_18006ee60);
      auVar35 = ZEXT464(DAT_18006ee5c);
      auVar37 = ZEXT464(DAT_18006ee58);
      auVar40 = ZEXT464(DAT_18006ee7c);
      auVar42 = ZEXT464(DAT_18006ee4c);
      _X = DAT_18006ee78;
      _Y = DAT_18006ee68;
      do {
        cVar7 = '\x01';
        if (uVar14 <= local_128) {
LAB_18002b0ad:
          return cVar7 + '\x01';
        }
        lVar12 = *(longlong *)(param_1 + 0x110) % (longlong)uVar14;
        *(longlong *)(param_1 + 0x118) = lVar12;
        pcVar11 = param_2 + lVar12;
        uVar6 = CONCAT31(CONCAT21(CONCAT11(*pcVar11,pcVar11[1]),pcVar11[2]),pcVar11[3]);
        uVar15 = (ulonglong)uVar6;
        if (((uVar6 & 0xfffffff8) == 0) && (uVar15 != 1)) goto LAB_18002b09a;
        iVar8 = CONCAT31(CONCAT21(CONCAT11(pcVar11[4],pcVar11[5]),pcVar11[6]),pcVar11[7]);
        if (0x6d6f6f76 < iVar8) {
          if (iVar8 < 0x736b6971) {
            if (((iVar8 == 0x736b6970) || (iVar8 == 0x6d766578)) ||
               ((iVar8 == 0x6d766864 || (iVar8 == 0x7064696e)))) {
LAB_18002ae5f:
              if (iVar8 == 0x6d6f6f76) goto LAB_18002ae67;
              if ((iVar8 != 0x66747970) || (*(int *)(param_1 + 0x128) < 2)) goto LAB_18002acdd;
            }
            else if (iVar8 == 0x706e6f74) goto LAB_18002acdd;
          }
          else if ((((iVar8 == 0x7472616b) || (iVar8 == 0x75647461)) || (iVar8 == 0x75756964)) ||
                  (iVar8 == 0x77696465)) goto LAB_18002ae5f;
LAB_18002b09a:
          FUN_18002c5d0(param_1,param_4,(longlong)param_2,param_5);
          cVar7 = '\0';
          goto LAB_18002b0ad;
        }
        if (iVar8 == 0x6d6f6f76) {
LAB_18002ae67:
          *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
        }
        else {
          if (iVar8 < 0x6d646175) {
            if (iVar8 == 0x6d646174) {
              piVar1 = (int *)(pcVar11 + 8);
              if (uVar15 != 1) {
LAB_18002ac31:
                uVar16 = SUB81(ppuVar17,0);
                uVar14 = local_120;
                if (*piVar1 == DAT_18006b9c8) {
                  puVar10 = (undefined8 *)FUN_1800016b0(param_1 + 0x138);
                  if ((ulonglong)puVar10[3] < 5) {
                    FUN_1800086f0(param_1 + 0x138,5,uVar16,"GoPro");
                  }
                  else {
                    puVar13 = puVar10;
                    if (0xf < (ulonglong)puVar10[3]) {
                      puVar13 = (undefined8 *)*puVar10;
                    }
                    puVar10[2] = 5;
                    memmove(puVar13,"GoPro",5);
                    local_138[0] = 0;
                    FUN_180001300((undefined1 *)((longlong)puVar13 + 5),local_138);
                  }
                  local_130 = local_f8;
                  ppuVar17 = (undefined **)
                             FUN_180007060((longlong)local_f8,(undefined8 *)(param_1 + 0x138));
                  FUN_180017550(param_1,6,(longlong *)ppuVar17);
                  uVar14 = local_120;
                }
                goto LAB_18002acdd;
              }
              if (((piVar1 != (int *)0x0) && ((char)*piVar1 == '\0')) &&
                 ((pcVar11[9] == '\0' && (pcVar11[10] == '\0')))) {
                fVar19 = powf(_X,_Y);
                fVar26 = (float)uVar29;
                fVar20 = powf(_X,auVar31._0_4_);
                fVar27 = (float)uVar29;
                fVar21 = powf(_X,auVar33._0_4_);
                fVar28 = (float)uVar29;
                fVar22 = powf(_X,auVar35._0_4_);
                bVar2 = pcVar11[0xb];
                fVar23 = powf(_X,auVar37._0_4_);
                bVar3 = pcVar11[0xc];
                bVar4 = pcVar11[0xd];
                fVar38 = auVar40._0_4_;
                fVar24 = powf(_X,auVar42._0_4_);
                bVar5 = pcVar11[0xe];
                fVar25 = powf(_X,(float)uVar29);
                uVar15 = (longlong)(fVar19 * fVar26) + (longlong)(fVar20 * fVar27) +
                         (longlong)(fVar21 * fVar28) + (longlong)((float)bVar2 * fVar22) +
                         (longlong)((float)bVar3 * fVar23) + (longlong)((float)bVar4 * fVar38) +
                         (longlong)((float)bVar5 * fVar24) +
                         (longlong)((float)(byte)pcVar11[0xf] * fVar25);
                if (0 < (longlong)uVar15) goto LAB_18002ac31;
              }
            }
            else {
              if ((((iVar8 == 0x50494354) || (iVar8 == 0x66726565)) || (iVar8 == 0x66747970)) ||
                 (iVar8 == 0x68646c72)) goto LAB_18002ae5f;
              if (iVar8 == 0x696c7374) goto LAB_18002acdd;
            }
            goto LAB_18002b09a;
          }
          if (((iVar8 == 0x6d656f63) || (iVar8 == 0x6d657461)) || (iVar8 == 0x6d667261))
          goto LAB_18002ae5f;
          if (iVar8 != 0x6d6f6f66) goto LAB_18002b09a;
        }
LAB_18002acdd:
        uVar16 = SUB81(ppuVar17,0);
        *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
        lVar12 = *(longlong *)(param_1 + 0x110) + uVar15;
        *(longlong *)(param_1 + 0x110) = lVar12;
        local_128 = local_128 + uVar15;
        if (iVar8 == 0x6d6f6f76) {
          if ((longlong)(lVar12 + uVar14 * param_4 + 0x400) < (longlong)(uVar14 * param_5[1])) {
            if (*(int *)(param_1 + 0x18) == 0x2d) {
              puVar9 = FUN_180010a40();
              local_130 = &local_118;
              FUN_180001780((longlong)&local_118);
              puVar10 = (undefined8 *)FUN_1800016b0(&local_118);
              puVar10[2] = 0;
              puVar10[3] = 0xf;
              local_138[0] = 0;
              FUN_180001300((undefined1 *)puVar10,local_138);
              if ((ulonglong)puVar10[3] < 3) {
                FUN_1800086f0((longlong)&local_118,3,uVar16,&DAT_18006ba1c);
              }
              else {
                puVar13 = puVar10;
                if (0xf < (ulonglong)puVar10[3]) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                puVar10[2] = 3;
                memmove(puVar13,&DAT_18006ba1c,3);
                local_138[0] = 0;
                FUN_180001300((undefined1 *)((longlong)puVar13 + 3),local_138);
              }
              cVar7 = FUN_180010f50((longlong)puVar9,(longlong *)&local_118);
              auVar41 = auVar42._0_16_;
              auVar39 = auVar40._0_16_;
              auVar36 = auVar37._0_16_;
              auVar34 = auVar35._0_16_;
              auVar32 = auVar33._0_16_;
              auVar30 = auVar31._0_16_;
              if (cVar7 != '\0') {
                FUN_1800428b0(local_f8,*(longlong **)(param_1 + 0xe8),param_4);
                puVar9 = FUN_180042930((longlong *)local_f8,*(ulonglong *)(param_1 + 0x118));
                *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + 8;
                auVar31 = ZEXT1664(auVar30);
                auVar33 = ZEXT1664(auVar32);
                auVar35 = ZEXT1664(auVar34);
                auVar37 = ZEXT1664(auVar36);
                auVar40 = ZEXT1664(auVar39);
                auVar42 = ZEXT1664(auVar41);
                FUN_18002bb00(param_1,(longlong *)local_f8,puVar9 + 8);
              }
            }
            ppuVar17 = (undefined **)(ulonglong)param_3;
            FUN_18002a7b0(param_1,pcVar11,param_3,param_4,param_5);
            if ((*(longlong *)(param_1 + 0x168) == 0) && (*(int *)(param_1 + 0x18) == 0x9b)) {
              pcVar18 = s_CMT1II__180093710;
              pcVar11 = FUN_18002a060(pcVar11,0x200,s_CMT1II__180093710,8);
              ppuVar17 = (undefined **)pcVar18;
              if (pcVar11 != (char *)0x0) {
                *(undefined1 *)(param_1 + 300) = 1;
                ppuVar17 = (undefined **)(ulonglong)param_3;
                FUN_18002d600(param_1,(short *)(pcVar11 + 4),param_3,param_4,*param_5,param_5[1]);
              }
            }
          }
          else if (((*(longlong *)(param_1 + 0x168) == 0) && (*(int *)(param_2 + 4) == 0x70797466))
                  && (param_4 + 2 < param_5[1])) {
            ppuVar17 = (undefined **)(ulonglong)param_3;
            FUN_18002a7b0(param_1,param_2,param_3,param_4,param_5);
          }
          if (*(longlong *)(param_1 + 0x168) == 0) {
            local_118 = *(longlong **)(param_1 + 0xe8);
            local_108 = 0xffffffffffffffff;
            local_110 = param_4;
            if (local_118 == (longlong *)0x0) {
              local_100 = 0x200;
            }
            else {
              ppuVar17 = CRawFileCellTestStorageDevice::vftable;
              if ((undefined **)*local_118 == CRawFileCellTestStorageDevice::vftable) {
                local_100 = *(int *)((longlong)local_118 + 0xc);
                if (local_100 < 1) {
                  local_100 = 0x200;
                }
              }
              else {
                local_100 = (*(code *)((undefined **)*local_118)[5])();
              }
            }
            local_100 = local_100 << 7;
            puVar9 = FUN_180042930((longlong *)&local_118,*(ulonglong *)(param_1 + 0x118));
            if (puVar9 != (undefined *)0x0) {
              ppuVar17 = (undefined **)(puVar9 + 8);
              FUN_18002b0c0(param_1,local_128,(longlong)ppuVar17);
            }
          }
        }
      } while( true );
    }
    FUN_18002c5d0(param_1,param_4,0,(longlong *)0x0);
  }
  return '\x01';
}

