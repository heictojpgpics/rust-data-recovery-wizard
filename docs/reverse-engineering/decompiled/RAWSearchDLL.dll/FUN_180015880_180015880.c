// Function: FUN_180015880
// Address: 180015880
// Size: 303 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180015880(undefined8 param_1,void *param_2,longlong param_3,undefined1 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  size_t _Size;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  ulonglong local_res10 [2];
  undefined1 local_res20 [8];
  
  _Size = param_3 - (longlong)param_2;
  uVar8 = (longlong)_Size >> 2;
  _DAT_180118248 = (undefined1  [16])0x0;
  uVar6 = 0;
  DAT_180118258 = 0;
  if (uVar8 == 0) {
    _DAT_180118248 = (undefined1  [16])0x0;
    DAT_180118258 = 0;
    return;
  }
  uVar7 = 0x3fffffffffffffff;
  local_res8 = 0x3fffffffffffffff;
  local_res20[0] = param_4;
  local_res10[0] = FUN_1800012f0();
  puVar4 = FUN_180001e40(local_res10,&local_res8);
  if (*puVar4 < uVar8) {
    FUN_180002090();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = uVar8 * 4;
  if (uVar7 < uVar8) {
    uVar8 = 0xffffffffffffffff;
  }
  else {
    uVar8 = uVar1;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        uVar6 = FUN_1800020c0(uVar1);
      }
      goto LAB_18001595f;
    }
  }
  uVar6 = uVar8 + 0x27;
  if (uVar6 <= uVar8) {
    uVar6 = 0xffffffffffffffff;
  }
  lVar5 = FUN_1800020c0(uVar6);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar6 = lVar5 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar6 - 8) = lVar5;
LAB_18001595f:
  DAT_180118250 = uVar6;
  DAT_180118248 = (void *)uVar6;
  DAT_180118258 = uVar1 + uVar6;
  FUN_1800020b0(local_res20);
  pvVar3 = DAT_180118248;
  memmove(DAT_180118248,param_2,_Size);
  DAT_180118250 = _Size + (longlong)pvVar3;
  return;
}

