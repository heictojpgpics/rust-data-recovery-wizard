// Function: FUN_180004fc0
// Address: 180004fc0
// Size: 664 bytes


undefined8 FUN_180004fc0(longlong *param_1,longlong *param_2,uint param_3)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined7 extraout_var;
  longlong *plVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  longlong lVar9;
  void *_Memory;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong *local_res8;
  ulonglong local_a0 [3];
  longlong local_88 [10];
  
  uVar10 = 0;
  if ((*param_1 != 0) && (0x3ff < (ulonglong)(param_2[1] - *param_2))) {
    puVar4 = FUN_180006010(local_a0,param_2);
    puVar12 = (ulonglong *)0x0;
    uVar5 = *puVar4;
    puVar7 = puVar12;
    puVar8 = (ulonglong *)0xffffffff;
    local_res8 = puVar4;
    if (puVar4[1] != uVar5) {
      do {
        uVar5 = FUN_1800410e0((int *)(uVar5 + (longlong)puVar7));
        puVar8 = puVar7;
        if ((int)uVar5 != 0) break;
        puVar7 = puVar7 + 0x80;
        uVar5 = *puVar4;
        puVar8 = (ulonglong *)0xffffffff;
      } while (puVar7 < (ulonglong *)(puVar4[1] - uVar5));
    }
    pvVar1 = (void *)*puVar4;
    if (pvVar1 != (void *)0x0) {
      _Memory = pvVar1;
      if ((0xfff < puVar4[2] - (longlong)pvVar1) &&
         (_Memory = *(void **)((longlong)pvVar1 - 8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
    }
    if (puVar8 != (ulonglong *)0xffffffff) {
      FUN_1800431d0(local_88,(int *)(*param_2 + (longlong)puVar8),0x400,0,(longlong *)*param_1,
                    (undefined8 *)0x0);
      iVar3 = (**(code **)(*(longlong *)*param_1 + 0x28))();
      bVar2 = FUN_180043030(local_88);
      if (((int)CONCAT71(extraout_var,bVar2) != 0) &&
         (plVar6 = FUN_180006db0(0,local_88,(ulonglong)(iVar3 * param_3),(ulonglong *)&local_res8,
                                 0x200), plVar6 != (longlong *)0x0)) {
        if ((undefined **)*plVar6 == CNTFSFileProperties::vftable) {
          puVar7 = puVar12;
          if ((ushort *)plVar6[9] != (ushort *)0x0) {
            puVar7 = FUN_180033aa0((ushort *)plVar6[9]);
          }
        }
        else {
          puVar7 = (ulonglong *)(*(code *)((undefined **)*plVar6)[0xf])();
        }
        local_res8 = puVar7;
        if (puVar7 != (ulonglong *)0x0) {
          puVar8 = (ulonglong *)FUN_1800340b0((longlong)puVar7);
          puVar4 = puVar12;
          while (puVar8 != (ulonglong *)0x0) {
            puVar4 = (ulonglong *)((longlong)puVar4 + puVar8[1]);
            puVar7[8] = puVar7[8] + 1;
            puVar8 = puVar12;
            if (puVar7[8] != puVar7[5] + puVar7[4]) {
              if ((undefined8 *)puVar7[6] != (undefined8 *)0x0) {
                puVar8 = *(ulonglong **)puVar7[6];
              }
              puVar8 = *(ulonglong **)
                        (*(longlong *)(puVar8[1] + (puVar8[2] - 1 & puVar7[8] >> 1) * 8) +
                        (ulonglong)((uint)puVar7[8] & 1) * 8);
            }
          }
          iVar3 = (**(code **)(*(longlong *)*param_1 + 0x28))();
          lVar11 = (ulonglong)param_3 * (longlong)iVar3 * (ulonglong)param_3 * (longlong)puVar4 * 8;
          lVar9 = (**(code **)(*(longlong *)*param_1 + 0x18))();
          if (lVar9 <= lVar11) {
            lVar11 = (**(code **)(*(longlong *)*param_1 + 0x18))();
          }
          *(longlong *)(param_1[1] + 0x10) = lVar11;
          uVar10 = 1;
          (**(code **)*puVar7)(puVar7,1);
        }
      }
      FUN_180043170(local_88);
    }
  }
  return uVar10;
}

