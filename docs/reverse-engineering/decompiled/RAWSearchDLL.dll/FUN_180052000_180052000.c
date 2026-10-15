// Function: FUN_180052000
// Address: 180052000
// Size: 329 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180052000(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  int iVar8;
  bool bVar9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined1 local_90 [16];
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  ulonglong local_18;
  
  uVar6 = _UNK_18006ef08;
  uVar5 = _DAT_18006ef00;
  local_90 = _DAT_18006eef0;
  uVar4 = _UNK_18006eee8;
  local_48 = _DAT_18006eee0;
  uVar3 = _UNK_18006eed8;
  uVar2 = _UNK_18006eec8;
  local_30 = _DAT_18006eec0;
  uVar1 = _UNK_18006eeb8;
  local_18 = DAT_18008f028 ^ (ulonglong)&local_a8;
  local_78 = _DAT_18006eed0;
  uStack_70 = _UNK_18006eed8;
  local_a8 = _DAT_18006ef00;
  uStack_a0 = _UNK_18006ef08;
  local_60 = _DAT_18006eeb0;
  uStack_58 = _UNK_18006eeb8;
  iVar8 = vpextrd_avx(_DAT_18006eef0,1);
  *(undefined4 *)(param_1 + 0x410) = 0;
  uStack_28 = uVar2;
  auVar7 = local_90;
  local_80 = 0;
  local_68 = 0;
  local_50 = 0;
  local_98 = 0;
  uStack_40 = uVar4;
  local_38 = 0;
  local_20 = 0;
  if ((*(int *)(param_2 + 4) == iVar8) && (*(short *)(param_2 + 8) == local_90._8_2_)) {
    if (((*(int *)(param_2 + 10) != local_90._10_4_) || (*(char *)(param_2 + 0xe) != local_90[0xe]))
       && ((uStack_70._2_4_ = (int)((ulonglong)uVar3 >> 0x10),
           *(int *)(param_2 + 10) != uStack_70._2_4_ ||
           (uStack_70._6_1_ = (char)((ulonglong)uVar3 >> 0x30),
           *(char *)(param_2 + 0xe) != uStack_70._6_1_)))) {
      uStack_58._2_4_ = (int)((ulonglong)uVar1 >> 0x10);
      if (*(int *)(param_2 + 10) != uStack_58._2_4_) goto LAB_180052134;
      uStack_58._6_1_ = (char)((ulonglong)uVar1 >> 0x30);
      bVar9 = *(char *)(param_2 + 0xe) == uStack_58._6_1_;
LAB_180052117:
      if (!bVar9) goto LAB_180052134;
    }
  }
  else {
    local_a8._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
    if ((*(int *)(param_2 + 4) != local_a8._4_4_) ||
       (uStack_a0._0_2_ = (short)uVar6, *(short *)(param_2 + 8) != (short)uStack_a0))
    goto LAB_180052134;
    uStack_a0._2_4_ = (int)((ulonglong)uVar6 >> 0x10);
    if (((*(int *)(param_2 + 10) != uStack_a0._2_4_) ||
        (uStack_a0._6_1_ = (char)((ulonglong)uVar6 >> 0x30),
        *(char *)(param_2 + 0xe) != uStack_a0._6_1_)) &&
       ((uStack_40._2_4_ = (int)((ulonglong)uVar4 >> 0x10),
        *(int *)(param_2 + 10) != uStack_40._2_4_ ||
        (uStack_40._6_1_ = (char)((ulonglong)uVar4 >> 0x30),
        *(char *)(param_2 + 0xe) != uStack_40._6_1_)))) {
      uStack_28._2_4_ = (int)((ulonglong)uVar2 >> 0x10);
      if (*(int *)(param_2 + 10) != uStack_28._2_4_) goto LAB_180052134;
      uStack_28._6_1_ = (char)((ulonglong)uVar2 >> 0x30);
      bVar9 = *(char *)(param_2 + 0xe) == uStack_28._6_1_;
      goto LAB_180052117;
    }
  }
  *(undefined4 *)(param_1 + 0x410) = 1;
  *(undefined4 *)(param_3 + 0x18) = 0x12;
LAB_180052134:
  local_a8 = uVar5;
  uStack_a0 = uVar6;
  local_90 = auVar7;
  uStack_70 = uVar3;
  uStack_58 = uVar1;
  uStack_40 = uVar4;
  uStack_28 = uVar2;
  __security_check_cookie(local_18 ^ (ulonglong)&local_a8);
  return;
}

