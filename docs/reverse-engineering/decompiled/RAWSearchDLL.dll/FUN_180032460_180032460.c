// Function: FUN_180032460
// Address: 180032460
// Size: 444 bytes


int FUN_180032460(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  ushort *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  byte local_40;
  undefined1 local_30 [40];
  
  iVar4 = DAT_18008f048;
  iVar10 = 2;
  if (param_3 < 1) {
    return 1;
  }
  iVar8 = *(int *)(param_1 + 0x110);
  iVar3 = 0;
  while (iVar8 < param_3) {
    iVar11 = iVar3 + 1;
    if (0x400 < iVar3) {
LAB_18003256c:
      if (iVar8 < param_3) goto LAB_18003257d;
      break;
    }
    uVar1 = *(undefined8 *)(iVar8 + param_2);
    if (iVar4 == 0xbc) {
      local_40 = (byte)uVar1;
      uVar5 = (uint)local_40;
    }
    else {
      uVar5 = (uint)(char)((ulonglong)uVar1 >> 0x20);
    }
    if (uVar5 != 0x47) {
      *(longlong *)(param_1 + 0x10) =
           *(longlong *)(param_1 + 0x10) + (longlong)(*(int *)(param_1 + 0x114) * iVar4);
      iVar10 = 1;
      goto LAB_18003256c;
    }
    if (((undefined8 *)(iVar8 + param_2))[1] == -1) {
      *(undefined1 *)(param_1 + 0x11c) = 1;
    }
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
    iVar8 = iVar8 + iVar4;
    iVar3 = iVar11;
    if (*(int *)(param_1 + 0x114) == 0x20) {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (longlong)(iVar4 << 5);
      *(undefined4 *)(param_1 + 0x114) = 0;
    }
  }
  *(int *)(param_1 + 0x110) = iVar8 % param_3;
LAB_18003257d:
  puVar6 = FUN_180001350();
  uVar2 = *(longlong *)(puVar6 + 0x70) * 10;
  uVar9 = *(ulonglong *)(param_1 + 0x10);
  if (uVar2 < uVar9) {
    *(ulonglong *)(param_1 + 0x10) = uVar2;
    iVar10 = 1;
    uVar9 = uVar2;
  }
  else if (iVar10 != 1) goto LAB_1800325cf;
  DAT_18008f066 = 1;
  if (uVar9 < 0x5000) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    return 0;
  }
LAB_1800325cf:
  if ((uVar9 != 0) && (*(int *)(param_1 + 0x18) == 0x74)) {
    puVar6 = FUN_180001350();
    puVar7 = (ushort *)FUN_18000f4b0((longlong)local_30,L"M2TS");
    FUN_18000ed00((longlong)(puVar6 + 0x60),puVar7);
  }
  return iVar10;
}

