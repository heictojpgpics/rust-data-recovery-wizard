// Function: FUN_180009d00
// Address: 180009d00
// Size: 509 bytes


ulonglong FUN_180009d00(undefined8 *param_1,uint *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  basic_istream<char,struct_std::char_traits<char>_> *pbVar4;
  ulonglong uVar5;
  uint uVar6;
  void *_Dst;
  uint local_res8 [2];
  undefined8 local_120;
  undefined *local_118 [2];
  undefined **local_108;
  basic_istream<char,struct_std::char_traits<char>_> local_100 [16];
  undefined8 *local_f0;
  undefined8 *local_d0;
  int *local_b8;
  longlong local_a0;
  undefined4 local_98;
  basic_ios<char,struct_std::char_traits<char>_> local_88 [96];
  
  local_120 = 0xfffffffffffffffe;
  local_118[0] = &DAT_180066b68;
  std::basic_ios<char,struct_std::char_traits<char>_>::
  basic_ios<char,struct_std::char_traits<char>_>(local_88);
  std::basic_istream<char,struct_std::char_traits<char>_>::
  basic_istream<char,struct_std::char_traits<char>_>
            ((basic_istream<char,struct_std::char_traits<char>_> *)local_118,
             (basic_streambuf<char,struct_std::char_traits<char>_> *)&local_108,false);
  *(undefined ***)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4)) =
       std::basic_istringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
       vftable;
  *(int *)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4) + -4) =
       *(int *)(local_118[0] + 4) + -0x90;
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  basic_streambuf<char,struct_std::char_traits<char>_>
            ((basic_streambuf<char,struct_std::char_traits<char>_> *)&local_108);
  local_108 = std::basic_stringbuf<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              vftable;
  uVar2 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  local_98 = 2;
  if (0x7fffffff < uVar2) {
    std::_Xbad_alloc();
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  if (uVar2 == 0) {
    local_a0 = 0;
  }
  else {
    if (uVar2 < 0x1000) {
      _Dst = (void *)FUN_1800020c0(uVar2);
    }
    else {
      uVar5 = uVar2 + 0x27;
      if (uVar5 <= uVar2) {
        uVar5 = 0xffffffffffffffff;
      }
      lVar3 = FUN_1800020c0(uVar5);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar3;
    }
    memcpy(_Dst,param_1,uVar2);
    local_a0 = uVar2 + (longlong)_Dst;
    *local_f0 = _Dst;
    *local_d0 = _Dst;
    *local_b8 = (int)local_a0 - (int)_Dst;
    local_98 = 3;
  }
  pbVar4 = std::basic_istream<char,struct_std::char_traits<char>_>::operator>>
                     ((basic_istream<char,struct_std::char_traits<char>_> *)local_118,
                      (_func_ios_base_ptr_ios_base_ptr *)&LAB_1800023c0);
  pbVar4 = std::basic_istream<char,struct_std::char_traits<char>_>::operator>>
                     (pbVar4,(int *)local_res8);
  if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) != 0) ||
     (uVar6 = local_res8[0], ((byte)local_100[(longlong)*(int *)(local_118[0] + 4) + -8] & 1) == 0))
  {
    uVar6 = *param_2;
  }
  *(undefined ***)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4)) =
       std::basic_istringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
       vftable;
  *(int *)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4) + -4) =
       *(int *)(local_118[0] + 4) + -0x90;
  FUN_18000a5d0((basic_streambuf<char,struct_std::char_traits<char>_> *)&local_108);
  std::basic_istream<char,struct_std::char_traits<char>_>::
  ~basic_istream<char,struct_std::char_traits<char>_>(local_100);
  std::basic_ios<char,struct_std::char_traits<char>_>::
  ~basic_ios<char,struct_std::char_traits<char>_>(local_88);
  return (ulonglong)uVar6;
}

