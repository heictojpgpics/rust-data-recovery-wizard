// Function: FUN_180012180
// Address: 180012180
// Size: 126 bytes


undefined8 * FUN_180012180(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = IRawFileAnalyser::vftable;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *param_1 = RawSpeed::HTMLAnalyser::vftable;
  *(undefined4 *)(param_1 + 1) = 0x21;
  puVar1 = (undefined8 *)FUN_1800020c0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = IRawFileAnalyser::vftable;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *puVar1 = FileHTMAnalyser::vftable;
    *(undefined4 *)(puVar1 + 1) = 0x21;
  }
  param_1[2] = puVar1;
  return param_1;
}

