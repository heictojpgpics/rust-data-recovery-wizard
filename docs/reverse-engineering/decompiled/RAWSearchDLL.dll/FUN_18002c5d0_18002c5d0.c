// Function: FUN_18002c5d0
// Address: 18002c5d0
// Size: 296 bytes


void FUN_18002c5d0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  longlong local_28 [4];
  
  if (*(int *)(param_1 + 0x128) < 2) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  if (((*(int *)(param_1 + 0x18) == 0x2a) && (*(int *)(param_1 + 0x120) == 1)) &&
     (*(char *)(param_1 + 0x124) != '\0')) {
    *(undefined4 *)(param_1 + 0x18) = 0x2c;
  }
  else if (*(longlong *)(param_1 + 0x148) == 0) {
    FUN_18002ceb0(param_1,param_2,param_3,param_4);
  }
  if (*(longlong *)(param_1 + 0x168) == 0) {
    if (*(longlong *)(param_1 + 0x148) == 0) {
      FUN_180001780((longlong)local_28);
      puVar1 = (undefined8 *)FUN_1800016b0(local_28);
      puVar1[3] = 0xf;
      local_res8[0] = 0;
      FUN_180001300((undefined1 *)puVar1,local_res8);
      puVar2 = puVar1;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar2 = (undefined8 *)*puVar1;
      }
      puVar1[2] = 0;
      local_res8[0] = 0;
      FUN_180001300((undefined1 *)puVar2,local_res8);
      FUN_180017550(param_1,0xffffffff,local_28);
    }
  }
  else {
    puVar2 = (undefined8 *)(param_1 + 0x158);
    if ((undefined8 *)(param_1 + 0x20) != puVar2) {
      if (0xf < *(ulonglong *)(param_1 + 0x170)) {
        puVar2 = (undefined8 *)*puVar2;
      }
      FUN_1800071e0(param_1 + 0x20,puVar2,*(ulonglong *)(param_1 + 0x168));
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x110);
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x110);
  return;
}

