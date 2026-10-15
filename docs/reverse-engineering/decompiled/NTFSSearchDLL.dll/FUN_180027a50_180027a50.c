// Function: FUN_180027a50
// Address: 180027a50
// Size: 216 bytes


ulonglong FUN_180027a50(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                       longlong param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  ulonglong in_RAX;
  undefined4 extraout_var;
  undefined8 uVar5;
  int local_res10 [2];
  
  if ((((param_2 != 0) && (param_3 != (longlong *)0x0)) && (param_4 != (undefined8 *)0x0)) &&
     ((puVar2 = (undefined4 *)*param_4, puVar2 != (undefined4 *)0x0 &&
      (*(longlong *)(param_1 + 0x388) != 0)))) {
    uVar3 = FUN_180041820(param_2);
    if (uVar3 < 0xf) {
      LOCK();
      piVar1 = (int *)((longlong)param_3 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      in_RAX = (ulonglong)(iVar4 - 1U);
      if (iVar4 - 1U == 0) {
        in_RAX = (**(code **)(*param_3 + 0x138))(param_3,1);
      }
    }
    else {
      local_res10[0] = 0;
      iVar4 = FUN_180016f10(param_1,param_5,*(ulonglong *)(puVar2 + 4),param_3,&stack0x00000030,
                            local_res10,*(undefined2 *)((longlong)puVar2 + 0x2a));
      in_RAX = CONCAT44(extraout_var,iVar4);
      if (local_res10[0] == 0) {
        uVar5 = FUN_180027970(param_1,param_3,puVar2,'\0');
        return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

