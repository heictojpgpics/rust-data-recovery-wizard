// Function: FUN_180022590
// Address: 180022590
// Size: 118 bytes


longlong FUN_180022590(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_180023420(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  lVar3 = FUN_1800012e0(param_1,lVar2 + 0x20);
  FUN_180007060(lVar3,param_2);
  uVar1 = param_3[1];
  *(undefined8 *)(lVar3 + 0x20) = *param_3;
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  return lVar2;
}

