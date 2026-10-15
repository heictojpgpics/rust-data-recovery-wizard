// Function: __scrt_is_ucrt_dll_in_use
// Address: 18005f4d0
// Size: 12 bytes


/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18008f030 != 0;
}

