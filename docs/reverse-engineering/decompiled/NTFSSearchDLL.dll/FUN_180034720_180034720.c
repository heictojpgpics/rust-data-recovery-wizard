// Function: FUN_180034720
// Address: 180034720
// Size: 51 bytes


void FUN_180034720(longlong param_1,longlong *param_2)

{
  FUN_1800342f0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00018003474f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x48,4);
  return;
}

