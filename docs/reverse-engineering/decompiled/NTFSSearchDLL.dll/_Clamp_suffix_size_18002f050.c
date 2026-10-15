// Function: _Clamp_suffix_size
// Address: 18002f050
// Size: 64 bytes


/* Library Function - Single Match
    public: unsigned __int64 __cdecl std::_String_val<struct std::_Simple_types<char>
   >::_Clamp_suffix_size(unsigned __int64,unsigned __int64)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__uint64 __thiscall
std::_String_val<struct_std::_Simple_types<char>_>::_Clamp_suffix_size
          (_String_val<struct_std::_Simple_types<char>_> *this,__uint64 param_1,__uint64 param_2)

{
  ulonglong *puVar1;
  __uint64 local_res18 [2];
  ulonglong local_18 [3];
  
  local_18[0] = *(longlong *)(this + 0x10) - param_1;
  local_res18[0] = param_2;
  puVar1 = FUN_180002960(local_res18,local_18);
  return *puVar1;
}

