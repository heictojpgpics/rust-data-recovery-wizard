// Function: FUN_180037ca0
// Address: 180037ca0
// Size: 511 bytes


void FUN_180037ca0(undefined8 param_1,undefined4 param_2,undefined8 param_3,void *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar9;
  undefined1 auStack_158 [40];
  undefined1 local_130 [2];
  undefined8 local_12e;
  ushort local_126;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined1 local_10c;
  undefined8 local_109;
  undefined8 local_101;
  undefined8 local_f1;
  undefined4 local_e9;
  undefined4 local_e5;
  undefined2 local_e1;
  undefined2 local_df;
  undefined2 local_d9;
  byte local_d7;
  undefined8 *local_c8;
  char local_b8 [112];
  ulonglong local_48;
  longlong lVar8;
  
  local_48 = DAT_180086010 ^ (ulonglong)auStack_158;
  local_c8 = (undefined8 *)FUN_18002be40(0x290);
  if (local_c8 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = FUN_180031b10(local_c8);
  }
  puVar4 = FUN_180002f90();
  memset(local_130,0,0x5a);
  lVar5 = FUN_18002be40(100);
  memset(local_b8,0,100);
  strcpy_s(local_b8,99,"NTFS");
  pcVar6 = local_b8;
  do {
    cVar1 = *pcVar6;
    pcVar6[lVar5 - (longlong)local_b8] = cVar1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar9 = 0xffffffffffffffff;
  lVar8 = -1;
  do {
    lVar7 = lVar8 + 1;
    lVar2 = lVar8 + 1;
    lVar8 = lVar7;
  } while (local_b8[lVar2] != '\0');
  *(byte *)((longlong)puVar4 + 0x72) = *(byte *)((longlong)puVar4 + 0x72) & 0xc2;
  *(undefined8 *)((longlong)puVar4 + 0x25) = local_124;
  *(undefined8 *)((longlong)puVar4 + 0x35) = local_114;
  *(undefined8 *)((longlong)puVar4 + 0x2d) = local_11c;
  puVar4[8] = local_109;
  *(undefined8 *)((longlong)puVar4 + 0x1b) = local_12e;
  *(undefined1 *)((longlong)puVar4 + 0x3d) = local_10c;
  puVar4[0xb] = local_f1;
  *(undefined4 *)((longlong)puVar4 + 100) = local_e5;
  *(undefined4 *)(puVar4 + 0xc) = local_e9;
  puVar4[9] = local_101;
  *(undefined2 *)(puVar4 + 0xd) = local_e1;
  *(undefined2 *)((longlong)puVar4 + 0x6a) = local_df;
  *(short *)((longlong)puVar4 + 0x19) = (short)lVar7;
  *(byte *)((longlong)puVar4 + 0x72) = *(byte *)((longlong)puVar4 + 0x72) | local_d7 & 0x3d;
  *(ushort *)((longlong)puVar4 + 0x23) = local_126 | 0x10;
  *(undefined2 *)(puVar4 + 0xe) = local_d9;
  *(longlong *)((longlong)puVar4 + 0x11) = lVar5;
  plVar3[6] = (longlong)puVar4;
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1,param_2);
  (**(code **)(*plVar3 + 0x40))(plVar3,3);
  if (param_4 != (void *)0x0) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(char *)((longlong)param_4 + lVar5) != '\0');
    if (lVar5 != 0) {
      do {
        uVar9 = uVar9 + 1;
      } while (*(char *)((longlong)param_4 + uVar9) != '\0');
      if (uVar9 < 0x41) {
        FUN_180032230((longlong)plVar3,param_4);
      }
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_158);
  return;
}

