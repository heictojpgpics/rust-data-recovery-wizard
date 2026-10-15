// Function: FUN_180024fa0
// Address: 180024fa0
// Size: 81 bytes


void FUN_180024fa0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 9) {
    FUN_180001630(plVar2 + 4);
    FUN_180001630(plVar2);
  }
  return;
}

