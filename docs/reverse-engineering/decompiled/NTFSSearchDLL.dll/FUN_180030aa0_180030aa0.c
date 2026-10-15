// Function: FUN_180030aa0
// Address: 180030aa0
// Size: 144 bytes


ulonglong FUN_180030aa0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_18001a0b0(param_1);
  uVar2 = FUN_180030bd0(param_1);
  uVar3 = param_2;
  if ((uVar1 <= uVar2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}

