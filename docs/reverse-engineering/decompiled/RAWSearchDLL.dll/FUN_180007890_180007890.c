// Function: FUN_180007890
// Address: 180007890
// Size: 2388 bytes


void FUN_180007890(char *param_1,byte *param_2,byte *param_3,uint *param_4)

{
  longlong *plVar1;
  basic_istream<char,struct_std::char_traits<char>_> bVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  basic_istream<char,struct_std::char_traits<char>_> *pbVar15;
  char *pcVar16;
  void *pvVar17;
  ulonglong *puVar18;
  undefined8 *****pppppuVar19;
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar20;
  undefined8 *****pppppuVar21;
  char *pcVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined *_Size;
  size_t _MaxCount;
  uint *puVar25;
  undefined1 auStackY_2f8 [32];
  undefined8 in_stack_fffffffffffffd28;
  undefined1 local_2c8 [4];
  undefined4 local_2c4;
  ulonglong local_2c0;
  ulonglong local_2b8;
  basic_ios<char,struct_std::char_traits<char>_> *local_2b0;
  undefined8 local_2a8;
  int iStack_29c;
  longlong local_298 [2];
  basic_streambuf<char,struct_std::char_traits<char>_> local_288 [8];
  basic_istream<char,struct_std::char_traits<char>_> local_280 [120];
  longlong local_208;
  basic_ios<char,struct_std::char_traits<char>_> local_1e8 [96];
  undefined8 ****local_188 [2];
  size_t local_178;
  ulonglong local_170;
  byte local_168 [32];
  undefined8 ****local_148 [2];
  size_t local_138;
  ulonglong local_130;
  undefined8 ****local_128 [2];
  size_t local_118;
  ulonglong local_110;
  undefined8 ****local_108 [2];
  size_t local_f8;
  ulonglong local_f0;
  undefined8 ****local_e8 [2];
  size_t local_d8;
  ulonglong local_d0;
  undefined8 ***local_c8 [4];
  byte local_a8 [32];
  byte local_88 [32];
  longlong local_68 [4];
  ulonglong local_48;
  
  local_2a8 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_2f8;
  local_2c4 = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(char **)param_1;
  }
  puVar25 = param_4;
  local_2b0 = (basic_ios<char,struct_std::char_traits<char>_> *)param_3;
  FUN_1800098d0((basic_istream<char,struct_std::char_traits<char>_> *)local_298,param_1);
  *(undefined ***)((longlong)local_298 + (longlong)*(int *)(local_298[0] + 4)) =
       std::basic_ifstream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)((longlong)&iStack_29c + (longlong)*(int *)(local_298[0] + 4)) =
       *(int *)(local_298[0] + 4) + -0xb0;
  if (local_208 != 0) {
    lVar11 = FUN_180002810((longlong)local_c8,param_2);
    puVar12 = (undefined8 *)FUN_1800016b0(lVar11);
    uVar23 = puVar12[2];
    if (puVar12[3] == uVar23) {
      lVar11 = FUN_18000a990(lVar11,1,param_3,(ulonglong)puVar25,in_stack_fffffffffffffd28,1);
    }
    else {
      puVar12[2] = uVar23 + 1;
      if (0xf < (ulonglong)puVar12[3]) {
        puVar12 = (undefined8 *)*puVar12;
      }
      if ((&DAT_180066c44 < puVar12) || ((undefined *)((longlong)puVar12 + uVar23) < &DAT_180066c44)
         ) {
        _Size = (undefined *)0x1;
      }
      else if (&DAT_180066c44 < puVar12) {
        _Size = (undefined *)((longlong)puVar12 + -0x180066c44);
      }
      else {
        _Size = (undefined *)0x0;
      }
      memmove((undefined *)((longlong)puVar12 + 1),puVar12,uVar23 + 1);
      memcpy(puVar12,&DAT_180066c44,(size_t)_Size);
      memcpy((undefined *)((longlong)puVar12 + (longlong)_Size),&DAT_180066c45 + (longlong)_Size,
             1 - (longlong)_Size);
    }
    FUN_180001780((longlong)local_168);
    puVar12 = (undefined8 *)FUN_1800016b0(lVar11);
    puVar13 = (undefined8 *)FUN_1800016b0(local_168);
    uVar5 = puVar12[1];
    uVar6 = puVar12[2];
    uVar7 = puVar12[3];
    *puVar13 = *puVar12;
    puVar13[1] = uVar5;
    puVar13[2] = uVar6;
    puVar13[3] = uVar7;
    lVar11 = 0;
    puVar12[2] = 0;
    puVar12[3] = 0xf;
    local_2c8[0] = 0;
    FUN_180001300((undefined1 *)puVar12,local_2c8);
    local_2c4 = 1;
    FUN_180009c50((longlong)local_e8,(longlong)local_168,&DAT_180066c40);
    local_2c4 = 0;
    FUN_180001630((longlong *)local_168);
    FUN_180001630((longlong *)local_c8);
    puVar14 = (undefined8 *)FUN_1800016b0(local_e8);
    puVar13 = puVar14;
    puVar12 = puVar14;
    if (0xf < (ulonglong)puVar14[3]) {
      puVar12 = (undefined8 *)*puVar14;
      puVar13 = (undefined8 *)*puVar14;
    }
    plVar1 = puVar14 + 2;
    if (0xf < (ulonglong)puVar14[3]) {
      puVar14 = (undefined8 *)*puVar14;
    }
    lVar24 = (*plVar1 + (longlong)puVar13) - (longlong)puVar14;
    if ((undefined8 *)(*plVar1 + (longlong)puVar13) < puVar14) {
      lVar24 = lVar11;
    }
    if (lVar24 != 0) {
      do {
        iVar10 = tolower((uint)*(byte *)(lVar11 + (longlong)puVar14));
        *(char *)((longlong)puVar12 + lVar11) = (char)iVar10;
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar24);
    }
    FUN_180001690(local_88);
    bVar8 = false;
    bVar9 = std::basic_ios<char,struct_std::char_traits<char>_>::widen
                      ((basic_ios<char,struct_std::char_traits<char>_> *)
                       ((longlong)local_298 + (longlong)*(int *)(local_298[0] + 4)),'\n');
    pbVar15 = FUN_18000a720((basic_istream<char,struct_std::char_traits<char>_> *)local_298,
                            (longlong)local_88,bVar9);
    bVar2 = pbVar15[(longlong)*(int *)(*(longlong *)pbVar15 + 4) + 0x10];
    while (((byte)bVar2 & 6) == 0) {
      lVar11 = 0;
      FUN_180002810((longlong)local_188,local_88);
      if (local_178 != 0) {
        _MaxCount = local_178;
        pcVar16 = (char *)FUN_1800016b0(local_188);
        uVar23 = *(ulonglong *)(pcVar16 + 0x18);
        pcVar22 = pcVar16;
        if (0xf < uVar23) {
          pcVar22 = *(char **)pcVar16;
        }
        if (*pcVar22 != ';') {
          pcVar22 = pcVar16;
          if (0xf < uVar23) {
            pcVar22 = *(char **)pcVar16;
          }
          if (*pcVar22 != '#') {
            pcVar22 = pcVar16;
            if (0xf < uVar23) {
              pcVar22 = *(char **)pcVar16;
            }
            if (*pcVar22 == '[') {
              pcVar22 = pcVar16;
              if (0xf < uVar23) {
                pcVar22 = *(char **)pcVar16;
              }
              if (pcVar22[*(longlong *)(pcVar16 + 0x10) + -1] != ']') goto LAB_180007c93;
              FUN_180007060((longlong)local_108,local_188);
              puVar14 = (undefined8 *)FUN_1800016b0(local_108);
              puVar13 = puVar14;
              puVar12 = puVar14;
              if (0xf < (ulonglong)puVar14[3]) {
                puVar12 = (undefined8 *)*puVar14;
                puVar13 = (undefined8 *)*puVar14;
              }
              plVar1 = puVar14 + 2;
              if (0xf < (ulonglong)puVar14[3]) {
                puVar14 = (undefined8 *)*puVar14;
              }
              lVar24 = (*plVar1 + (longlong)puVar13) - (longlong)puVar14;
              if ((undefined8 *)(*plVar1 + (longlong)puVar13) < puVar14) {
                lVar24 = lVar11;
              }
              if (lVar24 != 0) {
                do {
                  iVar10 = tolower((uint)*(byte *)((longlong)puVar14 + lVar11));
                  *(char *)((longlong)puVar12 + lVar11) = (char)iVar10;
                  lVar11 = lVar11 + 1;
                } while (lVar11 != lVar24);
              }
              pppppuVar19 = local_e8;
              if (0xf < local_d0) {
                pppppuVar19 = (undefined8 *****)local_e8[0];
              }
              pppppuVar21 = local_108;
              if (0xf < local_f0) {
                pppppuVar21 = (undefined8 *****)local_108[0];
              }
              if ((local_f8 == local_d8) &&
                 (iVar10 = memcmp(pppppuVar21,pppppuVar19,local_f8), iVar10 == 0)) {
                bVar8 = true;
              }
              else {
                bVar8 = false;
              }
              pppppuVar19 = local_108;
LAB_18000803f:
              FUN_180001630((longlong *)pppppuVar19);
            }
            else {
LAB_180007c93:
              if (bVar8) {
                pppppuVar19 = local_188;
                if (0xf < local_170) {
                  pppppuVar19 = (undefined8 *****)local_188[0];
                }
                if (((_MaxCount != 0) &&
                    (pvVar17 = memchr(pppppuVar19,0x3d,_MaxCount), pvVar17 != (void *)0x0)) &&
                   (uVar23 = (longlong)pvVar17 - (longlong)pppppuVar19, uVar23 != 0xffffffffffffffff
                   )) {
                  FUN_180001780((longlong)local_a8);
                  puVar12 = (undefined8 *)FUN_1800016b0(local_a8);
                  puVar12[2] = 0;
                  puVar12[3] = 0xf;
                  local_2c8[0] = 0;
                  FUN_180001300((undefined1 *)puVar12,local_2c8);
                  local_2c0 = local_178;
                  local_2b8 = uVar23;
                  puVar18 = FUN_180001e40(&local_2b8,&local_2c0);
                  uVar3 = *puVar18;
                  pppppuVar19 = local_188;
                  if (0xf < local_170) {
                    pppppuVar19 = (undefined8 *****)local_188[0];
                  }
                  if ((ulonglong)puVar12[3] < uVar3) {
                    FUN_1800086f0((longlong)local_a8,uVar3,(char)puVar12,pppppuVar19);
                  }
                  else {
                    puVar13 = puVar12;
                    if (0xf < (ulonglong)puVar12[3]) {
                      puVar13 = (undefined8 *)*puVar12;
                    }
                    puVar12[2] = uVar3;
                    memmove(puVar13,pppppuVar19,uVar3);
                    local_2c8[0] = 0;
                    FUN_180001300((undefined1 *)((longlong)puVar13 + uVar3),local_2c8);
                  }
                  local_2c4 = 0x40;
                  FUN_180002810((longlong)local_c8,local_a8);
                  local_2c4 = 0;
                  FUN_180001630((longlong *)local_a8);
                  uVar23 = uVar23 + 1;
                  FUN_180001780((longlong)local_168);
                  puVar12 = (undefined8 *)FUN_1800016b0(local_168);
                  puVar12[2] = 0;
                  puVar12[3] = 0xf;
                  local_2c8[0] = 0;
                  FUN_180001300((undefined1 *)puVar12,local_2c8);
                  if (local_178 < uVar23) {
                    FUN_1800072f0();
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  local_2c0 = 0xffffffffffffffff;
                  local_2b8 = local_178 - uVar23;
                  puVar18 = FUN_180001e40(&local_2c0,&local_2b8);
                  uVar3 = *puVar18;
                  pppppuVar19 = local_188;
                  if (0xf < local_170) {
                    pppppuVar19 = (undefined8 *****)local_188[0];
                  }
                  if ((ulonglong)puVar12[3] < uVar3) {
                    FUN_1800086f0((longlong)local_168,uVar3,(char)puVar12,
                                  (void *)(uVar23 + (longlong)pppppuVar19));
                  }
                  else {
                    puVar13 = puVar12;
                    if (0xf < (ulonglong)puVar12[3]) {
                      puVar13 = (undefined8 *)*puVar12;
                    }
                    puVar12[2] = uVar3;
                    memmove(puVar13,(void *)(uVar23 + (longlong)pppppuVar19),uVar3);
                    local_2c8[0] = 0;
                    FUN_180001300((undefined1 *)((longlong)puVar13 + uVar3),local_2c8);
                  }
                  local_2c4 = 0x80;
                  FUN_180002810((longlong)local_68,local_168);
                  local_2c4 = 0;
                  FUN_180001630((longlong *)local_168);
                  FUN_180002810((longlong)local_128,(byte *)local_2b0);
                  FUN_180007060((longlong)local_148,local_c8);
                  puVar14 = (undefined8 *)FUN_1800016b0(local_148);
                  puVar13 = puVar14;
                  puVar12 = puVar14;
                  if (0xf < (ulonglong)puVar14[3]) {
                    puVar12 = (undefined8 *)*puVar14;
                    puVar13 = (undefined8 *)*puVar14;
                  }
                  plVar1 = puVar14 + 2;
                  if (0xf < (ulonglong)puVar14[3]) {
                    puVar14 = (undefined8 *)*puVar14;
                  }
                  lVar11 = (*plVar1 + (longlong)puVar13) - (longlong)puVar14;
                  if ((undefined8 *)(*plVar1 + (longlong)puVar13) < puVar14) {
                    lVar11 = 0;
                  }
                  if (lVar11 != 0) {
                    lVar24 = 0;
                    do {
                      iVar10 = tolower((uint)*(byte *)((longlong)puVar14 + lVar24));
                      *(char *)((longlong)puVar12 + lVar24) = (char)iVar10;
                      lVar24 = lVar24 + 1;
                    } while (lVar24 != lVar11);
                  }
                  lVar11 = 0;
                  puVar14 = (undefined8 *)FUN_1800016b0(local_128);
                  puVar13 = puVar14;
                  puVar12 = puVar14;
                  if (0xf < (ulonglong)puVar14[3]) {
                    puVar12 = (undefined8 *)*puVar14;
                    puVar13 = (undefined8 *)*puVar14;
                  }
                  plVar1 = puVar14 + 2;
                  if (0xf < (ulonglong)puVar14[3]) {
                    puVar14 = (undefined8 *)*puVar14;
                  }
                  lVar24 = (*plVar1 + (longlong)puVar13) - (longlong)puVar14;
                  if ((undefined8 *)(*plVar1 + (longlong)puVar13) < puVar14) {
                    lVar24 = lVar11;
                  }
                  if (lVar24 != 0) {
                    do {
                      iVar10 = tolower((uint)*(byte *)(lVar11 + (longlong)puVar14));
                      *(char *)((longlong)puVar12 + lVar11) = (char)iVar10;
                      lVar11 = lVar11 + 1;
                    } while (lVar11 != lVar24);
                  }
                  pppppuVar19 = local_128;
                  if (0xf < local_110) {
                    pppppuVar19 = (undefined8 *****)local_128[0];
                  }
                  pppppuVar21 = local_148;
                  if (0xf < local_130) {
                    pppppuVar21 = (undefined8 *****)local_148[0];
                  }
                  if ((local_138 != local_118) ||
                     (iVar10 = memcmp(pppppuVar21,pppppuVar19,local_138), iVar10 != 0)) {
                    FUN_180001630((longlong *)local_148);
                    FUN_180001630((longlong *)local_128);
                    FUN_180001630(local_68);
                    pppppuVar19 = (undefined8 *****)local_c8;
                    goto LAB_18000803f;
                  }
                  pbVar20 = FUN_180009bd0(local_288);
                  if (pbVar20 == (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0) {
                    std::basic_ios<char,struct_std::char_traits<char>_>::setstate
                              ((basic_ios<char,struct_std::char_traits<char>_> *)
                               ((longlong)local_298 + (longlong)*(int *)(local_298[0] + 4)),2,false)
                    ;
                  }
                  FUN_180009d00(local_68,param_4);
                  FUN_180001630((longlong *)local_148);
                  FUN_180001630((longlong *)local_128);
                  FUN_180001630(local_68);
                  FUN_180001630((longlong *)local_c8);
                  FUN_180001630((longlong *)local_188);
                  goto LAB_180008146;
                }
              }
            }
          }
        }
      }
      FUN_180001630((longlong *)local_188);
      bVar9 = std::basic_ios<char,struct_std::char_traits<char>_>::widen
                        ((basic_ios<char,struct_std::char_traits<char>_> *)
                         ((longlong)local_298 + (longlong)*(int *)(local_298[0] + 4)),'\n');
      pbVar15 = FUN_18000a720((basic_istream<char,struct_std::char_traits<char>_> *)local_298,
                              (longlong)local_88,bVar9);
      bVar2 = pbVar15[(longlong)*(int *)(*(longlong *)pbVar15 + 4) + 0x10];
    }
    pbVar20 = FUN_180009bd0(local_288);
    if (pbVar20 == (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0) {
      std::basic_ios<char,struct_std::char_traits<char>_>::setstate
                ((basic_ios<char,struct_std::char_traits<char>_> *)
                 ((longlong)local_298 + (longlong)*(int *)(local_298[0] + 4)),2,false);
    }
LAB_180008146:
    FUN_180001630((longlong *)local_88);
    FUN_180001630((longlong *)local_e8);
  }
  local_2b0 = local_1e8;
  *(undefined ***)((longlong)local_298 + (longlong)*(int *)(local_298[0] + 4)) =
       std::basic_ifstream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)((longlong)&iStack_29c + (longlong)*(int *)(local_298[0] + 4)) =
       *(int *)(local_298[0] + 4) + -0xb0;
  FUN_1800097d0(local_288);
  std::basic_istream<char,struct_std::char_traits<char>_>::
  ~basic_istream<char,struct_std::char_traits<char>_>(local_280);
  std::basic_ios<char,struct_std::char_traits<char>_>::
  ~basic_ios<char,struct_std::char_traits<char>_>(local_1e8);
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_2f8);
  return;
}

