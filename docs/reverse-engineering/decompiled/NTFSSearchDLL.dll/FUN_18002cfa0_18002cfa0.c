// Function: FUN_18002cfa0
// Address: 18002cfa0
// Size: 114 bytes


void FUN_18002cfa0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_18002d020(param_1);
  plVar2 = (longlong *)FUN_180002670(param_1);
  if ((lVar1 - *plVar2) - 1U < param_2) {
    std::_Xlength_error("list<T> too long");
  }
  plVar2 = (longlong *)FUN_180002670(param_1);
  *plVar2 = *plVar2 + param_2;
  return;
}

