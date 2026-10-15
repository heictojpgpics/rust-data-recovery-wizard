// Function: FUN_1800376f0
// Address: 1800376f0
// Size: 306 bytes


void FUN_1800376f0(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 *_Buf2;
  size_t _Size;
  undefined1 auStack_78 [32];
  undefined2 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  ulonglong local_30;
  
  local_30 = DAT_18008f028 ^ (ulonglong)auStack_78;
  local_50 = 0xd302020;
  uStack_4c = 0x4345530a;
  local_48 = 0x4e4f4954;
  uStack_44 = 0x20200a0d;
  local_58 = 0x3939;
  if ((*param_2 == 0x4345530a0d302020) && (param_2[1] == 0x20200a0d4e4f4954)) {
LAB_180037813:
    *(undefined4 *)(param_3 + 0x18) = 0x19;
  }
  else if (((short)*param_2 == 0x3939) && (*(char *)((longlong)param_2 + 2) == '9')) {
    _Buf2 = &local_50;
    local_40 = 0xa302020;
    local_3c = 0x54434553;
    local_38 = 0xa4e4f49;
    local_34 = 0x2020;
    if (*(char *)((longlong)param_2 + 3) == '\n') {
      _Buf2 = &local_40;
      _Size = 0xe;
    }
    else {
      if ((*(char *)((longlong)param_2 + 3) != '\r') || (*(char *)((longlong)param_2 + 4) != '\n'))
      goto LAB_1800377e9;
      _Size = 0x10;
    }
    iVar2 = 0;
    plVar3 = param_2;
    if (0 < param_4) {
      do {
        if ((char)*plVar3 == '\0') break;
        iVar1 = memcmp((void *)((longlong)iVar2 + (longlong)param_2),_Buf2,_Size);
        if (iVar1 == 0) goto LAB_180037813;
        iVar2 = iVar2 + 1;
        plVar3 = (longlong *)((longlong)plVar3 + 1);
      } while (iVar2 < param_4);
    }
  }
LAB_1800377e9:
  __security_check_cookie(local_30 ^ (ulonglong)auStack_78);
  return;
}

