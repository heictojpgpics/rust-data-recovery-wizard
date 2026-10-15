// Function: FUN_18002f7c0
// Address: 18002f7c0
// Size: 97 bytes


undefined8 * FUN_18002f7c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  uVar1 = FUN_180002680(param_3);
  pvVar2 = (void *)FUN_18002f830(param_1,uVar1);
  FUN_18002f8c0(param_1,param_2,'\0',(longlong)pvVar2 + 0x20,pvVar2);
  return param_2;
}

