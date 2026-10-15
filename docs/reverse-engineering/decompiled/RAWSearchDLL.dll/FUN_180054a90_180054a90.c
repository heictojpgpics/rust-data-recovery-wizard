// Function: FUN_180054a90
// Address: 180054a90
// Size: 95 bytes


undefined8 FUN_180054a90(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((param_1 != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x28), puVar2 != (undefined8 *)0x0)) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *puVar2 = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    puVar2[4] = 0;
    *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    puVar1 = puVar2 + 0xa9;
    puVar2[0x10] = puVar1;
    puVar2[0xc] = puVar1;
    puVar2[0xb] = puVar1;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0x8000;
    return 0;
  }
  return 0xfffffffe;
}

