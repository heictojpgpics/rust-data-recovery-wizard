// Function: FUN_180030980
// Address: 180030980
// Size: 277 bytes


void FUN_180030980(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  _guard_check_icall();
  plVar1 = (longlong *)FUN_180002680(param_1);
  if (*plVar1 != 0) {
    FUN_180002670((longlong)param_1);
    FUN_180002680(param_1);
    _guard_check_icall();
    uVar2 = FUN_180002680(param_1);
    lVar3 = FUN_18001a0b0(param_1);
    puVar4 = (undefined8 *)FUN_180002680(param_1);
    deallocate(uVar2,(void *)*puVar4,lVar3);
  }
  plVar1 = (longlong *)FUN_180002680(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_180002670((longlong)param_1);
  *plVar1 = param_2 + param_3 * 8;
  plVar1 = (longlong *)FUN_180002810((longlong)param_1);
  *plVar1 = param_2 + param_4 * 8;
  return;
}

