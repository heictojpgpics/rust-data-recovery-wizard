// Function: FUN_180042ef0
// Address: 180042ef0
// Size: 150 bytes


longlong *
FUN_180042ef0(int *param_1,int param_2,longlong param_3,int param_4,longlong param_5,
             longlong *param_6,undefined8 *param_7,byte param_8)

{
  longlong *plVar1;
  undefined2 local_res20;
  
  plVar1 = FUN_180042a80(param_1,param_2,param_5,param_4,param_6);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    local_res20 = (short)param_4;
    FUN_180042420(plVar1,param_3,local_res20,param_5,param_7,param_8);
    FUN_180042320(plVar1,param_3);
  }
  return plVar1;
}

