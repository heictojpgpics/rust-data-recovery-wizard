// Function: FUN_18003ac60
// Address: 18003ac60
// Size: 83 bytes


longlong FUN_18003ac60(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_18003af20(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  puVar2 = (undefined4 *)FUN_1800012e0(param_1,lVar1 + 0x1c);
  *puVar2 = *(undefined4 *)*param_3;
  puVar2[1] = 0;
  return lVar1;
}

