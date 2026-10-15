// Function: FUN_180049a30
// Address: 180049a30
// Size: 83 bytes


void FUN_180049a30(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *param_1;
  if (param_2 < *(int *)(lVar2 + -0x10)) {
    param_2 = *(int *)(lVar2 + -0x10);
  }
  if (1 < *(int *)(lVar2 + -8)) {
    FUN_180049ae0(param_1,param_2);
    return;
  }
  iVar1 = *(int *)(lVar2 + -0xc);
  if (iVar1 < param_2) {
    if (iVar1 < 0x40000001) {
      iVar3 = iVar1 / 2;
    }
    else {
      iVar3 = 0x100000;
    }
    if (param_2 <= iVar3 + iVar1) {
      param_2 = iVar3 + iVar1;
    }
    FUN_180049a90(param_1,param_2);
    return;
  }
  return;
}

