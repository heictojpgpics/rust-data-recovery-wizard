// Function: FUN_180007850
// Address: 180007850
// Size: 60 bytes


ulonglong FUN_180007850(undefined8 *param_1,undefined8 *param_2)

{
  size_t *psVar1;
  int iVar2;
  undefined4 extraout_var;
  size_t sVar3;
  
  sVar3 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  psVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*psVar1 == sVar3) {
    iVar2 = memcmp(param_1,param_2,*psVar1);
    sVar3 = CONCAT44(extraout_var,iVar2);
    if (iVar2 == 0) {
      return CONCAT71((int7)(sVar3 >> 8),1);
    }
  }
  return sVar3 & 0xffffffffffffff00;
}

