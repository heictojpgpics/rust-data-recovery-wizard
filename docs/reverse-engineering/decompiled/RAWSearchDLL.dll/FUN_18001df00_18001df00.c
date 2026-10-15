// Function: FUN_18001df00
// Address: 18001df00
// Size: 1544 bytes


void FUN_18001df00(char *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  long lVar7;
  basic_istream<char,struct_std::char_traits<char>_> *pbVar8;
  void *pvVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  int ****ppppiVar13;
  int *piVar14;
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar15;
  void *pvVar16;
  basic_ios<char,struct_std::char_traits<char>_> *pbVar17;
  undefined8 ****ppppuVar18;
  ulonglong uVar19;
  undefined1 uVar20;
  size_t sVar21;
  undefined1 auStack_248 [48];
  undefined1 local_218 [4];
  undefined4 local_214;
  ulonglong local_210;
  ulonglong local_208;
  basic_ios<char,struct_std::char_traits<char>_> *local_200;
  undefined8 local_1f8;
  int iStack_1ec;
  longlong local_1e8 [2];
  basic_streambuf<char,struct_std::char_traits<char>_> local_1d8 [8];
  basic_istream<char,struct_std::char_traits<char>_> local_1d0 [120];
  longlong local_158;
  basic_ios<char,struct_std::char_traits<char>_> local_138 [96];
  undefined8 ***local_d8 [2];
  size_t local_c8;
  ulonglong local_c0;
  int ***local_b8 [2];
  longlong local_a8;
  ulonglong local_a0;
  basic_ios<char,struct_std::char_traits<char>_> *local_98 [2];
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78 [4];
  longlong local_58 [4];
  ulonglong local_38;
  
  local_1f8 = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStack_248;
  local_214 = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(char **)param_1;
  }
  FUN_1800098d0((basic_istream<char,struct_std::char_traits<char>_> *)local_1e8,param_1);
  *(undefined ***)((longlong)local_1e8 + (longlong)*(int *)(local_1e8[0] + 4)) =
       std::basic_ifstream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)((longlong)&iStack_1ec + (longlong)*(int *)(local_1e8[0] + 4)) =
       *(int *)(local_1e8[0] + 4) + -0xb0;
  if (local_158 != 0) {
    FUN_180001690((undefined1 *)local_d8);
    FUN_180001690((undefined1 *)local_b8);
    FUN_180001690((undefined1 *)local_98);
    lVar7 = DAT_180118180;
    while( true ) {
      DAT_180118180 = lVar7;
      bVar6 = std::basic_ios<char,struct_std::char_traits<char>_>::widen
                        ((basic_ios<char,struct_std::char_traits<char>_> *)
                         ((longlong)local_1e8 + (longlong)*(int *)(local_1e8[0] + 4)),'\n');
      pbVar8 = FUN_18000a720((basic_istream<char,struct_std::char_traits<char>_> *)local_1e8,
                             (longlong)local_d8,bVar6);
      if (((byte)pbVar8[(longlong)*(int *)(*(longlong *)pbVar8 + 4) + 0x10] & 6) != 0) break;
      ppppuVar18 = local_d8;
      if (0xf < local_c0) {
        ppppuVar18 = (undefined8 ****)local_d8[0];
      }
      lVar7 = DAT_180118180;
      if (local_c8 != 0) {
        sVar21 = local_c8;
        pvVar9 = memchr(ppppuVar18,0x3d,local_c8);
        uVar20 = (undefined1)sVar21;
        lVar7 = DAT_180118180;
        if ((pvVar9 != (void *)0x0) &&
           (uVar19 = (longlong)pvVar9 - (longlong)ppppuVar18, uVar19 != 0xffffffffffffffff)) {
          FUN_180001780((longlong)local_78);
          plVar10 = (longlong *)FUN_1800016b0(local_78);
          plVar10[2] = 0;
          plVar10[3] = 0xf;
          local_218[0] = 0;
          FUN_180001300((undefined1 *)plVar10,local_218);
          local_210 = local_c8;
          local_208 = uVar19;
          puVar11 = FUN_180001e40(&local_208,&local_210);
          uVar1 = *puVar11;
          ppppuVar18 = local_d8;
          if (0xf < local_c0) {
            ppppuVar18 = (undefined8 ****)local_d8[0];
          }
          if ((ulonglong)plVar10[3] < uVar1) {
            FUN_1800086f0((longlong)local_78,uVar1,uVar20,ppppuVar18);
          }
          else {
            plVar12 = plVar10;
            if (0xf < (ulonglong)plVar10[3]) {
              plVar12 = (longlong *)*plVar10;
            }
            plVar10[2] = uVar1;
            memmove(plVar12,ppppuVar18,uVar1);
            local_218[0] = 0;
            FUN_180001300((undefined1 *)((longlong)plVar12 + uVar1),local_218);
          }
          local_214 = 1;
          plVar12 = (longlong *)FUN_1800016b0(local_b8);
          if (0xf < (ulonglong)plVar12[3]) {
            pvVar9 = (void *)*plVar12;
            pvVar16 = pvVar9;
            if ((0xfff < plVar12[3] + 1U) &&
               (pvVar16 = *(void **)((longlong)pvVar9 + -8),
               0x1f < (ulonglong)((longlong)pvVar9 + (-8 - (longlong)pvVar16)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar16);
          }
          plVar12[2] = 0;
          plVar12[3] = 0xf;
          local_218[0] = 0;
          FUN_180001300((undefined1 *)plVar12,local_218);
          lVar3 = plVar10[1];
          lVar4 = plVar10[2];
          lVar5 = plVar10[3];
          *plVar12 = *plVar10;
          plVar12[1] = lVar3;
          plVar12[2] = lVar4;
          plVar12[3] = lVar5;
          plVar10[2] = 0;
          plVar10[3] = 0xf;
          local_218[0] = 0;
          FUN_180001300((undefined1 *)plVar10,local_218);
          local_214 = 0;
          FUN_180001630(local_78);
          uVar19 = uVar19 + 1;
          FUN_180001780((longlong)local_58);
          plVar10 = (longlong *)FUN_1800016b0(local_58);
          plVar10[2] = 0;
          plVar10[3] = 0xf;
          local_218[0] = 0;
          FUN_180001300((undefined1 *)plVar10,local_218);
          if (local_c8 < uVar19) {
            FUN_1800072f0();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_210 = 0xffffffffffffffff;
          local_208 = local_c8 - uVar19;
          puVar11 = FUN_180001e40(&local_210,&local_208);
          uVar1 = *puVar11;
          ppppuVar18 = local_d8;
          if (0xf < local_c0) {
            ppppuVar18 = (undefined8 ****)local_d8[0];
          }
          if ((ulonglong)plVar10[3] < uVar1) {
            FUN_1800086f0((longlong)local_58,uVar1,(char)uVar19,
                          (void *)((longlong)ppppuVar18 + uVar19));
          }
          else {
            plVar12 = plVar10;
            if (0xf < (ulonglong)plVar10[3]) {
              plVar12 = (longlong *)*plVar10;
            }
            plVar10[2] = uVar1;
            memmove(plVar12,(void *)((longlong)ppppuVar18 + uVar19),uVar1);
            local_218[0] = 0;
            FUN_180001300((undefined1 *)((longlong)plVar12 + uVar1),local_218);
          }
          local_214 = 2;
          plVar12 = (longlong *)FUN_1800016b0(local_98);
          if (0xf < (ulonglong)plVar12[3]) {
            pvVar9 = (void *)*plVar12;
            pvVar16 = pvVar9;
            if ((0xfff < plVar12[3] + 1U) &&
               (pvVar16 = *(void **)((longlong)pvVar9 + -8),
               0x1f < (ulonglong)((longlong)pvVar9 + (-8 - (longlong)pvVar16)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar16);
          }
          plVar12[2] = 0;
          plVar12[3] = 0xf;
          local_218[0] = 0;
          FUN_180001300((undefined1 *)plVar12,local_218);
          lVar3 = plVar10[1];
          lVar4 = plVar10[2];
          lVar5 = plVar10[3];
          *plVar12 = *plVar10;
          plVar12[1] = lVar3;
          plVar12[2] = lVar4;
          plVar12[3] = lVar5;
          plVar10[2] = 0;
          plVar10[3] = 0xf;
          local_218[0] = 0;
          FUN_180001300((undefined1 *)plVar10,local_218);
          local_214 = 0;
          FUN_180001630(local_58);
          ppppiVar13 = local_b8;
          if (0xf < local_a0) {
            ppppiVar13 = (int ****)local_b8[0];
          }
          if ((local_a8 == 4) && (*(int *)ppppiVar13 == DAT_18006aff8)) {
            pbVar17 = (basic_ios<char,struct_std::char_traits<char>_> *)local_98;
            if (0xf < local_80) {
              pbVar17 = local_98[0];
            }
            FUN_1800071e0(0x180118300,pbVar17,local_88);
          }
          ppppiVar13 = local_b8;
          if (0xf < local_a0) {
            ppppiVar13 = (int ****)local_b8[0];
          }
          lVar7 = DAT_180118180;
          if (((local_a8 == 5) && (*(int *)ppppiVar13 == s_count_18006b018._0_4_)) &&
             (*(char *)((longlong)ppppiVar13 + 4) == s_count_18006b018[4])) {
            piVar14 = _errno();
            pbVar17 = (basic_ios<char,struct_std::char_traits<char>_> *)local_98;
            if (0xf < local_80) {
              pbVar17 = local_98[0];
            }
            *piVar14 = 0;
            lVar7 = strtol((char *)pbVar17,(char **)&local_200,10);
            if (pbVar17 == local_200) {
              std::_Xinvalid_argument("invalid stoi argument");
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*piVar14 == 0x22) {
              std::_Xout_of_range("stoi argument out of range");
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
      }
    }
    pbVar15 = FUN_180009bd0(local_1d8);
    if (pbVar15 == (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0) {
      std::basic_ios<char,struct_std::char_traits<char>_>::setstate
                ((basic_ios<char,struct_std::char_traits<char>_> *)
                 ((longlong)local_1e8 + (longlong)*(int *)(local_1e8[0] + 4)),2,false);
    }
    FUN_180001630((longlong *)local_98);
    FUN_180001630((longlong *)local_b8);
    FUN_180001630((longlong *)local_d8);
  }
  local_200 = local_138;
  *(undefined ***)((longlong)local_1e8 + (longlong)*(int *)(local_1e8[0] + 4)) =
       std::basic_ifstream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)((longlong)&iStack_1ec + (longlong)*(int *)(local_1e8[0] + 4)) =
       *(int *)(local_1e8[0] + 4) + -0xb0;
  FUN_1800097d0(local_1d8);
  std::basic_istream<char,struct_std::char_traits<char>_>::
  ~basic_istream<char,struct_std::char_traits<char>_>(local_1d0);
  std::basic_ios<char,struct_std::char_traits<char>_>::
  ~basic_ios<char,struct_std::char_traits<char>_>(local_138);
  __security_check_cookie(local_38 ^ (ulonglong)auStack_248);
  return;
}

