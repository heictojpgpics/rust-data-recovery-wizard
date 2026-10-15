// Function: FUN_180022170
// Address: 180022170
// Size: 124 bytes


longlong * FUN_180022170(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    FUN_1800214c0(param_1,*(longlong **)(lVar1 + 8),param_3,param_4);
    *(longlong *)(*param_1 + 8) = lVar1;
    *(longlong *)*param_1 = lVar1;
    *(longlong *)(*param_1 + 0x10) = lVar1;
    param_1[1] = 0;
    lVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = lVar1;
    lVar1 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = lVar1;
  }
  return param_1;
}

