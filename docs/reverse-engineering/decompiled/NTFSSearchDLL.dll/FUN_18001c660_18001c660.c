// Function: FUN_18001c660
// Address: 18001c660
// Size: 176 bytes


void FUN_18001c660(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  undefined1 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong local_res8;
  longlong local_res10;
  
  if (((param_2 != 0) && (param_3 != (longlong *)0x0)) && (0 < param_4)) {
    local_res8 = param_1;
    if (*(void **)(param_2 + 0x48) != (void *)0x0) {
      FUN_180002ed0(*(void **)(param_2 + 0x48));
    }
    if (*(code **)(*param_3 + 0x40) == FUN_1800335c0) {
      uVar2 = FUN_180033d00((longlong)(param_3 + 1));
      uVar1 = (undefined4)uVar2;
    }
    else {
      uVar1 = (**(code **)(*param_3 + 0x40))(param_3);
    }
    *(undefined4 *)(param_2 + 8) = uVar1;
    local_res8 = 0;
    local_res10 = 0;
    puVar3 = FUN_1800339f0(param_3,&local_res8,&local_res10);
    *(undefined2 **)(param_2 + 0x48) = puVar3;
    *(undefined4 *)(param_2 + 100) = (undefined4)local_res8;
    *(undefined4 *)(param_2 + 0x60) = (undefined4)local_res10;
    *(longlong *)(param_2 + 0x1b) = param_4;
    *param_5 = 1;
  }
  return;
}

