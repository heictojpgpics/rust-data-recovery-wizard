// Function: FUN_1800079d0
// Address: 1800079d0
// Size: 94 bytes


void FUN_1800079d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = ICompleteFileSystemSearchController::vftable;
  plVar1 = (longlong *)param_1[0x16];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0xf,param_3,param_4,0xfffffffffffffffe)
    ;
    param_1[0x16] = 0;
  }
  FUN_180001470((longlong)param_1);
  return;
}

