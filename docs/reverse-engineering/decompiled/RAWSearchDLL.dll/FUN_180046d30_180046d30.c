// Function: FUN_180046d30
// Address: 180046d30
// Size: 747 bytes


void FUN_180046d30(undefined8 param_1,longlong param_2,char *param_3,undefined8 ****param_4,
                  int param_5,int param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  void *_Src;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 ******ppppppuVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined4 local_94;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80 [32];
  undefined8 *****local_60 [2];
  ulonglong local_50;
  ulonglong local_48;
  longlong local_40 [4];
  ulonglong local_20;
  
  local_88 = 0xfffffffffffffffe;
  local_20 = DAT_18008f028 ^ (ulonglong)auStack_b8;
  uVar10 = 0;
  local_94 = 0;
  plVar5 = FUN_180059b90(param_2,param_3);
  if (plVar5 != (longlong *)0x0) {
    for (plVar5 = (longlong *)plVar5[7]; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[10])
    {
      lVar6 = (**(code **)(*plVar5 + 0x20))(plVar5);
      uVar12 = SUB81(param_3,0);
      if (lVar6 == 0) {
        lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
        if ((lVar6 != 0) && (_Src = (void *)FUN_180059a40(plVar5), _Src != (void *)0x0)) {
          uVar11 = 0xffffffffffffffff;
          lVar6 = -1;
          do {
            lVar6 = lVar6 + 1;
          } while (*(char *)((longlong)_Src + lVar6) != '\0');
          if (lVar6 == 0) break;
          if (param_5 != 0) {
            FUN_180001780((longlong)local_60);
            puVar7 = (undefined8 *)FUN_1800016b0(local_60);
            puVar7[2] = 0;
            puVar7[3] = 0xf;
            local_98[0] = 0;
            FUN_180001300((undefined1 *)puVar7,local_98);
            do {
              uVar11 = uVar11 + 1;
            } while (*(char *)((longlong)_Src + uVar11) != '\0');
            if ((ulonglong)puVar7[3] < uVar11) {
              FUN_1800086f0((longlong)local_60,uVar11,uVar12,_Src);
            }
            else {
              puVar8 = puVar7;
              if (0xf < (ulonglong)puVar7[3]) {
                puVar8 = (undefined8 *)*puVar7;
              }
              puVar7[2] = uVar11;
              memmove(puVar8,_Src,uVar11);
              local_98[0] = 0;
              FUN_180001300((undefined1 *)((longlong)puVar8 + uVar11),local_98);
            }
            if ((local_50 != 0) && ((undefined8 ******)param_4 != local_60)) {
              ppppppuVar9 = local_60;
              if (0xf < local_48) {
                ppppppuVar9 = (undefined8 ******)local_60[0];
              }
              FUN_1800071e0((longlong)param_4,ppppppuVar9,local_50);
            }
            FUN_180001630((longlong *)local_60);
            break;
          }
          if (param_6 == 0) {
            do {
              uVar11 = uVar11 + 1;
            } while (*(char *)((longlong)_Src + uVar11) != '\0');
            FUN_1800071e0((longlong)param_4,_Src,uVar11);
            break;
          }
          plVar5 = (longlong *)FUN_180007000((longlong)local_80,_Src);
          uVar11 = plVar5[2];
          local_90 = plVar5;
          if (uVar11 != 0) {
            puVar7 = (undefined8 *)FUN_1800016b0(plVar5);
            do {
              uVar10 = uVar10 + 1;
              uVar1 = puVar7[3];
              puVar8 = puVar7;
              if (0xf < uVar1) {
                puVar8 = (undefined8 *)*puVar7;
              }
              if (*(char *)((longlong)puVar8 + uVar10) < 'a') {
LAB_180046f0d:
                puVar8 = puVar7;
                if (0xf < uVar1) {
                  puVar8 = (undefined8 *)*puVar7;
                }
                if ('@' < *(char *)((longlong)puVar8 + uVar10)) {
                  puVar8 = puVar7;
                  if (0xf < uVar1) {
                    puVar8 = (undefined8 *)*puVar7;
                  }
                  if (*(char *)((longlong)puVar8 + uVar10) < '[') goto LAB_180046f33;
                }
                puVar8 = puVar7;
                if (0xf < uVar1) {
                  puVar8 = (undefined8 *)*puVar7;
                }
                if (*(char *)((longlong)puVar8 + uVar10) == ':') {
                  puVar8 = puVar7;
                  if (0xf < uVar1) {
                    puVar8 = (undefined8 *)*puVar7;
                  }
                  *(undefined1 *)((longlong)puVar8 + uVar10) = 0x2d;
                }
              }
              else {
                puVar8 = puVar7;
                if (0xf < uVar1) {
                  puVar8 = (undefined8 *)*puVar7;
                }
                if ('z' < *(char *)((longlong)puVar8 + uVar10)) goto LAB_180046f0d;
LAB_180046f33:
                puVar8 = puVar7;
                if (0xf < uVar1) {
                  puVar8 = (undefined8 *)*puVar7;
                }
                *(undefined1 *)((longlong)puVar8 + uVar10) = 0x20;
              }
            } while (uVar10 < uVar11);
          }
          FUN_180001780((longlong)local_40);
          puVar7 = (undefined8 *)FUN_1800016b0(plVar5);
          puVar8 = (undefined8 *)FUN_1800016b0(local_40);
          uVar2 = puVar7[1];
          uVar3 = puVar7[2];
          uVar4 = puVar7[3];
          *puVar8 = *puVar7;
          puVar8[1] = uVar2;
          puVar8[2] = uVar3;
          puVar8[3] = uVar4;
          puVar7[2] = 0;
          puVar7[3] = 0xf;
          local_98[0] = 0;
          FUN_180001300((undefined1 *)puVar7,local_98);
          local_94 = 1;
          FUN_180001630(plVar5);
          FUN_180019970((longlong *)param_4,local_40);
          local_94 = 0;
          FUN_180001630(local_40);
        }
        break;
      }
    }
  }
  __security_check_cookie(local_20 ^ (ulonglong)auStack_b8);
  return;
}

