// Function: FUN_18002f0b0
// Address: 18002f0b0
// Size: 121 bytes


void FUN_18002f0b0(longlong *param_1,undefined8 param_2,ulonglong param_3,__uint64 param_4)

{
  _String_val<struct_std::_Simple_types<char>_> *this;
  __uint64 _Var1;
  undefined8 *puVar2;
  
  this = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180002680(param_2);
  FUN_18002edd0((longlong)this,param_3);
  _Var1 = std::_String_val<struct_std::_Simple_types<char>_>::_Clamp_suffix_size
                    (this,param_3,param_4);
  puVar2 = FUN_180019e90((undefined8 *)this);
  FUN_180019ee0(param_1,(void *)((longlong)puVar2 + param_3 * 2),_Var1);
  return;
}

