// Function: Unwind@180060280
// Address: 180060280
// Size: 46 bytes


void Unwind_180060280(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,struct_std::char_traits<char>_>::
    ~basic_ios<char,struct_std::char_traits<char>_>
              ((basic_ios<char,struct_std::char_traits<char>_> *)
               (*(longlong *)(param_2 + 0x70) + 0xb0));
  }
  return;
}

