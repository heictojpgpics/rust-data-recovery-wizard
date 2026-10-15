// Function: FUN_180003b20
// Address: 180003b20
// Size: 109 bytes


void FUN_180003b20(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)plVar1[1];
  lVar4 = FUN_180003da0(param_1,plVar1,plVar2,param_2);
  if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
    std::_Xlength_error("list<T> too long");
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1[1] = param_1[1] + 1;
  plVar1[1] = lVar4;
  *plVar2 = lVar4;
  return;
}

