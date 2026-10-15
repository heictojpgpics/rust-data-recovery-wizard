// Function: FUN_1800193c0
// Address: 1800193c0
// Size: 432 bytes


undefined8 FUN_1800193c0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  void *_Dst;
  undefined8 uVar8;
  undefined7 extraout_var;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x78))();
  if (lVar6 == 0) {
    return 0;
  }
  plVar7 = FUN_1800340b0(lVar6);
  _Dst = (void *)FUN_18002be40(0xa00064);
  memset(_Dst,0,0xa00064);
  iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  lVar10 = (longlong)(int)(0xa00000 / (longlong)iVar5);
  while (plVar7 != (longlong *)0x0) {
    lVar2 = *plVar7;
    if (lVar2 != -1) {
      uVar1 = *(uint *)(param_1 + 0x10);
      lVar13 = plVar7[1] * (ulonglong)uVar1;
      lVar3 = *(longlong *)(param_1 + 0x78);
      lVar9 = 0;
      lVar11 = lVar13;
      if (0 < lVar13) {
        do {
          memset(_Dst,0,0xa00064);
          lVar14 = lVar11;
          if (lVar10 <= lVar11) {
            lVar14 = lVar10;
          }
          iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                            (*(longlong **)(param_1 + 8),_Dst,
                             lVar9 + (ulonglong)uVar1 * lVar2 + lVar3,lVar14,0);
          if (iVar5 == 0) goto LAB_180019547;
          iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
          uVar8 = FUN_180019570(param_1,_Dst,iVar5 * lVar14);
          if ((int)uVar8 == 0) goto LAB_180019547;
          lVar9 = lVar9 + lVar10;
          lVar11 = lVar11 - lVar10;
        } while (lVar9 < lVar13);
      }
    }
    *(longlong *)(lVar6 + 0x40) = *(longlong *)(lVar6 + 0x40) + 1;
    plVar7 = (longlong *)0x0;
    bVar4 = FUN_1800341c0(lVar6);
    if ((int)CONCAT71(extraout_var,bVar4) == 0) {
      puVar12 = *(undefined8 **)(lVar6 + 0x30);
      if (puVar12 != (undefined8 *)0x0) {
        puVar12 = (undefined8 *)*puVar12;
      }
      plVar7 = *(longlong **)
                (*(longlong *)
                  (puVar12[1] + (*(ulonglong *)(lVar6 + 0x40) >> 1 & puVar12[2] - 1) * 8) +
                (ulonglong)((uint)*(ulonglong *)(lVar6 + 0x40) & 1) * 8);
    }
  }
LAB_180019547:
  if (_Dst != (void *)0x0) {
    free(_Dst);
  }
  return 1;
}

