// Function: FUN_180043ba0
// Address: 180043ba0
// Size: 864 bytes


void FUN_180043ba0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  char *pcVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong _Size;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 uVar18;
  byte bVar19;
  undefined8 *_Dst;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [8];
  longlong local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  int local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0 [32];
  longlong local_180 [5];
  char local_158 [272];
  ulonglong local_48;
  
  local_1a8 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_208;
  plVar13 = param_3;
  local_1e0 = param_2;
  puVar8 = FUN_180001350();
  uVar18 = SUB81(plVar13,0);
  lVar3 = *(longlong *)(puVar8 + 0x70);
  local_1c0 = *(undefined8 *)(param_2 + 8);
  local_1b8 = 0xffffffffffffffff;
  local_1c8 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_1b0 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_1b0 = *(int *)((longlong)param_3 + 0xc);
    if (local_1b0 < 1) {
      local_1b0 = 0x200;
    }
  }
  else {
    local_1b0 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_1b0 = local_1b0 << 7;
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    iVar7 = *(int *)((longlong)param_3 + 0xc);
    if (iVar7 < 1) {
      iVar7 = 0x200;
    }
  }
  else {
    iVar7 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  uVar16 = (ulonglong)iVar7;
  pcVar9 = FUN_180042930((longlong *)&local_1c8,0);
  if (((((pcVar9 != (char *)0x0) && (*pcVar9 == '\x1f')) && (pcVar9[1] == -0x75)) &&
      ((pcVar9[2] == '\b' && ((pcVar9[3] & 0x60U) == 0)))) &&
     ((-1 < pcVar9[3] && ((byte)pcVar9[9] < 0xe)))) {
    local_1d8 = *(undefined1 **)pcVar9;
    local_1d0 = *(undefined2 *)(pcVar9 + 8);
    uVar17 = 10;
    puVar10 = (ushort *)FUN_180042930((longlong *)&local_1c8,10);
    if (puVar10 != (ushort *)0x0) {
      bVar19 = local_1d8._3_1_;
      if (((ulonglong)local_1d8 & 0x4000000) != 0) {
        uVar17 = (ulonglong)(ushort)(*puVar10 << 8 | *puVar10 >> 8) + 10;
      }
      lVar14 = local_1e0;
      if (((ulonglong)local_1d8 & 0x8000000) != 0) {
        lVar14 = 2;
        puVar11 = puVar10;
        pcVar9 = local_158;
        do {
          uVar4 = *(undefined8 *)(puVar11 + 4);
          uVar5 = *(undefined8 *)(puVar11 + 8);
          uVar6 = *(undefined8 *)(puVar11 + 0xc);
          *(undefined8 *)pcVar9 = *(undefined8 *)puVar11;
          *(undefined8 *)(pcVar9 + 8) = uVar4;
          *(undefined8 *)(pcVar9 + 0x10) = uVar5;
          *(undefined8 *)(pcVar9 + 0x18) = uVar6;
          uVar4 = *(undefined8 *)(puVar11 + 0x14);
          uVar5 = *(undefined8 *)(puVar11 + 0x18);
          uVar6 = *(undefined8 *)(puVar11 + 0x1c);
          *(undefined8 *)(pcVar9 + 0x20) = *(undefined8 *)(puVar11 + 0x10);
          *(undefined8 *)(pcVar9 + 0x28) = uVar4;
          *(undefined8 *)(pcVar9 + 0x30) = uVar5;
          *(undefined8 *)(pcVar9 + 0x38) = uVar6;
          uVar4 = *(undefined8 *)(puVar11 + 0x24);
          uVar5 = *(undefined8 *)(puVar11 + 0x28);
          uVar6 = *(undefined8 *)(puVar11 + 0x2c);
          *(undefined8 *)(pcVar9 + 0x40) = *(undefined8 *)(puVar11 + 0x20);
          *(undefined8 *)(pcVar9 + 0x48) = uVar4;
          *(undefined8 *)(pcVar9 + 0x50) = uVar5;
          *(undefined8 *)(pcVar9 + 0x58) = uVar6;
          uVar4 = *(undefined8 *)(puVar11 + 0x34);
          *(undefined8 *)(pcVar9 + 0x60) = *(undefined8 *)(puVar11 + 0x30);
          *(undefined8 *)(pcVar9 + 0x68) = uVar4;
          pcVar1 = pcVar9 + 0x80;
          uVar4 = *(undefined8 *)(puVar11 + 0x3c);
          *(undefined8 *)(pcVar9 + 0x70) = *(undefined8 *)(puVar11 + 0x38);
          *(undefined8 *)(pcVar9 + 0x78) = uVar4;
          puVar11 = puVar11 + 0x40;
          lVar14 = lVar14 + -1;
          pcVar9 = pcVar1;
        } while (lVar14 != 0);
        *(undefined4 *)pcVar1 = *(undefined4 *)puVar11;
        FUN_180001780((longlong)local_180);
        puVar12 = (undefined8 *)FUN_1800016b0(local_180);
        puVar12[2] = 0;
        puVar12[3] = 0xf;
        local_1e8[0] = 0;
        FUN_180001300((undefined1 *)puVar12,local_1e8);
        uVar15 = 0xffffffffffffffff;
        do {
          _Size = uVar15 + 1;
          lVar14 = uVar15 + 1;
          uVar15 = _Size;
        } while (local_158[lVar14] != '\0');
        if ((ulonglong)puVar12[3] < _Size) {
          FUN_1800086f0((longlong)local_180,_Size,uVar18,local_158);
        }
        else {
          _Dst = puVar12;
          if (0xf < (ulonglong)puVar12[3]) {
            _Dst = (undefined8 *)*puVar12;
          }
          puVar12[2] = _Size;
          memmove(_Dst,local_158,_Size);
          local_1e8[0] = 0;
          FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_1e8);
          bVar19 = local_1d8._3_1_;
        }
        local_1d8 = local_1a0;
        plVar13 = (longlong *)FUN_180007060((longlong)local_1a0,local_180);
        lVar14 = local_1e0;
        FUN_1800173f0(local_1e0,plVar13);
        FUN_180001630(local_180);
      }
      if ((bVar19 & 0x10) != 0) {
        cVar2 = (char)*puVar10;
        while (cVar2 != '\0') {
          pcVar9 = FUN_180042930((longlong *)&local_1c8,uVar17);
          if (pcVar9 == (char *)0x0) goto LAB_180043ec2;
          uVar17 = uVar17 + 1;
          if (0x1400000 < uVar17) {
            *(ulonglong *)(lVar14 + 0x10) = uVar17;
            goto LAB_180043ec2;
          }
          cVar2 = *pcVar9;
        }
      }
      uVar15 = uVar17 + 2;
      if ((bVar19 & 2) == 0) {
        uVar15 = uVar17;
      }
      uVar15 = uVar15 - uVar15 % uVar16;
      do {
        uVar15 = uVar15 + uVar16;
        if (((ulonglong)(lVar3 * 2) <= uVar15) ||
           (puVar8 = FUN_180042930((longlong *)&local_1c8,uVar15), puVar8 == (undefined *)0x0))
        goto LAB_180043ea5;
      } while ((*(int *)(puVar8 + (uVar16 - 4)) != 0) || (*(int *)(puVar8 + (uVar16 - 8)) != 0));
      uVar15 = uVar15 + uVar16;
LAB_180043ea5:
      *(ulonglong *)(local_1e0 + 0x10) = uVar15;
    }
  }
LAB_180043ec2:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_208);
  return;
}

