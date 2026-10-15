// Function: FUN_180022880
// Address: 180022880
// Size: 157 bytes


longlong FUN_180022880(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1800234c0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  lVar2 = FUN_1800012e0(param_1,lVar1 + 0x20);
  FUN_180007060(lVar2,param_2);
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x20) = *param_3;
  *(undefined8 *)(lVar2 + 0x28) = param_3[1];
  *(undefined8 *)(lVar2 + 0x30) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return lVar1;
}

