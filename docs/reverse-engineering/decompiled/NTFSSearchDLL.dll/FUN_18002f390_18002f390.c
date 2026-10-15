// Function: FUN_18002f390
// Address: 18002f390
// Size: 164 bytes


undefined8 * FUN_18002f390(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *local_28;
  undefined8 *local_18;
  
  plVar2 = (longlong *)FUN_180002680(param_1);
  local_28 = (undefined8 *)FUN_180011d90(plVar2);
  local_28 = (undefined8 *)*local_28;
  local_18 = (undefined8 *)*plVar2;
  while (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar2 = (longlong *)FUN_180014460(param_1,(longlong)local_28);
    cVar1 = FUN_18002f610(param_1,param_2,plVar2);
    if (cVar1 == '\0') {
      local_28 = (undefined8 *)local_28[2];
    }
    else {
      local_18 = local_28;
      local_28 = (undefined8 *)*local_28;
    }
  }
  return local_18;
}

