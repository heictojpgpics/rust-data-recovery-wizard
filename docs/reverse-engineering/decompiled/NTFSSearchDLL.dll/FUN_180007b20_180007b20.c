// Function: FUN_180007b20
// Address: 180007b20
// Size: 58 bytes


void FUN_180007b20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1,param_3,param_4,0xfffffffffffffffe);
    param_1[7] = 0;
  }
  return;
}

