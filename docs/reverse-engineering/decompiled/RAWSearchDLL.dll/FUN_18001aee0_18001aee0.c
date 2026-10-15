// Function: FUN_18001aee0
// Address: 18001aee0
// Size: 42 bytes


undefined8 FUN_18001aee0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  if ((*param_2 == s_SQLite_format_3_180067eb0._0_8_) &&
     (param_2[1] == s_SQLite_format_3_180067eb0._8_8_)) {
    *(undefined4 *)(param_3 + 0x18) = 0x73;
    return 1;
  }
  return 0;
}

