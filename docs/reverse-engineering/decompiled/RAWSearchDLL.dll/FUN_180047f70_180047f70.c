// Function: FUN_180047f70
// Address: 180047f70
// Size: 192 bytes


undefined8 FUN_180047f70(undefined8 param_1,short *param_2,longlong param_3)

{
  undefined2 uVar1;
  undefined6 extraout_var;
  undefined4 local_res20;
  undefined1 local_res24;
  byte local_40 [38];
  undefined2 local_1a;
  
  if (param_2 != (short *)0x0) {
    local_res24 = 0;
    if ((*param_2 == 0x4449) && ((char)param_2[1] == '3')) {
      if ((byte)(*(char *)((longlong)param_2 + 3) - 3U) < 2) {
        *(undefined4 *)(param_3 + 0x18) = 0x2b;
        return 1;
      }
    }
    else if (((char)*param_2 == -1) &&
            ((local_res20 = *(undefined4 *)param_2, ((byte)((uint)local_res20 >> 8) & 0xe0) == 0xe0
             && (((byte)((uint)local_res20 >> 0x10) & 0xf0) != 0xf0)))) {
      local_1a = 0;
      uVar1 = FUN_180049c60(local_40,(longlong)&local_res20);
      if ((int)CONCAT62(extraout_var,uVar1) != 0) {
        *(undefined4 *)(param_3 + 0x18) = 0x2b;
        return 1;
      }
    }
  }
  return 0;
}

