// Function: FUN_18000fad0
// Address: 18000fad0
// Size: 125 bytes


longlong FUN_18000fad0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_1800101b0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  lVar3 = lVar1 + 0x20;
  uVar2 = FUN_1800016b0(lVar3);
  lVar3 = FUN_1800012e0(lVar3,uVar2);
  FUN_18000f510(lVar3,(undefined8 *)*param_3);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  return lVar1;
}

