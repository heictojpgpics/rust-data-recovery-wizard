// Function: FUN_18000cf60
// Address: 18000cf60
// Size: 1152 bytes


void FUN_18000cf60(undefined4 *param_1,uint *param_2,byte *param_3,uint *param_4,undefined8 *param_5
                  )

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  byte *pbVar14;
  uint *puVar15;
  undefined1 auStackY_108 [32];
  undefined1 local_c8 [4];
  uint local_c4;
  undefined8 *local_c0;
  undefined8 local_b8;
  longlong local_b0 [4];
  uint local_90 [8];
  byte local_70 [32];
  ulonglong local_50;
  
  local_b8 = 0xfffffffffffffffe;
  local_50 = DAT_18008f028 ^ (ulonglong)auStackY_108;
  local_c0 = param_5;
  puVar11 = (uint *)0x4;
  puVar9 = *(undefined4 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pbVar14 = param_3;
  puVar15 = param_4;
  if ((int)puVar9[1] < DAT_180118208) {
    puVar9 = &DAT_180118208;
    _Init_thread_header(&DAT_180118208);
    if (DAT_180118208 == -1) {
      local_c4 = 0;
      FUN_180001780((longlong)local_70);
      uVar13 = SUB81(pbVar14,0);
      puVar4 = (undefined8 *)FUN_1800016b0(local_70);
      puVar4[2] = 0;
      puVar4[3] = 0xf;
      local_c8[0] = 0;
      FUN_180001300((undefined1 *)puVar4,local_c8);
      if ((ulonglong)puVar4[3] < 0xb) {
        FUN_1800086f0((longlong)local_70,0xb,uVar13,"only_common");
      }
      else {
        puVar12 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar12 = (undefined8 *)*puVar4;
        }
        puVar4[2] = 0xb;
        uVar13 = 0xb;
        memmove(puVar12,"only_common",0xb);
        local_c8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar12 + 0xb),local_c8);
      }
      FUN_180001780((longlong)local_90);
      puVar4 = (undefined8 *)FUN_1800016b0(local_90);
      puVar4[2] = 0;
      puVar4[3] = 0xf;
      local_c8[0] = 0;
      FUN_180001300((undefined1 *)puVar4,local_c8);
      if ((ulonglong)puVar4[3] < 4) {
        FUN_1800086f0((longlong)local_90,4,uVar13,&DAT_180066bcc);
      }
      else {
        puVar12 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar12 = (undefined8 *)*puVar4;
        }
        puVar4[2] = 4;
        uVar13 = 4;
        memmove(puVar12,&DAT_180066bcc,4);
        local_c8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar12 + 4),local_c8);
      }
      FUN_180001780((longlong)local_b0);
      puVar4 = (undefined8 *)FUN_1800016b0(local_b0);
      puVar4[2] = 0;
      puVar4[3] = 0xf;
      local_c8[0] = 0;
      FUN_180001300((undefined1 *)puVar4,local_c8);
      if ((ulonglong)puVar4[3] < 0x11) {
        FUN_1800086f0((longlong)local_b0,0x11,uVar13,"config/config.ini");
      }
      else {
        puVar12 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar12 = (undefined8 *)*puVar4;
        }
        puVar4[2] = 0x11;
        memmove(puVar12,"config/config.ini",0x11);
        local_c8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar12 + 0x11),local_c8);
      }
      puVar15 = &local_c4;
      pbVar14 = local_70;
      puVar11 = local_90;
      DAT_180118204 = FUN_180007890((char *)local_b0,(byte *)puVar11,pbVar14,puVar15);
      FUN_180001630(local_b0);
      FUN_180001630((longlong *)local_90);
      FUN_180001630((longlong *)local_70);
      puVar9 = &DAT_180118208;
      _Init_thread_footer(&DAT_180118208);
    }
  }
  if (DAT_180118204 == 0) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      puVar5 = FUN_180006a80(puVar9,puVar11,pbVar14,puVar15);
      puVar4 = *(undefined8 **)(puVar5 + 0x10);
      cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
      puVar12 = puVar4;
      puVar8 = (undefined8 *)puVar4[1];
      while (cVar1 == '\0') {
        if (*(uint *)(puVar8 + 4) < uVar2) {
          puVar10 = (undefined8 *)puVar8[2];
          puVar8 = puVar12;
        }
        else {
          puVar10 = (undefined8 *)*puVar8;
        }
        puVar12 = puVar8;
        puVar8 = puVar10;
        cVar1 = *(char *)((longlong)puVar10 + 0x19);
      }
      if ((puVar12 == puVar4) || (uVar2 < *(uint *)(puVar12 + 4))) {
        puVar12 = puVar4;
      }
      if (puVar12 != puVar4) {
        plVar7 = (longlong *)puVar12[5];
        lVar6 = (**(code **)(*plVar7 + 0x40))(plVar7);
        if (lVar6 == 0) {
          iVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,param_2,param_3);
          if (iVar3 == 1) {
LAB_18000d28c:
            FUN_18000d920((longlong)param_1,param_4,(longlong)plVar7,(longlong)param_3);
            goto LAB_18000d3c0;
          }
        }
        else {
          puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x40))(plVar7);
          iVar3 = (**(code **)*puVar4)(puVar4,param_2,param_3,(longlong)(int)param_1[0x3c]);
          if (iVar3 != 0) goto LAB_18000d28c;
          iVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,param_2);
          if (iVar3 != 0) {
            FUN_18000d920((longlong)param_1,param_4,0,(longlong)param_3);
          }
        }
      }
    }
    puVar9 = param_1;
    puVar11 = param_2;
    pbVar14 = param_3;
    puVar15 = param_4;
    plVar7 = FUN_18000d3e0((longlong)param_1,(ushort *)param_2,(longlong)param_3,param_4,param_5);
    if (plVar7 != (longlong *)0x0) goto LAB_18000d3c0;
  }
  if (-1 < (longlong)param_4) {
    plVar7 = (longlong *)FUN_180006a80(puVar9,puVar11,pbVar14,puVar15);
    puVar4 = (undefined8 *)*plVar7;
    for (puVar12 = (undefined8 *)*puVar4; puVar12 != puVar4; puVar12 = (undefined8 *)*puVar12) {
      plVar7 = (longlong *)puVar12[2];
      if (plVar7 != (longlong *)0x0) {
        puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x40))(plVar7);
        if (puVar8 == (undefined8 *)0x0) {
          iVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,param_2);
          if (iVar3 == 1) {
LAB_18000d339:
            if (*(longlong *)(param_3 + 0x10) != 0) {
              FUN_18000d920((longlong)param_1,param_4,(longlong)plVar7,(longlong)param_3);
            }
            break;
          }
        }
        else {
          iVar3 = (**(code **)*puVar8)(puVar8,param_2,param_3,(longlong)(int)param_1[0x3c]);
          if (iVar3 != 0) goto LAB_18000d339;
          iVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,param_2,param_3);
          if ((iVar3 != 0) && (*(longlong *)(param_3 + 0x10) != 0)) {
            FUN_18000d920((longlong)param_1,param_4,(longlong)plVar7,(longlong)param_3);
          }
        }
      }
    }
  }
LAB_18000d3c0:
  __security_check_cookie(local_50 ^ (ulonglong)auStackY_108);
  return;
}

