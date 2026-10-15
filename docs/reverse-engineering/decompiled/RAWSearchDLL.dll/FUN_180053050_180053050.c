// Function: FUN_180053050
// Address: 180053050
// Size: 67 bytes


undefined8 FUN_180053050(longlong param_1,char *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_180053410(param_1,param_2);
  if (iVar1 != 0) {
    *(uint *)(param_3 + 0x18) = 0x5f - (uint)(*(int *)(param_1 + 0x10) != 0);
    return 1;
  }
  return 0;
}

