// Function: FUN_180031a80
// Address: 180031a80
// Size: 81 bytes


undefined8 * FUN_180031a80(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 local_res8 [4];
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  local_res8[0] = 0;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,local_res8);
    *param_2 = *puVar2;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

