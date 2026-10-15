// Function: FUN_18002e430
// Address: 18002e430
// Size: 631 bytes


void FUN_18002e430(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong _Size;
  undefined8 *_Dst;
  undefined1 uVar7;
  uint uVar8;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined4 local_198;
  undefined2 local_194;
  undefined1 local_192;
  uint local_190;
  longlong local_188 [4];
  undefined8 local_168;
  char local_158 [272];
  ulonglong local_48;
  
  local_168 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_1d8;
  if (((param_2 != (longlong *)0x0) && (uVar8 = (uint)param_3, 0x1ff < (int)uVar8)) &&
     (-1 < param_4)) {
    if (param_4 == *(longlong *)(param_1 + 8)) {
      local_1a0 = (longlong *)*param_2;
      local_198 = (undefined4)param_2[1];
      local_194 = *(undefined2 *)((longlong)param_2 + 0xc);
      local_192 = *(undefined1 *)((longlong)param_2 + 0xe);
      if (((char)((ulonglong)local_1a0 >> 0x20) == 'G') &&
         (((cVar1 = (char)((ulonglong)local_1a0 >> 0x28), (byte)(cVar1 - 0x40U) < 2 ||
           (cVar1 == 'P')) || (cVar1 == '\x10')))) {
        *(undefined4 *)(param_1 + 0x110) = 0xc0;
      }
      else if (((char)local_1a0 == 'G') &&
              (((cVar1 = (char)((ulonglong)local_1a0 >> 8), (byte)(cVar1 - 0x40U) < 2 ||
                (cVar1 == 'P')) || (cVar1 == '\x10')))) {
        *(undefined4 *)(param_1 + 0x110) = 0xbc;
      }
    }
    uVar6 = 1;
    uVar4 = ((param_4 - *(longlong *)(param_1 + 8)) + 1) * (longlong)(int)uVar8;
    if (*(ulonglong *)(param_1 + 0x120) <= uVar4 && uVar4 - *(ulonglong *)(param_1 + 0x120) != 0) {
      iVar3 = FUN_18002e6b0(param_1,(longlong)param_2,uVar8,param_4,param_5);
      uVar6 = (uint)(iVar3 != 0);
      local_190 = uVar6;
    }
    if ((uVar6 == 0) ||
       (((uVar4 = FUN_18002e890(param_2,param_4,param_3,*(longlong *)(param_5 + 8),'\0'),
         (int)uVar4 != 0 && (*(longlong *)(param_1 + 0x10) != 0)) || (8 < *(int *)(param_5 + 0x14)))
       )) {
      DAT_18008f065 = 0;
      DAT_18008f044 = 0xffffffff;
      if ((*(int *)(param_5 + 0x14) < 9) && (DAT_18008f044 = 0xffffffff, uVar6 != 0)) {
        DAT_18008f044 = 0;
      }
      uVar7 = 4;
      memset(local_158,0,0x104);
      local_1a0 = local_188;
      FUN_180001780((longlong)local_188);
      puVar5 = (undefined8 *)FUN_1800016b0(local_188);
      puVar5[2] = 0;
      puVar5[3] = 0xf;
      local_1a8[0] = 0;
      FUN_180001300((undefined1 *)puVar5,local_1a8);
      uVar4 = 0xffffffffffffffff;
      do {
        _Size = uVar4 + 1;
        lVar2 = uVar4 + 1;
        uVar4 = _Size;
      } while (local_158[lVar2] != '\0');
      if ((ulonglong)puVar5[3] < _Size) {
        FUN_1800086f0((longlong)local_188,_Size,uVar7,local_158);
      }
      else {
        _Dst = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          _Dst = (undefined8 *)*puVar5;
        }
        puVar5[2] = _Size;
        memmove(_Dst,local_158,_Size);
        local_1a8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_1a8);
      }
      FUN_1800173f0(param_1,local_188);
    }
    else {
      DAT_18008f065 = 0;
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (longlong)(int)uVar8;
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_1d8);
  return;
}

