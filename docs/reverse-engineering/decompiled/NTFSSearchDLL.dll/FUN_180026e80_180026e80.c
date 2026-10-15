// Function: FUN_180026e80
// Address: 180026e80
// Size: 53 bytes


undefined8 FUN_180026e80(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x28))();
    if (iVar1 != 0x200) {
                    /* WARNING: Could not recover jumptable at 0x000180026ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
      return uVar2;
    }
  }
  return 0x400;
}

