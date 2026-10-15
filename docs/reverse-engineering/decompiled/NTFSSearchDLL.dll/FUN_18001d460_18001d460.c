// Function: FUN_18001d460
// Address: 18001d460
// Size: 391 bytes


undefined1 FUN_18001d460(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  char cVar8;
  undefined4 local_res8 [2];
  ulonglong local_res10;
  
  puVar1 = *(uint **)(param_1 + 0x38);
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  if (*(char *)((longlong)puVar1 + 9) == '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    return 0;
  }
  lVar2 = *(longlong *)(puVar1 + 4);
  local_res10 = 0;
  local_res8[0] = 0;
  if (lVar2 == 0) {
LAB_18001d4d4:
    puVar7 = (ulonglong *)(ulonglong)puVar1[6];
    puVar5 = (ulonglong *)0x4000;
LAB_18001d58f:
    cVar8 = '\0';
    puVar6 = puVar7;
LAB_18001d592:
    FUN_180029dd0(puVar1,(longlong)puVar5,puVar6,cVar8,&local_res10,(ulonglong *)local_res8);
  }
  else {
    puVar6 = (ulonglong *)(ulonglong)puVar1[6];
    uVar4 = puVar1[6] - 0x1000;
    if ((puVar6 < (ulonglong *)(ulonglong)uVar4) || (*(int *)(lVar2 + (ulonglong)uVar4) == -1))
    goto LAB_18001d4d4;
    puVar5 = (ulonglong *)0xffffffffffffffff;
    if (*(int *)(lVar2 + 0x2000) == 0x44524352) {
      puVar5 = (ulonglong *)(ulonglong)*(uint *)(lVar2 + 0x2008);
    }
    uVar4 = (uint)((longlong)puVar5 >> 0x3f) & 0xfff;
    if (((int)puVar5 + uVar4 & 0xfff) != uVar4) {
      cVar8 = '\x01';
      puVar5 = (ulonglong *)0x2000;
      goto LAB_18001d592;
    }
    puVar7 = puVar5 + 0x200;
    if ((longlong)puVar6 <= (longlong)puVar7) {
      uVar3 = 0;
      goto LAB_18001d5c9;
    }
    FUN_180029dd0(puVar1,(longlong)puVar5,puVar6,'\x01',&local_res10,(ulonglong *)local_res8);
    if ((*(char *)((longlong)puVar1 + 9) != '\0') &&
       (FUN_180029dd0(puVar1,0x4000,puVar5,'\0',&local_res10,(ulonglong *)local_res8),
       *(char *)((longlong)puVar1 + 9) != '\0')) goto LAB_18001d58f;
  }
  if (*(void **)(puVar1 + 4) != (void *)0x0) {
    free(*(void **)(puVar1 + 4));
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  puVar1[6] = 0;
  uVar3 = 1;
LAB_18001d5c9:
  *(undefined1 *)(param_1 + 0x28) = uVar3;
  return uVar3;
}

