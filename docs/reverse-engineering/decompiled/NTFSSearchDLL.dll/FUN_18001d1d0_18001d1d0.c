// Function: FUN_18001d1d0
// Address: 18001d1d0
// Size: 644 bytes


bool FUN_18001d1d0(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined7 extraout_var;
  void *_Memory;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  void *pvVar12;
  uint uVar13;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  uint in_stack_ffffffffffffffa8;
  longlong *plVar14;
  
  lVar16 = *(longlong *)(param_1 + 0x10);
  if (((lVar16 != 0) && (*(longlong *)(param_1 + 8) != 0)) &&
     (cVar2 = FUN_18001b6e0(*(uint *)(param_1 + 0x18)), cVar2 != '\0')) {
    plVar7 = FUN_1800340b0(lVar16);
    plVar10 = (longlong *)0x0;
    uVar13 = 0;
    plVar14 = plVar10;
    while (plVar7 != (longlong *)0x0) {
      uVar13 = (int)plVar14 + (int)plVar7[1] * *(int *)(param_1 + 0x18);
      plVar14 = (longlong *)(ulonglong)uVar13;
      lVar16 = *(longlong *)(param_1 + 0x10);
      *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
      plVar7 = plVar10;
      bVar3 = FUN_1800341c0(lVar16);
      if ((int)CONCAT71(extraout_var,bVar3) == 0) {
        plVar7 = plVar10;
        if (*(undefined8 **)(lVar16 + 0x30) != (undefined8 *)0x0) {
          plVar7 = (longlong *)**(undefined8 **)(lVar16 + 0x30);
        }
        plVar7 = *(longlong **)
                  (*(longlong *)
                    (plVar7[1] + (plVar7[2] - 1U & *(ulonglong *)(lVar16 + 0x40) >> 1) * 8) +
                  (ulonglong)((uint)*(ulonglong *)(lVar16 + 0x40) & 1) * 8);
      }
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    uVar13 = iVar4 * uVar13;
    if ((uVar13 < 0x8000001) &&
       (_Memory = (void *)FUN_18002be40((ulonglong)uVar13), _Memory != (void *)0x0)) {
      plVar7 = FUN_1800340b0(*(longlong *)(param_1 + 0x10));
      iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      if (iVar4 == 0) {
        uVar11 = 0x200;
      }
      else {
        uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
        uVar11 = (ulonglong)uVar5;
      }
      pvVar12 = _Memory;
      plVar14 = plVar10;
      while (plVar7 != (longlong *)0x0) {
        if ((*(longlong **)(param_1 + 0x30) != (longlong *)0x0) &&
           (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(), iVar4 == 0)) break;
        lVar16 = (ulonglong)*(uint *)(param_1 + 0x18) * *plVar7;
        if (*(longlong *)(param_1 + 0x58) == 0) {
          *(longlong *)(param_1 + 0x58) = lVar16;
        }
        iVar4 = (int)plVar7[1] * *(uint *)(param_1 + 0x18);
        if (iVar4 < 1) break;
        plVar7 = (longlong *)((longlong)iVar4 + (longlong)plVar14);
        lVar8 = (longlong)(int)(uVar13 / uVar11);
        plVar17 = plVar14;
        if ((longlong)plVar7 < lVar8) {
          plVar17 = plVar7;
        }
        lVar15 = lVar8 - (longlong)plVar14;
        if ((longlong)plVar7 < lVar8) {
          lVar15 = (longlong)iVar4;
        }
        in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffff00;
        iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                          (*(longlong **)(param_1 + 8),pvVar12,lVar16,lVar15,
                           in_stack_ffffffffffffffa8);
        if (iVar4 == 0) {
          return false;
        }
        if (*(longlong **)(param_1 + 8) == (longlong *)0x0) break;
        iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
        pvVar12 = (void *)((longlong)pvVar12 + iVar4 * lVar15);
        plVar7 = (longlong *)FUN_180034150(*(longlong *)(param_1 + 0x10));
        plVar14 = plVar17;
      }
      if (*(longlong *)(param_1 + 8) != 0) {
        puVar9 = (undefined4 *)FUN_18002be40(0xe8);
        if (puVar9 != (undefined4 *)0x0) {
          plVar7 = *(longlong **)(param_1 + 8);
          uVar1 = *(undefined1 *)(param_1 + 0x29);
          uVar6 = (**(code **)(*plVar7 + 0x28))(plVar7);
          plVar10 = (longlong *)
                    FUN_1800290c0(puVar9,_Memory,uVar13,*(undefined4 *)(param_1 + 0x18),uVar6,uVar1,
                                  plVar7);
        }
        *(longlong **)(param_1 + 0x38) = plVar10;
        free(_Memory);
        return *(longlong *)(param_1 + 0x38) != 0;
      }
    }
  }
  return false;
}

