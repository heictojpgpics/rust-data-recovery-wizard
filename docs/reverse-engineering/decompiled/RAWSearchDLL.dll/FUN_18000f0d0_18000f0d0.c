// Function: FUN_18000f0d0
// Address: 18000f0d0
// Size: 979 bytes


void FUN_18000f0d0(longlong param_1,longlong param_2,longlong *param_3)

{
  void *_Dst;
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulonglong uVar6;
  char *pcVar7;
  ushort uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 ******ppppppuVar11;
  char *pcVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  longlong *plVar16;
  longlong lVar17;
  char ******ppppppcVar18;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  int local_2a8;
  undefined8 local_2a0;
  char *****local_298 [2];
  longlong local_288;
  ulonglong local_280;
  undefined8 *****local_278 [2];
  ulonglong local_268;
  ulonglong local_260;
  undefined4 local_258;
  undefined1 local_254;
  undefined1 uStack_253;
  undefined1 local_252;
  undefined8 local_248 [64];
  ulonglong local_48;
  
  local_2a0 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_2f8;
  uVar14 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar16 = param_3;
  FUN_180001780((longlong)local_298);
  uVar15 = SUB81(plVar16,0);
  puVar4 = (undefined8 *)FUN_1800016b0(local_298);
  puVar4[2] = uVar14;
  puVar4[3] = 0xf;
  local_2c8[0] = (undefined1)uVar14;
  FUN_180001300((undefined1 *)puVar4,local_2c8);
  if ((ulonglong)puVar4[3] < 0xd) {
    FUN_1800086f0((longlong)local_298,0xd,uVar15,"<?xpacket end");
  }
  else {
    puVar10 = puVar4;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar10 = (undefined8 *)*puVar4;
    }
    puVar4[2] = 0xd;
    memmove(puVar10,"<?xpacket end",0xd);
    local_2c8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar10 + 0xd),local_2c8);
  }
  local_2b8 = *(undefined8 *)(param_2 + 8);
  local_2b0 = 0xffffffffffffffff;
  local_2c0 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_2a8 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_2a8 = *(int *)((longlong)param_3 + 0xc);
    if (local_2a8 < 1) {
      local_2a8 = 0x200;
    }
  }
  else {
    local_2a8 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_2a8 = local_2a8 << 7;
  piVar5 = (int *)FUN_180042930((longlong *)&local_2c0,0);
  if (piVar5 != (int *)0x0) {
    local_258 = 0x58464952;
    local_254 = 0;
    if (*piVar5 == 0x58464952) {
      uVar3 = (ushort)((uint)piVar5[1] >> 0x10);
      uVar8 = (ushort)piVar5[1];
      uVar13 = CONCAT22(uVar8 << 8 | uVar8 >> 8,uVar3 << 8 | uVar3 >> 8);
      uVar6 = (ulonglong)uVar13 + *(longlong *)(param_1 + 0x10);
      *(ulonglong *)(param_1 + 0x10) = uVar6;
      if (uVar6 < 0x1e00001) {
        pcVar7 = FUN_180042930((longlong *)&local_2c0,(ulonglong)(uVar13 + 8));
        if (pcVar7 == (char *)0x0) goto LAB_18000f205;
        FUN_180001690((undefined1 *)local_278);
        if (*(ulonglong *)(param_1 + 0x10) < 0x1e00000) {
          puVar4 = (undefined8 *)FUN_1800016b0(local_278);
          do {
            lVar17 = 4;
            puVar10 = local_248;
            pcVar12 = pcVar7;
            do {
              uVar14 = *(undefined8 *)(pcVar12 + 8);
              uVar1 = *(undefined8 *)(pcVar12 + 0x10);
              uVar2 = *(undefined8 *)(pcVar12 + 0x18);
              *puVar10 = *(undefined8 *)pcVar12;
              puVar10[1] = uVar14;
              puVar10[2] = uVar1;
              puVar10[3] = uVar2;
              uVar14 = *(undefined8 *)(pcVar12 + 0x28);
              uVar1 = *(undefined8 *)(pcVar12 + 0x30);
              uVar2 = *(undefined8 *)(pcVar12 + 0x38);
              puVar10[4] = *(undefined8 *)(pcVar12 + 0x20);
              puVar10[5] = uVar14;
              puVar10[6] = uVar1;
              puVar10[7] = uVar2;
              uVar14 = *(undefined8 *)(pcVar12 + 0x48);
              uVar1 = *(undefined8 *)(pcVar12 + 0x50);
              uVar2 = *(undefined8 *)(pcVar12 + 0x58);
              puVar10[8] = *(undefined8 *)(pcVar12 + 0x40);
              puVar10[9] = uVar14;
              puVar10[10] = uVar1;
              puVar10[0xb] = uVar2;
              uVar14 = *(undefined8 *)(pcVar12 + 0x68);
              puVar10[0xc] = *(undefined8 *)(pcVar12 + 0x60);
              puVar10[0xd] = uVar14;
              uVar14 = *(undefined8 *)(pcVar12 + 0x78);
              puVar10[0xe] = *(undefined8 *)(pcVar12 + 0x70);
              puVar10[0xf] = uVar14;
              pcVar12 = pcVar12 + 0x80;
              lVar17 = lVar17 + -1;
              puVar10 = puVar10 + 0x10;
            } while (lVar17 != 0);
            if ((ulonglong)puVar4[3] < 0x200) {
              FUN_1800086f0((longlong)local_278,0x200,0,local_248);
            }
            else {
              _Dst = (void *)*puVar4;
              puVar4[2] = 0x200;
              memmove(_Dst,local_248,0x200);
              local_2c8[0] = 0;
              FUN_180001300((undefined1 *)((longlong)_Dst + 0x200),local_2c8);
            }
            ppppppcVar18 = local_298;
            if (0xf < local_280) {
              ppppppcVar18 = (char ******)local_298[0];
            }
            uVar6 = 0xffffffffffffffff;
            do {
              uVar6 = uVar6 + 1;
            } while (*(char *)((longlong)ppppppcVar18 + uVar6) != '\0');
            ppppppuVar11 = local_278;
            if (0xf < local_260) {
              ppppppuVar11 = (undefined8 ******)local_278[0];
            }
            uVar6 = FUN_18000f820((longlong)ppppppuVar11,local_268,0,(char *)ppppppcVar18,uVar6);
            if (uVar6 != 0xffffffffffffffff) {
              *(ulonglong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 6 + uVar6 + local_288
              ;
              goto LAB_18000f3ce;
            }
            if ((*(int *)(pcVar7 + 0x1fc) == 0) && (*(int *)(pcVar7 + 0x1f8) == 0)) {
              local_258 = 0;
              local_254 = 0;
              uStack_253 = 0;
              local_252 = 0;
              pcVar12 = pcVar7;
              goto joined_r0x00018000f42e;
            }
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x200;
            pcVar7 = FUN_180042930((longlong *)&local_2c0,*(ulonglong *)(param_1 + 0x10));
            if (pcVar7 == (char *)0x0) goto LAB_18000f3ce;
          } while (*(ulonglong *)(param_1 + 0x10) < 0x1e00000);
        }
        *(undefined8 *)(param_1 + 0x10) = 0x1e00000;
LAB_18000f3ce:
        *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
        FUN_180001630((longlong *)local_278);
      }
      else {
        *(undefined8 *)(param_1 + 0x10) = 0x1e00000;
      }
      FUN_180001630((longlong *)local_298);
      goto LAB_18000f3ef;
    }
  }
LAB_18000f205:
  FUN_180001630((longlong *)local_298);
LAB_18000f3ef:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_2f8);
  return;
joined_r0x00018000f42e:
  if (pcVar7 + 0x200 <= pcVar12) goto LAB_18000f3ce;
  if ((((*pcVar12 == '\0') && (*(int *)(pcVar12 + 1) == 0)) && (*(short *)(pcVar12 + 5) == 0)) &&
     (pcVar12[7] == '\0')) {
    iVar9 = (int)pcVar12 - (int)pcVar7;
    if (iVar9 + 7U < 0x1ff) {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (longlong)(iVar9 + 8) + -8;
    }
    goto LAB_18000f3ce;
  }
  pcVar12 = pcVar12 + 1;
  goto joined_r0x00018000f42e;
}

