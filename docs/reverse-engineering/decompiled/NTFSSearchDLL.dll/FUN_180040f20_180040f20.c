// Function: FUN_180040f20
// Address: 180040f20
// Size: 201 bytes


undefined4 FUN_180040f20(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  longlong lVar3;
  undefined8 uVar4;
  int local_18;
  
  bVar1 = FUN_180041c50(param_1);
  if ((((int)CONCAT71(extraout_var,bVar1) != 0) && (iVar2 = FUN_1800419b0(param_1), iVar2 == 0)) &&
     (lVar3 = FUN_180041b70(param_1,0x30,0), lVar3 != 0)) {
    for (local_18 = 0; local_18 < 0xf; local_18 = local_18 + 1) {
      uVar4 = FUN_180043580(lVar3,(wchar_t *)(&PTR_u__MFT_180086068)[(longlong)local_18 * 2]);
      if ((int)uVar4 != 0) {
        return *(undefined4 *)(&DAT_180086060 + (longlong)local_18 * 0x10);
      }
    }
  }
  return 0xffffffff;
}

