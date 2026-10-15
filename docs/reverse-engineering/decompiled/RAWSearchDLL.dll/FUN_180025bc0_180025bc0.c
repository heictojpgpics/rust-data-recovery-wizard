// Function: FUN_180025bc0
// Address: 180025bc0
// Size: 415 bytes


undefined8 FUN_180025bc0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *_Dst;
  undefined1 uVar6;
  byte *pbVar7;
  undefined2 local_res10 [4];
  ushort local_30 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 != 0) {
    pbVar3 = (byte *)(param_2 + 0x40);
    pbVar7 = (byte *)(param_2 + 0x3c);
    uVar5 = 0;
    if (((pbVar7 != (byte *)0x0) && (pbVar3 != (byte *)0x0)) && (uVar4 = uVar5, pbVar7 < pbVar3)) {
      do {
        uVar4 = uVar4 << 8 | (ulonglong)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (pbVar7 != pbVar3);
      if (((uVar4 == 0x424f4f4b) && (pbVar7 = (byte *)(param_2 + 0x44), pbVar3 != (byte *)0x0)) &&
         ((pbVar7 != (byte *)0x0 && (pbVar3 < pbVar7)))) {
        do {
          uVar5 = uVar5 << 8 | (ulonglong)*pbVar3;
          pbVar3 = pbVar3 + 1;
        } while (pbVar3 != pbVar7);
        if (uVar5 == 0x4d4f4249) {
          *(undefined4 *)(param_3 + 0x18) = 0x85;
          puVar1 = FUN_180001350();
          uVar6 = SUB81(pbVar7,0);
          local_20 = 0;
          local_18 = 0;
          puVar2 = (undefined8 *)FUN_1800016b0(local_30);
          puVar2[2] = 0;
          puVar2[3] = 7;
          local_res10[0] = 0;
          FUN_180001790((undefined2 *)puVar2,local_res10);
          if ((ulonglong)puVar2[3] < 4) {
            FUN_18000f8f0((longlong)local_30,4,uVar6,L"MOBI");
          }
          else {
            _Dst = puVar2;
            if (7 < (ulonglong)puVar2[3]) {
              _Dst = (undefined8 *)*puVar2;
            }
            puVar2[2] = 4;
            memmove(_Dst,L"MOBI",8);
            local_res10[0] = 0;
            FUN_180001790((undefined2 *)(_Dst + 1),local_res10);
          }
          FUN_18000ed00((longlong)(puVar1 + 0x60),local_30);
          return 1;
        }
      }
    }
  }
  return 0;
}

