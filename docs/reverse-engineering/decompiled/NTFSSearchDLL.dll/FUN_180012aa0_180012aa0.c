// Function: FUN_180012aa0
// Address: 180012aa0
// Size: 119 bytes


ulonglong * FUN_180012aa0(ulonglong *param_1,ulonglong param_2,uint *param_3)

{
  ulonglong uVar1;
  uint *puVar2;
  ulonglong *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar3 = param_1;
  uVar1 = FUN_180012b20(param_1,param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_1;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      puVar2 = (uint *)FUN_180001100(puVar3,uVar1);
      puVar3 = (ulonglong *)(ulonglong)*param_3;
      *puVar2 = *param_3;
      uVar1 = uVar1 + 4;
    }
    param_1[1] = uVar1;
  }
  return param_1;
}

