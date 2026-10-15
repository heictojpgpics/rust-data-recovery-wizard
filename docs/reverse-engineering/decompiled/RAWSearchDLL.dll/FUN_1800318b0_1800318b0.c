// Function: FUN_1800318b0
// Address: 1800318b0
// Size: 917 bytes


void FUN_1800318b0(longlong param_1,char *param_2,undefined8 param_3,int param_4,int param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined8 *puVar10;
  char *pcVar11;
  undefined1 uVar12;
  undefined1 auStack_548 [32];
  undefined1 local_528 [8];
  longlong *local_520;
  undefined8 local_518;
  undefined1 local_510 [32];
  longlong local_4f0 [4];
  longlong local_4d0 [4];
  longlong local_4b0 [4];
  longlong local_490 [2];
  longlong local_480;
  char local_468 [272];
  undefined1 local_358 [272];
  char local_248 [528];
  ulonglong local_38;
  ulonglong uVar9;
  
  local_518 = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStack_548;
  pcVar7 = param_2 + ((longlong)param_4 - (longlong)param_5);
  if (param_2 <= pcVar7) {
    do {
      if (((*pcVar7 != '\0') && (*pcVar7 == (char)DAT_18006bd24)) &&
         (*(short *)(pcVar7 + 1) == (short)((uint)DAT_18006bd24 >> 8))) {
        iVar6 = (int)pcVar7 - (int)param_2;
        if (iVar6 + 2U < 0x1ff) {
          memset(local_358,0,0x104);
          pcVar11 = param_2 + (iVar6 + 3);
          for (pcVar7 = pcVar11; pcVar7 < param_2 + param_4 + -3; pcVar7 = pcVar7 + 1) {
            if ((*pcVar7 == ' ') && (pcVar7[1] == ' ')) {
              pcVar7[0] = '\0';
              pcVar7[1] = '\0';
            }
          }
          iVar6 = snprintf(local_358,0x104,&DAT_180067c5c,pcVar11);
          if (1 < iVar6) {
            for (pcVar11 = pcVar11 + iVar6; (pcVar11 < param_2 + param_4 && (*pcVar11 == '\0'));
                pcVar11 = pcVar11 + 1) {
            }
            memset(local_468,0,0x104);
            iVar6 = snprintf(local_468,0x104,&DAT_180067c5c,pcVar11);
            if ((3 < iVar6) && (*(longlong *)(param_1 + 0x30) == 0)) {
              memset(local_248,0,0x208);
              uVar12 = 0x5c;
              snprintf(local_248,0x208,&DAT_180067c5c,local_358);
              FUN_180001780((longlong)local_4b0);
              puVar2 = (undefined8 *)FUN_1800016b0(local_4b0);
              puVar2[2] = 0;
              puVar2[3] = 0xf;
              local_528[0] = 0;
              FUN_180001300((undefined1 *)puVar2,local_528);
              uVar9 = 0xffffffffffffffff;
              do {
                uVar8 = uVar9 + 1;
                lVar1 = uVar9 + 1;
                uVar9 = uVar8;
              } while (local_248[lVar1] != '\0');
              if ((ulonglong)puVar2[3] < uVar8) {
                FUN_1800086f0((longlong)local_4b0,uVar8,uVar12,local_248);
              }
              else {
                puVar10 = puVar2;
                if (0xf < (ulonglong)puVar2[3]) {
                  puVar10 = (undefined8 *)*puVar2;
                }
                puVar2[2] = uVar8;
                memmove(puVar10,local_248,uVar8);
                local_528[0] = 0;
                FUN_180001300((undefined1 *)((longlong)puVar10 + uVar8),local_528);
              }
              local_520 = (longlong *)local_510;
              puVar5 = local_510;
              plVar3 = (longlong *)FUN_180007060((longlong)puVar5,local_4b0);
              plVar4 = (longlong *)FUN_180031650(puVar5,(longlong)local_4f0,plVar3);
              uVar12 = SUB81(plVar3,0);
              FUN_180019970((longlong *)(param_1 + 0x20),plVar4);
              FUN_180001630(local_4f0);
              FUN_180001780((longlong)local_4d0);
              puVar2 = (undefined8 *)FUN_1800016b0(local_4d0);
              puVar2[2] = 0;
              puVar2[3] = 0xf;
              local_528[0] = 0;
              FUN_180001300((undefined1 *)puVar2,local_528);
              uVar9 = 0xffffffffffffffff;
              do {
                uVar8 = uVar9 + 1;
                lVar1 = uVar9 + 1;
                uVar9 = uVar8;
              } while (local_468[lVar1] != '\0');
              if ((ulonglong)puVar2[3] < uVar8) {
                FUN_1800086f0((longlong)local_4d0,uVar8,uVar12,local_468);
              }
              else {
                puVar10 = puVar2;
                if (0xf < (ulonglong)puVar2[3]) {
                  puVar10 = (undefined8 *)*puVar2;
                }
                puVar2[2] = uVar8;
                memmove(puVar10,local_468,uVar8);
                local_528[0] = 0;
                FUN_180001300((undefined1 *)((longlong)puVar10 + uVar8),local_528);
              }
              local_520 = local_4f0;
              plVar3 = local_4f0;
              plVar4 = (longlong *)FUN_180007060((longlong)plVar3,local_4d0);
              FUN_180031650(plVar3,(longlong)local_490,plVar4);
              if (local_480 != 0) {
                local_520 = local_4f0;
                plVar3 = (longlong *)FUN_180007060((longlong)local_4f0,local_490);
                FUN_180017550(param_1,0,plVar3);
              }
              FUN_180001630(local_490);
              FUN_180001630(local_4d0);
              FUN_180001630(local_4b0);
            }
          }
        }
        break;
      }
      pcVar7 = pcVar7 + -1;
    } while (param_2 <= pcVar7);
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_548);
  return;
}

