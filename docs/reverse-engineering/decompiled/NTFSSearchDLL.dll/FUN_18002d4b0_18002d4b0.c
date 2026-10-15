// Function: FUN_18002d4b0
// Address: 18002d4b0
// Size: 215 bytes


void FUN_18002d4b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_18002d070(param_3);
  if (param_1 != lVar2) {
    FUN_18002cfa0(param_1,param_6);
    plVar3 = (longlong *)FUN_180002670(param_3);
    *plVar3 = *plVar3 - param_6;
  }
  **(longlong **)(param_4 + 8) = param_5;
  **(longlong **)(param_5 + 8) = param_2;
  **(longlong **)(param_2 + 8) = param_4;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(param_5 + 8) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_4 + 8) = uVar1;
  return;
}

