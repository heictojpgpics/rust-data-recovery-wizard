// Function: FUN_180008c40
// Address: 180008c40
// Size: 70 bytes


undefined8 FUN_180008c40(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    iVar1 = FUN_1800095f0(param_1,-1);
    if (iVar1 != -1) {
      iVar1 = fflush(*(FILE **)(param_1 + 0x80));
      if (iVar1 < 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

