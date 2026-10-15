// Function: FUN_18003c9f0
// Address: 18003c9f0
// Size: 161 bytes


undefined8 * FUN_18003c9f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = IRawFileAnalyser::vftable;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *param_1 = Brance::CRWAnalyser::vftable;
  *(undefined4 *)(param_1 + 1) = 0x12;
  puVar1 = (undefined8 *)FUN_1800020c0(0x418);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = IRawFileAnalyser::vftable;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *puVar1 = FileCRWAnalyser::vftable;
    *(undefined4 *)(puVar1 + 1) = 0x12;
    memset(puVar1 + 2,0,0x400);
  }
  param_1[2] = puVar1;
  return param_1;
}

