// Function: FUN_180003020
// Address: 180003020
// Size: 202 bytes


void FUN_180003020(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  
  *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)((longlong)param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x35) = *(undefined8 *)((longlong)param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2d) = *(undefined8 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x11) = *param_2;
  *(undefined2 *)(param_1 + 0x19) = *(undefined2 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x2f);
  *(undefined8 *)(param_1 + 0x1b) = *(undefined8 *)((longlong)param_2 + 10);
  *(undefined2 *)(param_1 + 0x23) = *(undefined2 *)((longlong)param_2 + 0x12);
  *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)((longlong)param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)((longlong)param_2 + 0x47);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)((longlong)param_2 + 0x53);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0x4f);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x37);
  *(byte *)(param_1 + 0x72) =
       *(byte *)(param_1 + 0x72) ^
       (*(byte *)(param_1 + 0x72) ^ *(byte *)((longlong)param_2 + 0x61)) & 1;
  bVar1 = (*(byte *)(param_1 + 0x72) ^ *(byte *)((longlong)param_2 + 0x61)) & 4 ^
          *(byte *)(param_1 + 0x72);
  *(byte *)(param_1 + 0x72) = bVar1;
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)((longlong)param_2 + 0x57);
  *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)((longlong)param_2 + 0x59);
  bVar1 = (bVar1 ^ *(byte *)((longlong)param_2 + 0x61)) & 8 ^ bVar1;
  *(byte *)(param_1 + 0x72) = bVar1;
  bVar1 = (bVar1 ^ *(byte *)((longlong)param_2 + 0x61)) & 0x10 ^ bVar1;
  *(byte *)(param_1 + 0x72) = bVar1;
  *(byte *)(param_1 + 0x72) = (bVar1 ^ *(byte *)((longlong)param_2 + 0x61)) & 0x20 ^ bVar1;
  *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)((longlong)param_2 + 0x5f);
  return;
}

