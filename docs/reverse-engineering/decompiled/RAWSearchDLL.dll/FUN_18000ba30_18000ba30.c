// Function: FUN_18000ba30
// Address: 18000ba30
// Size: 67 bytes


void FUN_18000ba30(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  FUN_18000dbc0((longlong *)(param_1 + 0x78),(longlong)param_2);
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  return;
}

