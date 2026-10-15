// Function: FID_conflict:~vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>
// Address: 1800119d0
// Size: 91 bytes


/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>
               (longlong *param_1)

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
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

