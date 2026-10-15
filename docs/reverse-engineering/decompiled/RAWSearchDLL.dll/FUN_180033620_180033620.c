// Function: FUN_180033620
// Address: 180033620
// Size: 174 bytes


undefined8 * FUN_180033620(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = IRawFileAnalyser::vftable;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *param_1 = BruteForce::JpegAnalyzer::vftable;
  param_1[2] = BruteForce::JpegAnalyzer::vftable;
  *(undefined4 *)(param_1 + 1) = 0x23;
  puVar1 = (undefined8 *)FUN_1800020c0(0x80);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = IRawFileAnalyser::vftable;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *puVar1 = FileJPGAnalyser::vftable;
    FUN_180001690((undefined1 *)(puVar1 + 2));
    FUN_180001690((undefined1 *)(puVar1 + 6));
    FUN_180001690((undefined1 *)(puVar1 + 0xc));
    *(undefined4 *)(puVar1 + 1) = 0x23;
  }
  param_1[3] = puVar1;
  return param_1;
}

