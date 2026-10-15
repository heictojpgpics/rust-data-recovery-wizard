// Function: FUN_180014ba0
// Address: 180014ba0
// Size: 78 bytes


longlong FUN_180014ba0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_180014d70(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  puVar2 = (undefined8 *)FUN_180001100(param_1,lVar1 + 0x20);
  puVar3 = (undefined8 *)FUN_180002680(param_2);
  *puVar2 = *puVar3;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8);
  return lVar1;
}

