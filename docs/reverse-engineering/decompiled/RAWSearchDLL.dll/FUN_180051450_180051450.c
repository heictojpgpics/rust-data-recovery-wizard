// Function: FUN_180051450
// Address: 180051450
// Size: 269 bytes


uint * FUN_180051450(longlong param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  undefined4 local_res18;
  
  iVar9 = *(int *)(*param_3 + 4);
  if (iVar9 != 1) {
    lVar8 = *param_3;
    uVar6 = FUN_180051030(param_1,(uint)*(ushort *)(lVar8 + 2));
    iVar5 = (int)uVar6;
    local_res18 = (iVar9 + -1) * iVar5 + *(int *)(lVar8 + 8);
    puVar7 = (uint *)FUN_180042930(param_2,(ulonglong)local_res18);
    if (puVar7 != (uint *)0x0) {
      if (iVar5 == 2) {
        uVar4 = (ushort)*puVar7;
        if (*(int *)(param_1 + 0x10) != 0) {
          uVar4 = CONCAT11((char)uVar4,(char)(uVar4 >> 8));
        }
        local_res18 = (uint)uVar4;
      }
      else if ((iVar5 == 4) && (uVar1 = *puVar7, local_res18 = uVar1, *(int *)(param_1 + 0x10) != 0)
              ) {
        local_res18._2_1_ = (undefined1)(uVar1 >> 0x10);
        local_res18._1_1_ = (undefined1)(uVar1 >> 8);
        local_res18._3_1_ = (undefined1)uVar1;
        uVar3 = CONCAT11(local_res18._3_1_,local_res18._1_1_);
        local_res18 = CONCAT22(uVar3,CONCAT11(local_res18._2_1_,(char)(uVar1 >> 0x18)));
      }
      puVar7 = (uint *)(ulonglong)local_res18;
    }
    return puVar7;
  }
  if (*param_4 != 0) {
    uVar1 = *(uint *)(*param_3 + 8);
    uVar2 = uVar1 - 0xa0;
    if (*(int *)(param_1 + 0x3c) == 0) {
      uVar2 = uVar1;
    }
    *(ulonglong *)(param_1 + 200) = (ulonglong)uVar2;
    *param_4 = 0;
  }
  uVar1 = *(uint *)(*param_3 + 8) - 0xa0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar1 = *(uint *)(*param_3 + 8);
  }
  return (uint *)(ulonglong)uVar1;
}

