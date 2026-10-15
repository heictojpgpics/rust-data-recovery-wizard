// Function: FUN_1800064a0
// Address: 1800064a0
// Size: 91 bytes


void FUN_1800064a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18002be40(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = std::_Ref_count<class_CMFTInfo>::vftable;
    puVar1[2] = param_2;
  }
  *param_1 = param_2;
  param_1[1] = puVar1;
  return;
}

