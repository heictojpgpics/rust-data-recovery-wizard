// Function: FUN_180032510
// Address: 180032510
// Size: 615 bytes


undefined8 FUN_180032510(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  uint local_res10 [2];
  longlong *local_res18 [2];
  
  if (param_2 != (longlong *)0x0) {
    FUN_180031540(param_1,param_2);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x50,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x98,0x28);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1c8,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1d0,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1d4,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1e0,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1e4,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1ec,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1e8,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1f0,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x200,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x208,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x288,1);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x289,1);
    if (*(void **)(param_1 + 0x1d8) != (void *)0x0) {
      free(*(void **)(param_1 + 0x1d8));
      *(undefined8 *)(param_1 + 0x1d8) = 0;
    }
    if (*(int *)(param_1 + 0x1e0) != 0) {
      uVar2 = FUN_18002be40((ulonglong)(*(int *)(param_1 + 0x1e0) + 1));
      *(undefined8 *)(param_1 + 0x1d8) = uVar2;
      (**(code **)(*param_2 + 0x70))(param_2,uVar2,*(undefined4 *)(param_1 + 0x1e0));
      *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x1e0) + *(longlong *)(param_1 + 0x1d8)) = 0;
    }
    local_res10[0] = 0;
    (**(code **)(*param_2 + 0x70))(param_2,local_res10,4);
    if ((local_res10[0] != 0) && (uVar4 = 0, local_res10[0] != 0)) {
      do {
        local_res18[0] = (longlong *)FUN_18002be40(0x290);
        if (local_res18[0] == (longlong *)0x0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = FUN_180031b10(local_res18[0]);
        }
        local_res18[0] = plVar3;
        (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
        puVar1 = *(undefined8 **)(param_1 + 0x218);
        if (*(undefined8 **)(param_1 + 0x220) == puVar1) {
          FUN_180002970((longlong *)(param_1 + 0x210),puVar1,local_res18);
        }
        else {
          *puVar1 = plVar3;
          *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 8;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_res10[0]);
    }
    return 1;
  }
  return 0;
}

