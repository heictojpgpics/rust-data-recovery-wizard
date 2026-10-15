// Function: FUN_180035450
// Address: 180035450
// Size: 633 bytes


void FUN_180035450(longlong *param_1,longlong param_2,ulonglong param_3,longlong *param_4,
                  int param_5,int param_6,char param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *_Dst;
  undefined8 uVar4;
  undefined7 extraout_var;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  int *_Memory;
  ulonglong uVar11;
  ulonglong in_stack_ffffffffffffff88;
  longlong *plVar12;
  undefined8 in_stack_ffffffffffffffa8;
  longlong *local_48;
  ulonglong local_40;
  longlong local_38;
  int *local_30;
  
  uVar3 = (**(code **)(*param_4 + 0x28))(param_4);
  _Dst = (int *)FUN_18002be40((ulonglong)(uVar3 << 7));
  if (_Dst != (int *)0x0) {
    local_30 = _Dst;
    memset(_Dst,0,(ulonglong)(uVar3 << 7));
    uVar11 = param_3 & 0xffffffff;
    (**(code **)(*param_4 + 8))
              (param_4,_Dst,param_2,param_3 & 0xffffffff,
               in_stack_ffffffffffffff88 & 0xffffffffffffff00);
    local_38 = (param_3 & 0xffffffff) + param_2;
    _Memory = _Dst;
    if (param_2 < local_38) {
      local_40 = (ulonglong)uVar3;
      do {
        iVar10 = (int)uVar11;
        if (0x10 < (longlong)uVar11) {
          iVar10 = 0x10;
        }
        uVar4 = FUN_180041bb0(_Dst,iVar10 * uVar3);
        if ((((int)uVar4 != 0) &&
            (bVar2 = FUN_180041970((longlong)_Dst), (int)CONCAT71(extraout_var,bVar2) == 0)) &&
           ((plVar5 = FUN_180034eb0(param_1,param_1[5],*(uint *)(param_1 + 6),param_2), param_5 == 0
            || (plVar5 != (longlong *)0x0)))) {
          if (param_6 == 0) {
            plVar5 = (longlong *)0x0;
          }
          plVar12 = (longlong *)param_1[4];
          plVar8 = param_1;
          local_48 = FUN_180034f50((longlong)param_1,_Dst,iVar10 * uVar3,param_2,plVar12,
                                   *(uint *)(param_1 + 6),param_1[5],plVar5,
                                   in_stack_ffffffffffffffa8,param_7);
          if (local_48 != (longlong *)0x0) {
            if (plVar5 == (longlong *)0x0) {
              uVar9 = local_48[3];
              lVar7 = __RTDynamicCast(uVar9,0,&IFileProperties::RTTI_Type_Descriptor,
                                      &CNTFSFileProperties::RTTI_Type_Descriptor,
                                      (ulonglong)plVar12 & 0xffffffff00000000);
              if (lVar7 != 0) {
                *(byte *)(lVar7 + 0x72) = *(byte *)(lVar7 + 0x72) & 0xdf;
                uVar9 = (ulonglong)(byte)(param_7 << 5);
                *(byte *)(lVar7 + 0x72) = *(byte *)(lVar7 + 0x72) | param_7 << 5;
              }
              lVar7 = param_1[2];
              plVar5 = *(longlong **)(lVar7 + 8);
              lVar6 = FUN_1800143b0(uVar9,lVar7,(longlong)plVar5,&local_48);
              if (param_1[3] == 0xaaaaaaaaaaaaaa9) goto LAB_180035689;
              param_1[3] = param_1[3] + 1;
              *(longlong *)(lVar7 + 8) = lVar6;
              *plVar5 = lVar6;
            }
            else {
              lVar7 = plVar5[1];
              plVar12 = *(longlong **)(lVar7 + 8);
              lVar6 = FUN_1800143b0(plVar8,lVar7,(longlong)plVar12,&local_48);
              if (plVar5[2] == 0xaaaaaaaaaaaaaa9) {
LAB_180035689:
                std::_Xlength_error("list<T> too long");
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              plVar5[2] = plVar5[2] + 1;
              *(longlong *)(lVar7 + 8) = lVar6;
              *plVar12 = lVar6;
            }
          }
        }
        _Dst = (int *)((longlong)_Dst + local_40);
        param_2 = param_2 + 1;
        uVar11 = uVar11 - 1;
        _Memory = local_30;
      } while (param_2 < local_38);
    }
    free(_Memory);
  }
  return;
}

