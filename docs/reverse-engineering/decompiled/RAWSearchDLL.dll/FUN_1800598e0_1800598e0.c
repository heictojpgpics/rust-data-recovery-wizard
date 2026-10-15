// Function: FUN_1800598e0
// Address: 1800598e0
// Size: 101 bytes


void FUN_1800598e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_1);
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x38);
    while ((plVar1 != (longlong *)0x0 &&
           (cVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,param_2), cVar2 != '\0'))) {
      plVar1 = (longlong *)plVar1[10];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000180059941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,param_1);
  return;
}

