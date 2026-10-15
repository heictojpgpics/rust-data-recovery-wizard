// Function: FUN_18003c0c0
// Address: 18003c0c0
// Size: 146 bytes


undefined8 * FUN_18003c0c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = IRawFileAnalyser::vftable;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *param_1 = Brance::MPGAnalyser::vftable;
  *(undefined4 *)(param_1 + 1) = 0x6d;
  puVar1 = (undefined8 *)FUN_1800020c0(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = IRawFileAnalyser::vftable;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *puVar1 = FileMPGAnalyser::vftable;
    *(undefined4 *)(puVar1 + 1) = 0x6d;
    puVar1[3] = 0;
    puVar1[2] = 0;
  }
  param_1[2] = puVar1;
  param_1[3] = 0;
  return param_1;
}

