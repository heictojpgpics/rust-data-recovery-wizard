// Function: FUN_180001f00
// Address: 180001f00
// Size: 272 bytes


void FUN_180001f00(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x428) = *param_2;
  *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(param_2 + 2);
  plVar1 = (longlong *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x438) = *(undefined8 *)(param_2 + 4);
  if ((longlong *)(param_1 + 0x440) != plVar1) {
    if (0xf < *(ulonglong *)(param_2 + 0xc)) {
      plVar1 = (longlong *)*plVar1;
    }
    FUN_1800026c0((longlong *)(param_1 + 0x440),plVar1,*(size_t *)(param_2 + 10));
  }
  plVar1 = (longlong *)(param_2 + 0x1a);
  *(undefined4 *)(param_1 + 0x460) = param_2[0xe];
  *(undefined4 *)(param_1 + 0x464) = param_2[0xf];
  *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x470) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x478) = *(undefined8 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x480) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)(param_1 + 0x481) = *(undefined1 *)((longlong)param_2 + 0x59);
  *(undefined4 *)(param_1 + 0x484) = param_2[0x17];
  *(undefined1 *)(param_1 + 0x488) = *(undefined1 *)(param_2 + 0x18);
  if ((longlong *)(param_1 + 0x490) != plVar1) {
    if (0xf < *(ulonglong *)(param_2 + 0x20)) {
      plVar1 = (longlong *)*plVar1;
    }
    FUN_1800026c0((longlong *)(param_1 + 0x490),plVar1,*(size_t *)(param_2 + 0x1e));
  }
  *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x4b8) = *(undefined8 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x4c0) = *(undefined1 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_2 + 0x28);
  return;
}

