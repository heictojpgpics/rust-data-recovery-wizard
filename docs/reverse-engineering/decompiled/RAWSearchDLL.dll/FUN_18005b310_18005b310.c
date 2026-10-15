// Function: FUN_18005b310
// Address: 18005b310
// Size: 103 bytes


void FUN_18005b310(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_2 + 8))(param_2,param_1,*(undefined8 *)(param_1 + 0x70));
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x38);
    while ((plVar1 != (longlong *)0x0 &&
           (cVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,param_2), cVar2 != '\0'))) {
      plVar1 = (longlong *)plVar1[10];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018005b373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  return;
}

