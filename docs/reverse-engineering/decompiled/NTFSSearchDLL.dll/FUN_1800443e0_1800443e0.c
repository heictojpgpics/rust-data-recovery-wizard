// Function: FUN_1800443e0
// Address: 1800443e0
// Size: 163 bytes


undefined1 FUN_1800443e0(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined1 local_18;
  
  local_18 = 0;
  if (((param_4 != 0) &&
      (((param_4 == 1 || (param_4 % 2 == 0)) &&
       ((param_1 - param_3) % (longlong)(ulonglong)param_4 == 0)))) &&
     ((param_1 - param_3) / (longlong)(ulonglong)param_4 == param_2)) {
    local_18 = 1;
  }
  return local_18;
}

