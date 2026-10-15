// Function: FUN_1800026b0
// Address: 1800026b0
// Size: 14 bytes


ulonglong * FUN_1800026b0(ulonglong *param_1,ulonglong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}

