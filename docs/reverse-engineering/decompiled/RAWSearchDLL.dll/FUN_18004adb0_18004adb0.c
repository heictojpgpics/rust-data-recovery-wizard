// Function: FUN_18004adb0
// Address: 18004adb0
// Size: 605 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18004adb0(longlong param_1,undefined8 param_2,int *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *local_18 [2];
  
  pbVar4 = DAT_180117f98;
  uVar7 = 0;
  DAT_180117f94 = 0;
  pbVar4[0x94] = 0;
  pbVar4[0x95] = 0;
  pbVar4[0x96] = 0;
  pbVar4[0x97] = 0;
  pbVar4[0xe0] = 0;
  uVar5 = _DAT_180118098;
  uVar6 = _DAT_180118090;
  if ((*param_3 == DAT_18006dd84) && ((short)param_3[1] == DAT_18006dd88)) {
    if (*(short *)((longlong)param_3 + 6) != DAT_18006dd40) {
      if (*(short *)((longlong)param_3 + 6) != DAT_18006dd80) {
        DAT_180118098_1._6_1_ = SUB81(uVar5,7);
        _DAT_180118098 =
             CONCAT16(s_Invalid_Exif_alignment_marker__18006dd60[0x1e],
                      CONCAT24(s_Invalid_Exif_alignment_marker__18006dd60._28_2_,
                               s_Invalid_Exif_alignment_marker__18006dd60._24_4_));
        DAT_180118090 = s_Invalid_Exif_alignment_marker__18006dd60[0x10];
        DAT_180118090_1._0_1_ = s_Invalid_Exif_alignment_marker__18006dd60[0x11];
        DAT_180118090_1._1_1_ = s_Invalid_Exif_alignment_marker__18006dd60[0x12];
        DAT_180118090_1._2_1_ = s_Invalid_Exif_alignment_marker__18006dd60[0x13];
        DAT_180118094 = s_Invalid_Exif_alignment_marker__18006dd60[0x14];
        DAT_180118090_1._4_1_ = s_Invalid_Exif_alignment_marker__18006dd60[0x15];
        DAT_180118096 = s_Invalid_Exif_alignment_marker__18006dd60[0x16];
        DAT_180118090_1._6_1_ = s_Invalid_Exif_alignment_marker__18006dd60[0x17];
        DAT_180118080 = s_Invalid_Exif_alignment_marker__18006dd60[0];
        DAT_180118080_1._0_1_ = s_Invalid_Exif_alignment_marker__18006dd60[1];
        DAT_180118080_1._1_1_ = s_Invalid_Exif_alignment_marker__18006dd60[2];
        DAT_180118080_1._2_1_ = s_Invalid_Exif_alignment_marker__18006dd60[3];
        DAT_180118080_1._3_1_ = s_Invalid_Exif_alignment_marker__18006dd60[4];
        DAT_180118080_1._4_1_ = s_Invalid_Exif_alignment_marker__18006dd60[5];
        DAT_180118080_1._5_1_ = s_Invalid_Exif_alignment_marker__18006dd60[6];
        DAT_180118080_1._6_1_ = s_Invalid_Exif_alignment_marker__18006dd60[7];
        uRam0000000180118088._0_1_ = s_Invalid_Exif_alignment_marker__18006dd60[8];
        uRam0000000180118088._1_1_ = s_Invalid_Exif_alignment_marker__18006dd60[9];
        uRam0000000180118088._2_1_ = s_Invalid_Exif_alignment_marker__18006dd60[10];
        uRam0000000180118088._3_1_ = s_Invalid_Exif_alignment_marker__18006dd60[0xb];
        uRam0000000180118088._4_1_ = s_Invalid_Exif_alignment_marker__18006dd60[0xc];
        uRam0000000180118088._5_1_ = s_Invalid_Exif_alignment_marker__18006dd60[0xd];
        uRam0000000180118088._6_1_ = s_Invalid_Exif_alignment_marker__18006dd60[0xe];
        uRam0000000180118088._7_1_ = s_Invalid_Exif_alignment_marker__18006dd60[0xf];
        return 0;
      }
      uVar7 = 1;
    }
    DAT_180118004 = (int)uVar7;
    if (DAT_180118004 == 0) {
      uVar2 = *(undefined1 *)((longlong)param_3 + 9);
      uVar1 = (undefined1)param_3[2];
    }
    else {
      uVar2 = (undefined1)param_3[2];
      uVar1 = *(undefined1 *)((longlong)param_3 + 9);
    }
    if (CONCAT11(uVar2,uVar1) != 0x2a) {
      _DAT_180118090 =
           CONCAT24(s_Invalid_Exif_start__1__18006dd28._20_2_,
                    s_Invalid_Exif_start__1__18006dd28._16_4_);
      DAT_180118090_1._6_1_ = SUB81(uVar6,7);
      _DAT_180118090 = CONCAT16(s_Invalid_Exif_start__1__18006dd28[0x16],_DAT_180118090);
      DAT_180118080 = s_Invalid_Exif_start__1__18006dd28[0];
      DAT_180118080_1._0_1_ = s_Invalid_Exif_start__1__18006dd28[1];
      DAT_180118080_1._1_1_ = s_Invalid_Exif_start__1__18006dd28[2];
      DAT_180118080_1._2_1_ = s_Invalid_Exif_start__1__18006dd28[3];
      DAT_180118080_1._3_1_ = s_Invalid_Exif_start__1__18006dd28[4];
      DAT_180118080_1._4_1_ = s_Invalid_Exif_start__1__18006dd28[5];
      DAT_180118080_1._5_1_ = s_Invalid_Exif_start__1__18006dd28[6];
      DAT_180118080_1._6_1_ = s_Invalid_Exif_start__1__18006dd28[7];
      uRam0000000180118088._0_1_ = s_Invalid_Exif_start__1__18006dd28[8];
      uRam0000000180118088._1_1_ = s_Invalid_Exif_start__1__18006dd28[9];
      uRam0000000180118088._2_1_ = s_Invalid_Exif_start__1__18006dd28[10];
      uRam0000000180118088._3_1_ = s_Invalid_Exif_start__1__18006dd28[0xb];
      uRam0000000180118088._4_1_ = s_Invalid_Exif_start__1__18006dd28[0xc];
      uRam0000000180118088._5_1_ = s_Invalid_Exif_start__1__18006dd28[0xd];
      uRam0000000180118088._6_1_ = s_Invalid_Exif_start__1__18006dd28[0xe];
      uRam0000000180118088._7_1_ = s_Invalid_Exif_start__1__18006dd28[0xf];
      return 0;
    }
    if (DAT_180118004 == 0) {
      uVar3 = *(undefined3 *)((longlong)param_3 + 0xb);
      uVar2 = *(undefined1 *)((longlong)param_3 + 10);
    }
    else {
      uVar3 = CONCAT21(CONCAT11(*(undefined1 *)((longlong)param_3 + 10),
                                *(undefined1 *)((longlong)param_3 + 0xb)),(char)param_3[3]);
      uVar2 = *(undefined1 *)((longlong)param_3 + 0xd);
    }
    if (8 < CONCAT31(uVar3,uVar2) - 8U) {
      DAT_1801180a0 = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x20];
      DAT_1801180a0_1._0_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x21];
      DAT_1801180a0_1._1_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x22];
      DAT_1801180a0_1._2_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x23];
      DAT_1801180a4 = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x24];
      DAT_180118080 = s_Suspicious_offset_of_first_IFD_v_18006dd00[0];
      DAT_180118080_1._0_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[1];
      DAT_180118080_1._1_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[2];
      DAT_180118080_1._2_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[3];
      DAT_180118080_1._3_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[4];
      DAT_180118080_1._4_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[5];
      DAT_180118080_1._5_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[6];
      DAT_180118080_1._6_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[7];
      uRam0000000180118088._0_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[8];
      uRam0000000180118088._1_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[9];
      uRam0000000180118088._2_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[10];
      uRam0000000180118088._3_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0xb];
      uRam0000000180118088._4_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0xc];
      uRam0000000180118088._5_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0xd];
      uRam0000000180118088._6_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0xe];
      uRam0000000180118088._7_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0xf];
      DAT_180118090 = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x10];
      DAT_180118090_1._0_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x11];
      DAT_180118090_1._1_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x12];
      DAT_180118090_1._2_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x13];
      DAT_180118094 = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x14];
      DAT_180118090_1._4_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x15];
      DAT_180118096 = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x16];
      DAT_180118090_1._6_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x17];
      DAT_180118098 = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x18];
      DAT_180118098_1._0_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x19];
      DAT_180118098_1._1_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x1a];
      DAT_180118098_1._2_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x1b];
      DAT_18011809c = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x1c];
      DAT_180118098_1._4_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x1d];
      DAT_18011809e = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x1e];
      DAT_180118098_1._6_1_ = s_Suspicious_offset_of_first_IFD_v_18006dd00[0x1f];
      return 0;
    }
    local_18[0] = param_3;
    uVar6 = FUN_18004a1d0(param_1,uVar7,(undefined1 *)((longlong)param_3 + 0xe),
                          (undefined1 *)((longlong)param_3 + 6),param_4 - 6,pbVar4,
                          (ulonglong *)local_18);
    if ((int)uVar6 != 0) {
      if (*(float *)(DAT_180117f98 + 0xc4) != 0.0) {
        *(float *)(DAT_180117f98 + 0xa8) =
             ((float)DAT_180117f94 * *(float *)(DAT_180117f98 + 0xcc)) /
             *(float *)(DAT_180117f98 + 0xc4);
      }
      return 1;
    }
  }
  else {
    _DAT_180118090 =
         CONCAT24(s_Incorrect_Exif_header_18006dd48._20_2_,s_Incorrect_Exif_header_18006dd48._16_4_)
    ;
    DAT_180118080 = s_Incorrect_Exif_header_18006dd48[0];
    DAT_180118080_1._0_1_ = s_Incorrect_Exif_header_18006dd48[1];
    DAT_180118080_1._1_1_ = s_Incorrect_Exif_header_18006dd48[2];
    DAT_180118080_1._2_1_ = s_Incorrect_Exif_header_18006dd48[3];
    DAT_180118080_1._3_1_ = s_Incorrect_Exif_header_18006dd48[4];
    DAT_180118080_1._4_1_ = s_Incorrect_Exif_header_18006dd48[5];
    DAT_180118080_1._5_1_ = s_Incorrect_Exif_header_18006dd48[6];
    DAT_180118080_1._6_1_ = s_Incorrect_Exif_header_18006dd48[7];
    uRam0000000180118088._0_1_ = s_Incorrect_Exif_header_18006dd48[8];
    uRam0000000180118088._1_1_ = s_Incorrect_Exif_header_18006dd48[9];
    uRam0000000180118088._2_1_ = s_Incorrect_Exif_header_18006dd48[10];
    uRam0000000180118088._3_1_ = s_Incorrect_Exif_header_18006dd48[0xb];
    uRam0000000180118088._4_1_ = s_Incorrect_Exif_header_18006dd48[0xc];
    uRam0000000180118088._5_1_ = s_Incorrect_Exif_header_18006dd48[0xd];
    uRam0000000180118088._6_1_ = s_Incorrect_Exif_header_18006dd48[0xe];
    uRam0000000180118088._7_1_ = s_Incorrect_Exif_header_18006dd48[0xf];
  }
  return 0;
}

