// Function: FUN_180039390
// Address: 180039390
// Size: 570 bytes


undefined8 * FUN_180039390(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = CSearchedPartitionInfo::vftable;
  *(undefined4 *)(param_1 + 1) = 0xe;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(uint *)(param_1 + 0xb) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 1;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((param_2 & 0x1ff) != 0) || (param_2 == 0)) {
    *(undefined4 *)(param_1 + 0xb) = 0x200;
  }
  param_1[0x11] = 0;
  *param_1 = CSearchedNTFSPartitionInfo::vftable;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x13] = 2;
  param_1[0x14] = 0;
  param_1[0x15] = 0xffffffffffffffff;
  param_1[0x16] = 0xffffffffffffffff;
  param_1[0x17] = 0xffffffffffffffff;
  param_1[0x18] = 0xffffffffffffffff;
  param_1[0x19] = 0xffffffffffffffff;
  param_1[0x1a] = 0xffffffffffffffff;
  param_1[0x1b] = 0xffffffffffffffff;
  param_1[0x1c] = 0xffffffffffffffff;
  param_1[0x1d] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1e) = 1;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x100;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  puVar3 = param_1;
  lVar1 = FUN_1800131d0(param_1,0,0);
  param_1[0x29] = lVar1;
  puVar4 = param_1 + 0x2b;
  *puVar4 = 0;
  param_1[0x2c] = 0;
  uVar2 = FUN_180006450(puVar3,(longlong *)0x0,(longlong *)0x0);
  puVar3 = (undefined8 *)FUN_180002680(puVar4);
  *puVar3 = uVar2;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  uVar2 = FUN_180006450(puVar4,(longlong *)0x0,(longlong *)0x0);
  puVar4 = (undefined8 *)FUN_180002680(param_1 + 0x2d);
  *puVar4 = uVar2;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  return param_1;
}

