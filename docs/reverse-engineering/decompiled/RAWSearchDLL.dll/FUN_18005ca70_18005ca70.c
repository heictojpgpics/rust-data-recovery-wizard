// Function: FUN_18005ca70
// Address: 18005ca70
// Size: 131 bytes


undefined8 * FUN_18005ca70(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_18005c4b0(param_2);
  puVar1[2] = 0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[0xe] = 0;
  *puVar1 = tinyxml2::XMLElement::vftable;
  puVar1[0xc] = param_2;
  FUN_18005cb00((undefined8 *)(param_1 + 0xa8),puVar1);
  return puVar1;
}

