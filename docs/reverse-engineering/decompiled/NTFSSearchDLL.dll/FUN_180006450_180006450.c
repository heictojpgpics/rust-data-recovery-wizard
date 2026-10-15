// Function: FUN_180006450
// Address: 180006450
// Size: 74 bytes


void FUN_180006450(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_18002be40(0x20);
  if (param_2 == (longlong *)0x0) {
    param_2 = plVar1;
    param_3 = plVar1;
  }
  *plVar1 = (longlong)param_2;
  plVar1[1] = (longlong)param_3;
  return;
}

