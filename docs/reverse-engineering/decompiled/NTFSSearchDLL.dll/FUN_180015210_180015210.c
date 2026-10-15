// Function: FUN_180015210
// Address: 180015210
// Size: 112 bytes


undefined8 *
FUN_180015210(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 local_res8 [4];
  undefined8 in_stack_ffffffffffffffd8;
  
  bVar3 = true;
  puVar1 = (undefined8 *)((undefined8 *)*param_1)[1];
  puVar2 = (undefined8 *)*param_1;
  while (*(char *)((longlong)puVar1 + 0x19) == '\0') {
    bVar3 = *param_4 < (longlong)puVar1[4];
    puVar2 = puVar1;
    if (bVar3) {
      puVar1 = (undefined8 *)*puVar1;
    }
    else {
      puVar1 = (undefined8 *)puVar1[2];
    }
  }
  puVar1 = FUN_180014ef0(param_1,local_res8,bVar3,puVar2,in_stack_ffffffffffffffd8,param_5);
  *param_2 = *puVar1;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

