// Function: FUN_180046230
// Address: 180046230
// Size: 220 bytes


undefined8 FUN_180046230(longlong param_1,uint param_2,longlong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  uint local_28;
  int local_24;
  longlong local_18 [3];
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    local_24 = 0;
    local_28 = 0;
    do {
      if (((param_2 <= local_28) ||
          (local_18[0] = param_1 + (ulonglong)local_28, (*(ushort *)(local_18[0] + 0xc) & 2) != 0))
         || (*(short *)(local_18[0] + 8) == 0)) break;
      FUN_1800304d0(param_3,local_18);
      local_28 = local_28 + *(ushort *)(local_18[0] + 8);
      bVar1 = local_24 < 0x1f5;
      local_24 = local_24 + 1;
    } while (bVar1);
    uVar2 = 1;
  }
  return uVar2;
}

