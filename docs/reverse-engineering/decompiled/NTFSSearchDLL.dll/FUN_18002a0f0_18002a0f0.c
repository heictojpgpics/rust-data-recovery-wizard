// Function: FUN_18002a0f0
// Address: 18002a0f0
// Size: 577 bytes


void FUN_18002a0f0(uint *param_1,ulonglong *param_2,uint *param_3,undefined4 *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint local_res8 [2];
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78 [2];
  uint local_68;
  undefined4 uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 *local_58;
  undefined8 *puStack_50;
  ulonglong local_48;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 *local_30;
  undefined8 *puStack_28;
  
  puVar2 = *(undefined8 **)(param_1 + 0xc);
  if (puVar2 != (undefined8 *)0x0) {
    uVar8 = (uint)*(ushort *)(puVar2 + 6);
    puVar9 = param_1;
    puVar10 = param_3;
    local_58 = puVar2;
    uVar5 = FUN_18002abb0(param_1,*(ushort *)(puVar2 + 6));
    if ((char)uVar5 == '\0') {
      uVar11 = (uint)*(ushort *)((longlong)puVar2 + 0x32);
      uVar5 = FUN_18002abb0(puVar9,*(ushort *)((longlong)puVar2 + 0x32));
      if ((char)uVar5 == '\0') {
        local_68 = param_1[0xf];
        uStack_64 = *param_4;
        uStack_60 = uVar8 & 0xffff;
        uStack_5c = uVar11 & 0xffff;
        local_40 = CONCAT44(uStack_64,local_68);
        uStack_38 = CONCAT44(uVar11,uVar8) & 0xffff0000ffff;
        local_48 = *param_2;
        local_30 = local_58;
        puStack_50 = puVar2;
        puStack_28 = puVar2;
        FUN_18002ae10((longlong *)(param_1 + 0x14),&local_88,puVar10,&local_48);
        if (((*(short *)(puVar2 + 6) == 0x16) && (*(short *)((longlong)puVar2 + 0x32) == 0x15)) &&
           (puVar2[1] != 0)) {
          local_88 = param_2[1];
          local_80 = *param_2;
          FUN_18002af50((longlong *)(param_1 + 0x2c),local_78,puVar10,&local_88);
        }
        FUN_18002a780((int *)param_1,*(undefined8 **)(param_1 + 0xc),
                      (ulonglong *)(ulonglong)*param_3);
        lVar3 = *(longlong *)(param_1 + 0xc);
        if (((lVar3 != 0) && (0x5f < *param_3)) && (1 < (ushort)(*(short *)(lVar3 + 0x30) - 0xeU)))
        {
          uVar1 = *(ushort *)(lVar3 + 0x32);
          if (((1 < (ushort)(uVar1 - 0xe)) && (*(short *)(lVar3 + 0x30) != 0x14)) && (uVar1 != 0x14)
             ) {
            if ((*param_1 < 3) && ((char)param_1[2] == '\0')) {
              uVar8 = *(uint *)(lVar3 + 0x48);
            }
            else {
              uVar8 = (param_1[1] * *param_1 >> 10) * *(int *)(lVar3 + 0x48) +
                      (uint)(*(ushort *)(lVar3 + 0x44) >> 1);
            }
            if (uVar8 != 0) {
              local_40 = CONCAT44(uStack_64,local_68);
              uStack_38 = CONCAT44(uStack_5c,uStack_60);
              local_30 = local_58;
              puStack_28 = puStack_50;
              local_48 = (ulonglong)uVar8;
              FUN_18002b090((longlong *)(param_1 + 0x1c),local_78,(ulonglong)uVar1,
                            (longlong *)&local_48);
            }
          }
        }
        puVar9 = param_1 + 0x20;
        local_res8[0] = (uint)*(ushort *)(puVar2 + 6);
        plVar6 = FUN_18002ac20((longlong *)puVar9,(int *)local_res8);
        pvVar4 = (void *)plVar6[1];
        if ((void *)plVar6[2] == pvVar4) {
          FUN_180013a20(plVar6,pvVar4,puVar2);
        }
        else {
          puVar7 = (undefined8 *)FUN_180001100(puVar9,pvVar4);
          *puVar7 = *puVar2;
          plVar6[1] = plVar6[1] + 8;
        }
        puVar9 = param_1 + 0x24;
        local_res8[0] = (uint)*(ushort *)((longlong)puVar2 + 0x32);
        plVar6 = FUN_18002ac20((longlong *)puVar9,(int *)local_res8);
        pvVar4 = (void *)plVar6[1];
        if ((void *)plVar6[2] == pvVar4) {
          FUN_180013a20(plVar6,pvVar4,puVar2);
        }
        else {
          puVar7 = (undefined8 *)FUN_180001100(puVar9,pvVar4);
          *puVar7 = *puVar2;
          plVar6[1] = plVar6[1] + 8;
        }
        param_1[0xb] = param_1[0xb] + *param_3;
      }
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  return;
}

