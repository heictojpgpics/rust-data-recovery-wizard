// Function: thunk_FUN_1800061a0
// Address: 180005fa0
// Size: 5 bytes


void thunk_FUN_1800061a0(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *_Src;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined8 auStackX_18 [2];
  
  pvVar5 = (void *)param_1[1];
  lVar3 = *param_1;
  uVar6 = (longlong)pvVar5 - lVar3;
  uVar2 = param_1[2] - lVar3;
  auStackX_18[0] = param_3;
  if (param_2 <= uVar2) {
    if (param_2 <= uVar6) {
      if (param_2 != uVar6) {
        param_1[1] = lVar3 + param_2;
      }
      return;
    }
    memset(pvVar5,0,(lVar3 + param_2) - (longlong)pvVar5);
    param_1[1] = lVar3 + param_2;
    return;
  }
  if (0x7fffffffffffffff < param_2) {
    FUN_180002bd0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar4 = param_2;
  if ((uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1)) &&
     (uVar4 = (uVar2 >> 1) + uVar2, uVar4 < param_2)) {
    uVar4 = param_2;
  }
  if (uVar4 < 0x1000) {
    if (uVar4 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)FUN_18002be40(uVar4);
    }
  }
  else {
    uVar2 = uVar4 + 0x27;
    if (uVar2 <= uVar4) {
      uVar2 = 0xffffffffffffffff;
    }
    lVar3 = FUN_18002be40(uVar2);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    pvVar5 = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)pvVar5 - 8) = lVar3;
  }
  memset((void *)((longlong)pvVar5 + uVar6),0,
         (longlong)pvVar5 + (param_2 - (longlong)((longlong)pvVar5 + uVar6)));
  lVar3 = param_1[1];
  _Src = (void *)*param_1;
  FUN_180002ca0((undefined1 *)auStackX_18);
  memmove(pvVar5,_Src,lVar3 - (longlong)_Src);
  FUN_180006300(param_1,(longlong)pvVar5,param_2,uVar4);
  return;
}

