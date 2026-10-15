// Function: FUN_180030c90
// Address: 180030c90
// Size: 1431 bytes


void FUN_180030c90(longlong param_1,char *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  char *_Str;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 *******pppppppuVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 uVar12;
  size_t _Count;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  uint *puVar17;
  ulonglong uVar18;
  undefined1 auStack_248 [32];
  undefined1 local_228 [4];
  uint local_224;
  char *local_220;
  uint local_218;
  longlong *local_210;
  undefined8 local_208;
  longlong local_200 [4];
  longlong local_1e0 [2];
  longlong local_1d0;
  undefined8 ******local_1c0 [2];
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined8 ******local_1a0 [2];
  ulonglong local_190;
  ulonglong local_188;
  longlong local_180 [2];
  ulonglong local_170;
  char local_158 [272];
  ulonglong local_48;
  ulonglong uVar19;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  local_208 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_248;
  uVar18 = (ulonglong)param_3;
  local_224 = param_3;
  local_220 = param_2;
  if (((int)param_3 < 10) || (uVar15 = 0, param_2 == (char *)0xfffffffffffffffa))
  goto LAB_1800311fd;
  lVar8 = 4;
  bVar7 = 0;
  do {
    if (param_2[lVar8 + 5] < '\0') goto LAB_1800311fd;
    uVar15 = uVar15 | (uint)(byte)param_2[lVar8 + 5] << (bVar7 & 0x1f);
    bVar7 = bVar7 + 7;
    lVar8 = lVar8 + -1;
  } while (0 < lVar8);
  if (0xc7fffff < uVar15 - 1) goto LAB_1800311fd;
  FUN_180001690((undefined1 *)local_1a0);
  FUN_180001690((undefined1 *)local_180);
  FUN_180001690((undefined1 *)local_1c0);
  puVar17 = (uint *)(param_2 + 10);
  uVar13 = 0;
  uVar19 = 0xffffffffffffffff;
  if (uVar15 != 0) {
    do {
      uVar14 = (uint)uVar18;
      if (((uVar14 <= uVar13) ||
          (iVar11 = CONCAT31(CONCAT21(CONCAT11((char)puVar17[1],
                                               *(undefined1 *)((longlong)puVar17 + 5)),
                                      *(undefined1 *)((longlong)puVar17 + 6)),
                             *(undefined1 *)((longlong)puVar17 + 7)), 0xc7fffff < iVar11 - 1U)) ||
         (local_218 = iVar11 + uVar13, uVar14 <= local_218)) break;
      uVar1 = *puVar17;
      uVar10 = (ulonglong)uVar1;
      pcVar16 = (char *)((longlong)puVar17 + 10);
      if (uVar1 == 0x31455054) {
        pppppppuVar9 = local_1c0;
LAB_180031029:
        FUN_180031230(uVar10,pcVar16,iVar11,(longlong)pppppppuVar9);
LAB_180031034:
        uVar18 = (ulonglong)local_224;
        param_2 = local_220;
      }
      else {
        if (uVar1 == 0x32544954) {
          pppppppuVar9 = local_1a0;
          goto LAB_180031029;
        }
        if (uVar1 != 0x43495041) {
          if (uVar1 == 0x52455954) {
            FUN_180031230(uVar10,pcVar16,iVar11,(longlong)local_180);
            if (7 < local_170) {
              local_210 = local_1e0;
              plVar6 = (longlong *)FUN_180007060((longlong)local_1e0,local_180);
              FUN_1800174f0(param_1,plVar6);
            }
          }
          else {
            if (uVar1 != 0x544c5355) goto LAB_18003103e;
            _Str = strstr((char *)(puVar17 + 4),"[ar:");
            if (((_Str != (char *)0x0) && (pcVar3 = strstr(_Str,"]"), pcVar3 != (char *)0x0)) &&
               ((longlong)pcVar3 - (longlong)_Str < 0x104)) {
              memset(local_158,0,0x104);
              _Count = ((longlong)pcVar3 - (longlong)_Str) - 4;
              strncpy(local_158,_Str + 4,_Count);
              uVar12 = (undefined1)_Count;
              uVar18 = uVar19;
              do {
                uVar10 = uVar18 + 1;
                lVar8 = uVar18 + 1;
                uVar18 = uVar10;
              } while (local_158[lVar8] != '\0');
              puVar4 = (undefined8 *)FUN_1800016b0(local_1c0);
              if ((ulonglong)puVar4[3] < uVar10) {
                FUN_1800086f0((longlong)local_1c0,uVar10,uVar12,local_158);
              }
              else {
                puVar5 = puVar4;
                if (0xf < (ulonglong)puVar4[3]) {
                  puVar5 = (undefined8 *)*puVar4;
                }
                puVar4[2] = uVar10;
                memmove(puVar5,local_158,uVar10);
                uVar12 = (undefined1)uVar18;
                local_228[0] = 0;
                FUN_180001300((undefined1 *)((longlong)puVar5 + uVar10),local_228);
              }
              if (local_1b0 != 0) {
                local_210 = local_1e0;
                FUN_180001780((longlong)local_1e0);
                puVar4 = (undefined8 *)FUN_1800016b0(local_1e0);
                puVar4[2] = 0;
                puVar4[3] = 0xf;
                local_228[0] = 0;
                FUN_180001300((undefined1 *)puVar4,local_228);
                uVar18 = uVar19;
                do {
                  uVar10 = uVar18 + 1;
                  lVar8 = uVar18 + 1;
                  uVar18 = uVar10;
                } while (local_158[lVar8] != '\0');
                if ((ulonglong)puVar4[3] < uVar10) {
                  FUN_1800086f0((longlong)local_1e0,uVar10,uVar12,local_158);
                }
                else {
                  puVar5 = puVar4;
                  if (0xf < (ulonglong)puVar4[3]) {
                    puVar5 = (undefined8 *)*puVar4;
                  }
                  puVar4[2] = uVar10;
                  memmove(puVar5,local_158,uVar10);
                  local_228[0] = 0;
                  FUN_180001300((undefined1 *)((longlong)puVar5 + uVar10),local_228);
                }
                FUN_180017550(param_1,0,local_1e0);
              }
            }
          }
          goto LAB_180031034;
        }
        iVar2 = FUN_180031d00(uVar10,param_2,uVar14);
        uVar10 = (ulonglong)iVar2;
        if (iVar2 == 0) {
          uVar10 = (ulonglong)(uVar13 + 0x3f);
        }
        *(ulonglong *)(param_1 + 0xd8) = uVar10;
        *(longlong *)(param_1 + 0xe0) = (longlong)iVar11;
        *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + (longlong)iVar11 + uVar10;
      }
LAB_18003103e:
      puVar17 = (uint *)(pcVar16 + iVar11);
      uVar13 = local_218 + 10;
    } while (uVar13 < uVar15);
  }
  *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + (ulonglong)uVar15;
  if ((local_1b0 != 0) || (local_190 != 0)) {
    memset(local_158,0,0x104);
    pppppppuVar9 = local_1a0;
    if (0xf < local_188) {
      pppppppuVar9 = (undefined8 *******)local_1a0[0];
    }
    uVar12 = 0x94;
    snprintf(local_158,0x104,&DAT_18006b794,pppppppuVar9);
    do {
      uVar18 = uVar19 + 1;
      lVar8 = uVar19 + 1;
      uVar19 = uVar18;
    } while (local_158[lVar8] != '\0');
    puVar4 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
    if ((ulonglong)puVar4[3] < uVar18) {
      FUN_1800086f0(param_1 + 0x20,uVar18,uVar12,local_158);
    }
    else {
      puVar5 = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar5 = (undefined8 *)*puVar4;
      }
      puVar4[2] = uVar18;
      memmove(puVar5,local_158,uVar18);
      local_228[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar5 + uVar18),local_228);
    }
    FUN_180001780((longlong)local_1e0);
    puVar5 = (undefined8 *)FUN_1800016b0(local_1e0);
    puVar5[3] = 0xf;
    local_228[0] = 0;
    FUN_180001300((undefined1 *)puVar5,local_228);
    puVar4 = puVar5;
    if (0xf < (ulonglong)puVar5[3]) {
      puVar4 = (undefined8 *)*puVar5;
    }
    puVar5[2] = 0;
    local_228[0] = 0;
    FUN_180001300((undefined1 *)puVar4,local_228);
    if (local_1b0 == 0) {
      if (local_190 - 1 < 0x13) {
        pppppppuVar9 = local_1a0;
        if (0xf < local_188) {
          pppppppuVar9 = (undefined8 *******)local_1a0[0];
        }
        goto LAB_18003119b;
      }
    }
    else {
      pppppppuVar9 = local_1c0;
      local_190 = local_1b0;
      if (0xf < local_1a8) {
        pppppppuVar9 = (undefined8 *******)local_1c0[0];
      }
LAB_18003119b:
      FUN_1800071e0((longlong)local_1e0,pppppppuVar9,local_190);
    }
    if (local_1d0 != 0) {
      local_210 = local_200;
      plVar6 = (longlong *)FUN_180007060((longlong)local_200,local_1e0);
      FUN_180017550(param_1,0,plVar6);
    }
    FUN_180001630(local_1e0);
  }
  FUN_180001630((longlong *)local_1c0);
  FUN_180001630(local_180);
  FUN_180001630((longlong *)local_1a0);
LAB_1800311fd:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_248);
  return;
}

