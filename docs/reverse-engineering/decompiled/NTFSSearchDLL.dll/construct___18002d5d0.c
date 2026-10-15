// Function: construct<>
// Address: 18002d5d0
// Size: 65 bytes


/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<char>
   >::construct<char * __ptr64,char * __ptr64 const & __ptr64>(class std::allocator<char> &
   __ptr64,char * __ptr64 * __ptr64 const,char * __ptr64 const & __ptr64)
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<unsigned short>
   >::construct<unsigned short * __ptr64,unsigned short * __ptr64 const & __ptr64>(class
   std::allocator<unsigned short> & __ptr64,unsigned short * __ptr64 * __ptr64 const,unsigned short
   * __ptr64 const & __ptr64)
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<wchar_t>
   >::construct<wchar_t * __ptr64,wchar_t * __ptr64 const & __ptr64>(class std::allocator<wchar_t> &
   __ptr64,wchar_t * __ptr64 * __ptr64 const,wchar_t * __ptr64 const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void construct<>(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_180001100(8,param_2);
  puVar2 = (undefined8 *)FUN_18002d070(param_3);
  *puVar1 = *puVar2;
  return;
}

