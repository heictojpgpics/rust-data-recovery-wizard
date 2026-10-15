// Function: FUN_180001370
// Address: 180001370
// Size: 55 bytes


void FUN_180001370(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = IQuickFileSystemSearchController::vftable;
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 6);
    param_1[0xd] = 0;
  }
  return;
}

