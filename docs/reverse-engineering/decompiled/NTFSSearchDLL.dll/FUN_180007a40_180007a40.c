// Function: FUN_180007a40
// Address: 180007a40
// Size: 67 bytes


void FUN_180007a40(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  FUN_180011860((longlong *)(param_1 + 0x78),(longlong)param_2);
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  return;
}

