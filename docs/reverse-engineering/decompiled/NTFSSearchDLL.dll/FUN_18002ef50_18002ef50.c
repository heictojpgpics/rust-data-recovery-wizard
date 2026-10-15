// Function: FUN_18002ef50
// Address: 18002ef50
// Size: 88 bytes


void FUN_18002ef50(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [8];
  undefined2 *local_10;
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_18[1] = local_18[0];
  local_10 = (undefined2 *)FUN_18002d070(param_2);
  FUN_18002eed0(param_1,local_10);
  return;
}

