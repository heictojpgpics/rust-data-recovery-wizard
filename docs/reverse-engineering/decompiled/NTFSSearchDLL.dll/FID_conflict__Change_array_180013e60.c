// Function: FID_conflict:_Change_array
// Address: 180013e60
// Size: 135 bytes


/* Library Function - Multiple Matches With Different Base Names
    private: void __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN *
   __ptr64> >::_Change_array(struct CHN * __ptr64 * __ptr64 const,unsigned __int64,unsigned __int64)
   __ptr64
    private: void __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::_Change_array(unsigned __int64 * __ptr64 const,unsigned __int64,unsigned __int64)
   __ptr64
    private: void __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::_Change_array(unsigned __int64 * __ptr64 const,unsigned __int64,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void FID_conflict__Change_array
               (longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}

