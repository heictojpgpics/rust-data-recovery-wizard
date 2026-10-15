// Function: FUN_1800147d0
// Address: 1800147d0
// Size: 486 bytes


void FUN_1800147d0(longlong param_1,void *param_2,int param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_178 [32];
  undefined1 local_158 [16];
  char local_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_18008f028 ^ (ulonglong)auStack_178;
  lVar6 = (longlong)param_3;
  uVar4 = (param_4 - *(longlong *)(param_1 + 8)) * lVar6;
  if (uVar4 < (ulonglong)(longlong)*(int *)(param_1 + 0x110) ||
      uVar4 - (longlong)*(int *)(param_1 + 0x110) == 0) {
    if ((7 < *(int *)(param_5 + 0x14)) &&
       (*(longlong *)(param_1 + 0xe0) + *(longlong *)(param_1 + 0xd8) <= (longlong)uVar4)) {
      iVar2 = FUN_180042b30(param_2,param_3);
      uVar7 = 4;
      memset(local_148,0,0x104);
      uVar4 = 0xffffffffffffffff;
      do {
        uVar5 = uVar4 + 1;
        lVar1 = uVar4 + 1;
        uVar4 = uVar5;
      } while (local_148[lVar1] != '\0');
      puVar3 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
      if ((ulonglong)puVar3[3] < uVar5) {
        FUN_1800086f0(param_1 + 0x20,uVar5,uVar7,local_148);
      }
      else {
        puVar8 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar8 = (undefined8 *)*puVar3;
        }
        puVar3[2] = uVar5;
        memmove(puVar8,local_148,uVar5);
        local_158[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar8 + uVar5),local_158);
      }
      *(longlong *)(param_1 + 0x10) =
           (param_4 - *(longlong *)(param_1 + 8)) * lVar6 + 1 + (longlong)iVar2;
    }
  }
  else {
    uVar7 = 4;
    memset(local_148,0,0x104);
    uVar4 = 0xffffffffffffffff;
    do {
      uVar5 = uVar4 + 1;
      lVar1 = uVar4 + 1;
      uVar4 = uVar5;
    } while (local_148[lVar1] != '\0');
    puVar3 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
    if ((ulonglong)puVar3[3] < uVar5) {
      FUN_1800086f0(param_1 + 0x20,uVar5,uVar7,local_148);
    }
    else {
      puVar8 = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar8 = (undefined8 *)*puVar3;
      }
      puVar3[2] = uVar5;
      memmove(puVar8,local_148,uVar5);
      local_158[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar8 + uVar5),local_158);
    }
    *(longlong *)(param_1 + 0x10) = (param_4 - *(longlong *)(param_1 + 8)) * lVar6;
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_178);
  return;
}

