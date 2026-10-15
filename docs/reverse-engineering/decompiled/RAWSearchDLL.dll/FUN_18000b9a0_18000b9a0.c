// Function: FUN_18000b9a0
// Address: 18000b9a0
// Size: 126 bytes


void FUN_18000b9a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = ICompleteFileSystemSearchController::vftable;
  plVar1 = (longlong *)param_1[0x16];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0xf,param_3,param_4,0xfffffffffffffffe)
    ;
    param_1[0x16] = 0;
  }
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 6);
    param_1[0xd] = 0;
  }
  return;
}

