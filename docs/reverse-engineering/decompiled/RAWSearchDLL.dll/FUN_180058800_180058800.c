// Function: FUN_180058800
// Address: 180058800
// Size: 133 bytes


undefined8 * FUN_180058800(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar1 = FUN_180008ad0();
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)FUN_1800020c0(uVar1);
    }
  }
  else {
    uVar3 = uVar1 + 0x27;
    if (uVar3 <= uVar1) {
      uVar3 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1800020c0(uVar3);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    puVar4 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
    puVar4[-1] = lVar2;
  }
  *puVar4 = *param_1;
  puVar4[1] = *param_1;
  puVar4[2] = *param_1;
  return puVar4;
}

