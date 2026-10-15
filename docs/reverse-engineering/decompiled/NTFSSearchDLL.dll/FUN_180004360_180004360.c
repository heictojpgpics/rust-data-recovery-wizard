// Function: FUN_180004360
// Address: 180004360
// Size: 120 bytes


longlong FUN_180004360(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)plVar1[1];
  lVar4 = FUN_1800063a0(param_1,plVar1,plVar2,param_2);
  if (param_1[1] == 0x7fffffffffffffe) {
    std::_Xlength_error("list<T> too long");
    pcVar3 = (code *)swi(3);
    lVar4 = (*pcVar3)();
    return lVar4;
  }
  param_1[1] = param_1[1] + 1;
  plVar1[1] = lVar4;
  *plVar2 = lVar4;
  return *(longlong *)(*param_1 + 8) + 0x10;
}

