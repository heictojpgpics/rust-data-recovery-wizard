// Function: FUN_180038d30
// Address: 180038d30
// Size: 61 bytes


void FUN_180038d30(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FUN_180038d70();
  *(undefined2 *)(puVar2 + 3) = 0;
  uVar1 = param_2[1];
  *(undefined8 *)((longlong)puVar2 + 0x1c) = *param_2;
  *(undefined8 *)((longlong)puVar2 + 0x24) = uVar1;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = param_2[2];
  return;
}

