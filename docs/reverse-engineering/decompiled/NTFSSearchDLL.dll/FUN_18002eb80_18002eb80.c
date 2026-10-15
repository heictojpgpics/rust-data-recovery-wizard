// Function: FUN_18002eb80
// Address: 18002eb80
// Size: 133 bytes


longlong FUN_18002eb80(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_28 [8];
  undefined2 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar1 = FUN_180002680(param_2);
  FUN_18002d070(uVar1);
  FUN_18002c500(param_1);
  puVar3 = local_28;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_28[1] = local_28[0];
  local_20 = (undefined2 *)FUN_18002d070(param_2);
  FUN_18002eed0(param_1,local_20);
  return param_1;
}

