// Function: FUN_18005b870
// Address: 18005b870
// Size: 289 bytes


void FUN_18005b870(longlong param_1,int param_2,undefined4 param_3,longlong param_4)

{
  uint *puVar1;
  void *_Memory;
  longlong lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  puVar1 = (uint *)(param_1 + 0x78);
  *(int *)(param_1 + 0x6c) = param_2;
  *(undefined4 *)(param_1 + 0x90) = param_3;
  if ((*puVar1 & 0x200) != 0) {
    free(*(void **)(param_1 + 0x80));
  }
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  _Memory = (void *)FUN_1800020c0(1000);
  puVar4 = (&PTR_s_XML_SUCCESS_18006ac10)[param_2];
  FUN_180058fc0(_Memory,1000,"Error=%s ErrorID=%d (0x%x) Line number=%d",puVar4);
  if (param_4 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)((longlong)_Memory + lVar2) != '\0');
    FUN_180058fc0(lVar2 + (longlong)_Memory,1000 - lVar2,&DAT_18006e7cc,puVar4);
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)((longlong)_Memory + lVar2) != '\0');
    puVar3 = (undefined8 *)FUN_18000b450();
    __stdio_common_vsnprintf_s
              (*puVar3,lVar2 + (longlong)_Memory,1000 - lVar2,0xffffffffffffffff,param_4,0,
               &stack0x00000028);
  }
  FUN_180059060(puVar1,_Memory);
  free(_Memory);
  return;
}

