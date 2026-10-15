// Function: FUN_1800290c0
// Address: 1800290c0
// Size: 489 bytes


undefined4 *
FUN_1800290c0(undefined4 *param_1,void *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
             undefined1 param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = param_4;
  param_1[1] = param_5;
  *(undefined1 *)(param_1 + 2) = param_6;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = param_7;
  *(longlong *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  lVar1 = FUN_180020780();
  *(longlong *)(param_1 + 0x14) = lVar1;
  *(longlong *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  lVar1 = FUN_1800206c0();
  *(longlong *)(param_1 + 0x18) = lVar1;
  *(longlong *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  lVar1 = FUN_180020780();
  *(longlong *)(param_1 + 0x1c) = lVar1;
  *(longlong *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  lVar1 = FUN_180012de0();
  *(longlong *)(param_1 + 0x20) = lVar1;
  *(longlong *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  lVar1 = FUN_180012de0();
  *(longlong *)(param_1 + 0x24) = lVar1;
  *(longlong *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  lVar1 = FUN_180012fd0();
  *(longlong *)(param_1 + 0x28) = lVar1;
  *(longlong *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  lVar1 = FUN_180012fd0();
  *(longlong *)(param_1 + 0x2c) = lVar1;
  *(longlong *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  lVar1 = FUN_1800206c0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((param_2 == (void *)0x0) || (param_3 < 0x200000)) {
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[6] = 0;
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  else {
    param_1[10] = param_3 / 10 + param_3;
    uVar2 = thunk_FUN_18003ec54((ulonglong)param_3);
    *(undefined8 *)(param_1 + 4) = uVar2;
    lVar1 = thunk_FUN_18003ec54((ulonglong)(uint)param_1[10]);
    *(longlong *)(param_1 + 8) = lVar1;
    if ((*(void **)(param_1 + 4) != (void *)0x0) && (lVar1 != 0)) {
      memcpy(*(void **)(param_1 + 4),param_2,(ulonglong)param_3);
      param_1[6] = param_3;
      memset(*(void **)(param_1 + 8),0,(ulonglong)(uint)param_1[10]);
      *(undefined1 *)((longlong)param_1 + 9) = 1;
    }
  }
  return param_1;
}

