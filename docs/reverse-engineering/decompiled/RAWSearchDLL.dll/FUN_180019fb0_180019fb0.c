// Function: FUN_180019fb0
// Address: 180019fb0
// Size: 845 bytes


void FUN_180019fb0(longlong param_1,longlong param_2,longlong *param_3)

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
  undefined1 auStackY_2e8 [32];
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  int local_298;
  undefined8 local_290;
  char ***local_288 [2];
  longlong local_278;
  ulonglong local_270;
  undefined8 ***local_268 [2];
  ulonglong local_258;
  ulonglong local_250;
  undefined8 local_248 [64];
  ulonglong local_48;
  
  local_290 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_2e8;
  plVar16 = param_3;
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
  FUN_180001780((longlong)local_288);
  puVar4 = (undefined8 *)FUN_1800016b0(local_288);
  puVar4[2] = uVar12;
  puVar4[3] = 0xf;
  local_2b8[0] = (undefined1)uVar12;
  FUN_180001300((undefined1 *)puVar4,local_2b8);
  if ((ulonglong)puVar4[3] < 0xe) {
    FUN_1800086f0((longlong)local_288,0xe,uVar14,"</BiffProject>");
  }
  else {
    puVar5 = puVar4;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar5 = (undefined8 *)*puVar4;
    }
    puVar4[2] = 0xe;
    memmove(puVar5,"</BiffProject>",0xe);
    local_2b8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar5 + 0xe),local_2b8);
  }
  local_2a8 = *(undefined8 *)(param_2 + 8);
  local_2a0 = 0xffffffffffffffff;
  local_2b0 = param_3;
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_298 = *(int *)((longlong)param_3 + 0xc);
    if (local_298 < 1) {
      local_298 = 0x200;
    }
  }
  else {
    local_298 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_298 = local_298 << 7;
  puVar4 = (undefined8 *)FUN_180042930((longlong *)&local_2b0,0);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_180001630((longlong *)local_288);
  }
  else {
    FUN_180001690((undefined1 *)local_268);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
    if (uVar6 < 0x6400001) {
      puVar5 = (undefined8 *)FUN_1800016b0(local_268);
      while( true ) {
        lVar15 = 4;
        puVar9 = local_248;
        puVar13 = puVar4;
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
        if ((ulonglong)puVar5[3] < 0x200) {
          FUN_1800086f0((longlong)local_268,0x200,0,local_248);
        }
        else {
          _Dst = (void *)*puVar5;
          puVar5[2] = 0x200;
          memmove(_Dst,local_248,0x200);
          local_2b8[0] = 0;
          FUN_180001300((undefined1 *)((longlong)_Dst + 0x200),local_2b8);
        }
        ppppcVar17 = local_288;
        if (0xf < local_270) {
          ppppcVar17 = (char ****)local_288[0];
        }
        uVar6 = 0xffffffffffffffff;
        do {
          uVar6 = uVar6 + 1;
        } while (*(char *)((longlong)ppppcVar17 + uVar6) != '\0');
        ppppuVar10 = local_268;
        if (0xf < local_250) {
          ppppuVar10 = (undefined8 ****)local_268[0];
        }
        uVar6 = FUN_18000f820((longlong)ppppuVar10,local_258,0,(char *)ppppcVar17,uVar6);
        if (uVar6 != 0xffffffffffffffff) break;
        iVar11 = 0;
        iVar8 = 0x1ff;
        pcVar7 = (char *)((longlong)puVar4 + (longlong)iVar3 + -1);
        do {
          if (*pcVar7 != '\0') break;
          iVar11 = iVar11 + 1;
          pcVar7 = pcVar7 + -1;
          iVar8 = iVar8 + -1;
        } while (0 < iVar8);
        if (0x10 < iVar11) {
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (longlong)(iVar3 - iVar11)
          ;
          goto LAB_18001a29a;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x200;
        puVar4 = (undefined8 *)FUN_180042930((longlong *)&local_2b0,*(ulonglong *)(param_1 + 0x10));
        uVar6 = *(ulonglong *)(param_1 + 0x10);
        if ((puVar4 == (undefined8 *)0x0) || (0x6400000 < uVar6)) goto LAB_18001a29e;
      }
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar6 + local_278;
LAB_18001a29a:
      uVar6 = *(ulonglong *)(param_1 + 0x10);
    }
LAB_18001a29e:
    *(ulonglong *)(param_2 + 0x10) = uVar6;
    FUN_180001630((longlong *)local_268);
    FUN_180001630((longlong *)local_288);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_2e8);
  return;
}

