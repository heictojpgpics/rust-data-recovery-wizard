// Function: FUN_180019570
// Address: 180019570
// Size: 348 bytes


undefined8 FUN_180019570(longlong param_1,void *param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  size_t sVar4;
  undefined8 uVar5;
  int iVar6;
  size_t _Size;
  
  if ((param_2 == (void *)0x0) || (param_3 == 0)) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x60);
    sVar4 = 0;
    if (lVar3 != 0) {
      uVar2 = **(uint **)(param_1 + 0x58);
      _Size = (ulonglong)uVar2 - lVar3;
      if (((0 < (longlong)_Size) && (0 < lVar3)) && (sVar4 = 0, uVar2 < 0x100000)) {
        memcpy((void *)(lVar3 + (longlong)*(uint **)(param_1 + 0x58)),param_2,_Size);
        FUN_1800196d0(param_1,*(longlong *)(param_1 + 0x58));
        *(undefined8 *)(param_1 + 0x60) = 0;
        sVar4 = _Size;
      }
    }
    iVar6 = 0;
    while ((longlong)sVar4 < param_3) {
      puVar1 = (uint *)(sVar4 + (longlong)param_2);
      if (0x200 < *puVar1) break;
      if (*puVar1 == 0) {
        sVar4 = sVar4 + 4;
        iVar6 = (int)sVar4;
      }
      else {
        FUN_1800196d0(param_1,(longlong)puVar1);
        sVar4 = *puVar1 + sVar4;
        if ((longlong)sVar4 <= param_3) {
          iVar6 = (int)sVar4;
        }
      }
    }
    memset(*(void **)(param_1 + 0x58),0,0x100000);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (iVar6 < param_3) {
      sVar4 = (size_t)((int)param_3 - iVar6);
      *(size_t *)(param_1 + 0x60) = sVar4;
      if ((longlong)sVar4 < 0x100000) {
        memcpy(*(void **)(param_1 + 0x58),(void *)((longlong)iVar6 + (longlong)param_2),sVar4);
      }
      else {
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}

