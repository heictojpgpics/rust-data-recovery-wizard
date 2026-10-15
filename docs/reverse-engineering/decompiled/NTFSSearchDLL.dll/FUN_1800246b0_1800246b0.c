// Function: FUN_1800246b0
// Address: 1800246b0
// Size: 109 bytes


void FUN_1800246b0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 8);
  lVar4 = FUN_1800143b0(param_1,lVar1,(longlong)plVar2,param_2);
  if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
    std::_Xlength_error("list<T> too long");
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1[1] = param_1[1] + 1;
  *(longlong *)(lVar1 + 8) = lVar4;
  *plVar2 = lVar4;
  return;
}

