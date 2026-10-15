// Function: FUN_18005a2c0
// Address: 18005a2c0
// Size: 113 bytes


undefined8 * FUN_18005a2c0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  if (param_2 == 0) {
    param_2 = param_1[1];
  }
  lVar1 = (**(code **)(*param_1 + 0x30))();
  if (lVar1 == 0) {
    pvVar2 = (void *)FUN_1800591e0((uint *)(param_1 + 3));
  }
  else {
    pvVar2 = (void *)0x0;
  }
  puVar3 = FUN_18005c970(param_2,param_2 + 0x208);
  FUN_180059060((uint *)(puVar3 + 3),pvVar2);
  *(char *)(puVar3 + 0xd) = (char)param_1[0xd];
  return puVar3;
}

