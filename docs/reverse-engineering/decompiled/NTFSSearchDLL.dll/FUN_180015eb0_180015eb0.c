// Function: FUN_180015eb0
// Address: 180015eb0
// Size: 353 bytes


undefined8 * FUN_180015eb0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = CNTFSQuickSearchBase::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar3 = param_1 + 4;
  FUN_180039390(puVar3,0x200);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  lVar2 = FUN_180012c00(puVar3,0,0);
  param_1[0x39] = lVar2;
  FUN_18001b7b0((undefined1 *)(param_1 + 0x3b));
  *(undefined2 *)(param_1 + 0x4b) = 1;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  lVar2 = FUN_180012fd0();
  param_1[0x4f] = lVar2;
  *(undefined1 *)(param_1 + 0x51) = 0;
  puVar3 = param_1 + 0x52;
  FUN_180018570(puVar3);
  plVar1 = param_1 + 99;
  *plVar1 = 0;
  param_1[100] = 0;
  lVar2 = FUN_180012fd0();
  *plVar1 = lVar2;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  lVar2 = FUN_180012c00(puVar3,0,0);
  param_1[0x65] = lVar2;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  lVar2 = FUN_180012e40(puVar3,0,0);
  param_1[0x67] = lVar2;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 8;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined2 *)(param_1 + 0x70) = 0x101;
  param_1[0x4a] = 0;
  FUN_180011140(plVar1);
  return param_1;
}

