// Function: FUN_180023ad0
// Address: 180023ad0
// Size: 162 bytes


longlong FUN_180023ad0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_2 != param_3) {
    do {
      lVar1 = FUN_1800012e0(param_1,param_4);
      FUN_180007060(lVar1,param_2);
      FUN_180007060(lVar1 + 0x20,param_2 + 4);
      param_1 = param_2[8];
      *(undefined8 *)(lVar1 + 0x40) = param_1;
      param_4 = param_4 + 0x48;
      param_2 = param_2 + 9;
    } while (param_2 != param_3);
  }
  return param_4;
}

