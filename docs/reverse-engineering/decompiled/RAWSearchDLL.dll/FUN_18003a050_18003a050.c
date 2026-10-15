// Function: FUN_18003a050
// Address: 18003a050
// Size: 527 bytes


void FUN_18003a050(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  ushort uVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 local_res18;
  longlong in_stack_00000030;
  uint *in_stack_00000038;
  undefined4 *in_stack_00000040;
  longlong local_28 [4];
  
  iVar1 = *(int *)(in_stack_00000030 + 0xc);
  uVar8 = *(uint *)(in_stack_00000030 + 8);
  iVar2 = *(int *)(in_stack_00000030 + 4);
  uVar4 = *(ushort *)(in_stack_00000030 + 2);
  uVar7 = (ulonglong)(uVar8 + iVar1);
  if (*(longlong *)(param_1 + 0x138) < (longlong)uVar7) {
    *(ulonglong *)(param_1 + 0x138) = uVar7;
  }
  *(uint *)(param_1 + 0x21c) = uVar8;
  *(uint *)(param_1 + 0x220) = (uint)uVar4;
  if ((iVar1 == *(int *)(param_1 + 0x224)) && (iVar1 = *(int *)(param_1 + 0x228), iVar2 == iVar1)) {
    if ((iVar1 == 1) && (uVar6 = *(int *)(param_1 + 0x218) + uVar8, *in_stack_00000038 < uVar6)) {
      *in_stack_00000038 = uVar6;
      *in_stack_00000040 = 0;
    }
    uVar6 = (iVar1 + -1) * (uVar4 + 0x400) + uVar8;
    if (*in_stack_00000038 < uVar6) {
      *in_stack_00000038 = uVar6;
      *in_stack_00000040 = 0;
    }
    if ((*(longlong *)(param_1 + 0x240) == 0) && (uVar6 = *(uint *)(param_1 + 0x22c), uVar6 < uVar8)
       ) {
      FUN_1800428b0(local_28,*(longlong **)(param_1 + 0xe8),param_2);
      puVar5 = (uint *)FUN_180042930(local_28,(ulonglong)(uVar8 - uVar6));
      if (puVar5 != (uint *)0x0) {
        if (*(int *)(param_1 + 0x22c) == 2) {
          uVar4 = (ushort)*puVar5;
          if (*(char *)(param_1 + 0x110) == '\0') {
            uVar4 = CONCAT11((char)uVar4,(char)(uVar4 >> 8));
          }
          uVar8 = (uint)uVar4;
        }
        else {
          if (*(int *)(param_1 + 0x22c) != 4) {
            return;
          }
          uVar8 = *puVar5;
          if (*(char *)(param_1 + 0x110) == '\0') {
            local_res18._2_1_ = (undefined1)(uVar8 >> 0x10);
            local_res18._1_1_ = (undefined1)(uVar8 >> 8);
            local_res18._3_1_ = (undefined1)uVar8;
            uVar3 = CONCAT11(local_res18._3_1_,local_res18._1_1_);
            local_res18._0_2_ = CONCAT11(local_res18._2_1_,(char)(uVar8 >> 0x18));
            local_res18 = CONCAT22(uVar3,(undefined2)local_res18);
            uVar8 = local_res18;
          }
        }
        if (((*(int *)(param_1 + 0x18) != 0x58) || (uVar8 < 0x12c00001)) &&
           (puVar5 = (uint *)FUN_180042930(local_28,(ulonglong)
                                                    (uint)((*(int *)(param_1 + 0x228) + -1) *
                                                           *(int *)(param_1 + 0x220) +
                                                          *(int *)(param_1 + 0x21c))),
           puVar5 != (uint *)0x0)) {
          if (*(int *)(param_1 + 0x22c) == 2) {
            uVar4 = (ushort)*puVar5;
            if (*(char *)(param_1 + 0x110) == '\0') {
              uVar4 = CONCAT11((char)uVar4,(char)(uVar4 >> 8));
            }
            local_res18 = (uint)uVar4;
          }
          else {
            if (*(int *)(param_1 + 0x22c) != 4) {
              return;
            }
            uVar6 = *puVar5;
            local_res18 = uVar6;
            if (*(char *)(param_1 + 0x110) == '\0') {
              local_res18._2_1_ = (undefined1)(uVar6 >> 0x10);
              local_res18._1_1_ = (undefined1)(uVar6 >> 8);
              uVar3 = CONCAT11((char)uVar6,local_res18._1_1_);
              local_res18._0_2_ = CONCAT11(local_res18._2_1_,(char)(uVar6 >> 0x18));
              local_res18 = CONCAT22(uVar3,(undefined2)local_res18);
            }
          }
          if ((*(int *)(param_1 + 0x18) != 0x58) || (local_res18 < 0x12c00001)) {
            *(ulonglong *)(param_1 + 0x240) = (ulonglong)(uVar8 + local_res18);
          }
        }
      }
    }
  }
  return;
}

