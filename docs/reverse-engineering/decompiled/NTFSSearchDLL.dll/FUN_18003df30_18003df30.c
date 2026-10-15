// Function: FUN_18003df30
// Address: 18003df30
// Size: 542 bytes


longlong * FUN_18003df30(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  void *_Memory;
  int *_Dst;
  longlong *plVar9;
  longlong *_Memory_00;
  undefined7 extraout_var;
  uint uVar10;
  undefined8 in_stack_ffffffffffffffa8;
  ulonglong uVar11;
  
  uVar10 = (uint)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  iVar5 = (**(code **)(*param_1 + 8))();
  if ((iVar5 == 0) && (plVar8 = (longlong *)param_1[6], plVar8 != (longlong *)0x0)) {
    if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
      uVar4 = *(ushort *)((longlong)plVar8 + 0x23);
    }
    else {
      uVar4 = (*(code *)((undefined **)*plVar8)[7])(plVar8);
    }
    if ((uVar4 & 0x10) == 0) {
      _Memory_00 = (longlong *)0x0;
      uVar11 = (ulonglong)uVar10 << 0x20;
      plVar8 = (longlong *)
               __RTDynamicCast(plVar8,0,&IFileProperties::RTTI_Type_Descriptor,
                               &CNTFSFileProperties::RTTI_Type_Descriptor,uVar11);
      if (plVar8 != (longlong *)0x0) {
        puVar1 = (undefined8 *)plVar8[10];
        iVar5 = (**(code **)(*param_2 + 0x28))(param_2);
        uVar10 = iVar5 * 0x10;
        _Memory = (void *)FUN_18002be40((ulonglong)uVar10);
        if (_Memory != (void *)0x0) {
          (**(code **)(*param_2 + 0x10))(param_2,_Memory,plVar8[8],0x10,uVar11 & 0xffffffffffffff00)
          ;
          _Dst = (int *)FUN_18002be40((ulonglong)uVar10);
          if (_Dst != (int *)0x0) {
            memset(_Dst,0,(ulonglong)uVar10);
            iVar5 = 0x400;
            if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
              uVar7 = (uint)*(byte *)((longlong)plVar8 + 0x3e);
            }
            else {
              uVar7 = (*(code *)((undefined **)*plVar8)[0x19])(plVar8);
            }
            iVar6 = (**(code **)(*param_2 + 0x28))(param_2);
            if (0x400 < iVar6) {
              iVar5 = (**(code **)(*param_2 + 0x28))(param_2);
              iVar5 = iVar5 + uVar7 * -0x400;
              if (iVar5 < 0) {
                return (longlong *)0x0;
              }
            }
            if ((iVar5 <= (int)uVar10) && ((int)(uVar7 * 0x400) <= (int)uVar10)) {
              memcpy(_Dst,(void *)((longlong)(int)(uVar7 * 0x400) + (longlong)_Memory),
                     (longlong)iVar5);
              plVar9 = (longlong *)FUN_18002be40(0x48);
              if (plVar9 != (longlong *)0x0) {
                lVar2 = plVar8[8];
                iVar5 = (**(code **)(*param_2 + 0x28))(param_2);
                _Memory_00 = FUN_1800431d0(plVar9,_Dst,(ulonglong)(uint)(iVar5 << 4),lVar2,param_2,
                                           puVar1);
              }
              free(_Dst);
              free(_Memory);
              bVar3 = FUN_180043030(_Memory_00);
              if ((int)CONCAT71(extraout_var,bVar3) != 0) {
                return _Memory_00;
              }
              if (_Memory_00 != (longlong *)0x0) {
                FUN_180043170(_Memory_00);
                free(_Memory_00);
              }
            }
          }
        }
      }
    }
  }
  return (longlong *)0x0;
}

