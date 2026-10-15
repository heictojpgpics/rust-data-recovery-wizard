// Function: FUN_180007a90
// Address: 180007a90
// Size: 131 bytes


undefined8 *
FUN_180007a90(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

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
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

