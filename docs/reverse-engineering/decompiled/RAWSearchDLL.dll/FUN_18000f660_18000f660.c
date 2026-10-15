// Function: FUN_18000f660
// Address: 18000f660
// Size: 31 bytes


void FUN_18000f660(longlong param_1,void *param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (*(char *)((longlong)param_2 + uVar1) != '\0');
  FUN_1800071e0(param_1,param_2,uVar1);
  return;
}

