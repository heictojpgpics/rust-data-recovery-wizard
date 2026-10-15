// Function: FUN_180032b50
// Address: 180032b50
// Size: 242 bytes


undefined8 FUN_180032b50(longlong param_1,undefined1 (*param_2) [32],longlong param_3)

{
  undefined1 auVar1 [32];
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if (*(int *)*param_2 == DAT_18006be80) {
    if (((*(longlong *)*param_2 == DAT_18006be88) && (*(short *)(*param_2 + 8) == DAT_18006be90)) &&
       ((*param_2)[10] == DAT_18006be92)) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      *(undefined4 *)(param_3 + 0x18) = 0x1b;
      return 1;
    }
  }
  else if (*(int *)*param_2 == -0x392c2f3b) {
    auVar1 = *param_2;
    uVar4 = vpextrq_avx(auVar1._0_16_,1);
    uVar6 = (int)((ulonglong)uVar4 >> 0x20) + auVar1._16_4_;
    uVar8 = auVar1._4_4_ + (int)uVar4;
    iVar3 = vpextrd_avx(auVar1._16_16_,2);
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    uVar6 = auVar1._20_4_ + iVar3;
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    puVar5 = FUN_180001350();
    lVar2 = *(longlong *)(puVar5 + 0x70);
    *(undefined4 *)(param_3 + 0x18) = 0x1b;
    uVar7 = lVar2 * 100;
    if ((ulonglong)uVar8 < (ulonglong)(lVar2 * 100)) {
      uVar7 = (ulonglong)uVar8;
    }
    *(ulonglong *)(param_3 + 0x10) = uVar7;
    return 1;
  }
  return 0;
}

