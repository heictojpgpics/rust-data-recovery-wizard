// Function: FUN_18002e2b0
// Address: 18002e2b0
// Size: 177 bytes


void FUN_18002e2b0(longlong param_1,int param_2)

{
  double dVar1;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((DAT_180086050 == 0) || (DAT_180086050 % 0x200 != 0)) {
    local_24 = 0x200;
  }
  else {
    local_24 = DAT_180086050;
  }
  dVar1 = ((double)param_1 / (double)param_2) / (double)local_24;
  if (dVar1 == (double)(int)dVar1) {
    local_28 = (uint)dVar1;
  }
  else {
    local_28 = (int)dVar1 + 1;
  }
  FUN_1800067e0(local_28);
  return;
}

