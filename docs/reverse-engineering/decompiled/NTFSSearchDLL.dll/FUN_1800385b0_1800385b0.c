// Function: FUN_1800385b0
// Address: 1800385b0
// Size: 89 bytes


longlong FUN_1800385b0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_res10;
  longlong *local_res18;
  
  plVar1 = (longlong *)FUN_18002be40(0x28);
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_2 == 0) {
    local_res10 = (longlong)plVar1;
    local_res18 = plVar1;
  }
  *plVar1 = local_res10;
  plVar1[1] = (longlong)local_res18;
  return (longlong)plVar1;
}

