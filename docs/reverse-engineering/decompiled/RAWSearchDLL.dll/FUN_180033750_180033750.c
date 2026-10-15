// Function: FUN_180033750
// Address: 180033750
// Size: 388 bytes


void FUN_180033750(undefined8 param_1,int *param_2,longlong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *_Dst;
  undefined1 uVar4;
  undefined1 auStack_98 [32];
  undefined2 local_78 [4];
  ushort local_70 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  undefined1 local_44;
  ushort *local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_50 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_98;
  local_48 = -0x24002701;
  local_44 = 0;
  local_40 = (ushort *)CONCAT35(local_40._5_3_,0xeeffd8ff);
  local_38 = DAT_18006c09c;
  local_34 = DAT_18006c0a0;
  local_30 = DAT_18006c094;
  local_2c = DAT_18006c098;
  uVar4 = 4;
  iVar1 = _strnicmp((char *)&local_38,(char *)((longlong)param_2 + 6),4);
  if (iVar1 != 0) {
    uVar4 = 4;
    iVar1 = _strnicmp((char *)&local_30,(char *)((longlong)param_2 + 6),4);
    if (((iVar1 != 0) && (*param_2 != local_48)) && (*param_2 != (int)local_40)) goto LAB_1800338b5;
  }
  *(undefined4 *)(param_3 + 0x18) = 0x23;
  puVar2 = FUN_180001350();
  local_40 = local_70;
  local_60 = 0;
  local_58 = 0;
  puVar3 = (undefined8 *)FUN_1800016b0(local_70);
  puVar3[2] = 0;
  puVar3[3] = 7;
  local_78[0] = 0;
  FUN_180001790((undefined2 *)puVar3,local_78);
  if ((ulonglong)puVar3[3] < 3) {
    FUN_18000f8f0((longlong)local_70,3,uVar4,&DAT_18006c0d8);
  }
  else {
    _Dst = puVar3;
    if (7 < (ulonglong)puVar3[3]) {
      _Dst = (undefined8 *)*puVar3;
    }
    puVar3[2] = 3;
    memmove(_Dst,&DAT_18006c0d8,6);
    local_78[0] = 0;
    FUN_180001790((undefined2 *)((longlong)_Dst + 6),local_78);
  }
  FUN_18000ed00((longlong)(puVar2 + 0x60),local_70);
LAB_1800338b5:
  __security_check_cookie(local_28 ^ (ulonglong)auStack_98);
  return;
}

