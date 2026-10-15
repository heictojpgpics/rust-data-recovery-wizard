// Function: FUN_180019ec0
// Address: 180019ec0
// Size: 32 bytes


void FUN_180019ec0(longlong *param_1,void *param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (*(short *)((longlong)param_2 + uVar1 * 2) != 0);
  FUN_180019ee0(param_1,param_2,uVar1);
  return;
}

