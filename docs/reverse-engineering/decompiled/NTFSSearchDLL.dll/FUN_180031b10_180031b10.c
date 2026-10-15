// Function: FUN_180031b10
// Address: 180031b10
// Size: 326 bytes


undefined8 * FUN_180031b10(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0xffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffff;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x75) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined2 *)((longlong)param_1 + 0x91) = 0;
  *(byte *)((longlong)param_1 + 0x72) = *(byte *)((longlong)param_1 + 0x72) & 0xf8;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xfe;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 2;
  *(byte *)((longlong)param_1 + 0x72) = *(byte *)((longlong)param_1 + 0x72) & 7;
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) & 0xf8;
  param_1[9] = 0xffffffffffffffff;
  param_1[10] = 0xffffffffffffffff;
  *param_1 = CFileSystemNode::vftable;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  param_1[4] = 0;
  *(undefined1 *)((longlong)param_1 + 0x73) = 0x20;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0xe;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0x38;
  *(undefined8 *)((longlong)param_1 + 500) = 0x23;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  _Mtx_init_in_situ(param_1 + 0x45);
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  *(undefined2 *)(param_1 + 0x51) = 0x2a00;
  memset(param_1 + 0x13,0,0x130);
  return param_1;
}

