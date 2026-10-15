// Function: FUN_1800441a0
// Address: 1800441a0
// Size: 602 bytes


void FUN_1800441a0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char *_Str1;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_18008f028 ^ (ulonglong)auStack_88;
  local_60 = *(undefined8 *)(param_2 + 8);
  local_58 = 0xffffffffffffffff;
  local_68 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_50 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_50 = *(int *)((longlong)param_3 + 0xc);
    if (local_50 < 1) {
      local_50 = 0x200;
    }
  }
  else {
    local_50 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_50 = local_50 << 7;
  bVar2 = false;
  local_48 = DAT_18006d4f8;
  bVar1 = false;
  local_44 = DAT_18006d4fc;
  local_40 = DAT_18006d4f0;
  local_3c = DAT_18006d4f4;
  local_38 = DAT_180067700;
  local_34 = DAT_180067704;
  puVar6 = FUN_180042930((longlong *)&local_68,0);
  if (puVar6 != (undefined *)0x0) {
    uVar10 = (ushort)((uint)*(undefined4 *)(puVar6 + 8) >> 0x10);
    uVar8 = (ushort)*(undefined4 *)(puVar6 + 8);
    iVar5 = strncmp(puVar6 + 0xc,(char *)&local_48,4);
    if (((iVar5 == 0) &&
        (uVar4 = (ushort)((uint)*(undefined4 *)(puVar6 + 0x10) >> 0x10),
        uVar9 = (ushort)*(undefined4 *)(puVar6 + 0x10),
        0 < CONCAT22(uVar9 << 8 | uVar9 >> 8,uVar4 << 8 | uVar4 >> 8))) &&
       (uVar4 = (ushort)((uint)*(undefined4 *)(puVar6 + 0x14) >> 0x10),
       uVar9 = (ushort)*(undefined4 *)(puVar6 + 0x14),
       0 < CONCAT22(uVar9 << 8 | uVar9 >> 8,uVar4 << 8 | uVar4 >> 8))) {
      uVar11 = (ulonglong)CONCAT22(uVar8 << 8 | uVar8 >> 8,uVar10 << 8 | uVar10 >> 8) + 0x14;
      do {
        if ((0x1400000 < uVar11) ||
           (puVar7 = (undefined4 *)FUN_180042930((longlong *)&local_68,uVar11),
           puVar7 == (undefined4 *)0x0)) goto LAB_1800443c2;
        uVar8 = (ushort)((uint)*puVar7 >> 0x10);
        uVar10 = (ushort)*puVar7;
        uVar12 = CONCAT22(uVar10 << 8 | uVar10 >> 8,uVar8 << 8 | uVar8 >> 8);
        if (0x1400000 < uVar12) {
          if (bVar2) {
            *(ulonglong *)(param_2 + 0x10) = uVar11;
          }
          goto LAB_1800443c2;
        }
        _Str1 = (char *)(puVar7 + 1);
        iVar5 = strncmp(_Str1,(char *)&local_48,4);
        bVar3 = bVar2;
        if (((iVar5 != 0) && (iVar5 = strncmp(_Str1,(char *)&local_40,4), bVar3 = true, iVar5 != 0))
           && (iVar5 = strncmp(_Str1,(char *)&local_38,4), bVar3 = bVar2, iVar5 == 0)) {
          bVar1 = true;
        }
        bVar2 = bVar3;
        uVar11 = uVar11 + (ulonglong)uVar12 + 0xc;
      } while (!bVar1);
      *(ulonglong *)(param_2 + 0x10) = uVar11;
    }
  }
LAB_1800443c2:
  __security_check_cookie(local_30 ^ (ulonglong)auStack_88);
  return;
}

