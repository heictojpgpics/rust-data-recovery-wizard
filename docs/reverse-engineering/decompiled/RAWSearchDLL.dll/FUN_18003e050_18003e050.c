// Function: FUN_18003e050
// Address: 18003e050
// Size: 74 bytes


undefined8 FUN_18003e050(undefined8 param_1,short *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  if (param_2 != (short *)0x0) {
    if (((*param_2 == 0x4c46) && ((char)param_2[1] == 'V')) &&
       (uVar1 = (ushort)((uint)*(undefined4 *)((longlong)param_2 + 5) >> 0x10),
       uVar2 = (ushort)*(undefined4 *)((longlong)param_2 + 5),
       CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar1 << 8 | uVar1 >> 8) == 9)) {
      return 1;
    }
  }
  return 0;
}

