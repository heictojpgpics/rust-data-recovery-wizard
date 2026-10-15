// Function: FUN_18002c2e0
// Address: 18002c2e0
// Size: 63 bytes


byte FUN_18002c2e0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  
  uVar2 = param_1[10] + param_2;
  if (((ulonglong)param_1[2] < uVar2) || (*param_1 == 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(*param_1 + (uVar2 >> 3)) & '\x01' << ((byte)uVar2 & 7);
  }
  return bVar1;
}

