// Function: FUN_18001a470
// Address: 18001a470
// Size: 979 bytes


void FUN_18001a470(longlong param_1,longlong param_2,longlong *param_3)

{
  void *_Dst;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 ****ppppuVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined1 uVar16;
  longlong lVar17;
  char ****ppppcVar18;
  undefined1 auStackY_338 [32];
  undefined1 local_308 [8];
  undefined1 *local_300;
  undefined8 local_2f0;
  undefined1 local_2e8 [32];
  longlong *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  int local_2b0;
  undefined8 ***local_2a8 [2];
  ulonglong local_298;
  ulonglong local_290;
  char ***local_288 [2];
  longlong local_278;
  ulonglong local_270;
  longlong local_268 [4];
  undefined8 local_248 [64];
  ulonglong local_48;
  
  local_2f0 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_338;
  plVar9 = param_3;
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    iVar4 = *(int *)((longlong)param_3 + 0xc);
    if (iVar4 < 1) {
      iVar4 = 0x200;
    }
  }
  else {
    iVar4 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  uVar16 = SUB81(plVar9,0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_180001780((longlong)local_288);
  puVar5 = (undefined8 *)FUN_1800016b0(local_288);
  puVar5[2] = 0;
  puVar5[3] = 0xf;
  local_308[0] = 0;
  FUN_180001300((undefined1 *)puVar5,local_308);
  if ((ulonglong)puVar5[3] < 0x15) {
    FUN_1800086f0((longlong)local_288,0x15,uVar16,"ProcessOn Schema File");
  }
  else {
    puVar6 = puVar5;
    if (0xf < (ulonglong)puVar5[3]) {
      puVar6 = (undefined8 *)*puVar5;
    }
    puVar5[2] = 0x15;
    memmove(puVar6,"ProcessOn Schema File",0x15);
    local_308[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar6 + 0x15),local_308);
  }
  local_2c0 = *(undefined8 *)(param_2 + 8);
  local_2b8 = -1;
  local_2c8 = param_3;
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_2b0 = *(int *)((longlong)param_3 + 0xc);
    if (local_2b0 < 1) {
      local_2b0 = 0x200;
    }
  }
  else {
    local_2b0 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_2b0 = local_2b0 << 7;
  puVar5 = (undefined8 *)FUN_180042930((longlong *)&local_2c8,0);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_180001630((longlong *)local_288);
  }
  else {
    FUN_180001690((undefined1 *)local_2a8);
    if (*(ulonglong *)(param_1 + 0x10) < 0x6400001) {
      puVar6 = (undefined8 *)FUN_1800016b0(local_2a8);
      while( true ) {
        lVar17 = 4;
        puVar11 = local_248;
        puVar15 = puVar5;
        do {
          uVar1 = puVar15[1];
          uVar2 = puVar15[2];
          uVar3 = puVar15[3];
          *puVar11 = *puVar15;
          puVar11[1] = uVar1;
          puVar11[2] = uVar2;
          puVar11[3] = uVar3;
          uVar1 = puVar15[5];
          uVar2 = puVar15[6];
          uVar3 = puVar15[7];
          puVar11[4] = puVar15[4];
          puVar11[5] = uVar1;
          puVar11[6] = uVar2;
          puVar11[7] = uVar3;
          uVar1 = puVar15[9];
          uVar2 = puVar15[10];
          uVar3 = puVar15[0xb];
          puVar11[8] = puVar15[8];
          puVar11[9] = uVar1;
          puVar11[10] = uVar2;
          puVar11[0xb] = uVar3;
          uVar1 = puVar15[0xd];
          puVar11[0xc] = puVar15[0xc];
          puVar11[0xd] = uVar1;
          uVar1 = puVar15[0xf];
          puVar11[0xe] = puVar15[0xe];
          puVar11[0xf] = uVar1;
          puVar15 = puVar15 + 0x10;
          lVar17 = lVar17 + -1;
          puVar11 = puVar11 + 0x10;
        } while (lVar17 != 0);
        if ((ulonglong)puVar6[3] < 0x200) {
          FUN_1800086f0((longlong)local_2a8,0x200,0,local_248);
        }
        else {
          _Dst = (void *)*puVar6;
          puVar6[2] = 0x200;
          memmove(_Dst,local_248,0x200);
          local_308[0] = 0;
          FUN_180001300((undefined1 *)((longlong)_Dst + 0x200),local_308);
        }
        ppppcVar18 = local_288;
        if (0xf < local_270) {
          ppppcVar18 = (char ****)local_288[0];
        }
        uVar7 = 0xffffffffffffffff;
        do {
          uVar7 = uVar7 + 1;
        } while (*(char *)((longlong)ppppcVar18 + uVar7) != '\0');
        ppppuVar12 = local_2a8;
        if (0xf < local_290) {
          ppppuVar12 = (undefined8 ****)local_2a8[0];
        }
        uVar7 = FUN_18000f820((longlong)ppppuVar12,local_298,0,(char *)ppppcVar18,uVar7);
        if (uVar7 != 0xffffffffffffffff) break;
        iVar14 = 0;
        iVar10 = 0x1ff;
        pcVar8 = (char *)((longlong)puVar5 + (longlong)iVar4 + -1);
        do {
          if (*pcVar8 != '\0') break;
          iVar14 = iVar14 + 1;
          pcVar8 = pcVar8 + -1;
          iVar10 = iVar10 + -1;
        } while (0 < iVar10);
        if (0x10 < iVar14) {
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (longlong)(iVar4 - iVar14)
          ;
          goto LAB_18001a7e1;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x200;
        puVar5 = (undefined8 *)FUN_180042930((longlong *)&local_2c8,*(ulonglong *)(param_1 + 0x10));
        if ((puVar5 == (undefined8 *)0x0) || (0x6400000 < *(ulonglong *)(param_1 + 0x10)))
        goto LAB_18001a7e1;
      }
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + local_278 + 0x13 + uVar7;
      FUN_180006e00(local_2a8,(longlong)local_268,0,uVar7);
      local_300 = local_2e8;
      puVar13 = local_2e8;
      plVar9 = (longlong *)FUN_180007060((longlong)puVar13,local_268);
      FUN_18001a850(puVar13,(longlong)&local_2c8,plVar9);
      if (local_2b8 != 0) {
        local_300 = local_2e8;
        plVar9 = (longlong *)FUN_180007060((longlong)local_2e8,&local_2c8);
        FUN_1800173f0(param_2,plVar9);
      }
      FUN_180001630((longlong *)&local_2c8);
      FUN_180001630(local_268);
    }
LAB_18001a7e1:
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    FUN_180001630((longlong *)local_2a8);
    FUN_180001630((longlong *)local_288);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_338);
  return;
}

