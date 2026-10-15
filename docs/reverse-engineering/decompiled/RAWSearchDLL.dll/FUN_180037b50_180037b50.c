// Function: FUN_180037b50
// Address: 180037b50
// Size: 185 bytes


undefined8 * FUN_180037b50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = IRawFileAnalyser::vftable;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *param_1 = BruteForce::TiffAnalyzer::vftable;
  *(undefined4 *)(param_1 + 1) = 0x40;
  puVar1 = (undefined8 *)FUN_1800020c0(0x188);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = IRawFileAnalyser::vftable;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *puVar1 = FileTIFAnalyser::vftable;
    FUN_180001690((undefined1 *)(puVar1 + 0xb));
    FUN_180001690((undefined1 *)(puVar1 + 0xf));
    FUN_180001690((undefined1 *)(puVar1 + 0x14));
    *(undefined4 *)(puVar1 + 1) = 0x40;
    FUN_18004e4c0((longlong)puVar1);
  }
  param_1[2] = puVar1;
  return param_1;
}

