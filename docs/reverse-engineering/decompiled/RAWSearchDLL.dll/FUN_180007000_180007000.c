// Function: FUN_180007000
// Address: 180007000
// Size: 94 bytes


longlong FUN_180007000(longlong param_1,void *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_res8 [32];
  
  lVar2 = param_1;
  FUN_180001780(param_1);
  puVar1 = (undefined1 *)FUN_1800016b0(lVar2);
  local_res8[0] = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0xf;
  FUN_180001300(puVar1,local_res8);
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (*(char *)((longlong)param_2 + uVar3) != '\0');
  FUN_1800071e0(param_1,param_2,uVar3);
  return param_1;
}

