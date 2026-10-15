// Function: FUN_1800013d0
// Address: 1800013d0
// Size: 101 bytes


undefined8 * FUN_1800013d0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = IQuickFileSystemSearchController::vftable;
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 6);
    param_1[0xd] = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

