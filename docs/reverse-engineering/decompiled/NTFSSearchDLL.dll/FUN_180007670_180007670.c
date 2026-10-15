// Function: FUN_180007670
// Address: 180007670
// Size: 467 bytes


void FUN_180007670(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined7 extraout_var;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 *local_res10;
  undefined8 local_res18 [2];
  longlong local_50 [3];
  
  if (((param_2 != (longlong *)0x0) &&
      (bVar3 = FUN_180040b50((longlong)(param_1 + 1)), (int)CONCAT71(extraout_var,bVar3) == 0)) &&
     (iVar4 = (**(code **)(*param_2 + 0x28))(param_2), 0 < iVar4)) {
    FUN_1800407d0(param_1 + 5,param_1 + 1);
    FUN_180040ad0(param_1 + 5,&local_res10);
    plVar6 = FUN_180040a90(param_1 + 5,local_res18);
    if (local_res10 != (undefined8 *)*plVar6) {
      do {
        lVar1 = local_res10[2];
        if (lVar1 == 0) {
          return;
        }
        uVar11 = (longlong)*(short *)((longlong)param_1 + 0x1a) * *(longlong *)(lVar1 + 0x10) +
                 *param_1;
        uVar5 = (**(code **)(*param_2 + 0x28))(param_2);
        uVar12 = uVar5 << 0xc;
        FUN_1800025a0(local_50);
        FUN_1800061a0(local_50,(ulonglong)uVar12,param_3);
        plVar6 = (longlong *)FUN_180002680(local_50);
        lVar2 = *plVar6;
        param_3 = uVar11;
        iVar4 = (**(code **)(*param_2 + 8))(param_2,lVar2,uVar11,0x1000,0);
        while (iVar4 != 0) {
          uVar10 = 0;
          if ((uVar5 & 0xfffff) != 0) {
            do {
              uVar7 = FUN_180041bb0((int *)(uVar10 + lVar2),0x400);
              if ((int)uVar7 == 0) break;
              uVar9 = (int)uVar10 + 0x400;
              uVar10 = (ulonglong)uVar9;
            } while (uVar9 < uVar12);
          }
          uVar9 = (**(code **)(*param_2 + 0x28))(param_2);
          param_3 = (ulonglong)uVar9;
          *(longlong *)(lVar1 + 0x10) =
               *(longlong *)(lVar1 + 0x10) +
               (uVar10 / (uint)(int)*(short *)((longlong)param_1 + 0x1a)) / param_3;
          if ((uint)uVar10 < uVar12) break;
          uVar11 = uVar11 + 0x1000;
          lVar2 = *plVar6;
          param_3 = uVar11;
          iVar4 = (**(code **)(*param_2 + 8))(param_2,lVar2,uVar11,0x1000,0);
        }
        FUN_180005fb0(local_50);
        local_res10 = (undefined8 *)*local_res10;
        puVar8 = FUN_180040a90(param_1 + 5,local_res18);
      } while (local_res10 != (undefined8 *)*puVar8);
    }
  }
  return;
}

