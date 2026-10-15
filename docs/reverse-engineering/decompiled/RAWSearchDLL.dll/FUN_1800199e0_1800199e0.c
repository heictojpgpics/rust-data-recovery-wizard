// Function: FUN_1800199e0
// Address: 1800199e0
// Size: 457 bytes


longlong FUN_1800199e0(longlong param_1,ulonglong param_2,ulonglong param_3,void *param_4,
                      size_t param_5)

{
  void *pvVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  void *_Src;
  size_t _Size;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong local_res10;
  ulonglong local_38 [2];
  
  uVar6 = param_2;
  puVar4 = (undefined8 *)FUN_1800016b0(param_1);
  uVar7 = puVar4[2];
  if (uVar7 < param_2) {
    FUN_1800072f0();
    pcVar3 = (code *)swi(3);
    lVar9 = (*pcVar3)();
    return lVar9;
  }
  uVar8 = uVar7 - param_2;
  local_res10 = uVar8;
  local_38[0] = param_3;
  puVar5 = FUN_180001e40(local_38,&local_res10);
  uVar2 = *puVar5;
  if (uVar2 == param_5) {
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    memmove((void *)((longlong)puVar4 + uVar6),param_4,param_5);
  }
  else {
    lVar9 = uVar8 - uVar2;
    if (param_5 < uVar2) {
      puVar4[2] = (uVar7 - uVar2) + param_5;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      pvVar1 = (void *)((longlong)puVar4 + uVar6);
      memmove(pvVar1,param_4,param_5);
      memmove((void *)((longlong)pvVar1 + param_5),(void *)((longlong)pvVar1 + uVar2),lVar9 + 1);
    }
    else {
      uVar8 = param_5 - uVar2;
      if (puVar4[3] - uVar7 < uVar8) {
        param_1 = FUN_180019bb0(param_1,uVar8,param_3,uVar6,uVar2,param_4,param_5);
      }
      else {
        puVar4[2] = uVar8 + uVar7;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        pvVar1 = (void *)((longlong)puVar4 + uVar6);
        _Src = (void *)(uVar2 + (longlong)pvVar1);
        _Size = param_5;
        if ((pvVar1 < (void *)((longlong)param_4 + param_5)) &&
           (param_4 <= (void *)((longlong)puVar4 + uVar7))) {
          if (param_4 < _Src) {
            _Size = (longlong)_Src - (longlong)param_4;
          }
          else {
            _Size = 0;
          }
        }
        memmove((void *)((longlong)_Src + uVar8),_Src,lVar9 + 1);
        memmove(pvVar1,param_4,_Size);
        memcpy((void *)(_Size + (longlong)pvVar1),(void *)(_Size + uVar8 + (longlong)param_4),
               param_5 - _Size);
      }
    }
  }
  return param_1;
}

