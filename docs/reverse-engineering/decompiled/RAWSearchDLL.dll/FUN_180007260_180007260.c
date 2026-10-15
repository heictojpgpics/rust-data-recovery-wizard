// Function: FUN_180007260
// Address: 180007260
// Size: 144 bytes


longlong FUN_180007260(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  size_t sVar3;
  undefined1 local_res18 [16];
  
  sVar3 = param_3;
  puVar1 = (undefined8 *)FUN_1800016b0(param_1);
  lVar2 = puVar1[2];
  if (sVar3 <= (ulonglong)(puVar1[3] - lVar2)) {
    puVar1[2] = sVar3 + lVar2;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    memmove((void *)((longlong)puVar1 + lVar2),param_2,param_3);
    local_res18[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar1 + lVar2 + param_3),local_res18);
    return param_1;
  }
  lVar2 = FUN_1800088a0(param_1,param_3,(char)sVar3,param_2,param_3);
  return lVar2;
}

