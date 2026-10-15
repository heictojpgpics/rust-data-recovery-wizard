// Function: FUN_180025aa0
// Address: 180025aa0
// Size: 105 bytes


longlong FUN_180025aa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_180023420(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  lVar3 = FUN_1800012e0(param_1,lVar2 + 0x20);
  FUN_180007060(lVar3,param_2);
  uVar1 = param_2[5];
  *(undefined8 *)(lVar3 + 0x20) = param_2[4];
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  return lVar2;
}

