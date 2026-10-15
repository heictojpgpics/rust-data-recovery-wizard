// Function: FUN_18003bcb0
// Address: 18003bcb0
// Size: 1034 bytes


void FUN_18003bcb0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ushort *puVar10;
  undefined *puVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  ulonglong _Size;
  ulonglong uVar16;
  ushort uVar17;
  uint uVar18;
  undefined8 *_Dst;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  undefined1 auStack_4e8 [32];
  undefined1 local_4c8 [2];
  ushort local_4c6;
  longlong *local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  int local_4a8;
  undefined8 local_4a0;
  undefined1 *local_498;
  undefined1 local_490 [32];
  longlong local_470 [5];
  undefined8 local_448 [128];
  ulonglong local_48;
  
  local_4a0 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_4e8;
  local_4b8 = *(undefined8 *)(param_2 + 8);
  local_4b0 = 0xffffffffffffffff;
  local_4c0 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_4a8 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_4a8 = *(int *)((longlong)param_3 + 0xc);
    if (local_4a8 < 1) {
      local_4a8 = 0x200;
    }
  }
  else {
    local_4a8 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_4a8 = local_4a8 << 7;
  pcVar5 = FUN_180042930((longlong *)&local_4c0,0);
  if ((((pcVar5 != (char *)0x0) &&
       ((ushort)(*(ushort *)(pcVar5 + 4) << 8 | *(ushort *)(pcVar5 + 4) >> 8) == 1)) &&
      (*(short *)(pcVar5 + 6) == 0)) && (*(int *)(pcVar5 + 8) == 0)) {
    uVar17 = *(ushort *)(pcVar5 + 0xc) << 8 | *(ushort *)(pcVar5 + 0xc) >> 8;
    uVar4 = (ushort)((uint)*(undefined4 *)(pcVar5 + 0xe) >> 0x10);
    uVar14 = (ushort)*(undefined4 *)(pcVar5 + 0xe);
    iVar21 = CONCAT22(uVar14 << 8 | uVar14 >> 8,uVar4 << 8 | uVar4 >> 8);
    uVar4 = (ushort)((uint)*(undefined4 *)(pcVar5 + 0x12) >> 0x10);
    uVar12 = (ushort)*(undefined4 *)(pcVar5 + 0x12);
    local_4c6 = *(ushort *)(pcVar5 + 0x16) << 8 | *(ushort *)(pcVar5 + 0x16) >> 8;
    uVar14 = (ushort)((uint)*(undefined4 *)(pcVar5 + 0x1a) >> 0x10);
    uVar13 = (ushort)*(undefined4 *)(pcVar5 + 0x1a);
    uVar16 = (ulonglong)(CONCAT22(uVar13 << 8 | uVar13 >> 8,uVar14 << 8 | uVar14 >> 8) + 0x1e);
    pcVar5 = FUN_18002a060(pcVar5,0x2800,s__LayerName>Title_1800937d8,0x10);
    if (((pcVar5 != (char *)0x0) &&
        (pcVar5 = FUN_18002a060(pcVar5,100,s_LayerText>_1800937c8,10), pcVar5 != (char *)0x0)) &&
       ((pcVar6 = FUN_18002a060(pcVar5,100,s_<_photoshop_1800937b8,0xb), pcVar6 != (char *)0x0 &&
        (uVar20 = ((int)pcVar6 - (int)pcVar5) - 10, uVar19 = (ulonglong)uVar20, 0 < (int)uVar20))))
    {
      pcVar5 = pcVar5 + 10;
      lVar7 = 8;
      puVar8 = local_448;
      do {
        uVar1 = *(undefined8 *)(pcVar5 + 8);
        uVar2 = *(undefined8 *)(pcVar5 + 0x10);
        uVar3 = *(undefined8 *)(pcVar5 + 0x18);
        *puVar8 = *(undefined8 *)pcVar5;
        puVar8[1] = uVar1;
        puVar8[2] = uVar2;
        puVar8[3] = uVar3;
        uVar1 = *(undefined8 *)(pcVar5 + 0x28);
        uVar2 = *(undefined8 *)(pcVar5 + 0x30);
        uVar3 = *(undefined8 *)(pcVar5 + 0x38);
        puVar8[4] = *(undefined8 *)(pcVar5 + 0x20);
        puVar8[5] = uVar1;
        puVar8[6] = uVar2;
        puVar8[7] = uVar3;
        uVar1 = *(undefined8 *)(pcVar5 + 0x48);
        uVar2 = *(undefined8 *)(pcVar5 + 0x50);
        uVar3 = *(undefined8 *)(pcVar5 + 0x58);
        puVar8[8] = *(undefined8 *)(pcVar5 + 0x40);
        puVar8[9] = uVar1;
        puVar8[10] = uVar2;
        puVar8[0xb] = uVar3;
        uVar1 = *(undefined8 *)(pcVar5 + 0x68);
        puVar8[0xc] = *(undefined8 *)(pcVar5 + 0x60);
        puVar8[0xd] = uVar1;
        uVar1 = *(undefined8 *)(pcVar5 + 0x78);
        puVar8[0xe] = *(undefined8 *)(pcVar5 + 0x70);
        puVar8[0xf] = uVar1;
        pcVar5 = pcVar5 + 0x80;
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 0x10;
      } while (lVar7 != 0);
      FUN_180001690((undefined1 *)local_470);
      _Size = (ulonglong)(int)uVar19;
      puVar8 = (undefined8 *)FUN_1800016b0(local_470);
      if ((ulonglong)puVar8[3] < _Size) {
        FUN_1800086f0((longlong)local_470,_Size,(char)uVar19,local_448);
      }
      else {
        _Dst = puVar8;
        if (0xf < (ulonglong)puVar8[3]) {
          _Dst = (undefined8 *)*puVar8;
        }
        puVar8[2] = _Size;
        memmove(_Dst,local_448,_Size);
        local_4c8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_4c8);
      }
      local_498 = local_490;
      plVar9 = (longlong *)FUN_180007060((longlong)local_490,local_470);
      FUN_1800173f0(param_2,plVar9);
      FUN_180001630(local_470);
    }
    puVar10 = (ushort *)FUN_180042930((longlong *)&local_4c0,uVar16);
    if (puVar10 != (ushort *)0x0) {
      uVar16 = (ulonglong)CONCAT22(*puVar10 << 8 | *puVar10 >> 8,puVar10[1] << 8 | puVar10[1] >> 8)
               + 4 + uVar16;
      puVar10 = (ushort *)FUN_180042930((longlong *)&local_4c0,uVar16);
      if (puVar10 != (ushort *)0x0) {
        lVar7 = CONCAT22(*puVar10 << 8 | *puVar10 >> 8,puVar10[1] << 8 | puVar10[1] >> 8) + uVar16;
        puVar10 = (ushort *)FUN_180042930((longlong *)&local_4c0,lVar7 + 4);
        if (puVar10 != (ushort *)0x0) {
          uVar14 = *puVar10 << 8 | *puVar10 >> 8;
          uVar19 = lVar7 + 6;
          uVar20 = 0;
          puVar11 = FUN_180001350();
          uVar16 = *(ulonglong *)(puVar11 + 0x70);
          if (uVar14 == 0) {
            *(ulonglong *)(param_2 + 0x10) =
                 uVar19 + ((uint)uVar17 * (uint)local_4c6 *
                           CONCAT22(uVar12 << 8 | uVar12 >> 8,uVar4 << 8 | uVar4 >> 8) * iVar21 >> 3
                          );
          }
          else if (uVar14 == 1) {
            uVar18 = (uint)uVar17 * iVar21;
            uVar15 = 0;
            if (uVar18 != 0) {
              do {
                if (uVar16 < uVar19) break;
                puVar10 = (ushort *)FUN_180042930((longlong *)&local_4c0,uVar19);
                if (puVar10 == (ushort *)0x0) goto LAB_18003c084;
                uVar19 = uVar19 + 2;
                uVar20 = uVar20 + (ushort)(*puVar10 << 8 | *puVar10 >> 8);
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar18);
            }
            *(ulonglong *)(param_2 + 0x10) = uVar19 + uVar20;
          }
        }
      }
    }
  }
LAB_18003c084:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_4e8);
  return;
}

