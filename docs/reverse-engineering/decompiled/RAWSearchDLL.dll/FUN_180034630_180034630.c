// Function: FUN_180034630
// Address: 180034630
// Size: 3984 bytes


double FUN_180034630(double param_1,byte *param_2,longlong param_3,char param_4,ulonglong param_5,
                    ushort param_6,byte *param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  void *_Dst;
  undefined3 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  ulonglong *puVar20;
  byte bVar21;
  ushort uVar22;
  longlong in_RCX;
  ulonglong uVar23;
  longlong lVar24;
  undefined8 *****pppppuVar25;
  int iVar26;
  byte *pbVar27;
  byte *pbVar28;
  undefined8 *puVar29;
  undefined1 uVar30;
  uint uVar31;
  ushort uVar32;
  double *pdVar33;
  double extraout_XMM0_Qa;
  double dVar34;
  undefined1 auStackY_608 [32];
  undefined1 local_5c8;
  char local_5c7;
  char local_5c6;
  uint local_5c4;
  undefined4 local_5c0;
  longlong *local_5b8;
  byte *local_5b0;
  ulonglong local_5a8;
  int local_5a0;
  uint local_59c;
  undefined8 local_598;
  longlong local_590 [4];
  undefined8 ****local_570 [2];
  ulonglong local_560;
  ulonglong local_558;
  longlong local_550 [2];
  longlong local_540;
  longlong local_530 [2];
  longlong local_520;
  longlong local_510 [2];
  longlong local_500;
  char local_4f0 [24];
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_458 [128];
  ulonglong local_58;
  
  local_598 = 0xfffffffffffffffe;
  local_58 = DAT_18008f028 ^ (ulonglong)auStackY_608;
  local_5b0 = param_7;
  local_5a8 = param_5;
  local_5c0 = 0;
  iVar26 = *(int *)(in_RCX + 0x170);
  *(int *)(in_RCX + 0x170) = iVar26 + 1;
  if (iVar26 < 7) {
    do {
      local_5c0 = 0;
      uVar18 = 0;
      uVar22 = (ushort)param_2[1];
      uVar32 = (ushort)*param_2;
      if (param_4 == '\0') {
        uVar32 = (ushort)*param_2 << 8;
      }
      else {
        uVar22 = (ushort)param_2[1] << 8;
      }
      if ((uVar22 | uVar32) == 0) {
        lVar24 = 8;
        puVar16 = local_458;
        do {
          uVar7 = *(undefined8 *)(param_2 + 8);
          uVar8 = *(undefined8 *)(param_2 + 0x10);
          uVar9 = *(undefined8 *)(param_2 + 0x18);
          *puVar16 = *(undefined8 *)param_2;
          puVar16[1] = uVar7;
          puVar16[2] = uVar8;
          puVar16[3] = uVar9;
          uVar7 = *(undefined8 *)(param_2 + 0x28);
          uVar8 = *(undefined8 *)(param_2 + 0x30);
          uVar9 = *(undefined8 *)(param_2 + 0x38);
          puVar16[4] = *(undefined8 *)(param_2 + 0x20);
          puVar16[5] = uVar7;
          puVar16[6] = uVar8;
          puVar16[7] = uVar9;
          uVar7 = *(undefined8 *)(param_2 + 0x48);
          uVar8 = *(undefined8 *)(param_2 + 0x50);
          uVar9 = *(undefined8 *)(param_2 + 0x58);
          puVar16[8] = *(undefined8 *)(param_2 + 0x40);
          puVar16[9] = uVar7;
          puVar16[10] = uVar8;
          puVar16[0xb] = uVar9;
          uVar7 = *(undefined8 *)(param_2 + 0x68);
          puVar16[0xc] = *(undefined8 *)(param_2 + 0x60);
          puVar16[0xd] = uVar7;
          uVar7 = *(undefined8 *)(param_2 + 0x78);
          puVar16[0xe] = *(undefined8 *)(param_2 + 0x70);
          puVar16[0xf] = uVar7;
          param_2 = param_2 + 0x80;
          lVar24 = lVar24 + -1;
          puVar16 = puVar16 + 0x10;
        } while (lVar24 != 0);
        FUN_180001690((undefined1 *)local_570);
        uVar30 = (undefined1)uVar18;
        puVar16 = (undefined8 *)FUN_1800016b0(local_570);
        if ((ulonglong)puVar16[3] < 0x400) {
          FUN_1800086f0((longlong)local_570,0x400,uVar30,local_458);
        }
        else {
          _Dst = (void *)*puVar16;
          puVar16[2] = 0x400;
          memmove(_Dst,local_458,0x400);
          local_5c8 = 0;
          FUN_180001300((undefined1 *)((longlong)_Dst + 0x400),&local_5c8);
        }
        pppppuVar25 = local_570;
        if (0xf < local_558) {
          pppppuVar25 = (undefined8 *****)local_570[0];
        }
        cVar12 = -0x58;
        uVar18 = FUN_18000f820((longlong)pppppuVar25,local_560,0,"xmp:CreatorTool=",0x10);
        if (uVar18 != 0xffffffffffffffff) {
          uVar18 = uVar18 + 0x11;
          FUN_180001780((longlong)local_590);
          puVar19 = (undefined8 *)FUN_1800016b0(local_590);
          puVar19[2] = 0;
          puVar19[3] = 0xf;
          local_5c8 = 0;
          pdVar33 = (double *)&local_5c8;
          FUN_180001300((undefined1 *)puVar19,(undefined1 *)pdVar33);
          if (local_560 < uVar18) {
            FUN_1800072f0();
            dVar34 = 0.0;
            switch((int)uVar18) {
            case 1:
            case 6:
              return (double)*(byte *)pdVar33;
            case 3:
            case 8:
              if (cVar12 == '\0') {
                return (double)CONCAT11(*(byte *)pdVar33,*(byte *)((longlong)pdVar33 + 1));
              }
              return (double)*(ushort *)pdVar33;
            case 4:
            case 9:
              uVar14 = FUN_180042a60((undefined4 *)pdVar33,cVar12);
              return (double)uVar14;
            case 5:
            case 10:
              dVar34 = 0.0;
              iVar26 = FUN_180042a60((undefined4 *)((longlong)pdVar33 + 4),cVar12);
              if (iVar26 != 0) {
                iVar15 = FUN_180042a60((undefined4 *)pdVar33,cVar12);
                return (double)(iVar15 / iVar26);
              }
              break;
            case 0xb:
            case 0xc:
              dVar34 = *pdVar33;
            }
            return dVar34;
          }
          local_5b0 = (byte *)0xffffffffffffffff;
          local_5a8 = local_560 - uVar18;
          puVar20 = FUN_180001e40((ulonglong *)&local_5b0,&local_5a8);
          uVar23 = *puVar20;
          pppppuVar25 = local_570;
          if (0xf < local_558) {
            pppppuVar25 = (undefined8 *****)local_570[0];
          }
          if ((ulonglong)puVar19[3] < uVar23) {
            FUN_1800086f0((longlong)local_590,uVar23,(char)uVar18,
                          (void *)((longlong)pppppuVar25 + uVar18));
          }
          else {
            puVar29 = puVar19;
            if (0xf < (ulonglong)puVar19[3]) {
              puVar29 = (undefined8 *)*puVar19;
            }
            puVar19[2] = uVar23;
            memmove(puVar29,(void *)((longlong)pppppuVar25 + uVar18),uVar23);
            local_5c8 = 0;
            FUN_180001300((undefined1 *)((longlong)puVar29 + uVar23),&local_5c8);
          }
          local_5c0 = 1;
          FUN_180001630((longlong *)local_570);
          uVar7 = puVar19[1];
          uVar8 = puVar19[2];
          uVar9 = puVar19[3];
          *puVar16 = *puVar19;
          puVar16[1] = uVar7;
          puVar16[2] = uVar8;
          puVar16[3] = uVar9;
          puVar19[2] = 0;
          puVar19[3] = 0xf;
          local_5c8 = 0;
          FUN_180001300((undefined1 *)puVar19,&local_5c8);
          local_5c0 = 0;
          FUN_180001630(local_590);
          pppppuVar25 = local_570;
          if (0xf < local_558) {
            pppppuVar25 = (undefined8 *****)local_570[0];
          }
          pbVar28 = (byte *)FUN_18000f820((longlong)pppppuVar25,local_560,0,"\"",1);
          if (pbVar28 != (byte *)0xffffffffffffffff) {
            FUN_180001780((longlong)local_590);
            puVar19 = (undefined8 *)FUN_1800016b0(local_590);
            puVar19[2] = 0;
            puVar19[3] = 0xf;
            local_5c8 = 0;
            FUN_180001300((undefined1 *)puVar19,&local_5c8);
            local_5a8 = local_560;
            local_5b0 = pbVar28;
            puVar20 = FUN_180001e40((ulonglong *)&local_5b0,&local_5a8);
            uVar18 = *puVar20;
            pppppuVar25 = local_570;
            if (0xf < local_558) {
              pppppuVar25 = (undefined8 *****)local_570[0];
            }
            if ((ulonglong)puVar19[3] < uVar18) {
              FUN_1800086f0((longlong)local_590,uVar18,(char)pbVar28,pppppuVar25);
            }
            else {
              puVar29 = puVar19;
              if (0xf < (ulonglong)puVar19[3]) {
                puVar29 = (undefined8 *)*puVar19;
              }
              puVar19[2] = uVar18;
              memmove(puVar29,pppppuVar25,uVar18);
              local_5c8 = 0;
              FUN_180001300((undefined1 *)((longlong)puVar29 + uVar18),&local_5c8);
            }
            local_5c0 = 2;
            FUN_180001630((longlong *)local_570);
            uVar7 = puVar19[1];
            uVar8 = puVar19[2];
            uVar9 = puVar19[3];
            *puVar16 = *puVar19;
            puVar16[1] = uVar7;
            puVar16[2] = uVar8;
            puVar16[3] = uVar9;
            puVar19[2] = 0;
            puVar19[3] = 0xf;
            local_5c8 = 0;
            FUN_180001300((undefined1 *)puVar19,&local_5c8);
            local_5c0 = 0;
            FUN_180001630(local_590);
            if (local_560 != 0) {
              local_5b8 = local_590;
              plVar17 = (longlong *)FUN_180007060((longlong)local_590,local_570);
              FUN_180017550(param_3,1,plVar17);
            }
          }
        }
        param_1 = (double)FUN_180001630((longlong *)local_570);
        break;
      }
      local_5c4 = 0;
      pbVar28 = param_2 + 2;
      cVar12 = '\0';
      local_5c7 = '\0';
      bVar10 = false;
      local_5c6 = '\0';
      local_5a0 = 0;
      local_59c = (uint)(uVar22 | uVar32);
      if (local_59c != 0) {
        do {
          if ((cVar12 != '\0') || (local_5b0 <= pbVar28)) break;
          uVar31 = (uint)pbVar28[1];
          uVar14 = (uint)*pbVar28;
          if (param_4 == '\0') {
            uVar14 = (uint)*pbVar28 << 8;
          }
          else {
            uVar31 = (uint)pbVar28[1] << 8;
          }
          uVar31 = uVar31 | uVar14;
          if (param_4 == '\0') {
            bVar21 = pbVar28[2];
            bVar1 = pbVar28[3];
          }
          else {
            bVar21 = pbVar28[3];
            bVar1 = pbVar28[2];
          }
          uVar32 = CONCAT11(bVar21,bVar1);
          uVar14 = (uint)uVar32;
          if (0xc < uVar32) goto LAB_180035597;
          pdVar33 = (double *)(pbVar28 + 8);
          if (param_4 == '\0') {
            uVar6 = CONCAT21(CONCAT11(pbVar28[4],pbVar28[5]),pbVar28[6]);
            bVar21 = pbVar28[7];
          }
          else {
            uVar6 = *(undefined3 *)(pbVar28 + 5);
            bVar21 = pbVar28[4];
          }
          iVar26 = CONCAT31(uVar6,bVar21);
          if ((iVar26 < 1) || ((int)(uint)param_6 < iVar26)) goto LAB_180035597;
          uVar23 = (ulonglong)(uint)(*(int *)(&DAT_18006c060 + (ulonglong)uVar32 * 4) * iVar26);
          if (4 < *(int *)(&DAT_18006c060 + (ulonglong)uVar32 * 4) * iVar26) {
            uVar14 = (uint)uVar32;
            uVar13 = FUN_180042a60((undefined4 *)pdVar33,param_4);
            uVar23 = (*(longlong *)(*(longlong *)(in_RCX + 0x158) + 8) - *(longlong *)(in_RCX + 8))
                     * *(longlong *)(in_RCX + 0x168);
            if (uVar23 <= uVar13) break;
            pdVar33 = (double *)(local_5a8 + uVar13);
          }
          if (uVar31 < 0x132) {
            if (uVar31 == 0x131) {
              local_4b0 = 0;
              local_4a8 = 0;
              local_4a0 = 0;
              local_498 = 0;
              local_490 = 0;
              uVar30 = 0x27;
              strncpy((char *)&local_4b0,(char *)pdVar33,0x27);
              param_1 = extraout_XMM0_Qa;
              if (local_5c6 == '\0') {
                local_5b8 = local_590;
                FUN_180001780((longlong)local_590);
                puVar16 = (undefined8 *)FUN_1800016b0(local_590);
                puVar16[2] = 0;
                puVar16[3] = 0xf;
                local_5c8 = 0;
                FUN_180001300((undefined1 *)puVar16,&local_5c8);
                uVar18 = 0xffffffffffffffff;
                do {
                  uVar23 = uVar18 + 1;
                  lVar24 = uVar18 + 1;
                  uVar18 = uVar23;
                } while (*(char *)((longlong)&local_4b0 + lVar24) != '\0');
                if ((ulonglong)puVar16[3] < uVar23) {
                  FUN_1800086f0((longlong)local_590,uVar23,uVar30,&local_4b0);
                }
                else {
                  puVar19 = puVar16;
                  if (0xf < (ulonglong)puVar16[3]) {
                    puVar19 = (undefined8 *)*puVar16;
                  }
                  puVar16[2] = uVar23;
                  memmove(puVar19,&local_4b0,uVar23);
                  uVar30 = (undefined1)uVar18;
                  local_5c8 = 0;
                  FUN_180001300((undefined1 *)((longlong)puVar19 + uVar23),&local_5c8);
                  cVar12 = local_5c7;
                }
                param_1 = (double)FUN_1800173f0(param_3,local_590);
                uVar18 = (ulonglong)local_5c4;
              }
              if (!bVar10) {
                pbVar27 = (byte *)&local_4b0;
                bVar21 = (byte)local_4b0;
                uVar18 = local_4b0;
                while (bVar21 != 0) {
                  if ((byte)((char)uVar18 + 0x9fU) < 0x1a) {
                    *pbVar27 = (char)uVar18 - 0x20;
                  }
                  pbVar27 = pbVar27 + 1;
                  bVar21 = *pbVar27;
                  uVar18 = (ulonglong)bVar21;
                }
                FUN_180001780((longlong)local_510);
                puVar16 = (undefined8 *)FUN_1800016b0(local_510);
                puVar16[2] = 0;
                puVar16[3] = 0xf;
                local_5c8 = 0;
                FUN_180001300((undefined1 *)puVar16,&local_5c8);
                uVar18 = 0xffffffffffffffff;
                do {
                  uVar23 = uVar18 + 1;
                  lVar24 = uVar18 + 1;
                  uVar18 = uVar23;
                } while (*(char *)((longlong)&local_4b0 + lVar24) != '\0');
                if ((ulonglong)puVar16[3] < uVar23) {
                  FUN_1800086f0((longlong)local_510,uVar23,uVar30,&local_4b0);
                }
                else {
                  puVar19 = puVar16;
                  if (0xf < (ulonglong)puVar16[3]) {
                    puVar19 = (undefined8 *)*puVar16;
                  }
                  puVar16[2] = uVar23;
                  memmove(puVar19,&local_4b0,uVar23);
                  local_5c8 = 0;
                  FUN_180001300((undefined1 *)((longlong)puVar19 + uVar23),&local_5c8);
                }
                local_5b8 = local_590;
                plVar17 = (longlong *)FUN_180007060((longlong)local_590,local_510);
                cVar12 = FUN_18002a1e0(plVar17);
                if ((cVar12 == '\0') && (local_500 != 0)) {
                  local_5b8 = local_590;
                  plVar17 = (longlong *)FUN_180007060((longlong)local_590,local_510);
                  FUN_180017550(param_3,1,plVar17);
                }
                plVar17 = local_510;
LAB_180034bc3:
                param_1 = (double)FUN_180001630(plVar17);
                cVar12 = local_5c7;
LAB_180034bcd:
                uVar18 = (ulonglong)local_5c4;
              }
            }
            else if (uVar31 < 0x111) {
              if (uVar31 == 0x110) {
                local_4d8 = 0;
                local_4d0 = 0;
                local_4c8 = 0;
                local_4c0 = 0;
                local_4b8 = 0;
                uVar30 = 0x27;
                strncpy((char *)&local_4d8,(char *)pdVar33,0x27);
                local_5c6 = '\x01';
                local_5b8 = local_590;
                FUN_180001780((longlong)local_590);
                puVar16 = (undefined8 *)FUN_1800016b0(local_590);
                puVar16[2] = 0;
                puVar16[3] = 0xf;
                local_5c8 = 0;
                FUN_180001300((undefined1 *)puVar16,&local_5c8);
                uVar18 = 0xffffffffffffffff;
                do {
                  uVar23 = uVar18 + 1;
                  lVar24 = uVar18 + 1;
                  uVar18 = uVar23;
                } while (*(char *)((longlong)&local_4d8 + lVar24) != '\0');
                if ((ulonglong)puVar16[3] < uVar23) {
                  FUN_1800086f0((longlong)local_590,uVar23,uVar30,&local_4d8);
                }
                else {
                  puVar19 = puVar16;
                  if (0xf < (ulonglong)puVar16[3]) {
                    puVar19 = (undefined8 *)*puVar16;
                  }
                  puVar16[2] = uVar23;
                  memmove(puVar19,&local_4d8,uVar23);
                  uVar30 = (undefined1)uVar18;
                  local_5c8 = 0;
                  FUN_180001300((undefined1 *)((longlong)puVar19 + uVar23),&local_5c8);
                  cVar12 = local_5c7;
                }
                param_1 = (double)FUN_1800173f0(param_3,local_590);
                if (!bVar10) {
                  pbVar27 = (byte *)&local_4d8;
                  bVar21 = (byte)local_4d8;
                  uVar18 = local_4d8;
                  while (bVar21 != 0) {
                    if ((byte)((char)uVar18 + 0x9fU) < 0x1a) {
                      *pbVar27 = (char)uVar18 - 0x20;
                    }
                    pbVar27 = pbVar27 + 1;
                    bVar21 = *pbVar27;
                    uVar18 = (ulonglong)bVar21;
                  }
                  FUN_180001780((longlong)local_530);
                  puVar16 = (undefined8 *)FUN_1800016b0(local_530);
                  puVar16[2] = 0;
                  puVar16[3] = 0xf;
                  local_5c8 = 0;
                  FUN_180001300((undefined1 *)puVar16,&local_5c8);
                  uVar18 = 0xffffffffffffffff;
                  do {
                    uVar23 = uVar18 + 1;
                    lVar24 = uVar18 + 1;
                    uVar18 = uVar23;
                  } while (*(char *)((longlong)&local_4d8 + lVar24) != '\0');
                  if ((ulonglong)puVar16[3] < uVar23) {
                    FUN_1800086f0((longlong)local_530,uVar23,uVar30,&local_4d8);
                  }
                  else {
                    puVar19 = puVar16;
                    if (0xf < (ulonglong)puVar16[3]) {
                      puVar19 = (undefined8 *)*puVar16;
                    }
                    puVar16[2] = uVar23;
                    memmove(puVar19,&local_4d8,uVar23);
                    local_5c8 = 0;
                    FUN_180001300((undefined1 *)((longlong)puVar19 + uVar23),&local_5c8);
                  }
                  local_5b8 = local_590;
                  plVar17 = (longlong *)FUN_180007060((longlong)local_590,local_530);
                  cVar12 = FUN_18002a1e0(plVar17);
                  if ((cVar12 == '\0') && (local_520 != 0)) {
                    local_5b8 = local_590;
                    plVar17 = (longlong *)FUN_180007060((longlong)local_590,local_530);
                    FUN_180017550(param_3,1,plVar17);
                  }
                  bVar10 = true;
                  plVar17 = local_530;
                  goto LAB_180034bc3;
                }
                goto LAB_180034bcd;
              }
              if (uVar31 == 1) goto LAB_180035117;
              if (uVar31 == 0x101) goto LAB_180035075;
              if (uVar31 == 0x10f) {
                local_488 = 0;
                local_480 = 0;
                local_478 = 0;
                local_470 = 0;
                local_468 = 0;
                uVar30 = 0x27;
                strncpy((char *)&local_488,(char *)pdVar33,0x27);
                pbVar27 = (byte *)&local_488;
                bVar21 = (byte)local_488;
                uVar18 = local_488;
                while (bVar21 != 0) {
                  if ((byte)((char)uVar18 + 0x9fU) < 0x1a) {
                    *pbVar27 = (char)uVar18 - 0x20;
                  }
                  pbVar27 = pbVar27 + 1;
                  bVar21 = *pbVar27;
                  uVar18 = (ulonglong)bVar21;
                }
                FUN_180001780((longlong)local_550);
                puVar16 = (undefined8 *)FUN_1800016b0(local_550);
                puVar16[2] = 0;
                puVar16[3] = 0xf;
                local_5c8 = 0;
                FUN_180001300((undefined1 *)puVar16,&local_5c8);
                uVar18 = 0xffffffffffffffff;
                do {
                  uVar23 = uVar18 + 1;
                  lVar24 = uVar18 + 1;
                  uVar18 = uVar23;
                } while (*(char *)((longlong)&local_488 + lVar24) != '\0');
                if ((ulonglong)puVar16[3] < uVar23) {
                  FUN_1800086f0((longlong)local_550,uVar23,uVar30,&local_488);
                }
                else {
                  puVar19 = puVar16;
                  if (0xf < (ulonglong)puVar16[3]) {
                    puVar19 = (undefined8 *)*puVar16;
                  }
                  puVar16[2] = uVar23;
                  memmove(puVar19,&local_488,uVar23);
                  local_5c8 = 0;
                  FUN_180001300((undefined1 *)((longlong)puVar19 + uVar23),&local_5c8);
                  cVar12 = local_5c7;
                }
                local_5b8 = local_590;
                plVar17 = (longlong *)FUN_180007060((longlong)local_590,local_550);
                cVar11 = FUN_18002a1e0(plVar17);
                if ((cVar11 == '\0') && (local_540 != 0)) {
                  local_5b8 = local_590;
                  plVar17 = (longlong *)FUN_180007060((longlong)local_590,local_550);
                  FUN_180017550(param_3,1,plVar17);
                }
                bVar10 = true;
                param_1 = (double)FUN_180001630(local_550);
                goto LAB_180034bcd;
              }
            }
          }
          else if (uVar31 < 0x9004) {
            if (uVar31 == 0x9003) {
              local_4f0[0] = '\0';
              local_4f0[1] = '\0';
              local_4f0[2] = '\0';
              local_4f0[3] = '\0';
              local_4f0[4] = '\0';
              local_4f0[5] = '\0';
              local_4f0[6] = '\0';
              local_4f0[7] = '\0';
              local_4f0[8] = '\0';
              local_4f0[9] = '\0';
              local_4f0[10] = '\0';
              local_4f0[0xb] = '\0';
              local_4f0[0xc] = '\0';
              local_4f0[0xd] = '\0';
              local_4f0[0xe] = '\0';
              local_4f0[0xf] = '\0';
              local_4f0[0x10] = '\0';
              local_4f0[0x11] = '\0';
              local_4f0[0x12] = '\0';
              local_4f0[0x13] = '\0';
              uVar30 = 0x13;
              strncpy(local_4f0,(char *)pdVar33,0x13);
              local_5b8 = local_590;
              FUN_180001780((longlong)local_590);
              puVar16 = (undefined8 *)FUN_1800016b0(local_590);
              puVar16[2] = 0;
              puVar16[3] = 0xf;
              local_5c8 = 0;
              FUN_180001300((undefined1 *)puVar16,&local_5c8);
              uVar18 = 0xffffffffffffffff;
              do {
                uVar23 = uVar18 + 1;
                lVar24 = uVar18 + 1;
                uVar18 = uVar23;
              } while (local_4f0[lVar24] != '\0');
              if ((ulonglong)puVar16[3] < uVar23) {
                FUN_1800086f0((longlong)local_590,uVar23,uVar30,local_4f0);
              }
              else {
                puVar19 = puVar16;
                if (0xf < (ulonglong)puVar16[3]) {
                  puVar19 = (undefined8 *)*puVar16;
                }
                puVar16[2] = uVar23;
                memmove(puVar19,local_4f0,uVar23);
                local_5c8 = 0;
                FUN_180001300((undefined1 *)((longlong)puVar19 + uVar23),&local_5c8);
                cVar12 = local_5c7;
              }
              param_1 = (double)FUN_1800174f0(param_3,local_590);
              goto LAB_180034bcd;
            }
            if (uVar31 == 0x201) {
              dVar34 = FUN_1800355c0(uVar23,pdVar33,uVar14 & 0xffff,param_4);
              param_1 = (double)*(longlong *)(param_3 + 0xd8) + dVar34;
              *(longlong *)(param_3 + 0xd8) = (longlong)param_1;
            }
            else if (uVar31 == 0x202) {
              dVar34 = FUN_1800355c0(uVar23,pdVar33,uVar14 & 0xffff,param_4);
              param_1 = (double)*(longlong *)(param_3 + 0xe0) + dVar34;
              *(longlong *)(param_3 + 0xe0) = (longlong)param_1;
            }
            else if (uVar31 == 0x8769) goto LAB_180034fe7;
          }
          else if (uVar31 == 0xa002) {
LAB_180035117:
            param_1 = FUN_1800355c0(uVar23,pdVar33,uVar14 & 0xffff,param_4);
            local_5c4 = (uint)param_1;
            uVar18 = (ulonglong)local_5c4;
            if (0 < (int)local_5c4) {
              *(short *)(in_RCX + 0x60) = (short)local_5c4;
            }
          }
          else if (uVar31 == 0xa003) {
LAB_180035075:
            param_1 = FUN_1800355c0(uVar23,pdVar33,uVar14 & 0xffff,param_4);
            uVar31 = (uint)param_1;
            uVar14 = (uint)*(ushort *)(in_RCX + 0x62);
            if ((int)uVar14 < (int)uVar31) {
              *(short *)(in_RCX + 0x62) = (short)uVar31;
              uVar14 = uVar31;
            }
            if (((*(longlong *)(param_3 + 0xe0) == 0) && (399 < (int)uVar18)) && (399 < (int)uVar14)
               ) {
              lVar24 = (longlong)(int)(uVar14 * (int)uVar18);
              *(longlong *)(in_RCX + 0x118) = lVar24;
              *(longlong *)(in_RCX + 0x128) = lVar24;
              if (*(longlong *)(in_RCX + 0xd8) == 0x400) {
                *(longlong *)(in_RCX + 0xd8) = lVar24 / 6;
                *(undefined4 *)(in_RCX + 0x154) = 0;
              }
              cVar12 = '\x01';
              local_5c7 = '\x01';
            }
          }
          else if (uVar31 == 0xa005) {
LAB_180034fe7:
            param_1 = FUN_1800355c0(uVar23,pdVar33,uVar14 & 0xffff,param_4);
            iVar26 = (int)param_1;
            if (0 < iVar26) {
              *(longlong *)(in_RCX + 0xd8) =
                   *(longlong *)(in_RCX + 0xd8) + (longlong)(iVar26 + 0xa000);
              if ((*(longlong *)(in_RCX + 0x158) == 0) ||
                 ((longlong)iVar26 <
                  (*(longlong *)(*(longlong *)(in_RCX + 0x158) + 8) - *(longlong *)(in_RCX + 0x160))
                  * *(longlong *)(in_RCX + 0x168))) {
                param_1 = FUN_180034630(param_1,(byte *)((longlong)iVar26 + local_5a8),param_3,
                                        param_4,local_5a8,param_6,local_5b0);
              }
            }
          }
          local_5a0 = local_5a0 + 1;
          pbVar28 = pbVar28 + 0xc;
        } while (local_5a0 < (int)local_59c);
      }
      param_2 = pbVar28 + 4;
      if (param_4 == '\0') {
        bVar21 = pbVar28[1];
        bVar2 = *pbVar28;
        iVar26 = CONCAT31(CONCAT21(CONCAT11(bVar2,bVar21),pbVar28[2]),pbVar28[3]);
        bVar1 = *param_2;
        bVar3 = pbVar28[5];
      }
      else {
        bVar21 = pbVar28[1];
        bVar2 = *pbVar28;
        iVar26 = CONCAT31(CONCAT21(CONCAT11(pbVar28[3],pbVar28[2]),bVar21),bVar2);
        bVar1 = pbVar28[5];
        bVar3 = *param_2;
      }
      if (param_4 == '\0') {
        bVar4 = pbVar28[6];
        bVar5 = pbVar28[7];
      }
      else {
        bVar4 = pbVar28[7];
        bVar5 = pbVar28[6];
      }
      if (((iVar26 != 0) || (CONCAT11(bVar1,bVar3) == 0)) || (CONCAT11(bVar4,bVar5) != 0x10f)) {
        bVar1 = bVar21;
        if (param_4 != '\0') {
          bVar1 = bVar2;
          bVar2 = bVar21;
        }
        if (((cVar12 != '\0') || (CONCAT11(bVar2,bVar1) == 0)) ||
           (param_2 = (byte *)(CONCAT11(bVar2,bVar1) + local_5a8), local_5b0 <= param_2)) break;
      }
      local_5c0 = 0;
      *(int *)(in_RCX + 0x170) = *(int *)(in_RCX + 0x170) + 1;
    } while (*(int *)(in_RCX + 0x170) < 8);
  }
LAB_180035597:
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_608);
  return param_1;
}

