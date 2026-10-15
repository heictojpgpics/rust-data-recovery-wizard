// Function: FUN_180006400
// Address: 180006400
// Size: 57 bytes


void FUN_180006400(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_180006450(param_1,param_2,param_3);
  *(undefined8 *)(lVar1 + 0x10) = *param_4;
  *(undefined8 *)(lVar1 + 0x18) = *param_5;
  return;
}

