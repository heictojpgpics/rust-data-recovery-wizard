// Function: FUN_1800328a0
// Address: 1800328a0
// Size: 594 bytes


undefined8 FUN_1800328a0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  undefined8 *_Dst;
  undefined1 uVar5;
  longlong lVar6;
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  longlong local_28 [4];
  
  local_40 = 0xfffffffffffffffe;
  if ((DAT_18008f066 != '\0') && (param_2 != (undefined8 *)0x0)) {
    local_38 = (longlong *)*param_2;
    local_30 = *(undefined4 *)(param_2 + 1);
    local_2c = *(undefined2 *)((longlong)param_2 + 0xc);
    local_2a = *(undefined1 *)((longlong)param_2 + 0xe);
    if (((char)((ulonglong)local_38 >> 0x20) == 'G') &&
       (((cVar1 = (char)((ulonglong)local_38 >> 0x28), (byte)(cVar1 - 0x40U) < 2 || (cVar1 == 'P'))
        || (cVar1 == '\x10')))) {
      DAT_18008f048 = 0xc0;
      if ((((char)((ulonglong)param_2[0x18] >> 0x20) == 'G') && (param_2[1] != -1)) &&
         (param_2[0x19] != -1)) {
        DAT_18008f066 = 0;
        *(undefined4 *)(param_3 + 0x18) = 0x74;
        return 1;
      }
    }
    else if (((char)local_38 == 'G') &&
            (((cVar1 = (char)((ulonglong)local_38 >> 8), (byte)(cVar1 - 0x40U) < 2 || (cVar1 == 'P')
              ) || (cVar1 == '\x10')))) {
      DAT_18008f048 = 0xbc;
      lVar6 = param_3;
      puVar2 = FUN_180010a40();
      uVar5 = (undefined1)lVar6;
      local_38 = local_28;
      FUN_180001780((longlong)local_28);
      puVar3 = (undefined8 *)FUN_1800016b0(local_28);
      puVar3[2] = 0;
      puVar3[3] = 0xf;
      local_48[0] = 0;
      FUN_180001300((undefined1 *)puVar3,local_48);
      if ((ulonglong)puVar3[3] < 3) {
        FUN_1800086f0((longlong)local_28,3,uVar5,&DAT_18006be74);
      }
      else {
        _Dst = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          _Dst = (undefined8 *)*puVar3;
        }
        puVar3[2] = 3;
        memmove(_Dst,&DAT_18006be74,3);
        local_48[0] = 0;
        FUN_180001300((undefined1 *)((longlong)_Dst + 3),local_48);
      }
      cVar1 = FUN_180010f50((longlong)puVar2,local_28);
      if (cVar1 != '\0') {
        puVar3 = (undefined8 *)((longlong)DAT_18008f048 + (longlong)param_2);
        local_38 = (longlong *)*puVar3;
        local_30 = *(undefined4 *)(puVar3 + 1);
        local_2c = *(undefined2 *)((longlong)puVar3 + 0xc);
        local_2a = *(undefined1 *)((longlong)puVar3 + 0xe);
        if ((((char)local_38 == 'G') && (param_2[1] != -1)) && (puVar3[1] != -1)) {
          DAT_18008f066 = 0;
          *(undefined4 *)(param_3 + 0x18) = 0x7b;
          puVar2 = FUN_180001350();
          local_38 = local_28;
          puVar4 = (ushort *)FUN_18000f4b0((longlong)local_28,&DAT_18006be78);
          FUN_18000ed00((longlong)(puVar2 + 0x60),puVar4);
          return 1;
        }
      }
    }
  }
  return 0;
}

