// Function: FUN_180037210
// Address: 180037210
// Size: 674 bytes


void FUN_180037210(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_e8 [144];
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x118) == 0) {
    local_48 = param_2[2];
    local_58 = *param_2;
    lStack_50 = param_2[1];
    *(longlong *)(param_1 + 0x130) = *(longlong *)(param_1 + 0x130) + 0x1e;
    *(ulonglong *)(param_1 + 0x120) = local_48;
    *(ulonglong *)(param_1 + 0x118) = local_48;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x130);
  uVar6 = (ulonglong)param_3;
  *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + uVar6;
  uVar10 = *(ulonglong *)(param_1 + 0x110);
  if (uVar4 < uVar10) {
    iVar7 = 0;
    do {
      if ((*(ulonglong *)(param_1 + 0x120) <= uVar4) || (0x400 < iVar7)) break;
      plVar5 = (longlong *)(uVar4 % uVar6 + (longlong)param_2);
      local_38 = *plVar5;
      lStack_30 = plVar5[1];
      local_28 = plVar5[2];
      if ((local_38 == *(longlong *)(param_1 + 0x164)) &&
         (lStack_30 == *(longlong *)(param_1 + 0x16c))) {
        local_58 = plVar5[3];
        lStack_50 = plVar5[4];
        local_48 = plVar5[5];
        if ((local_58 == *(longlong *)(param_1 + 0x154)) &&
           (lStack_50 == *(longlong *)(param_1 + 0x15c))) {
          *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
          *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
        }
        else if ((local_58 == *(longlong *)(param_1 + 0x144)) &&
                (lStack_50 == *(longlong *)(param_1 + 0x14c))) {
          *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
        }
        else {
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        }
      }
      else if ((local_38 == *(longlong *)(param_1 + 0x174)) &&
              (lStack_30 == *(longlong *)(param_1 + 0x17c))) {
        uVar1 = vpextrq_avx(SUB3216(*(undefined1 (*) [32])(plVar5 + 4),0),1);
        *(undefined8 *)(param_1 + 0x128) = uVar1;
      }
      if (local_28 == 0) break;
      uVar4 = uVar4 + local_28;
      *(ulonglong *)(param_1 + 0x130) = uVar4;
      iVar7 = iVar7 + 1;
    } while (uVar4 < uVar10);
  }
  uVar8 = *(ulonglong *)(param_1 + 0x118);
  if (uVar8 < uVar10) {
    do {
      plVar5 = (longlong *)(uVar8 % uVar6 + (longlong)param_2);
      local_38 = *plVar5;
      lStack_30 = plVar5[1];
      local_48 = *(ulonglong *)(uVar8 % uVar6 + 0x10 + (longlong)param_2);
      uVar9 = uVar8;
      cVar2 = FUN_1800374c0(uVar4,&local_38);
      if (cVar2 == '\0') {
        uVar4 = *(ulonglong *)(param_1 + 0x128);
        if (*(ulonglong *)(param_1 + 0x128) <= uVar9) {
          uVar4 = uVar9;
        }
        *(ulonglong *)(param_1 + 0x10) = uVar4;
        puVar3 = FUN_180001350();
        uVar4 = *(longlong *)(puVar3 + 0x70) * 500;
        if (*(ulonglong *)(param_1 + 0x10) <= (ulonglong)(*(longlong *)(puVar3 + 0x70) * 500)) {
          uVar4 = *(ulonglong *)(param_1 + 0x10);
        }
        *(ulonglong *)(param_1 + 0x10) = uVar4;
        if (*(int *)(param_1 + 0x140) == 0) {
          if (*(int *)(param_1 + 0x13c) == 1) {
            *(undefined4 *)(param_1 + 0x18) = 8;
          }
          else {
            *(uint *)(param_1 + 0x18) = (*(int *)(param_1 + 0x138) != 0) + 6;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x18) = 6;
        }
        break;
      }
      if (local_48 == 0) break;
      uVar8 = uVar8 + local_48;
      *(ulonglong *)(param_1 + 0x118) = uVar8;
      uVar4 = local_48;
    } while (uVar8 < uVar10);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_e8);
  return;
}

