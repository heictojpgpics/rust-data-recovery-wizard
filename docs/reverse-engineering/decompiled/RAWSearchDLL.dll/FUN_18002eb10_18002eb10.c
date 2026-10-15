// Function: FUN_18002eb10
// Address: 18002eb10
// Size: 961 bytes


void FUN_18002eb10(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (0x1f < (int)param_3) {
    uVar2 = (ulonglong)(param_3 >> 5);
    param_3 = param_3 + (param_3 >> 5) * -0x20;
    do {
      *param_1 = param_2[3];
      param_1[1] = param_2[2];
      param_1[2] = param_2[1];
      uVar1 = *param_2;
      param_2 = param_2 + 4;
      param_1[3] = uVar1;
      param_1 = param_1 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  switch(param_3) {
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 1);
    *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)param_2;
    return;
  case 3:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
    *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)param_2;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 1) = *(undefined4 *)param_2;
    return;
  case 6:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 1) = *(undefined4 *)((longlong)param_2 + 1);
    *(undefined1 *)((longlong)param_1 + 5) = *(undefined1 *)param_2;
    return;
  case 7:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 2) = *(undefined4 *)((longlong)param_2 + 1);
    *(undefined1 *)((longlong)param_1 + 6) = *(undefined1 *)param_2;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    *(undefined1 *)param_1 = *(undefined1 *)(param_2 + 1);
    *(undefined8 *)((longlong)param_1 + 1) = *param_2;
    return;
  case 10:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 9);
    *(undefined8 *)((longlong)param_1 + 1) = *(undefined8 *)((longlong)param_2 + 1);
    *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)param_2;
    return;
  case 0xb:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 10);
    *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 9);
    *(undefined8 *)((longlong)param_1 + 2) = *(undefined8 *)((longlong)param_2 + 1);
    *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)param_2;
    return;
  case 0xc:
    *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)((longlong)param_1 + 4) = *param_2;
    return;
  case 0xd:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)((longlong)param_1 + 5) = *param_2;
    return;
  case 0xe:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 0xd);
    *(undefined4 *)((longlong)param_1 + 1) = *(undefined4 *)((longlong)param_2 + 9);
    *(undefined8 *)((longlong)param_1 + 5) = *(undefined8 *)((longlong)param_2 + 1);
    *(undefined1 *)((longlong)param_1 + 0xd) = *(undefined1 *)param_2;
    return;
  case 0xf:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 0xe);
    *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 0xd);
    *(undefined4 *)((longlong)param_1 + 2) = *(undefined4 *)((longlong)param_2 + 9);
    *(undefined8 *)((longlong)param_1 + 6) = *(undefined8 *)((longlong)param_2 + 1);
    *(undefined1 *)((longlong)param_1 + 0xe) = *(undefined1 *)param_2;
    return;
  case 0x10:
    *param_1 = param_2[1];
    param_1[1] = *param_2;
    return;
  case 0x11:
    *param_1 = *(undefined8 *)((longlong)param_2 + 9);
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    *(undefined8 *)((longlong)param_1 + 9) = *param_2;
    return;
  case 0x12:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 0x11);
    *(undefined8 *)((longlong)param_1 + 1) = *(undefined8 *)((longlong)param_2 + 9);
    *(undefined8 *)((longlong)param_1 + 9) = *(undefined8 *)((longlong)param_2 + 1);
    *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)param_2;
    return;
  case 0x13:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 0x12);
    *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 0x11);
    *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)(param_2 + 2);
    *(undefined8 *)((longlong)param_1 + 3) = param_2[1];
    *(undefined8 *)((longlong)param_1 + 0xb) = *param_2;
    return;
  case 0x14:
    *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 2);
    *(undefined8 *)((longlong)param_1 + 4) = param_2[1];
    *(undefined8 *)((longlong)param_1 + 0xc) = *param_2;
    return;
  case 0x15:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 0x14);
    *(undefined4 *)((longlong)param_1 + 1) = *(undefined4 *)(param_2 + 2);
    *(undefined8 *)((longlong)param_1 + 5) = param_2[1];
    *(undefined8 *)((longlong)param_1 + 0xd) = *param_2;
    return;
  case 0x16:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 0x15);
    *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 0x14);
    *(undefined4 *)((longlong)param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined8 *)((longlong)param_1 + 6) = param_2[1];
    *(undefined8 *)((longlong)param_1 + 0xe) = *param_2;
    return;
  case 0x17:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 0x16);
    *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 0x15);
    *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_2 + 0x14);
    *(undefined4 *)((longlong)param_1 + 3) = *(undefined4 *)(param_2 + 2);
    *(undefined8 *)((longlong)param_1 + 7) = param_2[1];
    *(undefined8 *)((longlong)param_1 + 0xf) = *param_2;
    return;
  case 0x18:
    *param_1 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = *param_2;
    return;
  case 0x19:
    *param_1 = *(undefined8 *)((longlong)param_2 + 0x11);
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 2);
    *(undefined8 *)((longlong)param_1 + 9) = param_2[1];
    *(undefined8 *)((longlong)param_1 + 0x11) = *param_2;
    return;
  case 0x1a:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 0x19);
    *(undefined8 *)((longlong)param_1 + 1) = *(undefined8 *)((longlong)param_2 + 0x11);
    *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)(param_2 + 2);
    *(undefined8 *)((longlong)param_1 + 10) = param_2[1];
    *(undefined8 *)((longlong)param_1 + 0x12) = *param_2;
    return;
  case 0x1b:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 0x1a);
    *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 0x19);
    *(undefined8 *)((longlong)param_1 + 2) = *(undefined8 *)((longlong)param_2 + 0x11);
    *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)(param_2 + 2);
    *(undefined8 *)((longlong)param_1 + 0xb) = param_2[1];
    *(undefined8 *)((longlong)param_1 + 0x13) = *param_2;
    return;
  case 0x1c:
    *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 3);
    *(undefined8 *)((longlong)param_1 + 4) = param_2[2];
    *(undefined8 *)((longlong)param_1 + 0xc) = param_2[1];
    *(undefined8 *)((longlong)param_1 + 0x14) = *param_2;
    return;
  case 0x1d:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 1) = *(undefined4 *)(param_2 + 3);
    *(undefined8 *)((longlong)param_1 + 5) = param_2[2];
    *(undefined8 *)((longlong)param_1 + 0xd) = param_2[1];
    *(undefined8 *)((longlong)param_1 + 0x15) = *param_2;
    return;
  case 0x1e:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 0x1d);
    *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 2) = *(undefined4 *)(param_2 + 3);
    *(undefined8 *)((longlong)param_1 + 6) = param_2[2];
    *(undefined8 *)((longlong)param_1 + 0xe) = param_2[1];
    *(undefined8 *)((longlong)param_1 + 0x16) = *param_2;
    return;
  case 0x1f:
    *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 0x1e);
    *(undefined4 *)((longlong)param_1 + 1) = *(undefined4 *)((longlong)param_2 + 0x1a);
    *(undefined8 *)((longlong)param_1 + 5) = *(undefined8 *)((longlong)param_2 + 0x12);
    *(undefined8 *)((longlong)param_1 + 0xd) = *(undefined8 *)((longlong)param_2 + 10);
    *(undefined8 *)((longlong)param_1 + 0x15) = *(undefined8 *)((longlong)param_2 + 2);
    *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 1);
    *(undefined1 *)((longlong)param_1 + 0x1e) = *(undefined1 *)param_2;
  }
  return;
}

