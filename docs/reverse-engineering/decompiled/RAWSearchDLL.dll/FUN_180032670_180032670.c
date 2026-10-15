// Function: FUN_180032670
// Address: 180032670
// Size: 447 bytes


undefined8 FUN_180032670(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *_Dst;
  undefined1 uVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  char local_50;
  longlong local_40 [5];
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = *param_2;
    if (((char)((ulonglong)uVar1 >> 0x20) == 'G') &&
       (((cVar2 = (char)((ulonglong)uVar1 >> 0x28), (byte)(cVar2 - 0x40U) < 2 || (cVar2 == 'P')) ||
        (cVar2 == '\x10')))) {
      if ((((char)((ulonglong)param_2[0x18] >> 0x20) == 'G') && (param_2[1] != -1)) &&
         (param_2[0x19] != -1)) {
        *(undefined4 *)(param_3 + 0x18) = 0x74;
        return 1;
      }
    }
    else {
      local_50 = (char)uVar1;
      if ((local_50 == 'G') &&
         (((cVar2 = (char)((ulonglong)uVar1 >> 8), (byte)(cVar2 - 0x40U) < 2 || (cVar2 == 'P')) ||
          (cVar2 == '\x10')))) {
        lVar6 = param_3;
        puVar3 = FUN_180010a40();
        uVar5 = (undefined1)lVar6;
        FUN_180001780((longlong)local_40);
        puVar4 = (undefined8 *)FUN_1800016b0(local_40);
        puVar4[2] = 0;
        puVar4[3] = 0xf;
        local_res10[0] = 0;
        FUN_180001300((undefined1 *)puVar4,local_res10);
        if ((ulonglong)puVar4[3] < 4) {
          FUN_1800086f0((longlong)local_40,4,uVar5,&DAT_18006be6c);
        }
        else {
          _Dst = puVar4;
          if (0xf < (ulonglong)puVar4[3]) {
            _Dst = (undefined8 *)*puVar4;
          }
          puVar4[2] = 4;
          memmove(_Dst,&DAT_18006be6c,4);
          local_res10[0] = 0;
          FUN_180001300((undefined1 *)((longlong)_Dst + 4),local_res10);
        }
        cVar2 = FUN_180010f50((longlong)puVar3,local_40);
        if (((cVar2 != '\0') &&
            (local_50 = (char)*(undefined8 *)((longlong)param_2 + 0xbc), local_50 == 'G')) &&
           ((param_2[1] != -1 && (*(longlong *)((longlong)param_2 + 0xc4) != -1)))) {
          *(undefined4 *)(param_3 + 0x18) = 0x74;
          return 1;
        }
      }
    }
  }
  return 0;
}

