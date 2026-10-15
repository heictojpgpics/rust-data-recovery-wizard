// Function: FUN_1800098d0
// Address: 1800098d0
// Size: 503 bytes


basic_istream<char,struct_std::char_traits<char>_> *
FUN_1800098d0(basic_istream<char,struct_std::char_traits<char>_> *param_1,char *param_2)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *this;
  bool bVar1;
  _iobuf *p_Var2;
  locale *plVar3;
  _Facet_base *this_00;
  undefined8 *puVar4;
  undefined8 local_40;
  undefined8 local_38;
  basic_streambuf<char,struct_std::char_traits<char>_> *local_30;
  undefined8 local_28;
  longlong *local_18;
  
  local_28 = 0xfffffffffffffffe;
  *(undefined **)param_1 = &DAT_180066b60;
  std::basic_ios<char,struct_std::char_traits<char>_>::
  basic_ios<char,struct_std::char_traits<char>_>
            ((basic_ios<char,struct_std::char_traits<char>_> *)(param_1 + 0xb0));
  this = (basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 0x10);
  std::basic_istream<char,struct_std::char_traits<char>_>::
  basic_istream<char,struct_std::char_traits<char>_>(param_1,this,false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_ifstream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xb0;
  local_30 = this;
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  basic_streambuf<char,struct_std::char_traits<char>_>(this);
  *(undefined ***)this = std::basic_filebuf<char,struct_std::char_traits<char>_>::vftable;
  param_1[0x8c] = (basic_istream<char,struct_std::char_traits<char>_>)0x0;
  param_1[0x81] = (basic_istream<char,struct_std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(this);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x84) = DAT_180096a78;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if ((*(longlong *)(param_1 + 0x90) != 0) ||
     (p_Var2 = std::_Fiopen(param_2,1,0x40), p_Var2 == (_iobuf *)0x0)) {
    std::basic_ios<char,struct_std::char_traits<char>_>::setstate
              ((basic_ios<char,struct_std::char_traits<char>_> *)
               (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
    return param_1;
  }
  param_1[0x8c] = (basic_istream<char,struct_std::char_traits<char>_>)0x1;
  param_1[0x81] = (basic_istream<char,struct_std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(this);
  local_40 = 0;
  local_38 = 0;
  local_30 = (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0;
  _get_stream_buffer_pointers(p_Var2,&local_40,&local_38,&local_30);
  *(undefined8 *)(param_1 + 0x28) = local_40;
  *(undefined8 *)(param_1 + 0x30) = local_40;
  *(undefined8 *)(param_1 + 0x48) = local_38;
  *(undefined8 *)(param_1 + 0x50) = local_38;
  *(basic_streambuf<char,struct_std::char_traits<char>_> **)(param_1 + 0x60) = local_30;
  *(basic_streambuf<char,struct_std::char_traits<char>_> **)(param_1 + 0x68) = local_30;
  *(_iobuf **)(param_1 + 0x90) = p_Var2;
  *(undefined8 *)(param_1 + 0x84) = DAT_180096a78;
  *(undefined8 *)(param_1 + 0x78) = 0;
  plVar3 = (locale *)std::basic_streambuf<char,struct_std::char_traits<char>_>::getloc(this);
  this_00 = FUN_180009f40(plVar3);
  bVar1 = std::codecvt_base::always_noconv((codecvt_base *)this_00);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    *(_Facet_base **)(param_1 + 0x78) = this_00;
    std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(this);
  }
  if (local_18 == (longlong *)0x0) {
    return param_1;
  }
  puVar4 = (undefined8 *)(**(code **)(*local_18 + 0x10))();
  if (puVar4 == (undefined8 *)0x0) {
    return param_1;
  }
  (**(code **)*puVar4)(puVar4,1);
  return param_1;
}

