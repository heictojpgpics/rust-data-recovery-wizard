// Function: FUN_1800342f0
// Address: 1800342f0
// Size: 337 bytes


void FUN_1800342f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint local_res10 [2];
  undefined8 *local_res18;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_res10[0] = 0;
  (**(code **)(*param_2 + 0x70))(param_2,local_res10,4);
  puVar7 = (undefined8 *)0x0;
  if (local_res10[0] != 0) {
    do {
      local_48 = 0;
      uStack_40 = 0;
      (**(code **)(*param_2 + 0x70))(param_2,&local_48,0x10);
      local_res18 = (undefined8 *)FUN_18002be40(0x10);
      puVar8 = (undefined8 *)0x0;
      if (local_res18 != (undefined8 *)0x0) {
        *local_res18 = 0;
        local_res18[1] = 0;
        puVar8 = local_res18;
      }
      *puVar8 = local_48;
      puVar8[1] = uStack_40;
      uVar4 = *(ulonglong *)(param_1 + 0x20);
      if ((((int)*(longlong *)(param_1 + 0x28) + (int)uVar4 & 1U) == 0) &&
         (*(ulonglong *)(param_1 + 0x18) <= *(longlong *)(param_1 + 0x28) + 2U >> 1)) {
        FUN_1800331d0(param_1 + 8,uVar4);
        uVar4 = *(ulonglong *)(param_1 + 0x20);
      }
      uVar4 = *(longlong *)(param_1 + 0x18) * 2 - 1U & uVar4;
      *(ulonglong *)(param_1 + 0x20) = uVar4;
      uVar4 = *(longlong *)(param_1 + 0x28) + uVar4;
      uVar5 = *(longlong *)(param_1 + 0x18) - 1U & uVar4 >> 1;
      lVar3 = *(longlong *)(param_1 + 0x10);
      lVar1 = uVar5 * 8;
      if (*(longlong *)(lVar3 + uVar5 * 8) == 0) {
        uVar2 = FUN_18002be40(0x10);
        *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0x10)) = uVar2;
        lVar3 = *(longlong *)(param_1 + 0x10);
      }
      uVar6 = (int)puVar7 + 1;
      *(undefined8 **)(*(longlong *)(lVar1 + lVar3) + (ulonglong)((uint)uVar4 & 1) * 8) = puVar8;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
      puVar7 = (undefined8 *)(ulonglong)uVar6;
    } while (uVar6 < local_res10[0]);
  }
  return;
}

