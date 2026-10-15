// Function: FUN_180037c80
// Address: 180037c80
// Size: 163 bytes


undefined8 FUN_180037c80(longlong param_1,int *param_2,longlong param_3)

{
  short sVar1;
  short sVar2;
  
  sVar2 = (short)*param_2;
  sVar1 = *(short *)((longlong)param_2 + 2);
  if (sVar2 == 0x4949) {
    if (((sVar1 == 0x55) || (sVar1 == 0x2a)) || (sVar1 == 0x4f52)) goto LAB_180037d16;
    sVar2 = 0x5352;
  }
  else {
    if (sVar2 != 0x4d4d) {
      if (sVar2 != 0x5546) {
        return 0;
      }
      if (sVar1 != 0x494a) {
        return 0;
      }
      if (*param_2 != s_FUJIFILMCCD_RAW_180093770._0_4_) {
        return 0;
      }
      if (*(longlong *)(param_2 + 1) != s_FUJIFILMCCD_RAW_180093770._4_8_) {
        return 0;
      }
      if (param_2[3] != s_FUJIFILMCCD_RAW_180093770._12_4_) {
        return 0;
      }
      goto LAB_180037d16;
    }
    if (sVar1 == 0x2a00) goto LAB_180037d16;
    sVar2 = 0x524f;
  }
  if (sVar2 != sVar1) {
    return 0;
  }
LAB_180037d16:
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 8);
  return 1;
}

