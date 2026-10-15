// Function: FUN_18000a3d0
// Address: 18000a3d0
// Size: 496 bytes


ulonglong FUN_18000a3d0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,uint param_2)

{
  void *_Src;
  undefined8 uVar1;
  uint uVar2;
  char *pcVar3;
  void *pvVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong _Size;
  
  if (((byte)param_1[0x70] & 2) != 0) {
    return 0xffffffffffffffff;
  }
  if (param_2 == 0xffffffff) {
    return 0;
  }
  uVar7 = **(ulonglong **)(param_1 + 0x40);
  if ((uVar7 != 0) && (uVar7 < (longlong)**(int **)(param_1 + 0x58) + uVar7)) {
    pcVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::_Pninc(param_1);
    *pcVar3 = (char)param_2;
    *(ulonglong *)(param_1 + 0x68) = uVar7 + 1;
    return (ulonglong)param_2;
  }
  _Src = (void *)**(undefined8 **)(param_1 + 0x18);
  _Size = ((longlong)**(int **)(param_1 + 0x58) + uVar7) - (longlong)_Src;
  if (uVar7 == 0) {
    _Size = 0;
  }
  if (_Size < 0x20) {
    uVar7 = 0x20;
    pvVar4 = (void *)FUN_1800020c0(0x20);
  }
  else {
    if (_Size < 0x3fffffff) {
      uVar7 = _Size * 2;
      if (uVar7 < 0x1000) {
        if (uVar7 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          pvVar4 = (void *)FUN_1800020c0(uVar7);
        }
        goto LAB_18000a4d0;
      }
    }
    else {
      uVar7 = 0x7fffffff;
      if (0x7ffffffe < _Size) {
        return 0xffffffffffffffff;
      }
    }
    uVar5 = uVar7 + 0x27;
    if (uVar5 <= uVar7) {
      uVar5 = 0xffffffffffffffff;
    }
    lVar6 = FUN_1800020c0(uVar5);
    if (lVar6 == 0) goto LAB_18000a594;
    pvVar4 = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)pvVar4 - 8) = lVar6;
  }
LAB_18000a4d0:
  memcpy(pvVar4,_Src,_Size);
  lVar6 = _Size + (longlong)pvVar4;
  *(longlong *)(param_1 + 0x68) = lVar6 + 1;
  **(undefined8 **)(param_1 + 0x20) = pvVar4;
  **(longlong **)(param_1 + 0x40) = lVar6;
  **(int **)(param_1 + 0x58) = ((int)pvVar4 - (int)lVar6) + (int)uVar7;
  if (((byte)param_1[0x70] & 4) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    lVar6 = (**(longlong **)(param_1 + 0x38) - (longlong)_Src) + (longlong)pvVar4;
    **(undefined8 **)(param_1 + 0x18) = pvVar4;
    **(longlong **)(param_1 + 0x38) = lVar6;
    **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar6;
  }
  else {
    **(undefined8 **)(param_1 + 0x18) = pvVar4;
    **(undefined8 **)(param_1 + 0x38) = 0;
    **(int **)(param_1 + 0x50) = (int)pvVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x70);
  if ((uVar2 & 1) != 0) {
    pvVar4 = _Src;
    if ((0xfff < _Size) &&
       (pvVar4 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar4)))) {
LAB_18000a594:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar4);
    uVar2 = *(uint *)(param_1 + 0x70);
  }
  *(uint *)(param_1 + 0x70) = uVar2 | 1;
  pcVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::_Pninc(param_1);
  *pcVar3 = (char)param_2;
  return (ulonglong)param_2;
}

