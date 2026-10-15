// Function: FUN_18003d400
// Address: 18003d400
// Size: 144 bytes


undefined8 FUN_18003d400(undefined8 param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined1 local_res18 [16];
  
  sVar4 = param_3;
  puVar2 = (undefined8 *)FUN_180002680(param_1);
  lVar1 = puVar2[2];
  if (sVar4 <= (ulonglong)(puVar2[3] - lVar1)) {
    puVar2[2] = sVar4 + lVar1;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    memmove((void *)((longlong)puVar2 + lVar1),param_2,param_3);
    local_res18[0] = 0;
    FUN_180001150((undefined1 *)((longlong)puVar2 + lVar1 + param_3),local_res18);
    return param_1;
  }
  uVar3 = FUN_18003d6d0(param_1,param_3,(char)sVar4,param_2,param_3);
  return uVar3;
}

