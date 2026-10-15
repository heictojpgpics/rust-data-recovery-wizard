// Function: FUN_180001470
// Address: 180001470
// Size: 45 bytes


void FUN_180001470(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}

