// Function: FUN_18001a980
// Address: 18001a980
// Size: 817 bytes


void FUN_18001a980(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined **ppuVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  void *_Memory;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined7 extraout_var;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  
  _Memory = (void *)0x0;
  if ((param_1[1] != 0) && ((longlong *)param_1[4] != (longlong *)0x0)) {
    iVar9 = (**(code **)(*(longlong *)param_1[4] + 0x28))();
    _Memory = (void *)FUN_18002be40((ulonglong)(uint)(iVar9 << 0xf));
    if ((_Memory != (void *)0x0) &&
       (plVar12 = *(longlong **)*param_1, plVar12 != (longlong *)*param_1)) {
      do {
        if (((longlong *)param_1[7] != (longlong *)0x0) &&
           (iVar9 = (**(code **)(*(longlong *)param_1[7] + 0x10))(), iVar9 == 0)) break;
        ppuVar3 = *(undefined ***)plVar12[2];
        if (ppuVar3 == CNTFSFileProperties::vftable) {
          puVar4 = (ushort *)((longlong *)plVar12[2])[9];
          if (puVar4 == (ushort *)0x0) {
            puVar10 = (undefined8 *)0x0;
          }
          else {
            puVar10 = FUN_180033aa0(puVar4);
          }
        }
        else {
          puVar10 = (undefined8 *)(*(code *)ppuVar3[0xf])();
        }
        if (puVar10 == (undefined8 *)0x0) break;
        plVar11 = FUN_1800340b0((longlong)puVar10);
        while (plVar11 != (longlong *)0x0) {
          if (((*plVar11 != -1) && (0 < plVar11[1])) && ((longlong *)param_1[4] != (longlong *)0x0))
          {
            (**(code **)(*(longlong *)param_1[4] + 0x28))();
            lVar7 = param_1[5];
            lVar16 = 0;
            lVar5 = *plVar11;
            lVar13 = (longlong)(int)lVar7 * plVar11[1];
            lVar6 = param_1[6];
            if (0 < lVar13) {
              do {
                if (((longlong *)param_1[7] != (longlong *)0x0) &&
                   (iVar9 = (**(code **)(*(longlong *)param_1[7] + 0x10))(), iVar9 == 0)) break;
                lVar2 = lVar16 + (int)lVar7 * lVar5 + lVar6;
                lVar14 = lVar13 - lVar16;
                if (0x8000 < lVar14) {
                  lVar14 = 0x8000;
                }
                iVar9 = (**(code **)(*(longlong *)param_1[4] + 8))
                                  ((longlong *)param_1[4],_Memory,lVar2,lVar14,0);
                if (iVar9 == 0) break;
                FUN_18001acc0((longlong)param_1,(longlong)_Memory,(int)lVar14,lVar2);
                lVar16 = lVar16 + lVar14;
              } while (lVar16 < lVar13);
            }
          }
          puVar10[8] = puVar10[8] + 1;
          plVar11 = (longlong *)0x0;
          bVar8 = FUN_1800341c0((longlong)puVar10);
          if ((int)CONCAT71(extraout_var,bVar8) == 0) {
            puVar15 = (undefined8 *)puVar10[6];
            if (puVar15 != (undefined8 *)0x0) {
              puVar15 = (undefined8 *)*puVar15;
            }
            plVar11 = *(longlong **)
                       (*(longlong *)
                         (puVar15[1] + ((ulonglong)puVar10[8] >> 1 & puVar15[2] - 1) * 8) +
                       (ulonglong)((uint)puVar10[8] & 1) * 8);
          }
        }
        plVar12 = (longlong *)*plVar12;
      } while (plVar12 != (longlong *)*param_1);
    }
  }
  plVar12 = (longlong *)*param_1;
  plVar11 = (longlong *)*plVar12;
  if (plVar11 != plVar12) {
    do {
      plVar12 = (longlong *)plVar11[2];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar9 == 1) && (plVar12 != (longlong *)0x0)) {
          (**(code **)(*plVar12 + 0x138))(plVar12,1);
        }
      }
      plVar12 = (longlong *)*param_1;
      plVar11 = (longlong *)*plVar11;
    } while (plVar11 != plVar12);
    plVar11 = (longlong *)*plVar12;
  }
  *plVar12 = (longlong)plVar12;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  if (plVar11 != (longlong *)*param_1) {
    do {
      plVar12 = (longlong *)*plVar11;
      free(plVar11);
      plVar11 = plVar12;
    } while (plVar12 != (longlong *)*param_1);
  }
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
    FUN_18002c250((undefined8 *)param_1[9]);
    puVar10 = (undefined8 *)param_1[9];
    if (puVar10 != (undefined8 *)0x0) {
      FUN_18002bfb0(puVar10);
      free(puVar10);
    }
    param_1[9] = 0;
  }
  return;
}

