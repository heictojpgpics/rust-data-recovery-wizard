// Function: FUN_1800421c0
// Address: 1800421c0
// Size: 738 bytes


void FUN_1800421c0(longlong param_1,longlong param_2,longlong *param_3)

{
  void *_Dst;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 ****ppppuVar8;
  undefined1 uVar9;
  longlong *plVar10;
  longlong lVar11;
  char ****ppppcVar12;
  undefined8 uVar13;
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
  uVar13 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar10 = param_3;
  FUN_180001780((longlong)local_288);
  uVar9 = SUB81(plVar10,0);
  puVar4 = (undefined8 *)FUN_1800016b0(local_288);
  puVar4[2] = 0;
  puVar4[3] = 0xf;
  local_2b8[0] = 0;
  FUN_180001300((undefined1 *)puVar4,local_2b8);
  if ((ulonglong)puVar4[3] < 0xe) {
    FUN_1800086f0((longlong)local_288,0xe,uVar9,"\"libopenshot\":");
  }
  else {
    puVar5 = puVar4;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar5 = (undefined8 *)*puVar4;
    }
    puVar4[2] = 0xe;
    memmove(puVar5,"\"libopenshot\":",0xe);
    local_2b8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar5 + 0xe),local_2b8);
  }
  local_2a8 = *(undefined8 *)(param_2 + 8);
  local_2a0 = 0xffffffffffffffff;
  local_2b0 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_298 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
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
    if (*(ulonglong *)(param_1 + 0x10) < 0x200000) {
      puVar5 = (undefined8 *)FUN_1800016b0(local_268);
      do {
        lVar11 = 4;
        puVar7 = local_248;
        do {
          uVar1 = puVar4[1];
          uVar2 = puVar4[2];
          uVar3 = puVar4[3];
          *puVar7 = *puVar4;
          puVar7[1] = uVar1;
          puVar7[2] = uVar2;
          puVar7[3] = uVar3;
          uVar1 = puVar4[5];
          uVar2 = puVar4[6];
          uVar3 = puVar4[7];
          puVar7[4] = puVar4[4];
          puVar7[5] = uVar1;
          puVar7[6] = uVar2;
          puVar7[7] = uVar3;
          uVar1 = puVar4[9];
          uVar2 = puVar4[10];
          uVar3 = puVar4[0xb];
          puVar7[8] = puVar4[8];
          puVar7[9] = uVar1;
          puVar7[10] = uVar2;
          puVar7[0xb] = uVar3;
          uVar1 = puVar4[0xd];
          puVar7[0xc] = puVar4[0xc];
          puVar7[0xd] = uVar1;
          uVar1 = puVar4[0xf];
          puVar7[0xe] = puVar4[0xe];
          puVar7[0xf] = uVar1;
          puVar4 = puVar4 + 0x10;
          lVar11 = lVar11 + -1;
          puVar7 = puVar7 + 0x10;
        } while (lVar11 != 0);
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
        ppppcVar12 = local_288;
        if (0xf < local_270) {
          ppppcVar12 = (char ****)local_288[0];
        }
        uVar6 = 0xffffffffffffffff;
        do {
          uVar6 = uVar6 + 1;
        } while (*(char *)((longlong)ppppcVar12 + uVar6) != '\0');
        ppppuVar8 = local_268;
        if (0xf < local_250) {
          ppppuVar8 = (undefined8 ****)local_268[0];
        }
        uVar6 = FUN_18000f820((longlong)ppppuVar8,local_258,0,(char *)ppppcVar12,uVar6);
        if (uVar6 != 0xffffffffffffffff) {
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar6 + local_278 + 0xf;
LAB_180042492:
          uVar13 = *(undefined8 *)(param_1 + 0x10);
          goto LAB_180042444;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x200;
        puVar4 = (undefined8 *)FUN_180042930((longlong *)&local_2b0,*(ulonglong *)(param_1 + 0x10));
        if (puVar4 == (undefined8 *)0x0) goto LAB_180042492;
      } while (*(ulonglong *)(param_1 + 0x10) < 0x200000);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
LAB_180042444:
    *(undefined8 *)(param_2 + 0x10) = uVar13;
    FUN_180001630((longlong *)local_268);
    FUN_180001630((longlong *)local_288);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_2e8);
  return;
}

