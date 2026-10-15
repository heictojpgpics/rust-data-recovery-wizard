// Function: FUN_180016e60
// Address: 180016e60
// Size: 163 bytes


void FUN_180016e60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_868 [32];
  undefined4 local_848 [2];
  undefined8 local_840;
  undefined8 local_838;
  undefined8 local_830;
  ulonglong local_28;
  
  local_28 = DAT_180086010 ^ (ulonglong)auStack_868;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    memset(&local_840,0,0x818);
    local_830 = param_5;
    local_848[0] = 2;
    local_840 = param_3;
    local_838 = param_4;
    cVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 8))(*(longlong **)(param_1 + 0x18),local_848);
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_868);
  return;
}

