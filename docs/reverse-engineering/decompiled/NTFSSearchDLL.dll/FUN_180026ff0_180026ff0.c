// Function: FUN_180026ff0
// Address: 180026ff0
// Size: 166 bytes


void FUN_180026ff0(undefined8 *param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = CNTFSBuildVolumeBitmap::vftable;
  param_1[1] = CNTFSBuildVolumeBitmap::vftable;
  param_1[0x4b] = 0;
  puVar1 = (undefined8 *)param_1[0x72];
  if (puVar1 != (undefined8 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      param_2 = 1;
      FUN_180006500((void *)*puVar1,1);
      puVar1 = (undefined8 *)param_1[0x72];
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1800270a0(puVar1,param_2,param_3,param_4);
    }
  }
  param_1[0x72] = 0;
  FUN_18003f9e0();
  FUN_180016060(param_1 + 1,param_2,param_3,param_4);
  *param_1 = IBuildVolumeBitmap::vftable;
  return;
}

