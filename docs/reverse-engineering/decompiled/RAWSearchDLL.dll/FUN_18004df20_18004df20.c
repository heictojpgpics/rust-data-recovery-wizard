// Function: FUN_18004df20
// Address: 18004df20
// Size: 799 bytes


void FUN_18004df20(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  size_t sVar12;
  size_t sVar13;
  undefined **ppuVar14;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  undefined4 local_78;
  undefined2 local_74;
  int local_70;
  undefined2 local_6c;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  char local_58 [8];
  char acStack_50 [8];
  char local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_18008f028 ^ (ulonglong)auStack_b8;
  local_70 = DAT_18006c148;
  uVar10 = 0;
  local_6c = DAT_18006c14c;
  local_78 = DAT_18006de28;
  local_74 = DAT_18006de2c;
  local_60 = DAT_18006c138;
  local_5e = DAT_18006c13a;
  local_48._0_2_ = s_Adobe_Illustrator_18006c158._16_2_;
  local_90 = *(undefined8 *)(param_2 + 8);
  local_88 = 0xffffffffffffffff;
  local_68 = DAT_18006c130;
  local_58 = (char  [8])s_Adobe_Illustrator_18006c158._0_8_;
  acStack_50 = (char  [8])s_Adobe_Illustrator_18006c158._8_8_;
  local_98 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_80 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_80 = *(int *)((longlong)param_3 + 0xc);
    if (local_80 < 1) {
      local_80 = 0x200;
    }
  }
  else {
    local_80 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_80 = local_80 << 7;
  puVar6 = FUN_180001350();
  uVar1 = *(ulonglong *)(puVar6 + 0x70);
  do {
    pcVar7 = FUN_180042930((longlong *)&local_98,uVar10);
    if (pcVar7 == (char *)0x0) goto LAB_18004e1e0;
    sVar13 = 0xffffffffffffffff;
    do {
      sVar12 = sVar13 + 1;
      lVar2 = sVar13 + 1;
      sVar13 = sVar12;
    } while (*(char *)((longlong)&local_68 + lVar2) != '\0');
    iVar3 = strncmp(pcVar7,(char *)&local_68,sVar12);
    if ((iVar3 == 0) && (pcVar7 = strstr(pcVar7,local_58), pcVar7 != (char *)0x0)) {
      *(undefined4 *)(param_2 + 0x18) = 5;
      break;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x400);
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    uVar11 = (ulonglong)*(uint *)((longlong)param_3 + 0xc);
    if ((int)*(uint *)((longlong)param_3 + 0xc) < 1) {
      uVar11 = 0x200;
    }
  }
  else {
    uVar5 = (*(code *)((undefined **)*param_3)[5])(param_3);
    uVar11 = (ulonglong)uVar5;
  }
  if (uVar10 % uVar11 != 0) {
    uVar10 = 0x800;
  }
  do {
    if (uVar1 >> 1 < uVar10) {
LAB_18004e161:
      if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
        iVar3 = *(int *)((longlong)param_3 + 0xc);
        ppuVar14 = CRawFileCellTestStorageDevice::vftable;
        if (iVar3 < 1) {
          iVar3 = 0x200;
        }
      }
      else {
        iVar3 = (*(code *)((undefined **)*param_3)[5])(param_3);
        ppuVar14 = (undefined **)*param_3;
      }
      if (ppuVar14 == CRawFileCellTestStorageDevice::vftable) {
        iVar4 = *(int *)((longlong)param_3 + 0xc);
        if (iVar4 < 1) {
          iVar4 = 0x200;
        }
      }
      else {
        iVar4 = (*(code *)ppuVar14[5])(param_3);
      }
      if (uVar10 % (ulonglong)(longlong)iVar4 != 0) {
        if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
          iVar4 = *(int *)((longlong)param_3 + 0xc);
          if (iVar4 < 1) {
            iVar4 = 0x200;
          }
        }
        else {
          iVar4 = (*(code *)((undefined **)*param_3)[5])(param_3);
        }
        uVar10 = (uVar10 / (ulonglong)(longlong)iVar3 + 1) * (longlong)iVar4;
      }
      *(ulonglong *)(param_2 + 0x10) = uVar10;
LAB_18004e1e0:
      __security_check_cookie(local_40 ^ (ulonglong)auStack_b8);
      return;
    }
    piVar8 = (int *)FUN_180042930((longlong *)&local_98,uVar10);
    if (piVar8 == (int *)0x0) goto LAB_18004e1e0;
    sVar13 = 0xffffffffffffffff;
    do {
      sVar12 = sVar13 + 1;
      lVar2 = sVar13 + 1;
      sVar13 = sVar12;
    } while (*(char *)((longlong)&local_78 + lVar2) != '\0');
    iVar3 = strncmp((char *)piVar8,(char *)&local_78,sVar12);
    if ((iVar3 == 0) && (uVar10 != 0)) goto LAB_18004e161;
    iVar3 = (int)uVar11;
    if (*(int *)((ulonglong)(iVar3 - 4) + (longlong)piVar8) == 0) {
      piVar9 = FUN_18004dd50(piVar8,iVar3,&local_70);
      if (piVar9 != (int *)0x0) {
        uVar10 = (longlong)piVar9 + ((uVar10 + 7) - (longlong)piVar8);
        goto LAB_18004e161;
      }
      piVar8 = (int *)FUN_180042930((longlong *)&local_98,uVar10 - 5);
      piVar8 = FUN_18004dd50(piVar8,10,&local_70);
      if (piVar8 != (int *)0x0) {
        uVar10 = uVar10 + (iVar3 + 5);
        goto LAB_18004e161;
      }
    }
    uVar10 = uVar10 + uVar11;
  } while( true );
}

