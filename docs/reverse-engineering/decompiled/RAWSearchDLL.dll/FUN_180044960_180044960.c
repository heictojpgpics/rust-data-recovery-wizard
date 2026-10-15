// Function: FUN_180044960
// Address: 180044960
// Size: 162 bytes


void FUN_180044960(undefined8 param_1,longlong *param_2)

{
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_31;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)&local_38;
  if (param_2 != (longlong *)0x0) {
    local_38 = 0x66757453;
    local_34 = 0x4966;
    local_31 = 0;
    local_30 = 0x42424557;
    uStack_2c = 0x454b4941;
    local_28 = 0xb4eb6666;
    uStack_24 = 0x7bbd74a3;
    local_20 = 0;
    if (((((int)*param_2 == 0x66757453) && (*(short *)((longlong)param_2 + 4) == 0x4966)) &&
        (*(char *)((longlong)param_2 + 6) == 't')) ||
       ((*param_2 == 0x454b494142424557 && (param_2[1] == 0x7bbd74a3b4eb6666)))) {
      __security_check_cookie(local_18 ^ (ulonglong)&local_38);
      return;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)&local_38);
  return;
}

