// Function: FUN_180016c70
// Address: 180016c70
// Size: 743 bytes


void FUN_180016c70(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  undefined2 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong local_90;
  ushort local_88 [8];
  undefined8 local_78;
  undefined8 local_70;
  ushort *local_68;
  undefined8 local_60;
  int local_58;
  undefined1 local_54;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_60 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_b8;
  local_50 = 0x67805318;
  local_4c = 0;
  local_58 = 0x6d626577;
  local_54 = 0;
  uVar5 = 0x80;
  iVar10 = 1;
  while (local_90 = param_3, (*(byte *)(param_2 + 4) & uVar5) == 0) {
    iVar10 = iVar10 + 1;
    uVar5 = (int)uVar5 >> 1;
    if (8 < iVar10) goto LAB_180016f30;
  }
  if (8 < iVar10) goto LAB_180016f30;
  uVar5 = (uint)*(byte *)(param_2 + 4) & uVar5 - 1;
  lVar15 = (longlong)iVar10;
  if (1 < lVar15) {
    lVar9 = 1;
    do {
      uVar5 = uVar5 << 8 | (uint)*(byte *)(param_2 + 4 + lVar9);
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar15);
  }
  uVar16 = iVar10 + uVar5 + 4;
  if (0x200 < uVar16) goto LAB_180016f30;
  bVar1 = false;
  puVar6 = FUN_180010a40();
  uVar14 = (undefined1)lVar15;
  local_68 = local_88;
  FUN_180001780((longlong)local_88);
  puVar7 = (undefined8 *)FUN_1800016b0(local_88);
  puVar7[2] = 0;
  puVar7[3] = 0xf;
  local_98 = local_98 & 0xffffff00;
  FUN_180001300((undefined1 *)puVar7,(undefined1 *)&local_98);
  if ((ulonglong)puVar7[3] < 4) {
    FUN_1800086f0((longlong)local_88,4,uVar14,&DAT_180067ad8);
  }
  else {
    puVar13 = puVar7;
    if (0xf < (ulonglong)puVar7[3]) {
      puVar13 = (undefined8 *)*puVar7;
    }
    puVar7[2] = 4;
    uVar14 = 4;
    memmove(puVar13,&DAT_180067ad8,4);
    local_98 = local_98 & 0xffffff00;
    FUN_180001300((undefined1 *)((longlong)puVar13 + 4),(undefined1 *)&local_98);
  }
  cVar4 = FUN_180010f50((longlong)puVar6,(longlong *)local_88);
  lVar15 = local_90;
  if (cVar4 != '\0') {
    for (uVar11 = iVar10 + 4; uVar11 <= iVar10 + uVar5; uVar11 = uVar11 + 1) {
      if (*(int *)((int)uVar11 + param_2) == local_58) {
        bVar1 = true;
        break;
      }
    }
  }
  bVar2 = false;
  piVar12 = (int *)((ulonglong)uVar16 + param_2);
  if (*piVar12 != local_50) goto LAB_180016f30;
  if (bVar1) {
    *(undefined4 *)(local_90 + 0x18) = 0x8a;
    puVar6 = FUN_180001350();
    local_68 = local_88;
    local_78 = 0;
    local_70 = 0;
    puVar7 = (undefined8 *)FUN_1800016b0(local_88);
    puVar7[2] = 0;
    puVar7[3] = 7;
    local_98 = local_98 & 0xffff0000;
    FUN_180001790((undefined2 *)puVar7,(undefined2 *)&local_98);
    if ((ulonglong)puVar7[3] < 4) {
      FUN_18000f8f0((longlong)local_88,4,uVar14,L"WEBM");
    }
    else {
      puVar13 = puVar7;
      if (7 < (ulonglong)puVar7[3]) {
        puVar13 = (undefined8 *)*puVar7;
      }
      puVar7[2] = 4;
      memmove(puVar13,L"WEBM",8);
      local_98 = local_98 & 0xffff0000;
      FUN_180001790((undefined2 *)(puVar13 + 1),(undefined2 *)&local_98);
    }
    FUN_18000ed00((longlong)(puVar6 + 0x60),local_88);
    if (piVar12[1] == 1) goto LAB_180016ef1;
    bVar2 = true;
    uVar5 = piVar12[1] & 0xffffff00;
  }
  else {
    *(undefined4 *)(local_90 + 0x18) = 0x60;
LAB_180016ef1:
    uVar5 = piVar12[2];
  }
  local_98._2_1_ = (undefined1)(uVar5 >> 0x10);
  local_98._1_1_ = (undefined1)(uVar5 >> 8);
  uVar3 = CONCAT11((char)uVar5,local_98._1_1_);
  local_98 = CONCAT22(uVar3,CONCAT11(local_98._2_1_,(char)(uVar5 >> 0x18)));
  uVar16 = local_98 + 0xc + uVar16;
  uVar8 = (ulonglong)uVar16 - 5;
  if (!bVar2) {
    uVar8 = (ulonglong)uVar16;
  }
  *(ulonglong *)(lVar15 + 0x10) = uVar8;
LAB_180016f30:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_b8);
  return;
}

