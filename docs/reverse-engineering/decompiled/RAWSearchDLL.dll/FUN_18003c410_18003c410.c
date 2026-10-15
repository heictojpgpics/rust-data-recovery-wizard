// Function: FUN_18003c410
// Address: 18003c410
// Size: 342 bytes


void FUN_18003c410(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *_Dst;
  undefined1 uVar6;
  undefined1 auStack_178 [48];
  undefined1 local_148 [8];
  undefined8 local_140;
  char local_138 [272];
  ulonglong local_28;
  ulonglong uVar5;
  
  local_140 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_178;
  if ((((param_2 != 0) &&
       (*(longlong *)(param_1 + 0xe0) + *(longlong *)(param_1 + 0xd8) <=
        (param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3)) &&
      (uVar2 = FUN_18003c570(param_1,param_2,param_3,param_4), (int)uVar2 == 0)) &&
     (*(ulonglong *)(param_1 + 0x110) != 0)) {
    uVar5 = *(longlong *)(param_1 + 0x148) * 10;
    uVar4 = *(ulonglong *)(param_1 + 0x110);
    if (uVar5 <= (ulonglong)((param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3)) {
      uVar4 = uVar5;
    }
    *(ulonglong *)(param_1 + 0x10) = uVar4;
    uVar6 = 4;
    memset(local_138,0,0x104);
    uVar5 = 0xffffffffffffffff;
    do {
      uVar4 = uVar5 + 1;
      lVar1 = uVar5 + 1;
      uVar5 = uVar4;
    } while (local_138[lVar1] != '\0');
    puVar3 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
    if ((ulonglong)puVar3[3] < uVar4) {
      FUN_1800086f0(param_1 + 0x20,uVar4,uVar6,local_138);
      *(undefined4 *)(param_1 + 0x18) = 0x6d;
    }
    else {
      _Dst = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        _Dst = (undefined8 *)*puVar3;
      }
      puVar3[2] = uVar4;
      memmove(_Dst,local_138,uVar4);
      local_148[0] = 0;
      FUN_180001300((undefined1 *)((longlong)_Dst + uVar4),local_148);
      *(undefined4 *)(param_1 + 0x18) = 0x6d;
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_178);
  return;
}

