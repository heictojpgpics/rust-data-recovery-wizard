// Function: FUN_180011400
// Address: 180011400
// Size: 138 bytes


uint FUN_180011400(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong local_res8;
  ulonglong local_res10;
  
  uVar1 = param_3[2];
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  uVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_res8 = uVar1;
  local_res10 = uVar2;
  puVar4 = FUN_180001e40(&local_res10,&local_res8);
  uVar3 = memcmp(param_2,param_3,*puVar4);
  if (uVar3 == 0) {
    if (uVar2 < uVar1) {
      return 1;
    }
    uVar3 = 0;
  }
  return uVar3 >> 0x1f;
}

