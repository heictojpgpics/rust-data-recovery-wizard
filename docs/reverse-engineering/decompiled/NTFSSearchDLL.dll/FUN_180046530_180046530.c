// Function: FUN_180046530
// Address: 180046530
// Size: 463 bytes


undefined8 FUN_180046530(undefined8 *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  int *piVar4;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  longlong local_30;
  int local_28;
  int local_24;
  uint local_20;
  longlong *local_18;
  
  bVar1 = FUN_180045d60(param_2,param_3,0);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_180030440((longlong)(param_1 + 2));
    *param_1 = param_2;
    *(uint *)(param_1 + 1) = param_3;
    local_40 = param_3;
    for (local_44 = 0; local_44 < (int)param_3; local_44 = local_44 + 0x1000) {
      piVar4 = (int *)((longlong)param_2 + (longlong)local_44);
      uVar3 = FUN_180045510(piVar4,local_40,'\0');
      if ((int)uVar3 == 0) break;
      local_48 = FUN_180045690((longlong)piVar4);
      local_28 = FUN_1800456c0((longlong)piVar4);
      local_30 = (longlong)piVar4 + (ulonglong)local_48;
      local_3c = 0;
      local_20 = param_3;
      do {
        iVar2 = FUN_180045690((longlong)piVar4);
        if ((((uint)(local_28 + iVar2) <= local_48) ||
            (local_30 = (longlong)piVar4 + (ulonglong)local_48,
            (*(ushort *)(local_30 + 0xc) & 2) != 0)) || (*(short *)(local_30 + 8) == 0)) break;
        local_18 = param_1 + 2;
        FUN_1800304d0(local_18,&local_30);
        local_48 = local_48 + *(ushort *)(local_30 + 8);
        local_24 = local_3c;
        bVar1 = local_3c < 0x1f5;
        local_3c = local_3c + 1;
      } while (bVar1);
      local_40 = local_40 - 0x1000;
    }
    uVar3 = 1;
  }
  return uVar3;
}

