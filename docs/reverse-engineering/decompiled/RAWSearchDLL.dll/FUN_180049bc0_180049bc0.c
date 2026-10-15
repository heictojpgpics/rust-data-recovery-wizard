// Function: FUN_180049bc0
// Address: 180049bc0
// Size: 155 bytes


void FUN_180049bc0(void *param_1,ulonglong param_2,void *param_3,int param_4)

{
  int *piVar1;
  ulonglong _Size;
  
  if (param_4 == 0) {
    return;
  }
  _Size = (ulonglong)param_4;
  if (param_1 != (void *)0x0) {
    if ((param_3 != (void *)0x0) && (_Size <= param_2)) {
      memcpy(param_1,param_3,_Size);
      return;
    }
    memset(param_1,0,param_2);
    if (param_3 != (void *)0x0) {
      if (_Size <= param_2) {
        return;
      }
      piVar1 = _errno();
      *piVar1 = 0x22;
      goto LAB_180049c44;
    }
  }
  piVar1 = _errno();
  *piVar1 = 0x16;
LAB_180049c44:
  _invalid_parameter_noinfo();
  return;
}

