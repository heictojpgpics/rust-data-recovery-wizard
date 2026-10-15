// Function: FUN_18000f990
// Address: 18000f990
// Size: 326 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18000f990(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int extraout_var_01;
  uint uVar5;
  undefined1 auStack_2268 [32];
  undefined1 local_2248;
  undefined8 local_2238;
  undefined1 local_2228 [512];
  longlong local_2028 [1024];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x18000f99e;
  local_2238 = 0xfffffffffffffffe;
  local_28 = DAT_180086010 ^ (ulonglong)auStack_2268;
  memset(local_2028,0,0x2000);
  if ((*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))(), 7 < iVar2)) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x68))();
    uVar3 = FUN_18003f6b0(param_2);
    if ((lVar4 + param_3 != CONCAT44(extraout_var,uVar3)) &&
       ((uVar3 = FUN_18003f6b0(param_2), CONCAT44(extraout_var_00,uVar3) < 0x40 ||
        (iVar2 = FUN_18003f6b0(param_2), uVar5 = extraout_var_01 >> 0x1f & 7,
        (iVar2 + uVar5 & 7) == uVar5)))) {
      local_2248 = 0;
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))
                        (*(longlong **)(param_1 + 0xb8),local_2028,param_3 + 1,1);
      if ((iVar2 != 0) && (local_2028[0] != 0)) {
        FUN_18003f9f0(local_2228);
        bVar1 = FUN_18003f8d0(local_2228,local_2028);
        if (bVar1) {
          FUN_18003f9e0();
        }
        else {
          FUN_18003f9e0();
        }
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_2268);
  return;
}

