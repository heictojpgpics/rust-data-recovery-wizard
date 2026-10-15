// Function: FUN_18001e510
// Address: 18001e510
// Size: 1058 bytes


void FUN_18001e510(longlong param_1,undefined1 (*param_2) [16])

{
  char *pcVar1;
  byte bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  code *pcVar5;
  bool bVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  void *pvVar13;
  byte *pbVar14;
  undefined8 *****pppppuVar15;
  undefined1 uVar16;
  ulonglong uVar17;
  char *pcVar18;
  undefined1 auStack_128 [32];
  undefined1 local_108 [4];
  undefined4 local_104;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  longlong local_e0;
  ulonglong local_d8 [4];
  undefined8 ****local_b8 [2];
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98 [4];
  longlong local_78 [4];
  ulonglong local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_d8[1] = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_128;
  uVar12 = 0;
  local_104 = 0;
  local_d8[2] = param_1;
  FUN_180001780((longlong)local_98);
  puVar8 = (undefined8 *)FUN_1800016b0(local_98);
  puVar8[3] = 0xf;
  local_108[0] = 0;
  FUN_180001300((undefined1 *)puVar8,local_108);
  puVar11 = puVar8;
  if (0xf < (ulonglong)puVar8[3]) {
    puVar11 = (undefined8 *)*puVar8;
  }
  puVar8[2] = 0;
  local_108[0] = 0;
  FUN_180001300((undefined1 *)puVar11,local_108);
  FUN_180001780((longlong)local_78);
  puVar8 = (undefined8 *)FUN_1800016b0(local_78);
  puVar8[3] = 0xf;
  local_108[0] = 0;
  FUN_180001300((undefined1 *)puVar8,local_108);
  puVar11 = puVar8;
  if (0xf < (ulonglong)puVar8[3]) {
    puVar11 = (undefined8 *)*puVar8;
  }
  puVar8[2] = 0;
  local_108[0] = 0;
  FUN_180001300((undefined1 *)puVar11,local_108);
  local_58 = 0;
  pcVar18 = SUB168(*param_2,0);
  local_d8[0] = vpextrq_avx(*param_2,1);
  pcVar1 = pcVar18 + local_d8[0];
  for (pcVar9 = pcVar18; (pcVar9 != pcVar1 && (*pcVar9 == '\"')); pcVar9 = pcVar9 + 1) {
  }
  do {
    pcVar7 = pcVar1;
    if (pcVar7 == pcVar9) break;
    pcVar1 = pcVar7 + -1;
  } while (pcVar7[-1] == '\"');
  uVar17 = (longlong)pcVar9 - (longlong)pcVar18;
  if (local_d8[0] < uVar17) {
    FUN_180022320();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_100._0_8_ = (longlong)pcVar7 - (longlong)pcVar9;
  local_d8[0] = local_d8[0] - uVar17;
  puVar10 = FUN_180001e40((ulonglong *)local_100,local_d8);
  uVar3 = *puVar10;
  *(char **)*param_2 = pcVar18 + uVar17;
  *(ulonglong *)(*param_2 + 8) = uVar3;
  local_100._8_8_ = 1;
  local_100._0_8_ = &DAT_18006b014;
  FUN_180021570((ulonglong *)local_f0,(longlong *)param_2,&local_100);
  if ((ulonglong)((longlong)(local_f0._8_8_ - local_f0._0_8_) >> 4) < 2) {
    FUN_18001e970(param_1,(longlong)local_98);
    local_104 = 1;
    if ((void *)local_f0._0_8_ != (void *)0x0) {
      pvVar13 = (void *)local_f0._0_8_;
      if ((0xfff < (local_e0 - local_f0._0_8_ & 0xfffffffffffffff0U)) &&
         (pvVar13 = *(void **)(local_f0._0_8_ + -8),
         0x1f < (ulonglong)(local_f0._0_8_ + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar13);
      local_f0 = (undefined1  [16])0x0;
      local_e0 = 0;
    }
    FUN_180001630(local_78);
  }
  else {
    pbVar4 = *(byte **)local_f0._0_8_;
    bVar6 = false;
    pbVar14 = pbVar4;
    while ((pbVar14 != pbVar4 + *(longlong *)(local_f0._0_8_ + 8) &&
           (bVar2 = (&DAT_18006ae70)[*pbVar14], bVar2 < 10))) {
      if ((uVar12 < 0x1999999999999999) || ((uVar12 == 0x1999999999999999 && (bVar2 < 6)))) {
        uVar12 = (ulonglong)bVar2 + uVar12 * 10;
      }
      else {
        bVar6 = true;
      }
      pbVar14 = pbVar14 + 1;
    }
    if ((pbVar14 != pbVar4) && (!bVar6)) {
      local_58 = uVar12;
    }
    FUN_180001690((undefined1 *)local_b8);
    uVar12 = local_f0._0_8_;
    FUN_180001780((longlong)local_48);
    puVar11 = (undefined8 *)FUN_1800016b0(local_48);
    puVar11[2] = 0;
    puVar11[3] = 0xf;
    local_108[0] = 0;
    FUN_180001300((undefined1 *)puVar11,local_108);
    local_100 = *(undefined1 (*) [16])(uVar12 + 0x10);
    uVar17 = vpextrq_avx(local_100,1);
    if ((ulonglong)puVar11[3] < uVar17) {
      FUN_1800086f0((longlong)local_48,uVar17,(char)uVar12,(void *)local_100._0_8_);
      uVar16 = (undefined1)uVar12;
    }
    else {
      puVar8 = puVar11;
      if (0xf < (ulonglong)puVar11[3]) {
        puVar8 = (undefined8 *)*puVar11;
      }
      puVar11[2] = uVar17;
      uVar12 = uVar17;
      memmove(puVar8,(void *)local_100._0_8_,uVar17);
      uVar16 = (undefined1)uVar12;
      local_108[0] = 0;
      FUN_180001300((undefined1 *)(uVar17 + (longlong)puVar8),local_108);
    }
    FUN_18001d930(local_48,(longlong)local_b8,uVar16);
    pppppuVar15 = local_b8;
    if (0xf < local_a0) {
      pppppuVar15 = (undefined8 *****)local_b8[0];
    }
    FUN_1800071e0((longlong)local_78,pppppuVar15,local_a8);
    FUN_18001e970(param_1,(longlong)local_98);
    local_104 = 1;
    FUN_180001630(local_48);
    FUN_180001630((longlong *)local_b8);
    if ((void *)local_f0._0_8_ != (void *)0x0) {
      pvVar13 = (void *)local_f0._0_8_;
      if ((0xfff < (local_e0 - local_f0._0_8_ & 0xfffffffffffffff0U)) &&
         (pvVar13 = *(void **)(local_f0._0_8_ + -8),
         0x1f < (ulonglong)(local_f0._0_8_ + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar13);
      local_f0 = (undefined1  [16])0x0;
      local_e0 = 0;
    }
    FUN_180001630(local_78);
  }
  FUN_180001630(local_98);
  __security_check_cookie(local_28 ^ (ulonglong)auStack_128);
  return;
}

