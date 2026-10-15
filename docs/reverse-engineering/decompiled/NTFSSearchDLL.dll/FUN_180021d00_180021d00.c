// Function: FUN_180021d00
// Address: 180021d00
// Size: 245 bytes


undefined8 *
FUN_180021d00(longlong param_1,longlong param_2,uint param_3,int param_4,longlong param_5,
             uint param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = param_1 - (ulonglong)param_3 * param_2;
  if (param_1 + -8 < lVar4) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_18002be40(0x1a8);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_180039390(puVar1,param_6);
    }
    puVar1[2] = lVar4;
    puVar1[3] = lVar4;
    *(uint *)((longlong)puVar1 + 0xc) = param_3;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    lVar2 = (param_5 - lVar4) / (longlong)(ulonglong)param_3;
    puVar1[0x15] = lVar2;
    puVar1[0xc] = (ulonglong)param_3 * lVar2;
    *(int *)((longlong)puVar1 + 0x9c) = param_4;
    if ((param_4 - 8U & 0xfffffff7) == 0) {
      *(bool *)((longlong)puVar1 + 0xf6) = param_4 == 8;
      uVar3 = (longlong)(lVar4 - 0x8000U) >> 0x3f;
      if ((longlong)((lVar4 - 0x8000U ^ uVar3) - uVar3) < 0x3f) {
        lVar4 = 0x8000;
      }
      puVar1[2] = lVar4;
    }
  }
  return puVar1;
}

