// Function: FUN_180018030
// Address: 180018030
// Size: 444 bytes


void FUN_180018030(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  size_t _Size;
  code *pcVar1;
  void *pvVar2;
  ulonglong *puVar3;
  longlong lVar4;
  void *_Src;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *local_res8;
  ulonglong local_res10;
  ulonglong local_res18 [2];
  
  pvVar2 = (void *)param_1[1];
  lVar4 = *param_1;
  uVar8 = (longlong)pvVar2 - lVar4 >> 3;
  uVar6 = param_1[2] - lVar4 >> 3;
  if (param_2 <= uVar6) {
    if (param_2 <= uVar8) {
      if (param_2 != uVar8) {
        param_1[1] = lVar4 + param_2 * 8;
      }
      return;
    }
    _Size = (param_2 - uVar8) * 8;
    local_res18[0] = param_3;
    memset(pvVar2,0,_Size);
    param_1[1] = (longlong)(_Size + (longlong)pvVar2);
    return;
  }
  uVar7 = 0x1fffffffffffffff;
  local_res18[0] = 0x1fffffffffffffff;
  pvVar2 = (void *)FUN_180001110();
  local_res8 = pvVar2;
  puVar3 = FUN_180002960((ulonglong *)&local_res8,local_res18);
  if (*puVar3 < param_2) {
    FUN_180002bd0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res8 = pvVar2;
  local_res18[0] = uVar7;
  puVar3 = FUN_180002960((ulonglong *)&local_res8,local_res18);
  uVar5 = param_2;
  if ((uVar6 <= *puVar3 - (uVar6 >> 1)) && (uVar5 = (uVar6 >> 1) + uVar6, uVar5 < param_2)) {
    uVar5 = param_2;
  }
  uVar6 = uVar5 * 8;
  local_res10 = uVar5;
  if (uVar7 < uVar5) {
    uVar6 = 0xffffffffffffffff;
  }
  else if (uVar6 < 0x1000) {
    if (uVar6 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_18002be40(uVar6);
    }
    goto LAB_18001814d;
  }
  uVar7 = uVar6 + 0x27;
  if (uVar7 <= uVar6) {
    uVar7 = 0xffffffffffffffff;
  }
  lVar4 = FUN_18002be40(uVar7);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  pvVar2 = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)pvVar2 - 8) = lVar4;
LAB_18001814d:
  local_res8 = pvVar2;
  memset((void *)((longlong)pvVar2 + uVar8 * 8),0,(param_2 - uVar8) * 8);
  lVar4 = param_1[1];
  _Src = (void *)*param_1;
  FUN_180002ca0((undefined1 *)local_res18);
  memmove(pvVar2,_Src,lVar4 - (longlong)_Src);
  FID_conflict__Change_array(param_1,(longlong)pvVar2,param_2,uVar5);
  return;
}

