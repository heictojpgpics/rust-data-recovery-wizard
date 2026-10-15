// Function: FUN_18000b7a0
// Address: 18000b7a0
// Size: 135 bytes


longlong FUN_18000b7a0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  uVar3 = 0;
  puVar5 = &DAT_18008f070 + (ulonglong)*(uint *)(param_1 + 0x18) * 9;
  lVar2 = param_2;
  local_res10 = param_2;
  FUN_180001780(param_2);
  puVar1 = (undefined1 *)FUN_1800016b0(lVar2);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = 0xf;
  local_res8[0] = (undefined1)uVar3;
  FUN_180001300(puVar1,local_res8);
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (puVar5[uVar4] != '\0');
  FUN_1800071e0(param_2,puVar5,uVar4);
  return param_2;
}

