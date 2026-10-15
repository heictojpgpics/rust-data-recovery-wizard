// Function: FUN_18003e260
// Address: 18003e260
// Size: 439 bytes


undefined8
FUN_18003e260(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong local_res8;
  char local_res18 [8];
  
  uVar4 = (ulonglong)param_3;
  lVar6 = param_4 - *(longlong *)(param_1 + 8);
  if (((ulonglong)(*(longlong *)(param_1 + 0x138) * 10) <= uVar4 * lVar6) ||
     ((lVar6 == 0 &&
      ((*(char *)(param_2 + 3) != '\x01' ||
       (*(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + 9,
       *(int *)(param_2 + 9) != 0)))))) {
    return 0;
  }
  *(ulonglong *)(param_1 + 0x130) = (lVar6 + 1) * uVar4;
  local_res18[0] = '\0';
  iVar5 = 0;
  do {
    if (0x400 < iVar5) {
      return 0;
    }
    uVar1 = *(ulonglong *)(param_1 + 0x110);
    if (*(ulonglong *)(param_1 + 0x130) <= uVar1) {
      return 1;
    }
    if (*(int *)(param_1 + 0x128) == 0) {
      uVar3 = uVar1 % uVar4;
    }
    else {
      *(undefined4 *)(param_1 + 0x128) = 0;
      uVar3 = uVar1 - (param_4 - *(longlong *)(param_1 + 8)) * uVar4;
    }
    uVar2 = (*(longlong *)(param_5 + 8) - *(longlong *)(param_1 + 8)) * uVar4;
    if (uVar2 < uVar1 + 10) {
      *(undefined4 *)(param_1 + 0x128) = 1;
      return 1;
    }
    local_res8 = 0;
    lVar6 = FUN_18003e420(uVar2,&local_res8,*(longlong *)(param_1 + 0x120),(uint *)(uVar3 + param_2)
                          ,local_res18);
    *(longlong *)(param_1 + 0x120) = lVar6;
    if (local_res18[0] != '\0') {
      *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + 4;
      return 0;
    }
    if (local_res8 == *(longlong *)(param_1 + 0x118)) {
      *(longlong *)(param_1 + 0x118) = lVar6 + 0xb;
    }
    else if (*(longlong *)(param_1 + 0x118) == 0) {
      *(longlong *)(param_1 + 0x118) = local_res8;
    }
    else {
      local_res18[0] = '\x01';
    }
    *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + lVar6 + 0xf;
    iVar5 = iVar5 + 1;
  } while (local_res18[0] == '\0');
  return 0;
}

