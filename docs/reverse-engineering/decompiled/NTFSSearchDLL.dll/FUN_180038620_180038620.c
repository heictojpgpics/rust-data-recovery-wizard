// Function: FUN_180038620
// Address: 180038620
// Size: 55 bytes


void FUN_180038620(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1800385b0(param_1,param_2,param_3);
  uVar1 = param_4[1];
  *(undefined8 *)(lVar2 + 0x10) = *param_4;
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  *(undefined8 *)(lVar2 + 0x20) = param_4[2];
  return;
}

