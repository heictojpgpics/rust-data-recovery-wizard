// Function: FUN_1800377e0
// Address: 1800377e0
// Size: 202 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_1800377e0(longlong param_1,longlong *param_2,LPSTR param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_1068 [32];
  undefined1 local_1048;
  int local_1038 [1024];
  ulonglong local_38;
  
  local_38 = DAT_180086010 ^ (ulonglong)auStack_1068;
  if (param_4 - 0x400U < 0xc01) {
    memset(local_1038,0,0x1000);
    pcVar1 = *(code **)(*param_2 + 8);
    iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    local_1048 = 0;
    iVar2 = (*pcVar1)(param_2,local_1038,param_1 + 6,(longlong)(int)(0x1000 / (longlong)iVar2));
    if (iVar2 != 0) {
      FUN_18003f3a0(local_1038,param_3,param_4);
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_1068);
  return;
}

