// Function: FUN_180024d70
// Address: 180024d70
// Size: 166 bytes


void FUN_180024d70(char *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong extraout_RAX;
  longlong lVar3;
  char *pcVar4;
  
  pcVar4 = param_1;
  for (; param_3 != param_4; param_3 = (undefined8 *)*param_3) {
    plVar1 = *(longlong **)(param_2 + 8);
    lVar2 = FUN_180014360(pcVar4,param_2,(longlong)plVar1,param_3 + 2);
    lVar3 = *(longlong *)(param_1 + 8);
    pcVar4 = (char *)(0x666666666666665 - lVar3);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "list<T> too long";
      std::_Xlength_error("list<T> too long");
      lVar3 = extraout_RAX;
    }
    *(longlong *)(param_1 + 8) = lVar3 + 1;
    *(longlong *)(param_2 + 8) = lVar2;
    *plVar1 = lVar2;
  }
  return;
}

