// Function: FUN_1800346e0
// Address: 1800346e0
// Size: 51 bytes


void FUN_1800346e0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800341f0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00018003470f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x48,4);
  return;
}

