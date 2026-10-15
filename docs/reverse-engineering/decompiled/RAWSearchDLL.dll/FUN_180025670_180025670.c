// Function: FUN_180025670
// Address: 180025670
// Size: 156 bytes


undefined8 *
FUN_180025670(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_1800257c0(param_1,param_2 + 4);
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)puVar3 + 0x19) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_180025670(param_1,(undefined8 *)*param_2,puVar1,param_4);
    *puVar1 = puVar2;
    puVar2 = FUN_180025670(param_1,(undefined8 *)param_2[2],puVar1,param_4);
    puVar1[2] = puVar2;
  }
  return puVar3;
}

