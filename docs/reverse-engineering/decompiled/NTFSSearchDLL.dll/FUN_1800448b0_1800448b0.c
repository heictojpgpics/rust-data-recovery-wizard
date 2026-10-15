// Function: FUN_1800448b0
// Address: 1800448b0
// Size: 331 bytes


longlong FUN_1800448b0(longlong *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  longlong local_28;
  
  local_28 = 0;
  lVar6 = FUN_1800430b0(param_1,0x30,0,(int *)0x0,(longlong *)0x0);
  lVar7 = FUN_1800430b0(param_1,0x30,1,(int *)0x0,(longlong *)0x0);
  if ((lVar6 != 0) && (local_28 = lVar6, lVar7 != 0)) {
    uVar1 = FUN_180043330(lVar6);
    iVar4 = (int)CONCAT71(extraout_var,uVar1);
    uVar1 = FUN_180043330(lVar7);
    iVar5 = (int)CONCAT71(extraout_var_00,uVar1);
    local_28 = lVar7;
    if (iVar5 != 1) {
      if ((iVar4 == 0) && (iVar5 == 0)) {
        bVar2 = FUN_180043830(lVar6);
        bVar3 = FUN_180043830(lVar7);
        if (bVar3 <= bVar2) {
          local_28 = lVar6;
        }
      }
      else if (((iVar4 != 0) || (local_28 = lVar6, iVar5 != 2)) &&
              ((local_28 = lVar6, iVar4 == 2 && (iVar5 == 0)))) {
        local_28 = lVar7;
      }
    }
  }
  return local_28;
}

