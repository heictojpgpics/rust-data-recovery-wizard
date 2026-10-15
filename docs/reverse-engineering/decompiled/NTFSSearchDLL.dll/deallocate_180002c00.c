// Function: deallocate
// Address: 180002c00
// Size: 66 bytes


/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_Parallelism_allocator<unsigned __int64>::deallocate(unsigned __int64
   * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct CHN * __ptr64>::deallocate(struct CHN * __ptr64 *
   __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<8,class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > >(class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const ,struct
   TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct
   `void __cdecl phmap::container_internal::Deallocate<8,class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
     16 names - too many to list
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 8)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}

