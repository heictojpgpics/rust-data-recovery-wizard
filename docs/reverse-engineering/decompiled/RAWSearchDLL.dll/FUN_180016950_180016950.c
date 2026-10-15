// Function: FUN_180016950
// Address: 180016950
// Size: 405 bytes


void FUN_180016950(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong _Size;
  undefined1 uVar5;
  undefined8 *_Dst;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined1 local_160;
  char local_158 [272];
  ulonglong local_48;
  ulonglong uVar4;
  
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_198;
  local_170 = 0x2c3489f7;
  uStack_16c = 0x6deef0f7;
  local_168 = 0xd18922af;
  uStack_164 = 0xb0f0ff00;
  local_160 = 0;
  if (*(char *)(param_1 + 0x119) != '\0') {
    if ((*param_2 == 0x6deef0f72c3489f7) && (param_2[1] == -0x4f0f00ff2e76dd51)) {
      *(undefined1 *)(param_1 + 0x118) = 1;
    }
    *(undefined1 *)(param_1 + 0x119) = 0;
  }
  if (*(char *)(param_1 + 0x118) == '\0') {
    *(ulonglong *)(param_1 + 0x10) = (ulonglong)*(uint *)((longlong)param_2 + 0x7c);
  }
  else if (8 < *(int *)(param_5 + 0x14)) {
    iVar2 = FUN_180042b30(param_2,param_3);
    uVar5 = 4;
    memset(local_158,0,0x104);
    uVar4 = 0xffffffffffffffff;
    do {
      _Size = uVar4 + 1;
      lVar1 = uVar4 + 1;
      uVar4 = _Size;
    } while (local_158[lVar1] != '\0');
    puVar3 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
    if ((ulonglong)puVar3[3] < _Size) {
      FUN_1800086f0(param_1 + 0x20,_Size,uVar5,local_158);
    }
    else {
      _Dst = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        _Dst = (undefined8 *)*puVar3;
      }
      puVar3[2] = _Size;
      memmove(_Dst,local_158,_Size);
      local_178[0] = 0;
      FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_178);
    }
    *(longlong *)(param_1 + 0x10) =
         (param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3 + (longlong)iVar2;
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_198);
  return;
}

