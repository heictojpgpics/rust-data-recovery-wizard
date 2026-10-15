// Function: FUN_180026ec0
// Address: 180026ec0
// Size: 81 bytes


longlong FUN_180026ec0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *(longlong *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar1 = FUN_180012c00(param_1,0,0);
  *(longlong *)(param_1 + 8) = lVar1;
  puVar2 = FUN_180031070();
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  return param_1;
}

