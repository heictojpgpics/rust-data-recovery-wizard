// Function: eq_int_type
// Address: 18002f670
// Size: 59 bytes


/* Library Function - Multiple Matches With Same Base Name
    public: static bool __cdecl std::_WChar_traits<unsigned short>::eq_int_type(unsigned short const
   & __ptr64,unsigned short const & __ptr64)
    public: static bool __cdecl std::_WChar_traits<wchar_t>::eq_int_type(unsigned short const &
   __ptr64,unsigned short const & __ptr64)
    public: static bool __cdecl std::char_traits<unsigned short>::eq_int_type(unsigned short const &
   __ptr64,unsigned short const & __ptr64)
    public: static bool __cdecl std::char_traits<wchar_t>::eq_int_type(unsigned short const &
   __ptr64,unsigned short const & __ptr64)
   
   Library: Visual Studio */

bool eq_int_type(short *param_1,short *param_2)

{
  return *param_1 == *param_2;
}

