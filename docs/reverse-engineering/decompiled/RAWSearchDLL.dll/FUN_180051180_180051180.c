// Function: FUN_180051180
// Address: 180051180
// Size: 324 bytes


void FUN_180051180(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 local_res8;
  
  uVar5 = *(uint *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x34) == 1) {
    *(ulonglong *)(param_1 + 0x18) = (ulonglong)(*(int *)(param_1 + 0x24) + uVar5);
    return;
  }
  if ((*(uint *)(param_1 + 0x38) < uVar5) &&
     (puVar4 = (uint *)FUN_180042930(param_2,(ulonglong)(uVar5 - *(uint *)(param_1 + 0x38))),
     puVar4 != (uint *)0x0)) {
    if (*(int *)(param_1 + 0x38) == 2) {
      uVar3 = (ushort)*puVar4;
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar3 = CONCAT11((char)uVar3,(char)(uVar3 >> 8));
      }
      uVar5 = (uint)uVar3;
    }
    else {
      if (*(int *)(param_1 + 0x38) != 4) {
        return;
      }
      uVar5 = *puVar4;
      if (*(int *)(param_1 + 0x10) != 0) {
        local_res8._2_1_ = (undefined1)(uVar5 >> 0x10);
        local_res8._1_1_ = (undefined1)(uVar5 >> 8);
        local_res8._3_1_ = (undefined1)uVar5;
        uVar2 = CONCAT11(local_res8._3_1_,local_res8._1_1_);
        local_res8._0_2_ = CONCAT11(local_res8._2_1_,(char)(uVar5 >> 0x18));
        local_res8 = CONCAT22(uVar2,(undefined2)local_res8);
        uVar5 = local_res8;
      }
    }
    puVar4 = (uint *)FUN_180042930(param_2,(ulonglong)
                                           (uint)((*(int *)(param_1 + 0x34) + -1) *
                                                  *(int *)(param_1 + 0x2c) +
                                                 *(int *)(param_1 + 0x28)));
    if (puVar4 != (uint *)0x0) {
      if (*(int *)(param_1 + 0x38) == 2) {
        uVar3 = (ushort)*puVar4;
        if (*(int *)(param_1 + 0x10) != 0) {
          uVar3 = CONCAT11((char)uVar3,(char)(uVar3 >> 8));
        }
        local_res8 = (uint)uVar3;
      }
      else {
        if (*(int *)(param_1 + 0x38) != 4) {
          return;
        }
        uVar1 = *puVar4;
        local_res8 = uVar1;
        if (*(int *)(param_1 + 0x10) != 0) {
          local_res8._2_1_ = (undefined1)(uVar1 >> 0x10);
          local_res8._1_1_ = (undefined1)(uVar1 >> 8);
          uVar2 = CONCAT11((char)uVar1,local_res8._1_1_);
          local_res8._0_2_ = CONCAT11(local_res8._2_1_,(char)(uVar1 >> 0x18));
          local_res8 = CONCAT22(uVar2,(undefined2)local_res8);
        }
      }
      if (*(ulonglong *)(param_1 + 0x18) < (ulonglong)(uVar5 + local_res8)) {
        *(ulonglong *)(param_1 + 0x18) = (ulonglong)(uVar5 + local_res8);
      }
    }
  }
  return;
}

