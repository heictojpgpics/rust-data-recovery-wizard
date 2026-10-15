// Function: FUN_18000ab60
// Address: 18000ab60
// Size: 94 bytes


void FUN_18000ab60(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 0x10) != FUN_180009790) {
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
    if ((FILE *)plVar1[0x10] != (FILE *)0x0) {
      _unlock_file((FILE *)plVar1[0x10]);
      return;
    }
  }
  return;
}

