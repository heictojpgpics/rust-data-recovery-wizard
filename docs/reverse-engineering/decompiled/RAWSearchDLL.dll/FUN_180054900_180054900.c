// Function: FUN_180054900
// Address: 180054900
// Size: 387 bytes


void FUN_180054900(longlong *param_1,void *param_2,int param_3)

{
  void *_Src;
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong _Size;
  ulonglong uVar7;
  void *_Dst;
  
  _Size = (ulonglong)param_3;
  if (param_3 != 0) {
    if (param_2 != (void *)0x0) {
      _Dst = (void *)*param_1;
      uVar7 = (longlong)param_2 - (longlong)_Dst;
      uVar2 = *(uint *)((longlong)_Dst + -0x10);
      if (-1 < param_3) {
        if ((int)(1U - *(int *)((longlong)_Dst + -8) | *(int *)((longlong)_Dst + -0xc) - param_3) <
            0) {
          FUN_180049a30(param_1,param_3);
          _Dst = (void *)*param_1;
        }
        if (uVar2 < uVar7) {
          FUN_180049bc0(_Dst,(longlong)*(int *)((longlong)_Dst + -0xc),param_2,param_3);
        }
        else {
          _Src = (void *)((longlong)_Dst + uVar7);
          if (param_3 != 0) {
            if (_Src == (void *)0x0) {
              piVar5 = _errno();
              *piVar5 = 0x16;
              _invalid_parameter_noinfo();
            }
            else if ((ulonglong)(longlong)*(int *)((longlong)_Dst + -0xc) < _Size) {
              piVar5 = _errno();
              *piVar5 = 0x22;
              _invalid_parameter_noinfo();
            }
            else {
              memmove(_Dst,_Src,_Size);
            }
          }
        }
        if (param_3 <= *(int *)(*param_1 + -0xc)) {
          *(int *)(*param_1 + -0x10) = param_3;
          *(undefined1 *)(_Size + *param_1) = 0;
          return;
        }
      }
    }
LAB_180054a6d:
    FUN_180047ec0(0x80070057);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar6 = *param_1;
  plVar3 = *(longlong **)(lVar6 + -0x18);
  if (*(int *)(lVar6 + -0x10) != 0) {
    if (*(int *)(lVar6 + -8) < 0) {
      if (*(int *)(lVar6 + -0xc) < 0) goto LAB_180054a6d;
      *(undefined4 *)(lVar6 + -0x10) = 0;
      *(undefined1 *)*param_1 = 0;
    }
    else {
      LOCK();
      piVar5 = (int *)(lVar6 + -8);
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 < 2) {
        (**(code **)(**(longlong **)(lVar6 + -0x18) + 8))();
      }
      if ((undefined **)*plVar3 == ATL::CAtlStringMgr::vftable) {
        LOCK();
        *(int *)(plVar3 + 4) = (int)plVar3[4] + 1;
        UNLOCK();
        *param_1 = (longlong)(plVar3 + 5);
      }
      else {
        lVar6 = (*(code *)((undefined **)*plVar3)[3])(plVar3);
        *param_1 = lVar6 + 0x18;
      }
    }
  }
  return;
}

