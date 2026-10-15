// Function: FUN_18001c380
// Address: 18001c380
// Size: 782 bytes


undefined8 FUN_18001c380(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ushort *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  undefined8 local_48;
  uint local_40;
  undefined8 local_38;
  uint local_30;
  undefined8 local_28 [4];
  
  local_60 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    pbVar8 = (byte *)(param_2 + 8);
    uVar13 = 0;
    pbVar10 = (byte *)(param_2 + 4);
    if (((pbVar10 != (byte *)0x0) && (pbVar8 != (byte *)0x0)) && (pbVar10 < pbVar8)) {
      do {
        uVar13 = uVar13 << 8 | (ulonglong)*pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (pbVar10 != pbVar8);
    }
    uVar11 = 0;
    if (((pbVar8 != (byte *)0x0) && (param_2 != -0xc)) && (pbVar8 < (byte *)(param_2 + 0xcU))) {
      do {
        uVar11 = uVar11 << 8 | (ulonglong)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (pbVar8 != (byte *)(param_2 + 0xcU));
    }
    pbVar8 = (byte *)(param_2 + 0x14);
    pbVar10 = (byte *)(param_2 + 0x10);
    uVar14 = 0;
    if (((pbVar10 != (byte *)0x0) && (pbVar8 != (byte *)0x0)) && (pbVar10 < pbVar8)) {
      do {
        uVar14 = uVar14 << 8 | (ulonglong)*pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (pbVar10 != pbVar8);
    }
    uVar12 = 0;
    if (((pbVar8 != (byte *)0x0) && (param_2 != -0x18)) && (pbVar8 < (byte *)(param_2 + 0x18U))) {
      do {
        uVar12 = uVar12 << 8 | (ulonglong)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (pbVar8 != (byte *)(param_2 + 0x18U));
    }
    if (((uVar13 == 0x6a502020) && (uVar11 == 0xd0a870a)) && (uVar14 == 0x66747970)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   4) < DAT_180118270) && (_Init_thread_header(&DAT_180118270), DAT_180118270 == -1)
         ) {
        DAT_180118260 = (undefined8 *)0x0;
        DAT_180118268 = 0;
        DAT_180118260 = (undefined8 *)FUN_180007710();
        atexit((_func_5014 *)&LAB_1800642f0);
        _Init_thread_footer(&DAT_180118270);
      }
      if (DAT_180118268 == 0) {
        local_res10[0] = (undefined8 *)CONCAT44(local_res10[0]._4_4_,0x80);
        uVar1 = FUN_1800016b0(local_res10);
        local_58 = 0x6a703220;
        puVar2 = (uint *)FUN_1800016b0(uVar1);
        local_50 = *puVar2;
        uVar11 = (ulonglong)local_50;
        plVar3 = (longlong *)FUN_18001cea0(uVar11,&local_58);
        FUN_18001cf00(uVar11,&local_38,uVar13,plVar3 + 4,plVar3);
        local_res20[0] = 0x81;
        uVar1 = FUN_1800016b0(local_res20);
        local_48 = 0x6a707820;
        puVar2 = (uint *)FUN_1800016b0(uVar1);
        local_40 = *puVar2;
        uVar11 = (ulonglong)local_40;
        plVar3 = (longlong *)FUN_18001cea0(uVar11,&local_48);
        FUN_18001cf00(uVar11,&local_38,uVar13,plVar3 + 4,plVar3);
        local_68[0] = 0x82;
        uVar1 = FUN_1800016b0(local_68);
        local_38 = 0x6a706d20;
        puVar2 = (uint *)FUN_1800016b0(uVar1);
        local_30 = *puVar2;
        uVar11 = (ulonglong)local_30;
        plVar3 = (longlong *)FUN_18001cea0(uVar11,&local_38);
        FUN_18001cf00(uVar11,local_28,uVar13,plVar3 + 4,plVar3);
      }
      puVar4 = (undefined8 *)DAT_180118260[1];
      puVar9 = DAT_180118260;
      if (*(char *)((longlong)DAT_180118260[1] + 0x19) == '\0') {
        do {
          if ((longlong)puVar4[4] < (longlong)uVar12) {
            puVar5 = (undefined8 *)puVar4[2];
          }
          else {
            puVar5 = (undefined8 *)*puVar4;
            puVar9 = puVar4;
          }
          puVar4 = puVar5;
        } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
        if ((puVar9 != DAT_180118260) && ((longlong)puVar9[4] <= (longlong)uVar12)) {
          *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(puVar9 + 5);
          puVar6 = FUN_180001350();
          local_res10[0] = local_28;
          puVar7 = (ushort *)FUN_18000f4b0((longlong)local_28,&DAT_18006ade0);
          FUN_18000ed00((longlong)(puVar6 + 0x60),puVar7);
          return 1;
        }
      }
    }
  }
  return 0;
}

