// Function: FUN_18002b750
// Address: 18002b750
// Size: 802 bytes


longlong FUN_18002b750(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined1 *puVar4;
  longlong lVar5;
  void *pvVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 local_158 [4];
  undefined4 local_154;
  basic_ios<char,struct_std::char_traits<char>_> *local_150 [2];
  int iStack_13c;
  undefined *local_138 [2];
  undefined *local_128;
  undefined **local_120;
  basic_iostream<char,struct_std::char_traits<char>_> local_118 [16];
  longlong *local_108;
  longlong *local_100;
  longlong *local_e8;
  ulonglong *local_e0;
  int *local_d0 [3];
  ulonglong local_b8;
  uint local_b0;
  basic_ios<char,struct_std::char_traits<char>_> local_a0 [104];
  undefined8 local_38;
  longlong local_30;
  
  local_38 = 0xfffffffffffffffe;
  local_154 = 0;
  iVar1 = (param_3 % 0xe10) / 0x3c;
  iVar7 = (param_3 % 0xe10) % 0x3c;
  local_138[0] = &DAT_18006b920;
  local_128 = &DAT_18006b8d0;
  local_30 = param_2;
  std::basic_ios<char,struct_std::char_traits<char>_>::
  basic_ios<char,struct_std::char_traits<char>_>(local_a0);
  local_154 = 2;
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  basic_iostream<char,struct_std::char_traits<char>_>
            ((basic_iostream<char,struct_std::char_traits<char>_> *)local_138,
             (basic_streambuf<char,struct_std::char_traits<char>_> *)&local_120);
  *(undefined ***)((longlong)local_138 + (longlong)*(int *)(local_138[0] + 4)) =
       std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
       vftable;
  *(int *)((longlong)&iStack_13c + (longlong)*(int *)(local_138[0] + 4)) =
       *(int *)(local_138[0] + 4) + -0x98;
  local_150[0] = (basic_ios<char,struct_std::char_traits<char>_> *)&local_120;
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  basic_streambuf<char,struct_std::char_traits<char>_>
            ((basic_streambuf<char,struct_std::char_traits<char>_> *)&local_120);
  local_120 = std::basic_stringbuf<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              vftable;
  local_b8 = 0;
  local_b0 = 0;
  if (0 < param_3 / 0xe10) {
    *(undefined1 *)((longlong)local_d0 + (longlong)*(int *)(local_128 + 4)) = 0x30;
    puVar2 = (undefined8 *)std::setw((__int64)local_150);
    (*(code *)*puVar2)((longlong)&local_128 + (longlong)*(int *)(local_128 + 4),puVar2[1]);
    pbVar3 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,struct_std::char_traits<char>_> *)&local_128,
                        param_3 / 0xe10);
    FUN_18002d780(pbVar3,"h");
  }
  if (0 < iVar1) {
    *(undefined1 *)((longlong)local_d0 + (longlong)*(int *)(local_128 + 4)) = 0x30;
    puVar2 = (undefined8 *)std::setw((__int64)local_150);
    (*(code *)*puVar2)((longlong)&local_128 + (longlong)*(int *)(local_128 + 4),puVar2[1]);
    pbVar3 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,struct_std::char_traits<char>_> *)&local_128,iVar1);
    FUN_18002d780(pbVar3,"m");
  }
  if (0 < iVar7) {
    *(undefined1 *)((longlong)local_d0 + (longlong)*(int *)(local_128 + 4)) = 0x30;
    puVar2 = (undefined8 *)std::setw((__int64)local_150);
    (*(code *)*puVar2)((longlong)&local_128 + (longlong)*(int *)(local_128 + 4),puVar2[1]);
    pbVar3 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,struct_std::char_traits<char>_> *)&local_128,iVar7);
    FUN_18002d780(pbVar3,"s");
  }
  lVar5 = param_2;
  FUN_180001780(param_2);
  puVar4 = (undefined1 *)FUN_1800016b0(lVar5);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0xf;
  local_158[0] = 0;
  FUN_180001300(puVar4,local_158);
  local_154 = 10;
  if (((local_b0 & 2) == 0) && (uVar8 = *local_e0, uVar8 != 0)) {
    pvVar6 = (void *)*local_100;
    if (uVar8 < local_b8) {
      uVar8 = local_b8;
    }
    uVar8 = uVar8 - (longlong)pvVar6;
  }
  else {
    if (((local_b0 & 4) != 0) || (*local_e8 == 0)) goto LAB_18002b9ed;
    pvVar6 = (void *)*local_108;
    uVar8 = ((longlong)*local_d0[0] - (longlong)pvVar6) + *local_e8;
  }
  FUN_1800071e0(param_2,pvVar6,uVar8);
LAB_18002b9ed:
  local_154 = 3;
  local_150[0] = local_a0;
  *(undefined ***)((longlong)local_138 + (longlong)*(int *)(local_138[0] + 4)) =
       std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
       vftable;
  *(int *)((longlong)&iStack_13c + (longlong)*(int *)(local_138[0] + 4)) =
       *(int *)(local_138[0] + 4) + -0x98;
  FUN_18000a5d0((basic_streambuf<char,struct_std::char_traits<char>_> *)&local_120);
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  ~basic_iostream<char,struct_std::char_traits<char>_>(local_118);
  std::basic_ios<char,struct_std::char_traits<char>_>::
  ~basic_ios<char,struct_std::char_traits<char>_>(local_a0);
  return param_2;
}

