// Function: Unwind@180062730
// Address: 180062730
// Size: 46 bytes


void Unwind_180062730(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 2) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffd;
    std::basic_ios<char,struct_std::char_traits<char>_>::
    ~basic_ios<char,struct_std::char_traits<char>_>
              ((basic_ios<char,struct_std::char_traits<char>_> *)(param_2 + 0xd8));
  }
  return;
}

