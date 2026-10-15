// Function: _Deallocate<16,0>
// Address: 180002b90
// Size: 52 bytes


/* Library Function - Single Match
    void __cdecl std::_Deallocate<16,0>(void * __ptr64,unsigned __int64)
   
   Library: Visual Studio 2019 Release */

void __cdecl std::_Deallocate<16,0>(void *param_1,__uint64 param_2)

{
  void *_Memory;
  
  _Memory = param_1;
  if ((0xfff < param_2) &&
     (_Memory = *(void **)((longlong)param_1 + -8),
     0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}

