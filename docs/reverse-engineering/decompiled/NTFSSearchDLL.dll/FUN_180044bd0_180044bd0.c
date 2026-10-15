// Function: FUN_180044bd0
// Address: 180044bd0
// Size: 444 bytes


undefined8 FUN_180044bd0(longlong *param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined6 extraout_var_02;
  undefined8 uVar4;
  int local_58;
  undefined4 *local_50;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  longlong local_18;
  
  bVar1 = FUN_180041c50(param_1);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar4 = 0;
  }
  else {
    local_58 = 0;
    local_50 = (undefined4 *)FUN_180041b70(param_1,0x80,0);
    while (local_50 != (undefined4 *)0x0) {
      iVar3 = FUN_180045480((longlong)local_50);
      if (iVar3 < 1) {
        return 0;
      }
      bVar1 = FUN_180045440((longlong)local_50);
      if ((int)CONCAT71(extraout_var_00,bVar1) == 0) {
        bVar1 = FUN_180045400((longlong)local_50);
        if ((int)CONCAT71(extraout_var_01,bVar1) != 0) {
          return 0;
        }
        local_30 = 0;
        uVar2 = FUN_1800453b0((longlong)local_50);
        if ((param_3 != 0) && ((int)CONCAT62(extraout_var_02,uVar2) == 0)) {
          local_18 = FUN_18003fe40((char *)((longlong)local_50 +
                                           (ulonglong)*(ushort *)(local_50 + 8)));
          local_20 = (*(longlong *)(local_50 + 6) - *(longlong *)(local_50 + 4)) + 1;
          if (local_18 != local_20) {
            return 0;
          }
        }
        local_28 = 0;
        FUN_180044e60(local_50,&local_28,&local_30,param_2,0);
        if ((local_30 == 0) && (param_4 != (undefined8 *)0x0)) {
          *param_4 = local_28;
        }
      }
      local_58 = local_58 + 1;
      local_50 = (undefined4 *)FUN_180041b70(param_1,0x80,local_58);
    }
    uVar4 = 1;
  }
  return uVar4;
}

