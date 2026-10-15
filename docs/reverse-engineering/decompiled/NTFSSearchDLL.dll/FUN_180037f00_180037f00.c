// Function: FUN_180037f00
// Address: 180037f00
// Size: 276 bytes


undefined8 * FUN_180037f00(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 in_R9;
  undefined1 local_78 [10];
  undefined8 local_6e;
  ushort local_66;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_49;
  undefined8 local_41;
  undefined8 local_31;
  undefined4 local_29;
  undefined4 local_25;
  undefined2 local_21;
  undefined2 local_1f;
  undefined2 local_19;
  byte local_17;
  
  puVar1 = FUN_180031070();
  puVar2 = FUN_180002f90();
  uVar5 = 0x62;
  memset(local_78,0,0x62);
  lVar3 = FUN_18002be40(0x1e);
  FUN_180037ea0(lVar3,"File Path Lost",uVar5,in_R9);
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(lVar3 + lVar4) != '\0');
  *(byte *)((longlong)puVar2 + 0x72) = *(byte *)((longlong)puVar2 + 0x72) & 0xc2;
  *(undefined8 *)((longlong)puVar2 + 0x25) = local_64;
  *(undefined8 *)((longlong)puVar2 + 0x35) = local_54;
  *(undefined8 *)((longlong)puVar2 + 0x2d) = local_5c;
  puVar2[8] = local_49;
  *(undefined8 *)((longlong)puVar2 + 0x1b) = local_6e;
  puVar2[0xb] = local_31;
  *(undefined4 *)((longlong)puVar2 + 100) = local_25;
  *(undefined4 *)(puVar2 + 0xc) = local_29;
  puVar2[9] = local_41;
  *(undefined2 *)(puVar2 + 0xd) = local_21;
  *(undefined2 *)((longlong)puVar2 + 0x6a) = local_1f;
  *(longlong *)((longlong)puVar2 + 0x11) = lVar3;
  *(byte *)((longlong)puVar2 + 0x72) = *(byte *)((longlong)puVar2 + 0x72) | local_17 & 0x3d;
  *(undefined2 *)(puVar2 + 0xe) = local_19;
  *(short *)((longlong)puVar2 + 0x19) = (short)lVar4;
  *(ushort *)((longlong)puVar2 + 0x23) = local_66 | 0x10;
  *(undefined1 *)((longlong)puVar2 + 0x3d) = 8;
  puVar1[6] = puVar2;
  puVar1[10] = 0xfffffffffffffff1;
  return puVar1;
}

