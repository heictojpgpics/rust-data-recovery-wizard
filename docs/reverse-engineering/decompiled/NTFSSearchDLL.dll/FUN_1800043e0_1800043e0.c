// Function: FUN_1800043e0
// Address: 1800043e0
// Size: 445 bytes


void FUN_1800043e0(longlong *param_1,void *param_2,ulonglong param_3)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_248 = 0xfffffffffffffffe;
  local_38 = DAT_180086010 ^ (ulonglong)auStack_268;
  FUN_18003f9f0(local_238);
  if (((param_2 != (void *)0x0) && (*param_1 != 0)) && (0x1ff < param_3)) {
    bVar1 = FUN_18003f8d0(local_238,param_2);
    if (bVar1) {
      lVar5 = FUN_18003f990((longlong)local_238);
      uVar3 = FUN_18003f940((longlong)local_238);
      lVar6 = *(longlong *)(param_1[1] + 8);
      cVar2 = FUN_180004850(param_1,lVar6,lVar5,(uint)uVar3);
      if (cVar2 == '\0') {
        if ((char)param_1[3] == '\0') goto LAB_180004568;
        lVar6 = FUN_18003f920((longlong)local_238);
        lVar6 = *(longlong *)(param_1[1] + 8) - lVar6 * (ulonglong)(uint)uVar3;
        cVar2 = FUN_180004850(param_1,lVar6,lVar5,(uint)uVar3);
        if (cVar2 == '\0') goto LAB_180004568;
      }
      *(undefined4 *)param_1[1] = 3;
      uVar7 = FUN_18003f920((longlong)local_238);
      *(undefined8 *)(param_1[1] + 0x10) = uVar7;
      uVar3 = FUN_18003f940((longlong)local_238);
      *(uint *)(param_1[1] + 0x38) = (uint)uVar3;
      uVar7 = FUN_18003f8b0((longlong)local_238);
      *(undefined8 *)(param_1[1] + 0x50) = uVar7;
      uVar7 = FUN_18003f990((longlong)local_238);
      *(undefined8 *)(param_1[1] + 0x40) = uVar7;
      *(longlong *)(param_1[1] + 8) = lVar6;
      uVar4 = FUN_18003f9b0((longlong)local_238);
      *(undefined4 *)(param_1[1] + 0x3c) = uVar4;
      uVar7 = FUN_18003f970((longlong)local_238);
      *(undefined8 *)(param_1[1] + 0x48) = uVar7;
      *(undefined4 *)(param_1[1] + 0x5c) = 0;
    }
  }
LAB_180004568:
  FUN_18003f9e0();
  __security_check_cookie(local_38 ^ (ulonglong)auStack_268);
  return;
}

