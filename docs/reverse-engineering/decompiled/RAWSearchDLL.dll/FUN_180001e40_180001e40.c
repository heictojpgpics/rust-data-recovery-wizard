// Function: FUN_180001e40
// Address: 180001e40
// Size: 14 bytes


ulonglong * FUN_180001e40(ulonglong *param_1,ulonglong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}

