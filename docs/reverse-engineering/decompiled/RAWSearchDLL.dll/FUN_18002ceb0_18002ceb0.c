// Function: FUN_18002ceb0
// Address: 18002ceb0
// Size: 1095 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_18002ceb0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  char *pcVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *puVar13;
  void *pvVar14;
  int iVar15;
  undefined8 *******pppppppuVar16;
  ulonglong _Size;
  undefined1 uVar18;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [8];
  undefined1 local_c0 [16];
  longlong *local_b0;
  longlong *local_a8;
  longlong **local_a0;
  undefined8 local_98;
  undefined8 *******local_90 [2];
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70 [4];
  undefined8 local_50;
  longlong lStack_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_30;
  ulonglong uVar17;
  
  if (param_3 == 0) {
    return;
  }
  local_98 = 0xfffffffffffffffe;
  local_30 = DAT_18008f028 ^ (ulonglong)auStackY_f8;
  if ((param_4 == (longlong *)0x0) || (param_2 + -2 < *param_4)) goto LAB_18002d2cf;
  local_50 = 0;
  lStack_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_c0 = (undefined1  [16])0x0;
  plVar6 = (longlong *)FUN_180007710();
  local_c0._0_8_ = plVar6;
  local_a8 = (longlong *)s_iPhone_180093728;
  plVar8 = (longlong *)plVar6[1];
  plVar10 = plVar6;
  if (*(char *)(plVar6[1] + 0x19) == '\0') {
    do {
      if (s_CanonCRMiPad_180093718 + 0xf < (char *)plVar8[4]) {
        plVar7 = (longlong *)*plVar8;
        plVar10 = plVar8;
      }
      else {
        plVar7 = (longlong *)plVar8[2];
      }
      plVar8 = plVar7;
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
    if ((plVar10 == plVar6) || (s_iPhone_180093728 < (char *)plVar10[4])) goto LAB_18002cf73;
  }
  else {
LAB_18002cf73:
    local_a0 = &local_a8;
    plVar8 = (longlong *)FUN_18002d9a0((undefined8 *)local_c0,s_iPhone_180093728,&local_a0);
    FUN_18002da00((longlong *)local_c0,&local_b0,plVar10,(ulonglong *)(plVar8 + 4),plVar8);
    plVar10 = local_b0;
  }
  *(undefined4 *)(plVar10 + 5) = 7;
  local_b0 = (longlong *)(s_CanonCRMiPad_180093718 + 8);
  plVar8 = *(longlong **)(local_c0._0_8_ + 8);
  plVar10 = (longlong *)local_c0._0_8_;
  if (*(char *)((longlong)*(longlong **)(local_c0._0_8_ + 8) + 0x19) == '\0') {
    do {
      if (s_CanonCRMiPad_180093718 + 7 < (char *)plVar8[4]) {
        plVar6 = (longlong *)*plVar8;
        plVar10 = plVar8;
      }
      else {
        plVar6 = (longlong *)plVar8[2];
      }
      plVar8 = plVar6;
    } while (*(char *)((longlong)plVar6 + 0x19) == '\0');
    if ((plVar10 == (longlong *)local_c0._0_8_) ||
       (s_CanonCRMiPad_180093718 + 8 < (char *)plVar10[4])) goto LAB_18002cfeb;
  }
  else {
LAB_18002cfeb:
    local_a0 = &local_b0;
    plVar8 = (longlong *)
             FUN_18002d9a0((undefined8 *)local_c0,s_CanonCRMiPad_180093718 + 8,&local_a0);
    FUN_18002da00((longlong *)local_c0,&local_a8,plVar10,(ulonglong *)(plVar8 + 4),plVar8);
    plVar10 = local_a8;
  }
  *(undefined4 *)(plVar10 + 5) = 5;
  pcVar9 = FUN_18002a060((char *)(param_3 + -0x10),0x200,&DAT_180093740,4);
  if (pcVar9 == (char *)0x0) {
    iVar15 = 0x200;
    pvVar14 = (void *)(param_3 + -0x10);
LAB_18002d06b:
    plVar8 = (longlong *)local_c0;
    plVar10 = (longlong *)FUN_18002a100(pvVar14,iVar15,plVar8,(int *)&local_a8);
    uVar18 = SUB81(plVar8,0);
    if (plVar10 != (longlong *)0x0) {
      local_50 = *plVar10;
      lStack_48 = plVar10[1];
      local_40 = (int)plVar10[2];
      pcVar9 = (char *)&local_50;
      cVar5 = (char)*plVar10;
      while (cVar5 != '\0') {
        if ((byte)(cVar5 + 0x9fU) < 0x1a) {
          *pcVar9 = cVar5 + -0x20;
        }
        pcVar9 = pcVar9 + 1;
        cVar5 = *pcVar9;
      }
      FUN_180001780((longlong)local_90);
      puVar11 = (undefined8 *)FUN_1800016b0(local_90);
      puVar11[2] = 0;
      puVar11[3] = 0xf;
      local_c8[0] = 0;
      FUN_180001300((undefined1 *)puVar11,local_c8);
      uVar17 = 0xffffffffffffffff;
      do {
        _Size = uVar17 + 1;
        lVar4 = uVar17 + 1;
        uVar17 = _Size;
      } while (*(char *)((longlong)&local_50 + lVar4) != '\0');
      if ((ulonglong)puVar11[3] < _Size) {
        FUN_1800086f0((longlong)local_90,_Size,uVar18,&local_50);
      }
      else {
        puVar13 = puVar11;
        if (0xf < (ulonglong)puVar11[3]) {
          puVar13 = (undefined8 *)*puVar11;
        }
        puVar11[2] = _Size;
        memmove(puVar13,&local_50,_Size);
        local_c8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar13 + _Size),local_c8);
      }
      local_b0 = &local_50;
      plVar8 = (longlong *)FUN_180007060((longlong)&local_50,local_90);
      pppppppuVar12 = (undefined8 *******)FUN_180017060((longlong)local_70,plVar8);
      if (local_90 != (undefined8 ********)pppppppuVar12) {
        FUN_180001630((longlong *)local_90);
        puVar13 = (undefined8 *)FUN_1800016b0(pppppppuVar12);
        uVar1 = puVar13[1];
        uVar2 = puVar13[2];
        uVar3 = puVar13[3];
        *puVar11 = *puVar13;
        puVar11[1] = uVar1;
        puVar11[2] = uVar2;
        puVar11[3] = uVar3;
        puVar13[2] = 0;
        puVar13[3] = 0xf;
        local_c8[0] = 0;
        FUN_180001300((undefined1 *)puVar13,local_c8);
      }
      FUN_180001630(local_70);
      local_b0 = local_70;
      plVar8 = (longlong *)FUN_180007060((longlong)local_70,local_90);
      cVar5 = FUN_18002a1e0(plVar8);
      pppppppuVar12 = (undefined8 *******)(param_1 + 0x138);
      if (cVar5 == '\0') {
        if ((undefined8 ********)pppppppuVar12 != local_90) {
          pppppppuVar16 = local_90;
          if (0xf < local_78) {
            pppppppuVar16 = local_90[0];
          }
          FUN_1800071e0((longlong)pppppppuVar12,pppppppuVar16,local_80);
        }
      }
      else {
        puVar13 = (undefined8 *)FUN_1800016b0(pppppppuVar12);
        puVar11 = puVar13;
        if (0xf < (ulonglong)puVar13[3]) {
          puVar11 = (undefined8 *)*puVar13;
        }
        puVar13[2] = 0;
        local_c8[0] = 0;
        FUN_180001300((undefined1 *)puVar11,local_c8);
      }
      if (*(longlong *)(param_1 + 0x148) != 0) {
        local_b0 = local_70;
        plVar8 = (longlong *)FUN_180007060((longlong)local_70,pppppppuVar12);
        FUN_180017550(param_1,6,plVar8);
      }
      FUN_180001630((longlong *)local_90);
    }
  }
  else if (*param_4 <= param_2 + -3) {
    pvVar14 = (void *)(param_3 + -0x512);
    iVar15 = 0x400;
    goto LAB_18002d06b;
  }
  uVar1 = local_c0._0_8_;
  cVar5 = *(char *)((longlong)*(longlong **)(local_c0._0_8_ + 8) + 0x19);
  plVar8 = *(longlong **)(local_c0._0_8_ + 8);
  while (cVar5 == '\0') {
    FUN_180007770(local_c0,(longlong *)plVar8[2]);
    plVar10 = (longlong *)*plVar8;
    free(plVar8);
    plVar8 = plVar10;
    cVar5 = *(char *)((longlong)plVar10 + 0x19);
  }
  *(undefined8 *)(local_c0._0_8_ + 8) = uVar1;
  *(undefined8 *)local_c0._0_8_ = uVar1;
  *(undefined8 *)(local_c0._0_8_ + 0x10) = uVar1;
  local_c0._8_8_ = 0;
  free((void *)local_c0._0_8_);
LAB_18002d2cf:
  __security_check_cookie(local_30 ^ (ulonglong)auStackY_f8);
  return;
}

