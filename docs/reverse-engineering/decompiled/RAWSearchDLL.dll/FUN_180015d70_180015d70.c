// Function: FUN_180015d70
// Address: 180015d70
// Size: 519 bytes


void FUN_180015d70(longlong param_1,int *param_2,int param_3,longlong param_4,longlong param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong _Size;
  undefined1 uVar5;
  undefined8 *_Dst;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined1 local_160;
  undefined4 local_158;
  undefined2 local_154;
  undefined1 local_151;
  char local_148 [272];
  ulonglong local_38;
  ulonglong uVar4;
  
  local_38 = DAT_18008f028 ^ (ulonglong)auStackY_1a8;
  if (((param_2 == (int *)0x0) || (param_3 < 0)) || (param_4 < 0)) goto LAB_180015f5e;
  lVar3 = param_4 - *(longlong *)(param_1 + 8);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0x5d;
    if (*(char *)((longlong)param_2 + 7) == ' ') {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else if (*(char *)((longlong)param_2 + 7) == '!') {
      *(undefined1 *)(param_1 + 0x110) = 1;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_180015f5e;
LAB_180015e69:
    if ((param_3 * lVar3 < *(longlong *)(param_1 + 0x118) * 10) &&
       ((*(int *)(param_5 + 0x14) < 5 ||
        (uVar1 = FUN_180015b60(param_1,param_2,param_3,param_4,param_5), (char)uVar1 != '\0'))))
    goto LAB_180015f5e;
  }
  else {
    local_158 = 0x66757453;
    local_154 = 0x4966;
    local_151 = 0;
    local_170 = 0x42424557;
    local_16c = 0x454b4941;
    uStack_168 = 0xb4eb6666;
    local_164 = 0x7bbd74a3;
    local_160 = 0;
    if (((((1 < (byte)(*(char *)((longlong)param_2 + 7) - 0x20U)) || ((short)param_2[1] != 0x4966))
         || (*(char *)((longlong)param_2 + 6) != 't')) &&
        ((*(longlong *)(param_2 + 1) != -0x4b149999bab4b6bf || (param_2[3] != 0x7bbd74a3)))) ||
       ((*param_2 != 0x66757453 && (*param_2 != 0x42424557)))) goto LAB_180015e69;
  }
  uVar5 = 4;
  memset(local_148,0,0x104);
  uVar4 = 0xffffffffffffffff;
  do {
    _Size = uVar4 + 1;
    lVar3 = uVar4 + 1;
    uVar4 = _Size;
  } while (local_148[lVar3] != '\0');
  puVar2 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
  if ((ulonglong)puVar2[3] < _Size) {
    FUN_1800086f0(param_1 + 0x20,_Size,uVar5,local_148);
  }
  else {
    _Dst = puVar2;
    if (0xf < (ulonglong)puVar2[3]) {
      _Dst = (undefined8 *)*puVar2;
    }
    puVar2[2] = _Size;
    memmove(_Dst,local_148,_Size);
    local_178[0] = 0;
    FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_178);
  }
  *(longlong *)(param_1 + 0x10) = ((param_4 - *(longlong *)(param_1 + 8)) + 1) * (longlong)param_3;
LAB_180015f5e:
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_1a8);
  return;
}

