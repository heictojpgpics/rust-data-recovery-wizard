// Function: FUN_180058340
// Address: 180058340
// Size: 74 bytes


longlong FUN_180058340(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_180058750(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  uVar2 = FUN_1800016b0(param_2);
  FUN_180006fa0(lVar1 + 0x20,uVar2);
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_2 + 0x20);
  return lVar1;
}

