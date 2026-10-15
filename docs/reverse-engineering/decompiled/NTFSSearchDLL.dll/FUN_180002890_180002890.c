// Function: FUN_180002890
// Address: 180002890
// Size: 106 bytes


void FUN_180002890(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
        param_2[7] = 0;
        return;
      }
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar1;
      param_2[7] = 0;
    }
  }
  return;
}

