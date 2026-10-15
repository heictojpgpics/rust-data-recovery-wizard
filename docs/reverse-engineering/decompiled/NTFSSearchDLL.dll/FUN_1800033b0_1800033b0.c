// Function: FUN_1800033b0
// Address: 1800033b0
// Size: 138 bytes


undefined8 * FUN_1800033b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18002be40(0x73);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = CNTFSFileProperties::vftable;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(byte *)((longlong)puVar1 + 0x72) = *(byte *)((longlong)puVar1 + 0x72) & 0xc0;
    *(undefined8 *)((longlong)puVar1 + 0x11) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x19) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x23) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x3d) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x3f) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *(undefined2 *)(puVar1 + 0xe) = 0;
    memset((undefined8 *)((longlong)puVar1 + 0x11),0,0x62);
    return puVar1;
  }
  return (undefined8 *)0x0;
}

