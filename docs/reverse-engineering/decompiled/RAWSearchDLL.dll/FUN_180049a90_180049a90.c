// Function: FUN_180049a90
// Address: 180049a90
// Size: 69 bytes


void FUN_180049a90(longlong *param_1,int param_2)

{
  code *pcVar1;
  longlong lVar2;
  
  if ((*(int *)(*param_1 + -0xc) < param_2) && (0 < param_2)) {
    lVar2 = (**(code **)(**(longlong **)(*param_1 + -0x18) + 0x10))();
    if (lVar2 != 0) {
      *param_1 = lVar2 + 0x18;
      return;
    }
  }
  FUN_180049bb0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

