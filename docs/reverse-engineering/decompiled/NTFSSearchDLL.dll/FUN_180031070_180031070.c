// Function: FUN_180031070
// Address: 180031070
// Size: 182 bytes


undefined8 * FUN_180031070(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18002be40(0x93);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 0xd) = 0xffff;
    *puVar1 = CFileNode::vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[0xc] = 0;
    *(undefined2 *)(puVar1 + 0xe) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x75) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x7d) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x81) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 0xffff;
    *(undefined2 *)((longlong)puVar1 + 0x91) = 0;
    *(byte *)((longlong)puVar1 + 0x72) = *(byte *)((longlong)puVar1 + 0x72) & 0xf8;
    *(byte *)((longlong)puVar1 + 0x91) = *(byte *)((longlong)puVar1 + 0x91) & 0xfe;
    *(byte *)((longlong)puVar1 + 0x91) = *(byte *)((longlong)puVar1 + 0x91) | 2;
    *(byte *)((longlong)puVar1 + 0x72) = *(byte *)((longlong)puVar1 + 0x72) & 7;
    *(byte *)((longlong)puVar1 + 0x74) = *(byte *)((longlong)puVar1 + 0x74) & 0xf8;
    puVar1[9] = 0xffffffffffffffff;
    puVar1[10] = 0xffffffffffffffff;
    puVar1[0xb] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x89) = 0;
    puVar1[4] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x73) = 0x20;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

