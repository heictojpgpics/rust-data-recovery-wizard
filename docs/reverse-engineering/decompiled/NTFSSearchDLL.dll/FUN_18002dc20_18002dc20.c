// Function: FUN_18002dc20
// Address: 18002dc20
// Size: 210 bytes


void FUN_18002dc20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_18002da50(param_1);
  local_38 = *(undefined8 **)*puVar2;
  puVar2 = (undefined8 *)FUN_18002da50(param_1);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_18002da50(param_1);
  *(undefined8 *)*puVar2 = uVar1;
  puVar2 = (undefined8 *)FUN_18002da50(param_1);
  uVar1 = *puVar2;
  plVar3 = (longlong *)FUN_18002da50(param_1);
  *(undefined8 *)(*plVar3 + 8) = uVar1;
  puVar2 = (undefined8 *)FUN_18002dd40(param_1);
  *puVar2 = 0;
  while( true ) {
    plVar3 = (longlong *)FUN_18002da50(param_1);
    if (local_38 == (undefined8 *)*plVar3) break;
    puVar2 = (undefined8 *)*local_38;
    FUN_18002dd80(param_1,local_38);
    local_38 = puVar2;
  }
  return;
}

