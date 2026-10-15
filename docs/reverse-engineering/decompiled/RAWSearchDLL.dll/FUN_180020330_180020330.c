// Function: FUN_180020330
// Address: 180020330
// Size: 360 bytes


undefined8 FUN_180020330(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ushort *puVar7;
  undefined1 *local_res8;
  longlong *local_res10;
  longlong local_48 [4];
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x1f8);
  if (lVar1 == 0) {
    local_48[1] = 0x32;
    local_48[0] = param_2;
    puVar2 = (undefined8 *)FUN_18001fd30(local_48);
    if ((puVar2[2] != 0) && (puVar2[6] != 0)) {
      puVar3 = FUN_180001350();
      *(undefined4 *)(param_3 + 0x18) = 0xa8;
      local_res10 = local_48;
      FUN_180001780((longlong)local_48);
      puVar4 = (undefined8 *)FUN_1800016b0(local_48);
      puVar4[3] = 0xf;
      local_res8 = (undefined1 *)((ulonglong)local_res8 & 0xffffffffffffff00);
      FUN_180001300((undefined1 *)puVar4,(undefined1 *)&local_res8);
      puVar5 = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar5 = (undefined8 *)*puVar4;
      }
      puVar4[2] = 0;
      local_res8 = (undefined1 *)((ulonglong)local_res8 & 0xffffffffffffff00);
      FUN_180001300((undefined1 *)puVar5,(undefined1 *)&local_res8);
      FUN_180017550(param_3,9,local_48);
      local_res8 = local_28;
      local_res10 = local_48;
      plVar6 = (longlong *)FUN_180007060((longlong)local_48,puVar2);
      puVar7 = (ushort *)FUN_18001dad0((longlong)local_28,plVar6);
      FUN_18000ed00((longlong)(puVar3 + 0x60),puVar7);
      return 1;
    }
  }
  return 0;
}

