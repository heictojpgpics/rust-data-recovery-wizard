// Function: FUN_180008c90
// Address: 180008c90
// Size: 231 bytes


basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_180008c90(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
             size_t param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  if (*(FILE **)(param_1 + 0x80) != (FILE *)0x0) {
    if ((param_2 != (char *)0x0) || (iVar2 = 4, param_3 != 0)) {
      iVar2 = 0;
    }
    iVar2 = setvbuf(*(FILE **)(param_1 + 0x80),param_2,iVar2,param_3);
    if (iVar2 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x80);
      param_1[0x7c] = (basic_streambuf<char,struct_std::char_traits<char>_>)0x1;
      param_1[0x71] = (basic_streambuf<char,struct_std::char_traits<char>_>)0x0;
      std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(param_1);
      if (lVar1 != 0) {
        local_res8 = 0;
        local_res20 = 0;
        local_18[0] = 0;
        _get_stream_buffer_pointers(lVar1,&local_res8,&local_res20,local_18);
        *(undefined8 *)(param_1 + 0x18) = local_res8;
        *(undefined8 *)(param_1 + 0x20) = local_res8;
        *(undefined8 *)(param_1 + 0x38) = local_res20;
        *(undefined8 *)(param_1 + 0x40) = local_res20;
        *(undefined8 *)(param_1 + 0x50) = local_18[0];
        *(undefined8 *)(param_1 + 0x58) = local_18[0];
      }
      *(undefined8 *)(param_1 + 0x74) = DAT_180096a78;
      *(longlong *)(param_1 + 0x80) = lVar1;
      *(undefined8 *)(param_1 + 0x68) = 0;
      return param_1;
    }
  }
  return (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0;
}

