// Function: FUN_180027170
// Address: 180027170
// Size: 318 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180027170(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  ushort uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_1258 [32];
  undefined1 local_1238;
  undefined8 local_1228;
  undefined1 local_1218 [512];
  undefined1 local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x18002717c;
  local_1228 = 0xfffffffffffffffe;
  local_18 = DAT_180086010 ^ (ulonglong)auStack_1258;
  *(longlong **)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x34) = 1;
  lVar5 = (**(code **)(*param_2 + 0x18))(param_2);
  *(longlong *)(param_1 + 0x88) = lVar5 + -1;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
  *(undefined4 *)(param_1 + 0x80) = uVar4;
  *(undefined8 *)(param_1 + 0x90) = 100;
  *(undefined4 *)(param_1 + 0xa8) = 1;
  *(undefined1 *)(param_1 + 0x119) = 1;
  *(undefined1 *)(param_1 + 0xa4) = 1;
  FUN_18003f9f0(local_1218);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
    if (0 < lVar5) {
      memset(local_1018,0,0x1000);
      local_1238 = 0;
      (**(code **)(*plVar1 + 8))(plVar1,local_1018,0,1);
      bVar2 = FUN_18003f8d0(local_1218,local_1018);
      if (bVar2) {
        uVar3 = FUN_18003f940((longlong)local_1218);
        *(uint *)(param_1 + 0x34) = (uint)uVar3;
      }
    }
  }
  FUN_18003f9e0();
  __security_check_cookie(local_18 ^ (ulonglong)auStack_1258);
  return;
}

