// Function: FUN_18003f3a0
// Address: 18003f3a0
// Size: 217 bytes


void FUN_18003f3a0(int *param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  size_t local_18 [3];
  
  uVar3 = FUN_180041bb0(param_1,param_3);
  if (((((int)uVar3 != 0) && (iVar1 = FUN_180044a90(param_1), iVar1 != 0)) &&
      (lVar4 = FUN_180041850((longlong)param_1,0x60,0), lVar4 != 0)) &&
     (uVar2 = FUN_1800453e0(lVar4),
     (longlong)((lVar4 - (longlong)param_1) + 0x18 + (ulonglong)uVar2) < 0x400)) {
    local_18[0] = 0x50;
    FUN_18002cc30((LPCWSTR)(lVar4 + 0x18),(ulonglong)uVar2 / 2,param_2,local_18);
  }
  return;
}

