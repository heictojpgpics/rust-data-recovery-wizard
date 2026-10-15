// Function: FUN_18004e690
// Address: 18004e690
// Size: 135 bytes


undefined8 FUN_18004e690(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FUN_1800016b0(param_1 + 0x58);
  puVar3 = puVar1;
  if (0xf < (ulonglong)puVar1[3]) {
    puVar3 = (undefined8 *)*puVar1;
  }
  uVar4 = 0;
  puVar1[2] = 0;
  local_res8[0] = 0;
  FUN_180001300((undefined1 *)puVar3,local_res8);
  puVar1 = (undefined8 *)FUN_1800016b0(param_1 + 0x78);
  puVar3 = puVar1;
  if (0xf < (ulonglong)puVar1[3]) {
    puVar3 = (undefined8 *)*puVar1;
  }
  puVar1[2] = uVar4;
  local_res8[0] = (undefined1)uVar4;
  FUN_180001300((undefined1 *)puVar3,local_res8);
  lVar2 = FUN_18004e720(param_1,param_2,param_3);
  param_2[2] = lVar2;
  return 1;
}

