// Function: FUN_180043580
// Address: 180043580
// Size: 124 bytes


undefined8 FUN_180043580(longlong param_1,wchar_t *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  sVar2 = wcslen(param_2);
  if (sVar2 == *(byte *)(param_1 + 0x58)) {
    iVar1 = wcsncmp((wchar_t *)(param_1 + 0x5a),param_2,(ulonglong)*(byte *)(param_1 + 0x58));
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

