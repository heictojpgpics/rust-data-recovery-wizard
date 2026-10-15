// Function: FUN_18005abe0
// Address: 18005abe0
// Size: 167 bytes


undefined8 *
FUN_18005abe0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  *param_1 = tinyxml2::XMLElement::vftable;
  puVar3 = (undefined8 *)param_1[0xe];
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar3[8];
    plVar2 = (longlong *)puVar3[9];
    (**(code **)*puVar3)(puVar3,0);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    param_1[0xe] = puVar1;
    puVar3 = puVar1;
  }
  FUN_180059990(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

