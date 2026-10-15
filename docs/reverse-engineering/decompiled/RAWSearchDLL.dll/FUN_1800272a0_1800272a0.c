// Function: FUN_1800272a0
// Address: 1800272a0
// Size: 474 bytes


undefined8 FUN_1800272a0(longlong param_1,int *param_2,longlong param_3)

{
  ushort uVar1;
  undefined *puVar2;
  ushort *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined8 *_Dst;
  undefined1 uVar8;
  ushort *local_res20;
  ushort local_28 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  if (*param_2 == -0x45ff0000) {
    bVar7 = (*(byte *)((longlong)param_2 + 0xd) & 7) + 0xe;
    local_res20 = (ushort *)CONCAT44(local_res20._4_4_,0xbc010000);
    uVar6 = (ulonglong)bVar7;
    if (*(int *)(uVar6 + (longlong)param_2) == -0x44ff0000) {
      uVar5 = *(uint *)(uVar6 + 4 + (longlong)param_2);
      if (uVar5 < 0x40000001) {
        uVar5 = bVar7 + 6 + uVar5;
        if (uVar5 < 0x400001) {
          if (*(int *)((ulonglong)uVar5 + (longlong)param_2) == -0x43ff0000) {
            uVar1 = *(ushort *)((ulonglong)uVar5 + 4 + (longlong)param_2);
            *(ulonglong *)(param_1 + 0x10) =
                 (ulonglong)((uint)(ushort)(uVar1 << 8 | uVar1 >> 8) + uVar5 + 6);
            *(undefined4 *)(param_3 + 0x18) = 0x92;
            puVar2 = FUN_180001350();
            local_res20 = local_28;
            puVar3 = (ushort *)FUN_18000f4b0((longlong)local_28,&DAT_18006b428);
            FUN_18000ed00((longlong)(puVar2 + 0x60),puVar3);
          }
          return 1;
        }
      }
    }
    else if (*(int *)(uVar6 + (longlong)param_2) == -0x43ff0000) {
      uVar1 = *(ushort *)(uVar6 + 4 + (longlong)param_2);
      *(ulonglong *)(param_1 + 0x10) =
           (ulonglong)(ushort)(uVar1 << 8 | uVar1 >> 8) + (ulonglong)bVar7 + 6;
      *(undefined4 *)(param_3 + 0x18) = 0x92;
      puVar2 = FUN_180001350();
      uVar8 = (undefined1)param_3;
      local_18 = 0;
      local_10 = 0;
      puVar4 = (undefined8 *)FUN_1800016b0(local_28);
      puVar4[2] = 0;
      puVar4[3] = 7;
      local_res20 = (ushort *)((ulonglong)local_res20 & 0xffffffffffff0000);
      FUN_180001790((undefined2 *)puVar4,(undefined2 *)&local_res20);
      if ((ulonglong)puVar4[3] < 3) {
        FUN_18000f8f0((longlong)local_28,3,uVar8,&DAT_18006b428);
      }
      else {
        _Dst = puVar4;
        if (7 < (ulonglong)puVar4[3]) {
          _Dst = (undefined8 *)*puVar4;
        }
        puVar4[2] = 3;
        memmove(_Dst,&DAT_18006b428,6);
        local_res20 = (ushort *)((ulonglong)local_res20 & 0xffffffffffff0000);
        FUN_180001790((undefined2 *)((longlong)_Dst + 6),(undefined2 *)&local_res20);
      }
      FUN_18000ed00((longlong)(puVar2 + 0x60),local_28);
      return 1;
    }
  }
  return 0;
}

