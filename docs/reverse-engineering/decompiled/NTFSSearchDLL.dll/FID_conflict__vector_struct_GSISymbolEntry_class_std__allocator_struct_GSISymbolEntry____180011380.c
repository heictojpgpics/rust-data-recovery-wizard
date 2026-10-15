// Function: FID_conflict:~vector<struct_GSISymbolEntry,class_std::allocator<struct_GSISymbolEntry>_>
// Address: 180011380
// Size: 122 bytes


/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::vector<struct GSISymbolEntry,class std::allocator<struct GSISymbolEntry>
   >::~vector<struct GSISymbolEntry,class std::allocator<struct GSISymbolEntry> >(void) __ptr64
    private: void __cdecl std::vector<struct GSISymbolEntry,class std::allocator<struct
   GSISymbolEntry> >::_Tidy(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<struct_GSISymbolEntry,class_std::allocator<struct_GSISymbolEntry>_>
               (longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar1) / 0x28) * 0x28)) &&
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

