// Function: FUN_18001d070
// Address: 18001d070
// Size: 82 bytes


longlong FUN_18001d070(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  lVar1 = FUN_18001d230();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  puVar2 = (undefined4 *)FUN_1800012e0(param_1,lVar1 + 0x20);
  puVar3 = (undefined4 *)FUN_1800016b0(param_2);
  *puVar2 = *puVar3;
  *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(param_2 + 8);
  return lVar1;
}

