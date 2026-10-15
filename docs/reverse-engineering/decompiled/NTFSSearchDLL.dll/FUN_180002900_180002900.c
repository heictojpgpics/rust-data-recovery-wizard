// Function: FUN_180002900
// Address: 180002900
// Size: 74 bytes


void FUN_180002900(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_18002be40(0xb8);
  if (param_2 == (longlong *)0x0) {
    param_2 = plVar1;
    param_3 = plVar1;
  }
  *plVar1 = (longlong)param_2;
  plVar1[1] = (longlong)param_3;
  return;
}

