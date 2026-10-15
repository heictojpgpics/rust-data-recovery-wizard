// Function: FUN_180033c30
// Address: 180033c30
// Size: 184 bytes


undefined2 *
FUN_180033c30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  int local_res8 [2];
  undefined2 *local_res10;
  
  if (param_1 != (longlong *)0x0) {
    puVar3 = (undefined2 *)0x0;
    local_res10 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_18002be40(0x10);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      puVar3 = puVar1;
    }
    local_res8[0] = 0;
    local_res10 = puVar3;
    (**(code **)(*param_1 + 0x70))(param_1,local_res8,4);
    uVar2 = FUN_18002be40((longlong)local_res8[0]);
    *(undefined8 *)(puVar3 + 4) = uVar2;
    (**(code **)(*param_1 + 0x70))(param_1,uVar2,local_res8[0]);
    (**(code **)(*param_1 + 0x70))(param_1,puVar3,2);
    return puVar3;
  }
  return (undefined2 *)0x0;
}

