// Function: FUN_1800468a0
// Address: 1800468a0
// Size: 207 bytes


undefined8 FUN_1800468a0(undefined8 param_1,int *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  uint local_28;
  
  uVar2 = FUN_180046980(param_1,param_2);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 1);
    for (local_28 = 1; local_28 < 9; local_28 = local_28 + 1) {
      *(undefined1 *)((longlong)param_2 + (longlong)(int)(local_28 * 0x200 + -2)) =
           *(undefined1 *)((longlong)param_2 + (longlong)(int)(local_28 * 2) + (ulonglong)uVar1);
      *(undefined1 *)((longlong)param_2 + (longlong)(int)(local_28 * 0x200 + -1)) =
           *(undefined1 *)((longlong)param_2 + (longlong)(int)(local_28 * 2 + 1) + (ulonglong)uVar1)
      ;
    }
    uVar2 = 1;
  }
  return uVar2;
}

