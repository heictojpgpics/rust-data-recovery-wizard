// Function: FUN_180042c30
// Address: 180042c30
// Size: 113 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180042c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = DAT_180117f10;
  FUN_180042cd0(param_1,(longlong *)DAT_180117f10[1],param_3,param_4);
  DAT_180117f10[1] = (longlong)plVar1;
  *DAT_180117f10 = (longlong)plVar1;
  DAT_180117f10[2] = (longlong)plVar1;
  _DAT_180117f18 = 0;
  free(DAT_180117f10);
  return;
}

