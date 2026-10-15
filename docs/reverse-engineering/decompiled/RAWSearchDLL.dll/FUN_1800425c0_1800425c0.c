// Function: FUN_1800425c0
// Address: 1800425c0
// Size: 61 bytes


undefined8 FUN_1800425c0(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uStack0000000000000028;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (iVar1 != 0) {
    uStack0000000000000028 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001800425f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 8))
                      (param_1,param_2,param_3 / (longlong)iVar1,param_4 / (longlong)iVar1);
    return uVar2;
  }
  return 0;
}

