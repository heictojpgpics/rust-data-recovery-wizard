// Function: FUN_180043d00
// Address: 180043d00
// Size: 84 bytes


undefined8 FUN_180043d00(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  uStackX_14 = (uint)((ulonglong)param_2 >> 0x20);
  uStackX_c = (uint)((ulonglong)param_1 >> 0x20);
  local_res10 = (uint)param_2;
  local_res8 = (uint)param_1;
  if (param_2 == param_1) {
    uVar1 = 0;
  }
  else if (uStackX_14 < uStackX_c) {
    uVar1 = 1;
  }
  else if ((uStackX_c == uStackX_14) && (local_res10 < local_res8)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

