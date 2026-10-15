// Function: FUN_18001b220
// Address: 18001b220
// Size: 992 bytes


void FUN_18001b220(longlong param_1,longlong param_2,longlong *param_3)

{
  void *_Dst;
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  char *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  longlong lVar15;
  longlong *plVar16;
  char ****ppppcVar17;
  ulonglong uVar18;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2c8 [8];
  longlong local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  int local_2a0;
  undefined8 local_298;
  char ***local_290 [2];
  longlong local_280;
  ulonglong local_278;
  undefined8 ***local_270 [2];
  ulonglong local_260;
  ulonglong local_258;
  undefined8 local_248 [64];
  ulonglong local_48;
  
  local_298 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_2f8;
  iVar8 = *(int *)(param_2 + 0x18);
  uVar18 = 0xa00000;
  if (iVar8 != 0xa0) {
    uVar18 = 0x6400000;
  }
  plVar16 = param_3;
  local_2c0 = param_2;
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    iVar3 = *(int *)((longlong)param_3 + 0xc);
    if (iVar3 < 1) {
      iVar3 = 0x200;
    }
  }
  else {
    iVar3 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  uVar14 = SUB81(plVar16,0);
  uVar12 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_180001780((longlong)local_290);
  puVar4 = (undefined8 *)FUN_1800016b0(local_290);
  puVar4[2] = uVar12;
  puVar4[3] = 0xf;
  local_2c8[0] = (undefined1)uVar12;
  puVar5 = puVar4;
  FUN_180001300((undefined1 *)puVar4,local_2c8);
  if ((ulonglong)puVar5[3] < 6) {
    FUN_1800086f0((longlong)local_290,6,uVar14,"</gpx>");
  }
  else {
    if (0xf < (ulonglong)puVar5[3]) {
      puVar5 = (undefined8 *)*puVar5;
    }
    puVar4[2] = 6;
    uVar14 = 6;
    memmove(puVar5,"</gpx>",6);
    local_2c8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar5 + 6),local_2c8);
  }
  if (iVar8 == 0xa0) {
    if ((ulonglong)puVar4[3] < 0xb) {
      FUN_1800086f0((longlong)local_290,0xb,uVar14,"</document>");
    }
    else {
      puVar5 = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar5 = (undefined8 *)*puVar4;
      }
      puVar4[2] = 0xb;
      memmove(puVar5,"</document>",0xb);
      local_2c8[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar5 + 0xb),local_2c8);
    }
  }
  local_2b0 = *(undefined8 *)(local_2c0 + 8);
  local_2a8 = 0xffffffffffffffff;
  local_2b8 = param_3;
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_2a0 = *(int *)((longlong)param_3 + 0xc);
    if (local_2a0 < 1) {
      local_2a0 = 0x200;
    }
  }
  else {
    local_2a0 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_2a0 = local_2a0 << 7;
  puVar5 = (undefined8 *)FUN_180042930((longlong *)&local_2b8,0);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_180001630((longlong *)local_290);
  }
  else {
    FUN_180001690((undefined1 *)local_270);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
    if (uVar6 <= uVar18) {
      puVar4 = (undefined8 *)FUN_1800016b0(local_270);
      while( true ) {
        lVar15 = 4;
        puVar9 = local_248;
        puVar13 = puVar5;
        do {
          uVar12 = puVar13[1];
          uVar1 = puVar13[2];
          uVar2 = puVar13[3];
          *puVar9 = *puVar13;
          puVar9[1] = uVar12;
          puVar9[2] = uVar1;
          puVar9[3] = uVar2;
          uVar12 = puVar13[5];
          uVar1 = puVar13[6];
          uVar2 = puVar13[7];
          puVar9[4] = puVar13[4];
          puVar9[5] = uVar12;
          puVar9[6] = uVar1;
          puVar9[7] = uVar2;
          uVar12 = puVar13[9];
          uVar1 = puVar13[10];
          uVar2 = puVar13[0xb];
          puVar9[8] = puVar13[8];
          puVar9[9] = uVar12;
          puVar9[10] = uVar1;
          puVar9[0xb] = uVar2;
          uVar12 = puVar13[0xd];
          puVar9[0xc] = puVar13[0xc];
          puVar9[0xd] = uVar12;
          uVar12 = puVar13[0xf];
          puVar9[0xe] = puVar13[0xe];
          puVar9[0xf] = uVar12;
          puVar13 = puVar13 + 0x10;
          lVar15 = lVar15 + -1;
          puVar9 = puVar9 + 0x10;
        } while (lVar15 != 0);
        if ((ulonglong)puVar4[3] < 0x200) {
          FUN_1800086f0((longlong)local_270,0x200,0,local_248);
        }
        else {
          _Dst = (void *)*puVar4;
          puVar4[2] = 0x200;
          memmove(_Dst,local_248,0x200);
          local_2c8[0] = 0;
          FUN_180001300((undefined1 *)((longlong)_Dst + 0x200),local_2c8);
        }
        ppppcVar17 = local_290;
        if (0xf < local_278) {
          ppppcVar17 = (char ****)local_290[0];
        }
        uVar6 = 0xffffffffffffffff;
        do {
          uVar6 = uVar6 + 1;
        } while (*(char *)((longlong)ppppcVar17 + uVar6) != '\0');
        ppppuVar10 = local_270;
        if (0xf < local_258) {
          ppppuVar10 = (undefined8 ****)local_270[0];
        }
        uVar6 = FUN_18000f820((longlong)ppppuVar10,local_260,0,(char *)ppppcVar17,uVar6);
        if (uVar6 != 0xffffffffffffffff) break;
        iVar11 = 0;
        iVar8 = 0x1ff;
        pcVar7 = (char *)((longlong)puVar5 + (longlong)iVar3 + -1);
        do {
          if (*pcVar7 != '\0') break;
          iVar11 = iVar11 + 1;
          pcVar7 = pcVar7 + -1;
          iVar8 = iVar8 + -1;
        } while (0 < iVar8);
        if (0x10 < iVar11) {
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (longlong)(iVar3 - iVar11)
          ;
          goto LAB_18001b598;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x200;
        puVar5 = (undefined8 *)FUN_180042930((longlong *)&local_2b8,*(ulonglong *)(param_1 + 0x10));
        uVar6 = *(ulonglong *)(param_1 + 0x10);
        if ((puVar5 == (undefined8 *)0x0) || (uVar18 < uVar6)) goto LAB_18001b59c;
      }
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar6 + local_280;
LAB_18001b598:
      uVar6 = *(ulonglong *)(param_1 + 0x10);
    }
LAB_18001b59c:
    *(ulonglong *)(local_2c0 + 0x10) = uVar6;
    FUN_180001630((longlong *)local_270);
    FUN_180001630((longlong *)local_290);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_2f8);
  return;
}

