// Function: FUN_1800159a0
// Address: 1800159a0
// Size: 59 bytes


longlong FUN_1800159a0(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_180015df0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  puVar2 = (undefined4 *)FUN_180001100(param_1,lVar1 + 0x1c);
  *puVar2 = *param_2;
  return lVar1;
}

