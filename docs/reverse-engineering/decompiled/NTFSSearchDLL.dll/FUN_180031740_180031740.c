// Function: FUN_180031740
// Address: 180031740
// Size: 538 bytes


undefined8 * FUN_180031740(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_18002be40(0x93);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = CFileNode::vftable;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[0xc] = 0;
    *(undefined4 *)(puVar3 + 0xd) = 0xffff;
    *(undefined4 *)((longlong)puVar3 + 0x6c) = 0xffff;
    *(undefined2 *)(puVar3 + 0xe) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x75) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x7d) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x81) = 0;
    *(undefined2 *)((longlong)puVar3 + 0x91) = 0;
    puVar3[0xb] = 0;
    puVar3[9] = 0xffffffffffffffff;
    puVar3[10] = 0xffffffffffffffff;
    *(byte *)((longlong)puVar3 + 0x72) = *(byte *)((longlong)puVar3 + 0x72) & 0xf8;
    *(undefined1 *)((longlong)puVar3 + 0x91) = 2;
    *(undefined8 *)((longlong)puVar3 + 0x89) = 0;
    *(byte *)((longlong)puVar3 + 0x72) = *(byte *)((longlong)puVar3 + 0x72) & 7;
    puVar3[4] = 0;
    *(undefined1 *)((longlong)puVar3 + 0x73) = 0x20;
    *(byte *)((longlong)puVar3 + 0x74) = *(byte *)((longlong)puVar3 + 0x74) & 0xf8;
    puVar3[0xb] = *(undefined8 *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      puVar3[6] = *(undefined8 *)(param_1 + 0x30);
    }
    puVar3[10] = *(undefined8 *)(param_1 + 0x50);
    puVar3[9] = *(undefined8 *)(param_1 + 0x48);
    *(byte *)((longlong)puVar3 + 0x72) =
         *(byte *)((longlong)puVar3 + 0x72) ^
         (*(byte *)((longlong)puVar3 + 0x72) ^ *(byte *)(param_1 + 0x72)) & 4;
    *(undefined8 *)((longlong)puVar3 + 0x75) = *(undefined8 *)(param_1 + 0x75);
    *(undefined4 *)((longlong)puVar3 + 0x7d) = *(undefined4 *)(param_1 + 0x7d);
    *(undefined8 *)((longlong)puVar3 + 0x89) = *(undefined8 *)(param_1 + 0x89);
    *(undefined1 *)((longlong)puVar3 + 0x91) = *(undefined1 *)(param_1 + 0x91);
    bVar2 = (*(byte *)((longlong)puVar3 + 0x72) ^ *(byte *)(param_1 + 0x72)) & 1 ^
            *(byte *)((longlong)puVar3 + 0x72);
    *(byte *)((longlong)puVar3 + 0x72) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x72)) & 2 ^ bVar2;
    *(byte *)((longlong)puVar3 + 0x72) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x72)) & 4 ^ bVar2;
    *(byte *)((longlong)puVar3 + 0x72) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x72)) & 8 ^ bVar2;
    *(byte *)((longlong)puVar3 + 0x72) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x72)) & 0x40 ^ bVar2;
    *(byte *)((longlong)puVar3 + 0x72) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x72)) & 0x7f ^ *(byte *)(param_1 + 0x72);
    *(byte *)((longlong)puVar3 + 0x72) = bVar2;
    *(undefined2 *)(puVar3 + 0xd) = *(undefined2 *)(param_1 + 0x68);
    *(undefined2 *)((longlong)puVar3 + 0x6c) = *(undefined2 *)(param_1 + 0x6c);
    *(byte *)((longlong)puVar3 + 0x72) =
         (bVar2 ^ *(byte *)(param_1 + 0x72)) & 0x7f ^ *(byte *)(param_1 + 0x72);
    *(byte *)((longlong)puVar3 + 0x73) =
         *(byte *)((longlong)puVar3 + 0x73) ^
         (*(byte *)((longlong)puVar3 + 0x73) ^ *(byte *)(param_1 + 0x73)) & 4;
    bVar2 = (*(char *)(param_1 + 0x73) * '\x02' ^ *(byte *)((longlong)puVar3 + 0x73)) & 2 ^
            *(byte *)((longlong)puVar3 + 0x73);
    *(byte *)((longlong)puVar3 + 0x73) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x73)) & 0x1f ^ *(byte *)(param_1 + 0x73);
    *(byte *)((longlong)puVar3 + 0x73) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x73)) & 0x10 ^ bVar2;
    *(byte *)((longlong)puVar3 + 0x73) = bVar2;
    *(byte *)((longlong)puVar3 + 0x73) =
         (bVar2 ^ *(byte *)(param_1 + 0x73)) & 0x1f ^ *(byte *)(param_1 + 0x73);
    *(byte *)((longlong)puVar3 + 0x74) =
         *(byte *)((longlong)puVar3 + 0x74) ^
         (*(byte *)(param_1 + 0x74) ^ *(byte *)((longlong)puVar3 + 0x74)) & 1;
    *(byte *)((longlong)puVar3 + 0x74) =
         *(byte *)((longlong)puVar3 + 0x74) ^
         (*(byte *)((longlong)puVar3 + 0x74) ^ *(byte *)(param_1 + 0x74)) & 4;
  }
  return puVar3;
}

