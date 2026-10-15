// Function: FUN_18001b710
// Address: 18001b710
// Size: 470 bytes


undefined8 FUN_18001b710(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined *puVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *_Dst;
  undefined1 uVar8;
  ulonglong uVar9;
  ushort *local_res10;
  ushort local_30 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 != 0) {
    puVar1 = FUN_180001350();
    pbVar4 = (byte *)(param_2 + 8);
    pbVar5 = (byte *)(param_2 + 4);
    uVar6 = 0;
    uVar9 = uVar6;
    if (((pbVar5 != (byte *)0x0) && (uVar9 = 0, pbVar4 != (byte *)0x0)) &&
       (uVar7 = uVar6, pbVar5 < pbVar4)) {
      do {
        uVar9 = uVar7 << 8 | (ulonglong)*pbVar5;
        pbVar5 = pbVar5 + 1;
        uVar7 = uVar9;
      } while (pbVar5 != pbVar4);
    }
    uVar7 = uVar6;
    if (((pbVar4 != (byte *)0x0) && (param_2 != -0xc)) &&
       (uVar7 = 0, pbVar4 < (byte *)(param_2 + 0xcU))) {
      do {
        uVar7 = uVar6 << 8 | (ulonglong)*pbVar4;
        pbVar4 = pbVar4 + 1;
        uVar6 = uVar7;
      } while (pbVar4 != (byte *)(param_2 + 0xcU));
    }
    if (uVar9 == 0x66747970) {
      if (uVar7 == 0x6d696631) {
        *(undefined4 *)(param_3 + 0x18) = 0x7d;
        local_20 = 0;
        local_18 = 0;
        puVar3 = (undefined8 *)FUN_1800016b0(local_30);
        uVar8 = (undefined1)uVar9;
        puVar3[2] = 0;
        puVar3[3] = 7;
        local_res10 = (ushort *)((ulonglong)local_res10 & 0xffffffffffff0000);
        FUN_180001790((undefined2 *)puVar3,(undefined2 *)&local_res10);
        if ((ulonglong)puVar3[3] < 4) {
          FUN_18000f8f0((longlong)local_30,4,uVar8,L"HEIF");
        }
        else {
          _Dst = puVar3;
          if (7 < (ulonglong)puVar3[3]) {
            _Dst = (undefined8 *)*puVar3;
          }
          puVar3[2] = 4;
          memmove(_Dst,L"HEIF",8);
          local_res10 = (ushort *)((ulonglong)local_res10 & 0xffffffffffff0000);
          FUN_180001790((undefined2 *)(_Dst + 1),(undefined2 *)&local_res10);
        }
        FUN_18000ed00((longlong)(puVar1 + 0x60),local_30);
        return 1;
      }
      if (uVar7 == 0x68656963) {
        *(undefined4 *)(param_3 + 0x18) = 0x7c;
        local_res10 = local_30;
        puVar2 = (ushort *)FUN_18000f4b0((longlong)local_30,L"HEIC");
        FUN_18000ed00((longlong)(puVar1 + 0x60),puVar2);
        return 1;
      }
    }
  }
  return 0;
}

