// Function: FUN_18002e160
// Address: 18002e160
// Size: 114 bytes


void FUN_18002e160(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_18002d020(param_1);
  plVar2 = (longlong *)FUN_18002dd40(param_1);
  if ((lVar1 - *plVar2) - 1U < param_2) {
    std::_Xlength_error("list<T> too long");
  }
  plVar2 = (longlong *)FUN_18002dd40(param_1);
  *plVar2 = *plVar2 + param_2;
  return;
}

