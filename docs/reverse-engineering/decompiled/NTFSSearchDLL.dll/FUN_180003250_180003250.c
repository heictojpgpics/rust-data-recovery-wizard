// Function: FUN_180003250
// Address: 180003250
// Size: 291 bytes


void FUN_180003250(longlong param_1,longlong *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  longlong local_res10 [2];
  undefined2 *local_res20;
  
  if (param_2 != (longlong *)0x0) {
    pvVar4 = *(void **)(param_1 + 0x48);
    if (pvVar4 != (void *)0x0) {
      if (*(void **)((longlong)pvVar4 + 8) != (void *)0x0) {
        free(*(void **)((longlong)pvVar4 + 8));
      }
      free(pvVar4);
    }
    if (*(code **)(*param_2 + 0x40) == FUN_1800335c0) {
      uVar3 = (undefined4)param_2[5];
    }
    else {
      uVar3 = (**(code **)(*param_2 + 0x40))(param_2);
    }
    puVar6 = (undefined2 *)0x0;
    *(undefined4 *)(param_1 + 8) = uVar3;
    local_res10[0] = 0;
    uVar3 = 0;
    uVar7 = 0;
    local_res10[1] = 0;
    local_res20 = (undefined2 *)FUN_18002be40(0x10);
    puVar5 = puVar6;
    if (local_res20 != (undefined2 *)0x0) {
      *local_res20 = 0;
      *(undefined8 *)(local_res20 + 4) = 0;
      puVar5 = local_res20;
    }
    if (puVar5 != (undefined2 *)0x0) {
      iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
      if ((iVar2 == 1) || (iVar2 = (**(code **)(*param_2 + 0x28))(param_2), iVar2 == 0xe)) {
        uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
        *puVar5 = uVar1;
      }
      pvVar4 = FUN_1800336f0((longlong)param_2,local_res10,local_res10 + 1);
      *(void **)(puVar5 + 4) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        FUN_180002ed0(puVar5);
        puVar5 = puVar6;
      }
      uVar3 = (undefined4)local_res10[0];
      uVar7 = (undefined4)local_res10[1];
      puVar6 = puVar5;
    }
    *(undefined2 **)(param_1 + 0x48) = puVar6;
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = uVar7;
  }
  return;
}

