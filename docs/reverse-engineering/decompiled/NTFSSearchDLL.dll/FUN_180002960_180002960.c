// Function: FUN_180002960
// Address: 180002960
// Size: 14 bytes


ulonglong * FUN_180002960(ulonglong *param_1,ulonglong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}

