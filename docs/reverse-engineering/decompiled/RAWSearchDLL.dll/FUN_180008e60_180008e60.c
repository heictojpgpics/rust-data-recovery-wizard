// Function: FUN_180008e60
// Address: 180008e60
// Size: 214 bytes


fpos_t * FUN_180008e60(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,fpos_t *param_2
                      ,longlong param_3,int param_4)

{
  fpos_t fVar1;
  char cVar2;
  int iVar3;
  fpos_t local_res8;
  
  if ((((basic_streambuf<char,struct_std::char_traits<char>_> *)**(longlong **)(param_1 + 0x38) ==
        param_1 + 0x70) && (param_4 == 1)) && (*(longlong *)(param_1 + 0x68) == 0)) {
    param_3 = param_3 + -1;
  }
  if ((((*(longlong *)(param_1 + 0x80) != 0) && (cVar2 = FUN_180009b00(param_1), cVar2 != '\0')) &&
      (((param_3 == 0 && (param_4 == 1)) ||
       (iVar3 = _fseeki64(*(FILE **)(param_1 + 0x80),param_3,param_4), iVar3 == 0)))) &&
     (iVar3 = fgetpos(*(FILE **)(param_1 + 0x80),&local_res8), iVar3 == 0)) {
    std::basic_filebuf<char,struct_std::char_traits<char>_>::_Reset_back
              ((basic_filebuf<char,struct_std::char_traits<char>_> *)param_1);
    fVar1 = *(fpos_t *)(param_1 + 0x74);
    *param_2 = local_res8;
    param_2[1] = 0;
    param_2[2] = fVar1;
    return param_2;
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

