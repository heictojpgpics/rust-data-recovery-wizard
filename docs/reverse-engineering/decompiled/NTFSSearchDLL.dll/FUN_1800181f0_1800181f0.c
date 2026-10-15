// Function: FUN_1800181f0
// Address: 1800181f0
// Size: 116 bytes


undefined8 *
FUN_1800181f0(longlong *param_1,undefined8 *param_2,undefined8 param_3,ulonglong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 local_res8 [4];
  
  bVar3 = true;
  puVar1 = (undefined8 *)((undefined8 *)*param_1)[1];
  puVar2 = (undefined8 *)*param_1;
  while (*(char *)((longlong)puVar1 + 0x19) == '\0') {
    bVar3 = *param_4 < (ulonglong)puVar1[4];
    puVar2 = puVar1;
    if (bVar3) {
      puVar1 = (undefined8 *)*puVar1;
    }
    else {
      puVar1 = (undefined8 *)puVar1[2];
    }
  }
  puVar1 = FUN_180018270(param_1,local_res8,bVar3,puVar2,param_4);
  *param_2 = *puVar1;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

