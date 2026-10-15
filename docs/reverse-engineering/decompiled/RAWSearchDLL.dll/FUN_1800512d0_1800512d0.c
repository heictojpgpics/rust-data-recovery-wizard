// Function: FUN_1800512d0
// Address: 1800512d0
// Size: 373 bytes


uint FUN_1800512d0(longlong param_1,longlong *param_2,longlong *param_3,undefined4 *param_4,
                  int param_5)

{
  int iVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  char *_Str1;
  undefined8 uVar5;
  uint *puVar6;
  char *pcVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 local_res8;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar4 = *(int *)(*param_3 + 8);
  iVar1 = *(int *)(*param_3 + 4);
  if ((iVar4 != -1) &&
     (_Str1 = FUN_180042930(param_2,(ulonglong)(uint)(iVar4 + param_5)), _Str1 != (char *)0x0)) {
    pcVar7 = _Str1;
    iVar4 = strncmp(_Str1,&DAT_18008f060,4);
    if (((iVar4 == 0) ||
        ((pcVar7 = _Str1, iVar4 = strncmp(_Str1,&DAT_18008f050,4), iVar4 == 0 ||
         (iVar4 = strncmp(_Str1,&DAT_18008f058,4), pcVar7 = _Str1, iVar4 == 0)))) &&
       (*(int *)(*param_3 + 4) == 1)) {
      *(ulonglong *)(param_1 + 0xc0) = (ulonglong)(uint)(*(int *)(*param_3 + 8) + param_5);
      *param_4 = 1;
    }
    lVar9 = *param_3;
    if (iVar1 == 1) {
      return *(int *)(lVar9 + 8) + param_5;
    }
    uVar5 = FUN_180051030(pcVar7,(uint)*(ushort *)(lVar9 + 2));
    iVar4 = (int)uVar5;
    uVar8 = param_5 + (iVar1 + -1) * iVar4 + *(int *)(lVar9 + 8);
    puVar6 = (uint *)FUN_180042930(param_2,(ulonglong)uVar8);
    if (puVar6 != (uint *)0x0) {
      if (iVar4 == 2) {
        uVar3 = (ushort)*puVar6;
        if (*(int *)(param_1 + 0x10) != 0) {
          uVar3 = CONCAT11((char)uVar3,(char)(uVar3 >> 8));
        }
        return (uint)uVar3;
      }
      if (iVar4 != 4) {
        return uVar8;
      }
      uVar8 = *puVar6;
      if (*(int *)(param_1 + 0x10) == 0) {
        return uVar8;
      }
      local_res8._2_1_ = (undefined1)(uVar8 >> 0x10);
      local_res8._1_1_ = (undefined1)(uVar8 >> 8);
      local_res8._3_1_ = (undefined1)uVar8;
      uVar2 = CONCAT11(local_res8._3_1_,local_res8._1_1_);
      local_res8 = CONCAT22(uVar2,CONCAT11(local_res8._2_1_,(char)(uVar8 >> 0x18)));
      return local_res8;
    }
  }
  return 0;
}

