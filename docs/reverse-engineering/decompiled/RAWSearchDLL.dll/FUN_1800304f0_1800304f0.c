// Function: FUN_1800304f0
// Address: 1800304f0
// Size: 197 bytes


undefined8 * FUN_1800304f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = IRawFileAnalyser::vftable;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *param_1 = BruteForce::MP3Analyzer::vftable;
  param_1[2] = BruteForce::MP3Analyzer::vftable;
  *(undefined4 *)(param_1 + 1) = 0x2b;
  puVar1 = (undefined8 *)FUN_1800020c0(0xa0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = IRawFileAnalyser::vftable;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *puVar1 = FileMP3Analyser::vftable;
    FUN_180001690((undefined1 *)(puVar1 + 2));
    FUN_180001690((undefined1 *)(puVar1 + 6));
    FUN_180001690((undefined1 *)(puVar1 + 0xb));
    *(undefined4 *)(puVar1 + 1) = 0x2b;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  param_1[3] = puVar1;
  return param_1;
}

