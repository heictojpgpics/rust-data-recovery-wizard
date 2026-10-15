// Function: FUN_18002f8c0
// Address: 18002f8c0
// Size: 1167 bytes


/* WARNING: Removing unreachable block (ram,0x00018002fb38) */
/* WARNING: Removing unreachable block (ram,0x00018002fb62) */
/* WARNING: Removing unreachable block (ram,0x00018002fb91) */
/* WARNING: Removing unreachable block (ram,0x00018002fc03) */
/* WARNING: Removing unreachable block (ram,0x00018002fb5d) */
/* WARNING: Removing unreachable block (ram,0x00018002fc0d) */
/* WARNING: Removing unreachable block (ram,0x00018002fd15) */
/* WARNING: Removing unreachable block (ram,0x00018002fca3) */

undefined8 *
FUN_18002f8c0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 param_4,void *param_5)

{
  undefined8 uVar1;
  char local_108;
  undefined1 local_105 [13];
  undefined8 *local_f8;
  undefined8 *local_f0;
  uint local_e8;
  undefined8 *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_38;
  undefined8 local_30 [6];
  
  local_38 = 0xfffffffffffffffe;
  local_d0 = (longlong *)FUN_180002680(param_1);
  local_f0 = (undefined8 *)*local_d0;
  local_f8 = (undefined8 *)local_f0[1];
  local_108 = '\x01';
  while (*(char *)((longlong)local_f8 + 0x19) == '\0') {
    local_f0 = local_f8;
    if (param_3 == '\0') {
      local_80 = FUN_18002fd60(param_1);
      local_a0 = (longlong *)FUN_180014460(param_1,(longlong)local_f8);
      local_90 = local_a0;
      local_98 = (longlong *)FUN_180001100(param_1,param_4);
      local_88 = local_98;
      uVar1 = FUN_1800123b0(local_80,local_98,local_90);
      local_108 = (char)uVar1;
    }
    else {
      local_a8 = FUN_18002fd60(param_1);
      local_c8 = (longlong *)FUN_180001100(param_1,param_4);
      local_b8 = local_c8;
      local_c0 = (longlong *)FUN_180014460(param_1,(longlong)local_f8);
      local_b0 = local_c0;
      uVar1 = FUN_1800123b0(local_a8,local_c0,local_b8);
      local_108 = (char)uVar1 == '\0';
      local_e8 = (uint)(byte)local_108;
    }
    if (local_108 == '\0') {
      local_d8 = (undefined8 *)local_f8[2];
    }
    else {
      local_d8 = (undefined8 *)*local_f8;
    }
    local_f8 = local_d8;
  }
  local_105[0] = 1;
  uVar1 = FUN_180002680(param_4);
  local_78 = FUN_18002fee0(param_1,local_30,local_108,local_f0,uVar1,param_5);
  FUN_1800151a0(param_2,local_78,local_105);
  return param_2;
}

