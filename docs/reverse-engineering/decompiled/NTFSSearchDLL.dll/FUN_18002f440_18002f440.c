// Function: FUN_18002f440
// Address: 18002f440
// Size: 150 bytes


undefined8 * FUN_18002f440(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *local_18;
  undefined8 *local_10;
  
  plVar2 = (longlong *)FUN_180002680(param_1);
  local_10 = (undefined8 *)*plVar2;
  local_18 = (undefined8 *)local_10[1];
  while (*(char *)((longlong)local_18 + 0x19) == '\0') {
    plVar2 = (longlong *)FUN_180014460(param_1,(longlong)local_18);
    cVar1 = FUN_18002f610(param_1,plVar2,param_2);
    if (cVar1 == '\0') {
      local_10 = local_18;
      local_18 = (undefined8 *)*local_18;
    }
    else {
      local_18 = (undefined8 *)local_18[2];
    }
  }
  return local_10;
}

