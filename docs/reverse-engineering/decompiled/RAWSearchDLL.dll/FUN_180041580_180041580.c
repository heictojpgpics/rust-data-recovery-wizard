// Function: FUN_180041580
// Address: 180041580
// Size: 126 bytes


undefined8 * FUN_180041580(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = IRawFileAnalyser::vftable;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *param_1 = Brance::SVGAnalyser::vftable;
  *(undefined4 *)(param_1 + 1) = 0x5b;
  puVar1 = (undefined8 *)FUN_1800020c0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = IRawFileAnalyser::vftable;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *puVar1 = FileSVGAnalyser::vftable;
    *(undefined4 *)(puVar1 + 1) = 0x5b;
  }
  param_1[2] = puVar1;
  return param_1;
}

