// Function: FUN_18000d840
// Address: 18000d840
// Size: 570 bytes


longlong FUN_18000d840(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int *_Dst;
  undefined8 uVar9;
  undefined7 extraout_var;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong in_stack_ffffffffffffff98;
  
  if (*(int *)(param_3 + 8) == 3) {
    if (*(longlong *)(param_1 + 0x110) != param_3) {
      FUN_18000d570(param_1,param_3);
    }
    lVar12 = *(longlong *)(param_2 + 0x58);
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
    uVar8 = iVar7 << 7;
    _Dst = (int *)FUN_18002be40((ulonglong)uVar8);
    if (_Dst != (int *)0x0) {
      memset(_Dst,0,(ulonglong)uVar8);
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))
                (*(longlong **)(param_1 + 0xb8),_Dst,lVar12,0x80,
                 in_stack_ffffffffffffff98 & 0xffffffffffffff00);
      lVar13 = 0;
      uVar9 = FUN_180041bb0(_Dst,uVar8);
      if (((int)uVar9 != 0) &&
         (bVar5 = FUN_180041970((longlong)_Dst), (int)CONCAT71(extraout_var,bVar5) == 0)) {
        uVar2 = *(uint *)(param_3 + 0xc);
        lVar11 = lVar13;
        if ((uVar2 != 0) &&
           (plVar10 = (longlong *)**(longlong **)(param_1 + 0x180),
           plVar10 != *(longlong **)(param_1 + 0x180))) {
          lVar3 = *(longlong *)(param_3 + 0x10);
          do {
            lVar11 = plVar10[2];
            uVar9 = FUN_1800401a0((undefined8 *)(lVar11 + 8),
                                  (lVar12 - lVar3) / (longlong)(ulonglong)uVar2);
            if ((int)uVar9 != 0) break;
            plVar10 = (longlong *)*plVar10;
            lVar11 = lVar13;
          } while (plVar10 != (longlong *)*(longlong *)(param_1 + 0x180));
        }
        if (*(int *)(param_3 + 0xa0) != 0) {
          lVar13 = lVar11;
        }
        plVar10 = FUN_18000d1d0(param_1,_Dst,uVar8,lVar12,param_3,lVar13,'\0');
        if (plVar10 != (longlong *)0x0) {
          plVar4 = *(longlong **)(param_2 + 0x30);
          lVar12 = plVar10[10];
          if (plVar4 != (longlong *)0x0) {
            if ((undefined **)*plVar4 == CNTFSFileProperties::vftable) {
              uVar6 = *(ushort *)((longlong)plVar4 + 0x23);
            }
            else {
              uVar6 = (*(code *)((undefined **)*plVar4)[7])(plVar4);
            }
            if ((uVar6 & 0x400) != 0) {
              lVar12 = -100;
            }
          }
          *(longlong *)(param_2 + 0x50) = lVar12;
          *(longlong *)(param_2 + 0x48) = plVar10[9];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar4 + 0x138))(plVar4,1);
            }
          }
          lVar12 = plVar10[6];
          if (lVar12 != 0) {
            LOCK();
            *(int *)(lVar12 + 0xc) = *(int *)(lVar12 + 0xc) + 1;
            UNLOCK();
          }
          *(longlong *)(param_2 + 0x30) = lVar12;
          (**(code **)(*plVar10 + 0x30))(plVar10,1);
        }
        lVar13 = 1;
      }
      free(_Dst);
      return lVar13;
    }
  }
  return 0;
}

