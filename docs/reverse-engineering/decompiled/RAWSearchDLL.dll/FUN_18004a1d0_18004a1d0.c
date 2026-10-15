// Function: FUN_18004a1d0
// Address: 18004a1d0
// Size: 2954 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18004a1d0(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
             uint param_5,byte *param_6,ulonglong *param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  longlong *plVar4;
  code *pcVar5;
  int3 iVar6;
  undefined3 uVar7;
  longlong *plVar8;
  undefined2 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  void *pvVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  double *_Source;
  ulonglong uVar18;
  undefined1 *puVar19;
  uint uVar20;
  undefined1 *puVar21;
  int iVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  size_t _Size;
  double dVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 *local_res18 [2];
  longlong local_68;
  ulonglong local_60;
  
  uVar17 = 0;
  local_60 = 0;
  uVar16 = 0;
  local_68 = 0;
  local_res18[0] = param_3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18011853c) {
    puVar14 = &DAT_18011853c;
    _Init_thread_header(&DAT_18011853c);
    if (DAT_18011853c == -1) {
      DAT_180118540 = (longlong *)0x0;
      DAT_180118548 = 0;
      DAT_180118540 = (longlong *)FUN_1800077d0(puVar14,0,0);
      atexit(FUN_180065040);
      _Init_thread_footer(&DAT_18011853c);
    }
  }
  plVar8 = DAT_180118540;
  for (plVar13 = (longlong *)*DAT_180118540; plVar13 != DAT_180118540;
      plVar13 = (longlong *)*plVar13) {
    if ((undefined1 *)plVar13[2] == local_res18[0]) goto LAB_18004a345;
  }
  plVar4 = (longlong *)DAT_180118540[1];
  lVar10 = FUN_180009f00(plVar13,(longlong)DAT_180118540,(longlong)plVar4,local_res18);
  if (DAT_180118548 == 0xaaaaaaaaaaaaaa9) {
    std::_Xlength_error("list<T> too long");
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return uVar11;
  }
  DAT_180118548 = DAT_180118548 + 1;
  plVar8[1] = lVar10;
  *plVar4 = lVar10;
  if (DAT_180118004 == 0) {
    uVar1 = local_res18[0][1];
    uVar2 = *local_res18[0];
  }
  else {
    uVar1 = *local_res18[0];
    uVar2 = local_res18[0][1];
  }
  uVar15 = (uint)CONCAT11(uVar1,uVar2);
  uVar18 = (ulonglong)(uVar15 * 0xc);
  puVar21 = param_4 + param_5;
  uVar11 = s_Illegally_sized_directory_18006dce0._16_8_;
  uVar9 = s_Illegally_sized_directory_18006dce0._24_2_;
  uVar26 = s_Illegally_sized_directory_18006dce0._0_8_;
  uVar27 = s_Illegally_sized_directory_18006dce0._8_8_;
  if (puVar21 < local_res18[0] + uVar18 + 2) {
LAB_18004a323:
    DAT_180118080_1[7] = (char)uVar27;
    DAT_180118080_1[8] = SUB81(uVar27,1);
    DAT_180118080_1[9] = SUB81(uVar27,2);
    DAT_180118080_1[10] = SUB81(uVar27,3);
    DAT_180118080_1[0xb] = SUB81(uVar27,4);
    DAT_180118080_1[0xc] = SUB81(uVar27,5);
    DAT_180118080_1[0xd] = SUB81(uVar27,6);
    DAT_180118080_1[0xe] = SUB81(uVar27,7);
    DAT_180118080 = (char)uVar26;
    DAT_180118080_1[0] = SUB81(uVar26,1);
    DAT_180118080_1[1] = SUB81(uVar26,2);
    DAT_180118080_1[2] = SUB81(uVar26,3);
    DAT_180118080_1[3] = SUB81(uVar26,4);
    DAT_180118080_1[4] = SUB81(uVar26,5);
    DAT_180118080_1[5] = SUB81(uVar26,6);
    DAT_180118080_1[6] = SUB81(uVar26,7);
    _DAT_180118098 = CONCAT62(DAT_180118098_1._1_6_,uVar9);
    plVar13 = (longlong *)DAT_180118540[1];
    _DAT_180118090 = uVar11;
LAB_18004a345:
    *(longlong *)plVar13[1] = *plVar13;
    *(longlong *)(*plVar13 + 8) = plVar13[1];
    DAT_180118548 = DAT_180118548 + -1;
    free(plVar13);
    uVar11 = 0;
  }
  else {
    uVar24 = uVar17;
    if (uVar15 != 0) {
      lVar10 = 0;
      do {
        if (DAT_180118004 == 0) {
          uVar1 = local_res18[0][lVar10 * 0xc + 3];
          uVar2 = local_res18[0][lVar10 * 0xc + 2];
        }
        else {
          uVar1 = local_res18[0][lVar10 * 0xc + 2];
          uVar2 = local_res18[0][lVar10 * 0xc + 3];
        }
        uVar16 = (uint)CONCAT11(uVar1,uVar2);
        if (DAT_180118004 == 0) {
          uVar1 = local_res18[0][lVar10 * 0xc + 5];
          uVar2 = local_res18[0][lVar10 * 0xc + 4];
        }
        else {
          uVar1 = local_res18[0][lVar10 * 0xc + 4];
          uVar2 = local_res18[0][lVar10 * 0xc + 5];
        }
        uVar20 = (uint)CONCAT11(uVar1,uVar2);
        if (DAT_180118004 == 0) {
          uVar7 = CONCAT21(CONCAT11(local_res18[0][lVar10 * 0xc + 9],
                                    local_res18[0][lVar10 * 0xc + 8]),
                           local_res18[0][lVar10 * 0xc + 7]);
          uVar2 = local_res18[0][lVar10 * 0xc + 6];
        }
        else {
          uVar7 = CONCAT21(CONCAT11(local_res18[0][lVar10 * 0xc + 6],
                                    local_res18[0][lVar10 * 0xc + 7]),
                           local_res18[0][lVar10 * 0xc + 8]);
          uVar2 = local_res18[0][lVar10 * 0xc + 9];
        }
        uVar11 = s_Illegal_format_code_in_EXIF_dir_18006dc80._0_8_;
        uVar26 = s_Illegal_format_code_in_EXIF_dir_18006dc80._8_8_;
        uVar27 = s_Illegal_format_code_in_EXIF_dir_18006dc80._16_8_;
        uVar28 = s_Illegal_format_code_in_EXIF_dir_18006dc80._24_8_;
        if (0xc < uVar20) {
LAB_18004abac:
          DAT_180118080_1[7] = (char)uVar26;
          DAT_180118080_1[8] = SUB81(uVar26,1);
          DAT_180118080_1[9] = SUB81(uVar26,2);
          DAT_180118080_1[10] = SUB81(uVar26,3);
          DAT_180118080_1[0xb] = SUB81(uVar26,4);
          DAT_180118080_1[0xc] = SUB81(uVar26,5);
          DAT_180118080_1[0xd] = SUB81(uVar26,6);
          DAT_180118080_1[0xe] = SUB81(uVar26,7);
          DAT_180118080 = (char)uVar11;
          DAT_180118080_1[0] = SUB81(uVar11,1);
          DAT_180118080_1[1] = SUB81(uVar11,2);
          DAT_180118080_1[2] = SUB81(uVar11,3);
          DAT_180118080_1[3] = SUB81(uVar11,4);
          DAT_180118080_1[4] = SUB81(uVar11,5);
          DAT_180118080_1[5] = SUB81(uVar11,6);
          DAT_180118080_1[6] = SUB81(uVar11,7);
          plVar13 = (longlong *)DAT_180118540[1];
          _DAT_180118090 = uVar27;
          _DAT_180118098 = uVar28;
          *(longlong *)plVar13[1] = *plVar13;
          *(longlong *)(*plVar13 + 8) = plVar13[1];
          DAT_180118548 = DAT_180118548 + -1;
          free(plVar13);
          return 0;
        }
        iVar22 = *(int *)(&DAT_180068220 + (ulonglong)uVar20 * 4) * CONCAT31(uVar7,uVar2);
        if (iVar22 < 5) {
          _Source = (double *)(local_res18[0] + lVar10 * 0xc + 10);
        }
        else {
          if (DAT_180118004 == 0) {
            uVar7 = CONCAT21(CONCAT11(local_res18[0][lVar10 * 0xc + 0xd],
                                      local_res18[0][lVar10 * 0xc + 0xc]),
                             local_res18[0][lVar10 * 0xc + 0xb]);
            uVar2 = local_res18[0][lVar10 * 0xc + 10];
          }
          else {
            uVar7 = CONCAT21(CONCAT11(local_res18[0][lVar10 * 0xc + 10],
                                      local_res18[0][lVar10 * 0xc + 0xb]),
                             local_res18[0][lVar10 * 0xc + 0xc]);
            uVar2 = local_res18[0][lVar10 * 0xc + 0xd];
          }
          uVar17 = (ulonglong)CONCAT31(uVar7,uVar2);
          if (param_5 < CONCAT31(uVar7,uVar2) + iVar22) {
            DAT_1801180a0 = s_Illegal_pointer_offset_value_in_E_18006dc58[0x20];
            DAT_1801180a0_1._0_1_ = s_Illegal_pointer_offset_value_in_E_18006dc58[0x21];
            DAT_1801180a0_1._1_1_ = s_Illegal_pointer_offset_value_in_E_18006dc58[0x22];
            DAT_1801180a0_1._2_1_ = s_Illegal_pointer_offset_value_in_E_18006dc58[0x23];
            DAT_1801180a4 = s_Illegal_pointer_offset_value_in_E_18006dc58[0x24];
            register0x00000001 = s_Illegal_pointer_offset_value_in_E_18006dc58[0x25];
            uVar11 = s_Illegal_pointer_offset_value_in_E_18006dc58._0_8_;
            uVar26 = s_Illegal_pointer_offset_value_in_E_18006dc58._8_8_;
            uVar27 = s_Illegal_pointer_offset_value_in_E_18006dc58._16_8_;
            uVar28 = s_Illegal_pointer_offset_value_in_E_18006dc58._24_8_;
            goto LAB_18004abac;
          }
          _Source = (double *)(param_4 + uVar17);
        }
        _Size = (size_t)iVar22;
        if (*param_7 < _Size + (longlong)_Source) {
          *param_7 = _Size + (longlong)_Source;
        }
        puVar23 = param_7;
        if (uVar16 < 0x9004) {
          if (uVar16 == 0x9003) {
            strncpy((char *)(param_6 + 0x55),(char *)_Source,0x13);
          }
          else if (uVar16 < 0x202) {
            if (uVar16 == 0x201) {
              dVar25 = FUN_180049fb0(_Source,uVar20);
              local_60 = (ulonglong)dVar25;
            }
            else {
              switch(uVar16) {
              case 0x10f:
                strncpy((char *)(param_6 + 0xd),(char *)_Source,0x1f);
                break;
              case 0x110:
                strncpy((char *)(param_6 + 0x2d),(char *)_Source,0x27);
                break;
              case 0x112:
                dVar25 = FUN_180049fb0(_Source,uVar20);
                iVar22 = (int)dVar25;
                *(int *)(param_6 + 0x88) = iVar22;
                if ((iVar22 < 1) || (8 < iVar22)) {
                  DAT_180118080 = s_Undefined_rotation_value_18006dcc0[0];
                  DAT_180118080_1[0] = s_Undefined_rotation_value_18006dcc0[1];
                  DAT_180118080_1[1] = s_Undefined_rotation_value_18006dcc0[2];
                  DAT_180118080_1[2] = s_Undefined_rotation_value_18006dcc0[3];
                  DAT_180118080_1[3] = s_Undefined_rotation_value_18006dcc0[4];
                  DAT_180118080_1[4] = s_Undefined_rotation_value_18006dcc0[5];
                  DAT_180118080_1[5] = s_Undefined_rotation_value_18006dcc0[6];
                  DAT_180118080_1[6] = s_Undefined_rotation_value_18006dcc0[7];
                  DAT_180118080_1[7] = s_Undefined_rotation_value_18006dcc0[8];
                  DAT_180118080_1[8] = s_Undefined_rotation_value_18006dcc0[9];
                  DAT_180118080_1[9] = s_Undefined_rotation_value_18006dcc0[10];
                  DAT_180118080_1[10] = s_Undefined_rotation_value_18006dcc0[0xb];
                  DAT_180118080_1[0xb] = s_Undefined_rotation_value_18006dcc0[0xc];
                  DAT_180118080_1[0xc] = s_Undefined_rotation_value_18006dcc0[0xd];
                  DAT_180118080_1[0xd] = s_Undefined_rotation_value_18006dcc0[0xe];
                  DAT_180118080_1[0xe] = s_Undefined_rotation_value_18006dcc0[0xf];
                  DAT_180118090 = s_Undefined_rotation_value_18006dcc0[0x10];
                  DAT_180118090_1._0_1_ = s_Undefined_rotation_value_18006dcc0[0x11];
                  DAT_180118090_1._1_1_ = s_Undefined_rotation_value_18006dcc0[0x12];
                  DAT_180118090_1._2_1_ = s_Undefined_rotation_value_18006dcc0[0x13];
                  DAT_180118094 = s_Undefined_rotation_value_18006dcc0[0x14];
                  DAT_180118090_1._4_1_ = s_Undefined_rotation_value_18006dcc0[0x15];
                  DAT_180118096 = s_Undefined_rotation_value_18006dcc0[0x16];
                  DAT_180118090_1._6_1_ = s_Undefined_rotation_value_18006dcc0[0x17];
                  _DAT_180118098 =
                       CONCAT71(DAT_180118098_1,s_Undefined_rotation_value_18006dcc0[0x18]);
                  param_6[0x88] = 0;
                  param_6[0x89] = 0;
                  param_6[0x8a] = 0;
                  param_6[0x8b] = 0;
                }
                break;
              case 0x11a:
                dVar25 = FUN_180049fb0(_Source,uVar20);
                *(float *)(param_6 + 0xd0) = (float)dVar25;
                break;
              case 0x11b:
                dVar25 = FUN_180049fb0(_Source,uVar20);
                *(float *)(param_6 + 0xd4) = (float)dVar25;
                break;
              case 0x128:
                dVar25 = FUN_180049fb0(_Source,uVar20);
                iVar22 = (int)dVar25;
                if ((iVar22 == 1) || (iVar22 == 2)) {
                  param_6[0xd8] = 0;
                  param_6[0xd9] = 0;
                  param_6[0xda] = 0x80;
                  param_6[0xdb] = 0x3f;
                }
                else if (iVar22 == 3) {
                  param_6[0xd8] = 0x26;
                  param_6[0xd9] = 0x93;
                  param_6[0xda] = 0xc9;
                  param_6[0xdb] = 0x3e;
                }
                else if (iVar22 == 4) {
                  param_6[0xd8] = 0x85;
                  param_6[0xd9] = 0x42;
                  param_6[0xda] = 0x21;
                  param_6[0xdb] = 0x3d;
                }
                else if (iVar22 == 5) {
                  param_6[0xd8] = 0x4d;
                  param_6[0xd9] = 0x21;
                  param_6[0xda] = 0x25;
                  param_6[0xdb] = 0x38;
                }
              }
switchD_18004a539_caseD_111:
              if (uVar16 != 0x8769) {
LAB_18004aa3b:
                if (uVar16 != 0xa005) goto LAB_18004ab21;
              }
              if (DAT_180118004 == 0) {
                iVar6 = *(int3 *)((longlong)_Source + 1);
                bVar3 = *(byte *)_Source;
              }
              else {
                iVar6 = CONCAT21(CONCAT11(*(undefined1 *)_Source,
                                          *(undefined1 *)((longlong)_Source + 1)),
                                 *(undefined1 *)((longlong)_Source + 2));
                bVar3 = *(byte *)((longlong)_Source + 3);
              }
              puVar19 = param_4 + ((uint)((longlong)iVar6 << 8) | (uint)bVar3);
              uVar11 = s_Illegal_subdirectory_link_18006dca0._16_8_;
              uVar9 = s_Illegal_subdirectory_link_18006dca0._24_2_;
              uVar26 = s_Illegal_subdirectory_link_18006dca0._0_8_;
              uVar27 = s_Illegal_subdirectory_link_18006dca0._8_8_;
              if ((puVar19 < param_4) || (puVar21 < puVar19)) goto LAB_18004a323;
              FUN_18004a1d0(param_1,4,puVar19,param_4,param_5,param_6,puVar23);
            }
          }
          else if (uVar16 < 0x8823) {
            if (uVar16 == 0x8822) {
              dVar25 = FUN_180049fb0(_Source,uVar20);
              *(int *)(param_6 + 0xb8) = (int)dVar25;
            }
            else if (uVar16 == 0x202) {
              dVar25 = FUN_180049fb0(_Source,uVar20);
              local_68 = (longlong)dVar25;
            }
            else if (uVar16 == 0x829a) {
              dVar25 = FUN_180049fb0(_Source,uVar20);
              *(float *)(param_6 + 0x9c) = (float)dVar25;
            }
            else {
              if (uVar16 != 0x829d) goto switchD_18004a539_caseD_111;
              dVar25 = FUN_180049fb0(_Source,uVar20);
              *(float *)(param_6 + 0xa0) = (float)dVar25;
            }
          }
          else if (uVar16 == 0x8827) {
            dVar25 = FUN_180049fb0(_Source,uVar20);
            iVar22 = (int)dVar25;
            *(int *)(param_6 + 0xbc) = iVar22;
            if (iVar22 < 0x32) {
              *(int *)(param_6 + 0xbc) = iVar22 * 200;
            }
          }
          else {
            if (uVar16 != 0x9000) goto switchD_18004a539_caseD_111;
            strncpy((char *)(param_6 + 8),(char *)_Source,4);
          }
        }
        else if (uVar16 < 0x9204) {
          if (uVar16 == 0x9203) {
            dVar25 = FUN_180049fb0(_Source,uVar20);
            *(float *)(param_6 + 0xdc) = (float)dVar25;
          }
          else if (uVar16 == 0x9004) {
            strncpy((char *)(param_6 + 0x69),(char *)_Source,0x13);
          }
          else {
            if (uVar16 != 0x9102) goto switchD_18004a539_caseD_111;
            dVar25 = FUN_180049fb0(_Source,uVar20);
            *(int *)(param_6 + 0xc0) = (int)dVar25;
          }
        }
        else if (uVar16 < 0x927d) {
          if (uVar16 != 0x927c) {
            switch(uVar16) {
            case 0x9204:
              dVar25 = FUN_180049fb0(_Source,uVar20);
              *(float *)(param_6 + 0xac) = (float)dVar25;
              break;
            case 0x9206:
              dVar25 = FUN_180049fb0(_Source,uVar20);
              *(float *)(param_6 + 0xa4) = (float)dVar25;
              break;
            case 0x9207:
              dVar25 = FUN_180049fb0(_Source,uVar20);
              *(int *)(param_6 + 0xb4) = (int)dVar25;
              break;
            case 0x9208:
              dVar25 = FUN_180049fb0(_Source,uVar20);
              *(int *)(param_6 + 0xb0) = (int)dVar25;
              break;
            case 0x9209:
              dVar25 = FUN_180049fb0(_Source,uVar20);
              *(uint *)(param_6 + 0x94) = (uint)(((int)dVar25 & 7U) != 0);
              break;
            case 0x920a:
              dVar25 = FUN_180049fb0(_Source,uVar20);
              *(float *)(param_6 + 0x98) = (float)dVar25;
            }
            goto switchD_18004a539_caseD_111;
          }
          *(int *)(param_6 + 0x4d8) = iVar22;
          if ((*param_6 & 8) == 0) {
            *(ulonglong *)(param_6 + 0x4e0) = uVar17;
          }
          else {
            pvVar12 = malloc(_Size);
            *(void **)(param_6 + 0x4e0) = pvVar12;
            memcpy(pvVar12,_Source,_Size);
          }
        }
        else if (uVar16 < 0xa20f) {
          if (uVar16 == 0xa20e) {
            dVar25 = FUN_180049fb0(_Source,uVar20);
            *(float *)(param_6 + 0xc4) = (float)dVar25;
          }
          else {
            if (uVar16 != 0x9286) {
              if (uVar16 - 0xa002 < 2) {
                dVar25 = FUN_180049fb0(_Source,uVar20);
                if (DAT_180117f94 < (int)dVar25) {
                  DAT_180117f94 = (int)dVar25;
                }
              }
              goto switchD_18004a539_caseD_111;
            }
            *(int *)(param_6 + 0x4c8) = iVar22;
            if ((*param_6 & 4) == 0) {
              *(undefined1 **)(param_6 + 0x4d0) = param_4 + (uVar17 - param_1) + 4;
            }
            else {
              pvVar12 = malloc(_Size);
              *(void **)(param_6 + 0x4d0) = pvVar12;
              memcpy(pvVar12,_Source,_Size);
            }
          }
        }
        else if (uVar16 == 0xa20f) {
          dVar25 = FUN_180049fb0(_Source,uVar20);
          *(float *)(param_6 + 200) = (float)dVar25;
        }
        else {
          if (uVar16 != 0xa210) goto switchD_18004a539_caseD_111;
          dVar25 = FUN_180049fb0(_Source,uVar20);
          iVar22 = (int)dVar25;
          if ((iVar22 == 1) || (iVar22 == 2)) {
            param_6[0xcc] = 0;
            param_6[0xcd] = 0;
            param_6[0xce] = 0x80;
            param_6[0xcf] = 0x3f;
          }
          else if (iVar22 == 3) {
            param_6[0xcc] = 0x26;
            param_6[0xcd] = 0x93;
            param_6[0xce] = 0xc9;
            param_6[0xcf] = 0x3e;
          }
          else if (iVar22 == 4) {
            param_6[0xcc] = 0x85;
            param_6[0xcd] = 0x42;
            param_6[0xce] = 0x21;
            param_6[0xcf] = 0x3d;
          }
          else {
            if (iVar22 != 5) goto LAB_18004aa3b;
            param_6[0xcc] = 0x4d;
            param_6[0xcd] = 0x21;
            param_6[0xce] = 0x25;
            param_6[0xcf] = 0x38;
          }
        }
LAB_18004ab21:
        uVar16 = (uint)local_68;
        lVar10 = lVar10 + 1;
        uVar24 = local_60;
      } while (lVar10 < (longlong)(ulonglong)uVar15);
    }
    if (DAT_180118004 == 0) {
      uVar1 = local_res18[0][uVar18 + 3];
      uVar2 = local_res18[0][uVar18 + 2];
    }
    else {
      uVar1 = local_res18[0][uVar18 + 2];
      uVar2 = local_res18[0][uVar18 + 3];
    }
    if (CONCAT11(uVar1,uVar2) != 0) {
      puVar19 = param_4 + (uint)CONCAT11(uVar1,uVar2);
      uVar11 = s_Illegal_subdirectory_link_18006dca0._16_8_;
      uVar9 = s_Illegal_subdirectory_link_18006dca0._24_2_;
      uVar26 = s_Illegal_subdirectory_link_18006dca0._0_8_;
      uVar27 = s_Illegal_subdirectory_link_18006dca0._8_8_;
      if ((puVar19 < param_4) || (puVar21 < puVar19)) goto LAB_18004a323;
      FUN_18004a1d0(param_1,4,puVar19,param_4,param_5,param_6,param_7);
    }
    if (((uVar16 != 0) && ((int)uVar24 != 0)) && (uVar16 + (int)uVar24 <= param_5)) {
      if ((*param_6 & 2) == 0) {
        *(undefined1 **)(param_6 + 0x4e8) = param_4 + ((uVar24 & 0xffffffff) - param_1) + 4;
      }
      else {
        pvVar12 = malloc((ulonglong)uVar16);
        *(void **)(param_6 + 0x4e8) = pvVar12;
        memcpy(pvVar12,param_4 + (uVar24 & 0xffffffff),(ulonglong)uVar16);
      }
      *(uint *)(param_6 + 0x4f0) = uVar16;
    }
    if (DAT_180118548 != 0) {
      plVar13 = (longlong *)DAT_180118540[1];
      *(longlong *)plVar13[1] = *plVar13;
      *(longlong *)(*plVar13 + 8) = plVar13[1];
      DAT_180118548 = DAT_180118548 + -1;
      free(plVar13);
    }
    uVar11 = 1;
  }
  return uVar11;
}

