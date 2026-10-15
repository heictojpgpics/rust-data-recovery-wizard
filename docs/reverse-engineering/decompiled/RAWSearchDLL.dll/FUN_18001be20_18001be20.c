// Function: FUN_18001be20
// Address: 18001be20
// Size: 307 bytes


ulonglong FUN_18001be20(longlong param_1,byte *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *_Dst;
  undefined1 uVar4;
  longlong lVar5;
  undefined2 local_res8 [4];
  ushort local_40 [8];
  undefined8 local_30;
  undefined8 local_28;
  
  if ((*(char *)(param_1 + 0x10) == '\0') &&
     (*(ulonglong *)(param_1 + 0x18) <= *(ulonglong *)(param_3 + 8))) {
    lVar5 = param_3;
    uVar1 = FUN_18001bcf0(param_2);
    uVar4 = (undefined1)param_3;
    if ((char)uVar1 != '\0') {
      *(undefined4 *)(lVar5 + 0x18) = 0x7f;
      puVar2 = FUN_180001350();
      local_30 = 0;
      local_28 = 0;
      puVar3 = (undefined8 *)FUN_1800016b0(local_40);
      puVar3[2] = 0;
      puVar3[3] = 7;
      local_res8[0] = 0;
      FUN_180001790((undefined2 *)puVar3,local_res8);
      if ((ulonglong)puVar3[3] < 3) {
        FUN_18000f8f0((longlong)local_40,3,uVar4,&DAT_18006ada0);
      }
      else {
        _Dst = puVar3;
        if (7 < (ulonglong)puVar3[3]) {
          _Dst = (undefined8 *)*puVar3;
        }
        puVar3[2] = 3;
        memmove(_Dst,&DAT_18006ada0,6);
        local_res8[0] = 0;
        FUN_180001790((undefined2 *)((longlong)_Dst + 6),local_res8);
      }
      FUN_18000ed00((longlong)(puVar2 + 0x60),local_40);
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

