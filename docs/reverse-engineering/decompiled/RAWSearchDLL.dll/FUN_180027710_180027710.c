// Function: FUN_180027710
// Address: 180027710
// Size: 876 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180027710(longlong param_1,longlong param_2,undefined **param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int *piVar15;
  int iVar16;
  undefined1 auStackY_22a8 [32];
  undefined **local_2270;
  undefined8 local_2268;
  undefined8 local_2260;
  int local_2258;
  undefined8 local_2248 [6];
  int iStack_2218;
  uint uStack_2204;
  int aiStack_21fc [109];
  int local_2048 [127];
  uint local_1e4c [897];
  undefined1 local_1048 [4096];
  ulonglong local_48;
  
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_22a8;
  local_2268 = *(undefined8 *)(param_2 + 8);
  local_2260 = 0xffffffffffffffff;
  local_2270 = param_3;
  if (param_3 == (undefined **)0x0) {
    local_2258 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_2258 = *(int *)((longlong)param_3 + 0xc);
    if (local_2258 < 1) {
      local_2258 = 0x200;
    }
  }
  else {
    local_2258 = (**(code **)((longlong)*param_3 + 0x28))(param_3);
  }
  local_2258 = local_2258 << 7;
  memset(local_1048,0,0x1000);
  puVar9 = (undefined8 *)FUN_180042930((longlong *)&local_2270,0);
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    lVar14 = 4;
    uVar13 = 0x80;
    puVar12 = local_2248;
    do {
      uVar4 = puVar9[1];
      uVar5 = puVar9[2];
      uVar6 = puVar9[3];
      uVar2 = puVar9[0xe];
      uVar3 = puVar9[0xf];
      *puVar12 = *puVar9;
      puVar12[1] = uVar4;
      puVar12[2] = uVar5;
      puVar12[3] = uVar6;
      uVar4 = puVar9[5];
      uVar5 = puVar9[6];
      uVar6 = puVar9[7];
      puVar12[4] = puVar9[4];
      puVar12[5] = uVar4;
      puVar12[6] = uVar5;
      puVar12[7] = uVar6;
      uVar4 = puVar9[9];
      uVar5 = puVar9[10];
      uVar6 = puVar9[0xb];
      puVar12[8] = puVar9[8];
      puVar12[9] = uVar4;
      puVar12[10] = uVar5;
      puVar12[0xb] = uVar6;
      uVar4 = puVar9[0xd];
      puVar12[0xc] = puVar9[0xc];
      puVar12[0xd] = uVar4;
      puVar9 = puVar9 + 0x10;
      puVar12[0xe] = uVar2;
      puVar12[0xf] = uVar3;
      lVar14 = lVar14 + -1;
      puVar12 = puVar12 + 0x10;
    } while (lVar14 != 0);
    if (((short)((ulonglong)local_2248[3] >> 0x10) == 4) &&
       ((short)((ulonglong)local_2248[3] >> 0x30) == 0xc)) {
      if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
        iVar8 = *(int *)((longlong)param_3 + 0xc);
        if (iVar8 < 1) {
          iVar8 = 0x200;
        }
      }
      else {
        iVar8 = (**(code **)((longlong)*param_3 + 0x28))(param_3);
      }
      *(int *)(param_1 + 0x10) = (int)(0x1000 / (longlong)iVar8);
    }
    iVar8 = 0;
    piVar15 = aiStack_21fc;
    lVar14 = 0x6d;
    iVar16 = -1;
    do {
      iVar1 = *piVar15;
      piVar15 = piVar15 + 1;
      iVar7 = iVar1;
      if (iVar1 == -1) {
        iVar7 = iVar16;
      }
      iVar16 = iVar8 + 1;
      if (iVar1 == -1) {
        iVar16 = iVar8;
      }
      iVar8 = iVar16;
      lVar14 = lVar14 + -1;
      iVar16 = iVar7;
    } while (lVar14 != 0);
    memset(local_2048,0,0x1000);
    while (uStack_2204 != 0xfffffffe) {
      uVar10 = FUN_180027a80(param_1,local_2048,*(longlong *)(param_2 + 8),
                             (ulonglong)(uStack_2204 + 1),1,(longlong *)param_3);
      if ((int)uVar10 == 0) goto LAB_180027a21;
      piVar15 = local_2048;
      lVar14 = 0x7f;
      iVar16 = iVar7;
      do {
        iVar1 = *piVar15;
        piVar15 = piVar15 + 1;
        iVar7 = iVar1;
        if (iVar1 == -1) {
          iVar7 = iVar16;
        }
        iVar16 = iVar8 + 1;
        if (iVar1 == -1) {
          iVar16 = iVar8;
        }
        iVar8 = iVar16;
        lVar14 = lVar14 + -1;
        iVar16 = iVar7;
      } while (lVar14 != 0);
      if ((local_1e4c[0] <= uStack_2204) ||
         (uStack_2204 = local_1e4c[0], local_1e4c[0] == 0xffffffff)) break;
    }
    iVar16 = 0;
    if (iVar7 != -1) {
      uVar10 = FUN_180027a80(param_1,local_2048,*(longlong *)(param_2 + 8),(ulonglong)(iVar7 + 1),1,
                             (longlong *)param_3);
      if ((int)uVar10 == 0) goto LAB_180027a21;
      puVar11 = local_1e4c;
      uVar10 = uVar13;
      do {
        iVar16 = (int)uVar10;
        if (*puVar11 != 0xffffffff) break;
        uVar10 = (ulonglong)((int)uVar10 - 1);
        uVar13 = uVar13 - 1;
        puVar11 = puVar11 + -1;
        iVar16 = 0;
      } while (0 < (longlong)uVar13);
    }
    uVar10 = (ulonglong)
             (uint)(((iVar8 * 0x80 + iVar16) * 0x200 + -0xfe00) * *(int *)(param_1 + 0x10));
    uVar13 = FUN_180027a80(param_1,local_1048,*(longlong *)(param_2 + 8),
                           (ulonglong)(iStack_2218 + 1),2,(longlong *)param_3);
    if ((int)uVar13 == 0) {
      if (uVar10 < 0xa00001) {
        *(undefined4 *)(param_2 + 0x18) = 0x29;
        *(ulonglong *)(param_2 + 0x10) = uVar10;
      }
    }
    else {
      if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
        iVar8 = *(int *)((longlong)param_3 + 0xc);
        param_3 = CRawFileCellTestStorageDevice::vftable;
        if (iVar8 < 1) {
          iVar8 = 0x200;
        }
      }
      else {
        iVar8 = (**(code **)((longlong)*param_3 + 0x28))();
      }
      FUN_180027be0(param_3,(longlong)local_1048,iVar8 * 2,param_2);
      *(ulonglong *)(param_2 + 0x10) = uVar10;
    }
  }
LAB_180027a21:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_22a8);
  return;
}

