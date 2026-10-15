// Function: FUN_18005b700
// Address: 18005b700
// Size: 136 bytes


void FUN_18005b700(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = param_2[2];
  if (lVar1 != 0) {
    if (param_2 == *(longlong **)(lVar1 + 0x38)) {
      *(longlong *)(lVar1 + 0x38) = (*(longlong **)(lVar1 + 0x38))[10];
    }
    if (param_2 == *(longlong **)(lVar1 + 0x40)) {
      *(longlong *)(lVar1 + 0x40) = (*(longlong **)(lVar1 + 0x40))[9];
    }
    if (param_2[9] != 0) {
      *(longlong *)(param_2[9] + 0x50) = param_2[10];
    }
    if (param_2[10] != 0) {
      *(longlong *)(param_2[10] + 0x48) = param_2[9];
    }
    param_2[10] = 0;
    param_2[9] = 0;
    param_2[2] = 0;
    FUN_180059fe0(param_2);
    return;
  }
  (**(code **)(*(longlong *)param_2[0xc] + 0x20))();
  FUN_180059fe0(param_2);
  return;
}

