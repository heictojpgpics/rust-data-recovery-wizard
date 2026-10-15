// Function: FUN_18001cea0
// Address: 18001cea0
// Size: 82 bytes


longlong FUN_18001cea0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  
  lVar1 = FUN_18001d2a0();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  puVar2 = (undefined8 *)FUN_1800012e0(param_1,lVar1 + 0x20);
  *puVar2 = *param_2;
  puVar3 = (undefined4 *)FUN_1800016b0(param_2 + 1);
  *(undefined4 *)(puVar2 + 1) = *puVar3;
  return lVar1;
}

