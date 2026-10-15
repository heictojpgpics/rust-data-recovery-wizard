// Function: FUN_18002eae0
// Address: 18002eae0
// Size: 153 bytes


longlong * FUN_18002eae0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  plVar1 = (longlong *)FUN_18002d070(param_2);
  if (param_1 != plVar1) {
    FUN_180019de0(param_1);
    uVar2 = FUN_180002680(param_2);
    FUN_18002ee00(param_1,uVar2);
    puVar4 = local_28;
    for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_28[1] = local_28[0];
    local_20 = FUN_18002d070(param_2);
    FUN_18002ef50(param_1,local_20);
  }
  return param_1;
}

